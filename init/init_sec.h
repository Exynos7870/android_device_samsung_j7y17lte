#ifndef INIT_SEC_H
#define INIT_SEC_H

#include <string.h>

#define TOTAL_VARIANTS 4 //Total number of variants

typedef struct {
    std::string model;
    std::string codename;
} variant;

static const variant J730F_model = {
    .model = "SM-J730F",
    .codename = "j7y17ltexx"
};

static const variant J730G_model = {
    .model = "SM-J730G",
    .codename = "j7y17lte"
};

static const variant J730GM_model = {
    .model = "SM-J730GM",
    .codename = "j7y17ltextc"
};

static const variant J730FM_model = {
    .model = "SM-J730FM",
    .codename = "j7y17lte"
};

static const variant *all_variants[TOTAL_VARIANTS] = {
    &J730F_model,
    &J730G_model,
    &J730GM_model,
    &J730FM_model,
};

#endif // INIT_SEC_H