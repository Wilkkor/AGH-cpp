//
// Created by kornel on 11.06.17.
//

#ifndef JIMP_EXERCISES_TREE_H
#define JIMP_EXERCISES_TREE_H

#include <iostream>
using namespace std;

namespace  tree{
    template  <class T>
    class Node{
    public:
        T value;
        Node *up,*left,*right;
        Node(){
            up=NULL;
            left=NULL;
            right=NULL;
        }
        Node(T val):value{val}{
            up=NULL;
            left=NULL;
            right=NULL;
        }
    };
    template <class T>
    class Tree {
    public:
        int size,depth;
        Node<T> root;
        Tree():root{},size{0},depth{0}{}
        Tree(T val):root{val},size{1},depth{1}{}
        void Insert(T val){
            Node<T>* tmp;
            if(size==0)
            {
                size++;
                depth++;
                root=Node<T>{val};
            }
            else
            {
                int tmpdepth=1;
                tmp=&root;
                size++;
                Node<T>* tmpval=new Node<T>{val};
                while(tmp!=NULL)
                {
                    if(val>tmp->value)
                    {
                        if(tmp->right==NULL)
                        {
                            tmp->right=tmpval;
                            tmp->right->up=tmp;
                            tmpdepth++;
                            tmp=NULL;
                        }
                        else
                        {
                            tmp=tmp->right;
                            tmpdepth++;
                        }
                    }
                    else
                    {
                        if(tmp->left==NULL)
                        {
                            tmp->left=tmpval;
                            tmp->left->up=tmp;
                            tmpdepth++;
                            tmp=NULL;
                        }
                        else
                        {
                            tmp=tmp->left;
                            tmpdepth++;
                        }
                    }
                }
                if(tmpdepth>depth)
                {
                    depth=tmpdepth;
                }
            }
        }
        T Value(){
            return root.value;
        }
        int Size(){
            return size;
        }
        int Depth(){
            return depth;
        }
        Node<T>* Root(){
            return &root;
        }
        ~Tree(){
            Node<T> *a,*b=NULL;
            a=&root;
            while(1)
            {
                if(a->right==NULL&&a->left==NULL&&b!=NULL)
                {
                    if(a->up->right==a)
                    {
                        a->up->right=NULL;
                    }
                    else
                    {
                        a->up->left=NULL;
                    }
                    delete a;
                    a=b;
                    b=a->up;
                }
                else if(a->right==NULL&&a->left==NULL&&b==NULL)
                {
                    break;
                }
                else
                {
                    if(a->left!=NULL)
                    {
                        b=a;
                        a=a->left;
                    }
                    else if(a->right != NULL)
                    {
                        b=a;
                        a=a->right;
                    }
                }

            }
        }
    };

}



#endif //JIMP_EXERCISES_TREE_H
