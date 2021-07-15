/*

#include "parse.h"
#include "node_xml.h"
#include "newnode.h"
#include "queue"
#include<iostream>
#include"string"
//#include <bits/stdc++.h>
using namespace std;
 //newnode newnod1;
parse::parse()
{

}

node_xml* takeInputLevelWise(string arr[])
{
    int idx = 1;

    // Input root
    string rootData = arr[0];

    // Initialize tree with a root node
  node_xml* root
        = new node_xml(rootData);

    // Intialise queue for appending
    // node as a child of parent in
    // N-ary tree
    queue<node_xml*> pendingNodes;

    // Push the root node in queue
    pendingNodes.push(root);

    // While queue is not empty append
    // child to the root
    while (pendingNodes.size() != 0) {

        // Take the first node
        node_xml* front
            = pendingNodes.front();
        pendingNodes.pop();

        // Input number of child
        int numChild = arr[idx];
        idx++;

        for (int i = 0; i < numChild; i++) {

            int childData = arr[idx];
            idx++;

            // Make child Node
            newnode<int>* child
                = new newnode<int>(childData);

            // Append child node to
            // it's parent
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

// Function to print each node data
// in level order
void printLevelATNewLine(newnode<int>* root)
{
    queue<newnode<int>*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {

        newnode<int>* first = q.front();
        q.pop();

        if (first == NULL) {
            if (q.empty()) {
                break;
            }
            cout << endl;
            q.push(NULL);
            continue;
        }

        cout << first->data << " ";

        for (int i = 0;
             i < first->children.size(); i++) {
            q.push(first->children[i]);
        }
    }
}

// Helper function to replace the
// node data with their level value
void helper(newnode<int>* root,
            int depth)
{

    // Replace the node data with
    // it's depth
    root->data = depth;
    for (int i = 0;
         i < root->children.size(); i++) {

        helper(root->children[i], depth + 1);
    }
}

// Function to replace with depth
void replaceWithDepthValue(newnode<int>* root)
{
    helper(root, 0);
}

string sub_string (string y){
    string temp[2000];
    int i=0;
    while(y.length()>3)
    {


       temp[i]=y.substr(y.find('<'),y.find('\n')-y.find('<'));
       if(y.find('\n')<2000)
       y = y.substr(y.find('\n')+1);
       else
             y = y.substr(y.find('>')+1);

       i++;
    }
    return *temp;

}
*/
