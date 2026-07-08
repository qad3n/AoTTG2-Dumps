// Type: Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchRectTransformSpriteCover.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$Awake
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__Awake (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x3b1cd90

void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__Awake
               (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *__this,
               MethodInfo *method)

{
  UnityEngine_RectTransform_c *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  
  if (DAT_05701560 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    DAT_05701560 = '\x01';
  }
  pUVar2 = (UnityEngine_UI_Image_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_Image_GetComponent_Image);
  (__this->fields)._image = pUVar2;
  il2cpp_runtime_glue(&(__this->fields)._image);
  pUVar3 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar1 = TypeInfo_RectTransform;
  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar4 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar3->klass == TypeInfo_RectTransform) {
      pUVar4 = pUVar3;
    }
    (__this->fields)._rect = pUVar4;
    pUVar4 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar3->klass == pUVar1) {
      pUVar4 = pUVar3;
    }
    il2cpp_runtime_glue(&(__this->fields)._rect,pUVar4);
    return;
  }
  (__this->fields)._rect = (UnityEngine_RectTransform_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._rect,0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__OnEnable (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x3b1ce40

bool_conflict
Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__OnEnable
          (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o **ppUVar1;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_Vector2_Fields UVar3;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Object_o *y;
  UnityEngine_Sprite_o *__this_00;
  bool_conflict bVar5;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_RectTransform_o *pUVar9;
  uint uVar10;
  uint uVar11;
  UnityEngine_Vector2_o value;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Rect_o UVar16;
  
  if (DAT_05701561 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    DAT_05701561 = '\x01';
  }
  pUVar6 = (__this->fields)._image;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._image;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar6 = (UnityEngine_UI_Image_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_Image_GetComponent_Image);
    (__this->fields)._image = pUVar6;
    il2cpp_runtime_glue(ppUVar1);
  }
  pUVar7 = (__this->fields)._rect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar2 = &(__this->fields)._rect;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar7 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) {
      *ppUVar2 = (UnityEngine_RectTransform_o *)0x0;
    }
    else {
      pUVar9 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar7->klass == TypeInfo_RectTransform) {
        pUVar9 = pUVar7;
      }
      *ppUVar2 = pUVar9;
    }
    il2cpp_runtime_glue(ppUVar2);
  }
  pUVar6 = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1d2da;
    pUVar4 = *(UnityEngine_Object_o **)&((*ppUVar1)->fields).m_ShouldRecalculate;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      pUVar7 = *ppUVar2;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        pUVar8 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          pUVar8 = UnityEngine_Transform__get_parent(pUVar8,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar5 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            return 0;
          }
          pUVar8 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            pUVar9 = (UnityEngine_RectTransform_o *)
                     UnityEngine_Transform__get_parent(pUVar8,(MethodInfo *)0x0);
            pUVar7 = (UnityEngine_RectTransform_o *)0x0;
            if ((pUVar9 != (UnityEngine_RectTransform_o *)0x0) &&
               (pUVar7 = (UnityEngine_RectTransform_o *)0x0, pUVar9->klass == TypeInfo_RectTransform)) {
              pUVar7 = pUVar9;
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar5 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if ((char)bVar5 != '\0') {
              return 0;
            }
            if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
              UVar16 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
              if (UVar16.fields.m_Width <= 0.0) {
                return 0;
              }
              UVar16 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
              if (UVar16.fields.m_Height <= 0.0) {
                return 0;
              }
              UVar16 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
              fVar12 = UVar16.fields.m_Width;
              fVar13 = UVar16.fields.m_Height;
              UVar3 = (__this->fields)._lastParent.fields;
              fVar14 = fVar12 - UVar3.x;
              fVar15 = fVar13 - UVar3.y;
              if (fVar15 * fVar15 + fVar14 * fVar14 < 9.9999994e-11) {
                if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1d2da;
                pUVar4 = *(UnityEngine_Object_o **)&((*ppUVar1)->fields).m_ShouldRecalculate;
                y = (UnityEngine_Object_o *)(__this->fields)._lastSprite;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar5 = UnityEngine_Object__op_Equality(pUVar4,y,(MethodInfo *)0x0);
                if ((char)bVar5 != '\0') {
                  return 0;
                }
              }
              (__this->fields)._lastParent.fields = UVar16.fields._8_8_;
              pUVar6 = (__this->fields)._image;
              if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                (__this->fields)._lastSprite =
                     *(UnityEngine_Sprite_o **)&(pUVar6->fields).m_ShouldRecalculate;
                il2cpp_runtime_glue(&(__this->fields)._lastSprite);
                pUVar6 = (__this->fields)._image;
                if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                  UnityEngine_UI_Image__set_preserveAspect(pUVar6,1,(MethodInfo *)0x0);
                  if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_anchorMin
                              (*ppUVar2,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0)
                    ;
                    if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_anchorMax
                                (*ppUVar2,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                 (MethodInfo *)0x0);
                      if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                        UnityEngine_RectTransform__set_pivot
                                  (*ppUVar2,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                   (MethodInfo *)0x0);
                        pUVar7 = *ppUVar2;
                        if (DAT_056fe093 == '\0') {
                          il2cpp_init_method_metadata(&TypeInfo_Vector2);
                          DAT_056fe093 = '\x01';
                        }
                        if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                          UnityEngine_RectTransform__set_anchoredPosition
                                    (pUVar7,(UnityEngine_Vector2_o)
                                            **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                     (MethodInfo *)0x0);
                          if ((*ppUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                             (__this_00 = *(UnityEngine_Sprite_o **)
                                           &((*ppUVar1)->fields).m_ShouldRecalculate,
                             __this_00 != (UnityEngine_Sprite_o *)0x0)) {
                            pUVar7 = *ppUVar2;
                            UVar16 = UnityEngine_Sprite__get_rect(__this_00,(MethodInfo *)0x0);
                            if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                              uVar10 = -(uint)(0.0 < UVar16.fields.m_Height);
                              uVar11 = -(uint)(0.0 < UVar16.fields.m_Width);
                              fVar15 = (float)(~uVar11 & 0x3f800000 |
                                              (~uVar10 & 0x3f800000 |
                                              (uint)(UVar16.fields.m_Width / UVar16.fields.m_Height)
                                              & uVar10) & uVar11);
                              fVar14 = fVar13 * fVar15;
                              fVar15 = fVar12 / fVar15;
                              if (fVar12 <= fVar14) {
                                fVar12 = fVar14;
                              }
                              if (fVar13 <= fVar15) {
                                fVar13 = fVar15;
                              }
                              value.fields.y = fVar13;
                              value.fields.x = fVar12;
                              UnityEngine_RectTransform__set_sizeDelta
                                        (pUVar7,value,(MethodInfo *)0x0);
                              return (bool_conflict)CONCAT71((int7)((ulong)pUVar7 >> 8),1);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_03b1d2da:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__LateUpdate (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x3b1d2e0

bool_conflict
Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__LateUpdate
          (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o **ppUVar1;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_Vector2_Fields UVar3;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Object_o *y;
  UnityEngine_Sprite_o *__this_00;
  bool_conflict bVar5;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_RectTransform_o *pUVar9;
  uint uVar10;
  uint uVar11;
  UnityEngine_Vector2_o value;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Rect_o UVar16;
  
  if (DAT_05701561 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    DAT_05701561 = '\x01';
  }
  pUVar6 = (__this->fields)._image;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._image;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar6 = (UnityEngine_UI_Image_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_Image_GetComponent_Image);
    (__this->fields)._image = pUVar6;
    il2cpp_runtime_glue(ppUVar1);
  }
  pUVar7 = (__this->fields)._rect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar2 = &(__this->fields)._rect;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar7 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) {
      *ppUVar2 = (UnityEngine_RectTransform_o *)0x0;
    }
    else {
      pUVar9 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar7->klass == TypeInfo_RectTransform) {
        pUVar9 = pUVar7;
      }
      *ppUVar2 = pUVar9;
    }
    il2cpp_runtime_glue(ppUVar2);
  }
  pUVar6 = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1d2da;
    pUVar4 = *(UnityEngine_Object_o **)&((*ppUVar1)->fields).m_ShouldRecalculate;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      pUVar7 = *ppUVar2;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        pUVar8 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          pUVar8 = UnityEngine_Transform__get_parent(pUVar8,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar5 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            return 0;
          }
          pUVar8 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            pUVar9 = (UnityEngine_RectTransform_o *)
                     UnityEngine_Transform__get_parent(pUVar8,(MethodInfo *)0x0);
            pUVar7 = (UnityEngine_RectTransform_o *)0x0;
            if ((pUVar9 != (UnityEngine_RectTransform_o *)0x0) &&
               (pUVar7 = (UnityEngine_RectTransform_o *)0x0, pUVar9->klass == TypeInfo_RectTransform)) {
              pUVar7 = pUVar9;
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar5 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if ((char)bVar5 != '\0') {
              return 0;
            }
            if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
              UVar16 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
              if (UVar16.fields.m_Width <= 0.0) {
                return 0;
              }
              UVar16 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
              if (UVar16.fields.m_Height <= 0.0) {
                return 0;
              }
              UVar16 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
              fVar12 = UVar16.fields.m_Width;
              fVar13 = UVar16.fields.m_Height;
              UVar3 = (__this->fields)._lastParent.fields;
              fVar14 = fVar12 - UVar3.x;
              fVar15 = fVar13 - UVar3.y;
              if (fVar15 * fVar15 + fVar14 * fVar14 < 9.9999994e-11) {
                if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1d2da;
                pUVar4 = *(UnityEngine_Object_o **)&((*ppUVar1)->fields).m_ShouldRecalculate;
                y = (UnityEngine_Object_o *)(__this->fields)._lastSprite;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar5 = UnityEngine_Object__op_Equality(pUVar4,y,(MethodInfo *)0x0);
                if ((char)bVar5 != '\0') {
                  return 0;
                }
              }
              (__this->fields)._lastParent.fields = UVar16.fields._8_8_;
              pUVar6 = (__this->fields)._image;
              if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                (__this->fields)._lastSprite =
                     *(UnityEngine_Sprite_o **)&(pUVar6->fields).m_ShouldRecalculate;
                il2cpp_runtime_glue(&(__this->fields)._lastSprite);
                pUVar6 = (__this->fields)._image;
                if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                  UnityEngine_UI_Image__set_preserveAspect(pUVar6,1,(MethodInfo *)0x0);
                  if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_anchorMin
                              (*ppUVar2,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0)
                    ;
                    if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_anchorMax
                                (*ppUVar2,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                 (MethodInfo *)0x0);
                      if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                        UnityEngine_RectTransform__set_pivot
                                  (*ppUVar2,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                   (MethodInfo *)0x0);
                        pUVar7 = *ppUVar2;
                        if (DAT_056fe093 == '\0') {
                          il2cpp_init_method_metadata(&TypeInfo_Vector2);
                          DAT_056fe093 = '\x01';
                        }
                        if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                          UnityEngine_RectTransform__set_anchoredPosition
                                    (pUVar7,(UnityEngine_Vector2_o)
                                            **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                     (MethodInfo *)0x0);
                          if ((*ppUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                             (__this_00 = *(UnityEngine_Sprite_o **)
                                           &((*ppUVar1)->fields).m_ShouldRecalculate,
                             __this_00 != (UnityEngine_Sprite_o *)0x0)) {
                            pUVar7 = *ppUVar2;
                            UVar16 = UnityEngine_Sprite__get_rect(__this_00,(MethodInfo *)0x0);
                            if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                              uVar10 = -(uint)(0.0 < UVar16.fields.m_Height);
                              uVar11 = -(uint)(0.0 < UVar16.fields.m_Width);
                              fVar15 = (float)(~uVar11 & 0x3f800000 |
                                              (~uVar10 & 0x3f800000 |
                                              (uint)(UVar16.fields.m_Width / UVar16.fields.m_Height)
                                              & uVar10) & uVar11);
                              fVar14 = fVar13 * fVar15;
                              fVar15 = fVar12 / fVar15;
                              if (fVar12 <= fVar14) {
                                fVar12 = fVar14;
                              }
                              if (fVar13 <= fVar15) {
                                fVar13 = fVar15;
                              }
                              value.fields.y = fVar13;
                              value.fields.x = fVar12;
                              UnityEngine_RectTransform__set_sizeDelta
                                        (pUVar7,value,(MethodInfo *)0x0);
                              return (bool_conflict)CONCAT71((int7)((ulong)pUVar7 >> 8),1);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_03b1d2da:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x3b1d2f0

bool_conflict
Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__OnRectTransformDimensionsChange
          (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o **ppUVar1;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_Vector2_Fields UVar3;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Object_o *y;
  UnityEngine_Sprite_o *__this_00;
  bool_conflict bVar5;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_RectTransform_o *pUVar9;
  uint uVar10;
  uint uVar11;
  UnityEngine_Vector2_o value;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Rect_o UVar16;
  
  if (DAT_05701561 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    DAT_05701561 = '\x01';
  }
  pUVar6 = (__this->fields)._image;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._image;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar6 = (UnityEngine_UI_Image_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_Image_GetComponent_Image);
    (__this->fields)._image = pUVar6;
    il2cpp_runtime_glue(ppUVar1);
  }
  pUVar7 = (__this->fields)._rect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar2 = &(__this->fields)._rect;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar7 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) {
      *ppUVar2 = (UnityEngine_RectTransform_o *)0x0;
    }
    else {
      pUVar9 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar7->klass == TypeInfo_RectTransform) {
        pUVar9 = pUVar7;
      }
      *ppUVar2 = pUVar9;
    }
    il2cpp_runtime_glue(ppUVar2);
  }
  pUVar6 = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1d2da;
    pUVar4 = *(UnityEngine_Object_o **)&((*ppUVar1)->fields).m_ShouldRecalculate;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      pUVar7 = *ppUVar2;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        pUVar8 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          pUVar8 = UnityEngine_Transform__get_parent(pUVar8,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar5 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            return 0;
          }
          pUVar8 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            pUVar9 = (UnityEngine_RectTransform_o *)
                     UnityEngine_Transform__get_parent(pUVar8,(MethodInfo *)0x0);
            pUVar7 = (UnityEngine_RectTransform_o *)0x0;
            if ((pUVar9 != (UnityEngine_RectTransform_o *)0x0) &&
               (pUVar7 = (UnityEngine_RectTransform_o *)0x0, pUVar9->klass == TypeInfo_RectTransform)) {
              pUVar7 = pUVar9;
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar5 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if ((char)bVar5 != '\0') {
              return 0;
            }
            if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
              UVar16 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
              if (UVar16.fields.m_Width <= 0.0) {
                return 0;
              }
              UVar16 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
              if (UVar16.fields.m_Height <= 0.0) {
                return 0;
              }
              UVar16 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
              fVar12 = UVar16.fields.m_Width;
              fVar13 = UVar16.fields.m_Height;
              UVar3 = (__this->fields)._lastParent.fields;
              fVar14 = fVar12 - UVar3.x;
              fVar15 = fVar13 - UVar3.y;
              if (fVar15 * fVar15 + fVar14 * fVar14 < 9.9999994e-11) {
                if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1d2da;
                pUVar4 = *(UnityEngine_Object_o **)&((*ppUVar1)->fields).m_ShouldRecalculate;
                y = (UnityEngine_Object_o *)(__this->fields)._lastSprite;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar5 = UnityEngine_Object__op_Equality(pUVar4,y,(MethodInfo *)0x0);
                if ((char)bVar5 != '\0') {
                  return 0;
                }
              }
              (__this->fields)._lastParent.fields = UVar16.fields._8_8_;
              pUVar6 = (__this->fields)._image;
              if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                (__this->fields)._lastSprite =
                     *(UnityEngine_Sprite_o **)&(pUVar6->fields).m_ShouldRecalculate;
                il2cpp_runtime_glue(&(__this->fields)._lastSprite);
                pUVar6 = (__this->fields)._image;
                if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                  UnityEngine_UI_Image__set_preserveAspect(pUVar6,1,(MethodInfo *)0x0);
                  if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_anchorMin
                              (*ppUVar2,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0)
                    ;
                    if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_anchorMax
                                (*ppUVar2,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                 (MethodInfo *)0x0);
                      if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                        UnityEngine_RectTransform__set_pivot
                                  (*ppUVar2,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                   (MethodInfo *)0x0);
                        pUVar7 = *ppUVar2;
                        if (DAT_056fe093 == '\0') {
                          il2cpp_init_method_metadata(&TypeInfo_Vector2);
                          DAT_056fe093 = '\x01';
                        }
                        if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                          UnityEngine_RectTransform__set_anchoredPosition
                                    (pUVar7,(UnityEngine_Vector2_o)
                                            **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                     (MethodInfo *)0x0);
                          if ((*ppUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                             (__this_00 = *(UnityEngine_Sprite_o **)
                                           &((*ppUVar1)->fields).m_ShouldRecalculate,
                             __this_00 != (UnityEngine_Sprite_o *)0x0)) {
                            pUVar7 = *ppUVar2;
                            UVar16 = UnityEngine_Sprite__get_rect(__this_00,(MethodInfo *)0x0);
                            if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                              uVar10 = -(uint)(0.0 < UVar16.fields.m_Height);
                              uVar11 = -(uint)(0.0 < UVar16.fields.m_Width);
                              fVar15 = (float)(~uVar11 & 0x3f800000 |
                                              (~uVar10 & 0x3f800000 |
                                              (uint)(UVar16.fields.m_Width / UVar16.fields.m_Height)
                                              & uVar10) & uVar11);
                              fVar14 = fVar13 * fVar15;
                              fVar15 = fVar12 / fVar15;
                              if (fVar12 <= fVar14) {
                                fVar12 = fVar14;
                              }
                              if (fVar13 <= fVar15) {
                                fVar13 = fVar15;
                              }
                              value.fields.y = fVar13;
                              value.fields.x = fVar12;
                              UnityEngine_RectTransform__set_sizeDelta
                                        (pUVar7,value,(MethodInfo *)0x0);
                              return (bool_conflict)CONCAT71((int7)((ulong)pUVar7 >> 8),1);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_03b1d2da:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$Refresh
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__Refresh (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x3b1ce50

bool_conflict
Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__Refresh
          (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o **ppUVar1;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_Vector2_Fields UVar3;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Object_o *y;
  UnityEngine_Sprite_o *__this_00;
  bool_conflict bVar5;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_RectTransform_o *pUVar9;
  uint uVar10;
  uint uVar11;
  UnityEngine_Vector2_o value;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Rect_o UVar16;
  
  if (DAT_05701561 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    DAT_05701561 = '\x01';
  }
  pUVar6 = (__this->fields)._image;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._image;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar6 = (UnityEngine_UI_Image_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_Image_GetComponent_Image);
    (__this->fields)._image = pUVar6;
    il2cpp_runtime_glue(ppUVar1);
  }
  pUVar7 = (__this->fields)._rect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar2 = &(__this->fields)._rect;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar7 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) {
      *ppUVar2 = (UnityEngine_RectTransform_o *)0x0;
    }
    else {
      pUVar9 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar7->klass == TypeInfo_RectTransform) {
        pUVar9 = pUVar7;
      }
      *ppUVar2 = pUVar9;
    }
    il2cpp_runtime_glue(ppUVar2);
  }
  pUVar6 = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1d2da;
    pUVar4 = *(UnityEngine_Object_o **)&((*ppUVar1)->fields).m_ShouldRecalculate;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      pUVar7 = *ppUVar2;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        pUVar8 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          pUVar8 = UnityEngine_Transform__get_parent(pUVar8,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar5 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            return 0;
          }
          pUVar8 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            pUVar9 = (UnityEngine_RectTransform_o *)
                     UnityEngine_Transform__get_parent(pUVar8,(MethodInfo *)0x0);
            pUVar7 = (UnityEngine_RectTransform_o *)0x0;
            if ((pUVar9 != (UnityEngine_RectTransform_o *)0x0) &&
               (pUVar7 = (UnityEngine_RectTransform_o *)0x0, pUVar9->klass == TypeInfo_RectTransform)) {
              pUVar7 = pUVar9;
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar5 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if ((char)bVar5 != '\0') {
              return 0;
            }
            if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
              UVar16 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
              if (UVar16.fields.m_Width <= 0.0) {
                return 0;
              }
              UVar16 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
              if (UVar16.fields.m_Height <= 0.0) {
                return 0;
              }
              UVar16 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
              fVar12 = UVar16.fields.m_Width;
              fVar13 = UVar16.fields.m_Height;
              UVar3 = (__this->fields)._lastParent.fields;
              fVar14 = fVar12 - UVar3.x;
              fVar15 = fVar13 - UVar3.y;
              if (fVar15 * fVar15 + fVar14 * fVar14 < 9.9999994e-11) {
                if (*ppUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b1d2da;
                pUVar4 = *(UnityEngine_Object_o **)&((*ppUVar1)->fields).m_ShouldRecalculate;
                y = (UnityEngine_Object_o *)(__this->fields)._lastSprite;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar5 = UnityEngine_Object__op_Equality(pUVar4,y,(MethodInfo *)0x0);
                if ((char)bVar5 != '\0') {
                  return 0;
                }
              }
              (__this->fields)._lastParent.fields = UVar16.fields._8_8_;
              pUVar6 = (__this->fields)._image;
              if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                (__this->fields)._lastSprite =
                     *(UnityEngine_Sprite_o **)&(pUVar6->fields).m_ShouldRecalculate;
                il2cpp_runtime_glue(&(__this->fields)._lastSprite);
                pUVar6 = (__this->fields)._image;
                if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                  UnityEngine_UI_Image__set_preserveAspect(pUVar6,1,(MethodInfo *)0x0);
                  if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_anchorMin
                              (*ppUVar2,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0)
                    ;
                    if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_anchorMax
                                (*ppUVar2,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                 (MethodInfo *)0x0);
                      if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                        UnityEngine_RectTransform__set_pivot
                                  (*ppUVar2,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                   (MethodInfo *)0x0);
                        pUVar7 = *ppUVar2;
                        if (DAT_056fe093 == '\0') {
                          il2cpp_init_method_metadata(&TypeInfo_Vector2);
                          DAT_056fe093 = '\x01';
                        }
                        if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                          UnityEngine_RectTransform__set_anchoredPosition
                                    (pUVar7,(UnityEngine_Vector2_o)
                                            **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                     (MethodInfo *)0x0);
                          if ((*ppUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                             (__this_00 = *(UnityEngine_Sprite_o **)
                                           &((*ppUVar1)->fields).m_ShouldRecalculate,
                             __this_00 != (UnityEngine_Sprite_o *)0x0)) {
                            pUVar7 = *ppUVar2;
                            UVar16 = UnityEngine_Sprite__get_rect(__this_00,(MethodInfo *)0x0);
                            if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                              uVar10 = -(uint)(0.0 < UVar16.fields.m_Height);
                              uVar11 = -(uint)(0.0 < UVar16.fields.m_Width);
                              fVar15 = (float)(~uVar11 & 0x3f800000 |
                                              (~uVar10 & 0x3f800000 |
                                              (uint)(UVar16.fields.m_Width / UVar16.fields.m_Height)
                                              & uVar10) & uVar11);
                              fVar14 = fVar13 * fVar15;
                              fVar15 = fVar12 / fVar15;
                              if (fVar12 <= fVar14) {
                                fVar12 = fVar14;
                              }
                              if (fVar13 <= fVar15) {
                                fVar13 = fVar15;
                              }
                              value.fields.y = fVar13;
                              value.fields.x = fVar12;
                              UnityEngine_RectTransform__set_sizeDelta
                                        (pUVar7,value,(MethodInfo *)0x0);
                              return (bool_conflict)CONCAT71((int7)((ulong)pUVar7 >> 8),1);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_03b1d2da:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover___ctor (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x3b1d300

void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover___ctor
               (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *__this,
               MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


