//
// Created by kornel on 11.06.17.
//

#ifndef JIMP_EXERCISES_TREEITERATORS_H
#define JIMP_EXERCISES_TREEITERATORS_H

#include "Tree.h"
#include <vector>

namespace tree{
    template <class T>
    class InOrderTreeIterator{
    public:
        Node<T>* root;
        InOrderTreeIterator(){}
        InOrderTreeIterator(Node<T>* Root){
            root=Root;
            while(root->left!=NULL)
            {
                root=root->left;
            }
        }
        void operator++(){
            if(root->right!=NULL)
            {
                root=root->right;
                while(root->left!=NULL)
                    root=root->left;
            } else if(root->up!=NULL&&root==root->up->left)
            {
                root=root->up;
            } else
            {
                while(root->up!=NULL&&root==root->up->right)
                {
                    root=root->up;
                }
                if(root->up!=NULL)
                {
                    root=root->up;
                }
            }
        }
        T operator*() const{
            return root->value;
        }

        bool operator!=(InOrderTreeIterator a) const{
            return root!=a.root;
        }

    };
    template <class T>
    class InOrderTreeView{
    public:
        vector <Node<T>*> tree;
        InOrderTreeView() {}
        InOrderTreeView(Tree<T>* Tree) {
            for(InOrderTreeIterator<T> i(&Tree->root);i.root!=&Tree->root;++i)
            {
                tree.emplace_back(i.root);
            }
        }
        InOrderTreeIterator<T> begin(){
            return tree[0];
        }
        InOrderTreeIterator<T> end(){
            return tree[tree.size()-1];
        }
    };
    template <class T>
    InOrderTreeView<T> InOrder(Tree<T>* Tree){
        InOrderTreeView<T> a;
        for(InOrderTreeIterator<T> i{&Tree->root};i.root!=&Tree->root;++i)
        {
            a.tree.emplace_back(i.root);
        }
        return a;
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////
    template <class T>
    class PostOrderTreeIterator{
    public:
        Node<T>* root;
        PostOrderTreeIterator(){}
        PostOrderTreeIterator(Node<T>* Root){
            root=Root;
            while(root->left!=NULL||root->right!=NULL)
            {
                if(root->left!=NULL)
                    root=root->left;
                else
                    root=root->right;

            }
        }
        void operator++(){
            if(root->up!=NULL&&root==root->up->left&&root->up->right==NULL)
            {
                root=root->up;
            }
            else if(root->up!=NULL&&root==root->up->left&&root->up->right!=NULL)
            {
                root=root->up->right;
                while(root->left!=NULL||root->right!=NULL)
                {
                    if(root->left!=NULL)
                        root=root->left;
                    else
                        root=root->right;

                }
            }
            else if(root->up!=NULL&&root==root->up->right)
            {
                root=root->up;
            }
        }
        T operator*() const{
            return root->value;
        }

        bool operator!=(PostOrderTreeIterator a) const{
            return root!=a.root;
        }

    };
    template <class T>
    class PostOrderTreeView{
    public:
        vector <Node<T>*> tree;
        PostOrderTreeView() {}
        PostOrderTreeView(Tree<T>* Tree) {
            for(PostOrderTreeIterator<T> i(&Tree->root);i.root!=&Tree->root;++i)
            {
                tree.emplace_back(i.root);
            }
        }
        PostOrderTreeIterator<T> begin(){
            return tree[0];
        }
        PostOrderTreeIterator<T> end(){
            return tree[tree.size()-1];
        }
    };
    template <class T>
    PostOrderTreeView<T> PostOrder(Tree<T>* Tree){
        PostOrderTreeView<T> a;
        for(PostOrderTreeIterator<T> i{&Tree->root};i.root!=&Tree->root;++i)
        {
            a.tree.emplace_back(i.root);
        }
        return a;
    }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
    template <class T>
    class PreOrderTreeIterator{
    public:
        Node<T>* root;
        PreOrderTreeIterator(){}
        PreOrderTreeIterator(Node<T>* Root){
            root=Root;
        }
        void operator++(){
            if(root->left!=NULL)
            {
                root=root->left;
            }
            else if(root->right!=NULL)
            {
                root=root->right;
            }
            else if(root->up!=NULL)
            {
                Node<T>* tmp=root;
                while(root->up!=NULL&&((root->up->left==root&&tmp==root->right)||(root->up->right==root&&tmp!=root->left)))
                {
                    tmp=root;
                    root=root->up;
                }
                while(root->up!=NULL&&root->right==NULL)
                {
                    root=root->up;
                }
                if(root->right!=NULL)
                    root=root->right;
            }
        }
        T operator*() const{
            if(root!=NULL)
                return root->value;
            else
                return T{0};
        }

        bool operator!=(PreOrderTreeIterator a) const{
            return root!=a.root;
        }

    };
    template <class T>
    class PreOrderTreeView{
    public:
        vector <Node<T>*> tree;
        PreOrderTreeView() {}
        PreOrderTreeView(Tree<T>* Tree) {
            Node<T>* a=&Tree->root;
            while(a->right!=NULL)
            {
                a=a->right;
            }
            for(PreOrderTreeIterator<T> i(&Tree->root);i.root!=a;++i)
            {
                tree.emplace_back(i.root);
            }
        }
        PreOrderTreeIterator<T> begin(){
            if(tree.size()>0)
            return tree[0];
        }
        PreOrderTreeIterator<T> end(){
            return tree[tree.size()-1];
        }
    };
    template <class T>
    PreOrderTreeView<T> PreOrder(Tree<T>* Tree){
        PreOrderTreeView<T> a;
        Node<T>* b=&Tree->root;
        while(b->right!=NULL)
        {
            b=b->right;
        }
        for(PreOrderTreeIterator<T> i{&Tree->root};i.root!=b;++i)
        {
            a.tree.emplace_back(i.root);
        }
        return a;
    }
}

#endif //JIMP_EXERCISES_TREEITERATORS_H
