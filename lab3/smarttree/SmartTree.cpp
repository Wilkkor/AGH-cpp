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

    }
}