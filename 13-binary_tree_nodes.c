#include "binary_trees.h"
#include <stddef.h>

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t left, right;

    if (!tree)
        return (0);

    if (!tree->left && !tree->right)
        return (0);

    left = binary_tree_nodes(tree->left);
    right = binary_tree_nodes(tree->right);

    return (1 + left + right);
}

