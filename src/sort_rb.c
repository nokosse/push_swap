/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_rb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:17:06 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/19 12:27:18 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// rb (rotate b) : Décale d’une position vers le haut tous les élements de la pile b.
// Le premier élément devient le dernier.
//
//   | 1          | 2
//   | 2   rb     | 3 
//   | 3   -->    | 4
//   | 4          | 1
//---|---      ---|---
// A | B        A | B