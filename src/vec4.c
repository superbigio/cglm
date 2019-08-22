/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#include "../include/cglm/cglm.h"
#include "../include/cglm/call.h"

CGLM_EXPORT
void
glmc_vec4(vec3 v3, float last, vec4 dest) {
  glm_vec4(v3, last, dest);
}

CGLM_EXPORT
void
glmc_vec4_zero(vec4 v) {
  glm_vec4_zero(v);
}

CGLM_EXPORT
void
glmc_vec4_one(vec4 v) {
  glm_vec4_one(v);
}

CGLM_EXPORT
void
glmc_vec4_copy3(vec4 v, vec3 dest) {
  glm_vec4_copy3(v, dest);
}

CGLM_EXPORT
void
glmc_vec4_copy(vec4 v, vec4 dest) {
  glm_vec4_copy(v, dest);
}

CGLM_EXPORT
void
glmc_vec4_ucopy(vec4 v, vec4 dest) {
  glm_vec4_ucopy(v, dest);
}

CGLM_EXPORT
float
glmc_vec4_dot(vec4 a, vec4 b) {
  return glm_vec4_dot(a, b);
}

CGLM_EXPORT
float
glmc_vec4_norm(vec4 v) {
  return glm_vec4_norm(v);
}

CGLM_EXPORT
void
glmc_vec4_normalize_to(vec4 v, vec4 dest) {
  glm_vec4_normalize_to(v, dest);
}

CGLM_EXPORT
void
glmc_vec4_normalize(vec4 v) {
  glm_vec4_normalize(v);
}

CGLM_EXPORT
float
glmc_vec4_norm2(vec4 v) {
  return glm_vec4_norm2(v);
}

CGLM_EXPORT
void
glmc_vec4_add(vec4 a, vec4 b, vec4 dest) {
  glm_vec4_add(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec4_adds(vec4 v, float s, vec4 dest) {
  glm_vec4_adds(v, s, dest);
}

CGLM_EXPORT
void
glmc_vec4_sub(vec4 a, vec4 b, vec4 dest) {
  glm_vec4_sub(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec4_subs(vec4 v, float s, vec4 dest) {
  glm_vec4_subs(v, s, dest);
}

CGLM_EXPORT
void
glmc_vec4_mul(vec4 a, vec4 b, vec4 d) {
  glm_vec4_mul(a, b, d);
}

CGLM_EXPORT
void
glmc_vec4_scale(vec4 v, float s, vec4 dest) {
  glm_vec4_scale(v, s, dest);
}

CGLM_EXPORT
void
glmc_vec4_scale_as(vec4 v, float s, vec4 dest) {
  glm_vec4_scale_as(v, s, dest);
}

CGLM_EXPORT
void
glmc_vec4_div(vec4 a, vec4 b, vec4 dest) {
  glm_vec4_div(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec4_divs(vec4 v, float s, vec4 dest) {
  glm_vec4_divs(v, s, dest);
}

CGLM_EXPORT
void
glmc_vec4_addadd(vec4 a, vec4 b, vec4 dest) {
  glm_vec4_addadd(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec4_subadd(vec4 a, vec4 b, vec4 dest) {
  glm_vec4_subadd(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec4_muladd(vec4 a, vec4 b, vec4 dest) {
  glm_vec4_muladd(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec4_muladds(vec4 a, float s, vec4 dest) {
  glm_vec4_muladds(a, s, dest);
}

CGLM_EXPORT
void
glmc_vec4_maxadd(vec4 a, vec4 b, vec4 dest) {
  glm_vec4_maxadd(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec4_minadd(vec4 a, vec4 b, vec4 dest) {
  glm_vec4_minadd(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec4_negate(vec4 v) {
  glm_vec4_negate(v);
}

CGLM_EXPORT
void
glmc_vec4_negate_to(vec4 v, vec4 dest) {
  glm_vec4_negate_to(v, dest);
}

CGLM_EXPORT
float
glmc_vec4_distance_squared(vec4 a, vec4 b) {
  return glm_vec4_distance_squared(a, b);
}

CGLM_EXPORT
float
glmc_vec4_distance(vec4 a, vec4 b) {
    return glm_vec4_distance(a, b);
}

CGLM_EXPORT
void
glmc_vec4_maxv(vec4 a, vec4 b, vec4 dest) {
  glm_vec4_minv(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec4_minv(vec4 a, vec4 b, vec4 dest) {
  glm_vec4_maxv(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec4_clamp(vec4 v, float minVal, float maxVal) {
  glm_vec4_clamp(v, minVal, maxVal);
}

CGLM_EXPORT
void
glmc_vec4_lerp(vec4 from, vec4 to, float t, vec4 dest) {
  glm_vec4_lerp(from, to, t, dest);
}

CGLM_EXPORT
void
glmc_vec4_cubic(float s, vec4 dest) {
  glm_vec4_cubic(s, dest);
}

/* ext */

CGLM_EXPORT
void
glmc_vec4_mulv(vec4 a, vec4 b, vec4 d) {
  glm_vec4_mulv(a, b, d);
}

CGLM_EXPORT
void
glmc_vec4_broadcast(float val, vec4 d) {
  glm_vec4_broadcast(val, d);
}

CGLM_EXPORT
bool
glmc_vec4_eq(vec4 v, float val) {
  return glm_vec4_eq(v, val);
}

CGLM_EXPORT
bool
glmc_vec4_eq_eps(vec4 v, float val) {
  return glm_vec4_eq_eps(v, val);
}

CGLM_EXPORT
bool
glmc_vec4_eq_all(vec4 v) {
  return glm_vec4_eq_all(v);
}

CGLM_EXPORT
bool
glmc_vec4_eqv(vec4 a, vec4 b) {
  return glm_vec4_eqv(a, b);
}

CGLM_EXPORT
bool
glmc_vec4_eqv_eps(vec4 a, vec4 b) {
  return glm_vec4_eqv_eps(a, b);
}

CGLM_EXPORT
float
glmc_vec4_max(vec4 v) {
  return glm_vec4_max(v);
}

CGLM_EXPORT
float
glmc_vec4_min(vec4 v) {
  return glm_vec4_min(v);
}

CGLM_EXPORT
bool
glmc_vec4_isnan(vec4 v) {
  return glm_vec4_isnan(v);
}

CGLM_EXPORT
bool
glmc_vec4_isinf(vec4 v) {
  return glm_vec4_isinf(v);
}

CGLM_EXPORT
bool
glmc_vec4_isvalid(vec4 v) {
  return glm_vec4_isvalid(v);
}

CGLM_EXPORT
void
glmc_vec4_sign(vec4 v, vec4 dest) {
  glm_vec4_sign(v, dest);
}

CGLM_EXPORT
void
glmc_vec4_sqrt(vec4 v, vec4 dest) {
  glm_vec4_sqrt(v, dest);
}
