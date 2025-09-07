#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t left, right;

    if (!tree)
        return (0);

    if (!tree->left && !tree->right)
        return (1);

    left = binary_tree_height(tree->left);
    right = binary_tree_height(tree->right);

    if (left != right)
        return (0);

    return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
}

