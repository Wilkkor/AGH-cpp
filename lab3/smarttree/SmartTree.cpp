//
// Created by kornel on 15.03.17.
//

#include "SmartTree.h"

namespace datastructures{
    std::unique_ptr <SmartTree> CreateLeaf(int value)
    {
        unique_ptr<SmartTree> leaf = make_unique<SmartTree>();
        leaf->value=value;
        leaf->left=NULL;
        leaf->right=NULL;
        return leaf;
    }
    std::unique_ptr <SmartTree> InsertLeftChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> left_subtree)
    {
        (tree)->left=move(left_subtree);
        return tree;
    }
    std::unique_ptr <SmartTree> InsertRightChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> right_subtree)
    {
        (tree)->right=move(right_subtree);
        return tree;
    }
    void PrintTreeInOrder(const std::unique_ptr<SmartTree> &unique_ptr, std::ostream *out)
    {
        if(unique_ptr->left!=NULL)
        {
            PrintTreeInOrder(unique_ptr->left,out);
        }
        *out<<unique_ptr->value<<", ";
        if(unique_ptr->right!=NULL)
        {
            PrintTreeInOrder(unique_ptr->right,out);
        }
    }
    std::string DumpTree(const std::unique_ptr<SmartTree> &tree)
    {
        string treee;
        treee = "";
        if(tree==NULL)
        {
            treee="[none]";
            return treee;
        }
        else
        {
            int a=tree->value;
            treee="["+to_string(a)/*to_string(tree->value)*/+" ";
            if(tree->left!=NULL)
            {
                treee=treee+DumpTree(move(tree->left))+" ";
            } else
            {
                treee=treee+"[none] ";
            }
            if(tree->right!=NULL)
            {
                treee=treee+DumpTree(move(tree->right))+"]";
            } else
            {
                treee=treee+"[none]]";
            }
            return treee;
        }
    }
    std::unique_ptr <SmartTree> RestoreTree(const std::string &tree)
    {
        unique_ptr <SmartTree> root;
        int i=1,j,k,nawiasy;
        string tonumber="";
        root=CreateLeaf(0);
        while(tree[i]!=' '&&tree[i]!=']')
        {
            tonumber+=tree[i];
            i++;
        }
        if(tonumber=="none")
            return NULL;
        if(tonumber!="none"&&tonumber[0]=='-')
        {
            k=1;
            while (k<tonumber.size())
            {
                root->value=10*root->value+tonumber[k]-'0';
                k++;
            }
            root->value*=-1;
        }
        if(tonumber!="none"&&tonumber[0]!='-')
        {
            k=0;
            while (k<tonumber.size())
            {
                root->value=10*root->value+tonumber[k]-'0';
                k++;
            }
        }
        i+=1;
        j=i;
        nawiasy=1;
        while(nawiasy>0)
        {
            i++;
            if(tree[i]=='[')
                nawiasy++;
            if(tree[i]==']')
                nawiasy--;
        }
        root->left=RestoreTree(tree.substr(j,i-1));
        j=i+2;
        i+=2;
        nawiasy=1;
        while(nawiasy>0)
        {
            i++;
            if(tree[i]=='[')
                nawiasy++;
            if(tree[i]==']')
                nawiasy--;
        }
        root->right=RestoreTree(tree.substr(j,i-1));
        return root;
    }
}