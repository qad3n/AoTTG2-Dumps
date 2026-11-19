// Type: Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchRectTransformSpriteCover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$Awake
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__Awake (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x5393120

void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__Awake
               (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  
  if (Il2CppMethodInitialized_07542b3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_07542b3f = '\x01';
  }
  pUVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
  (__this->fields)._image = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._image);
  pUVar2 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) {
    (__this->fields)._rect = (UnityEngine_RectTransform_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._rect);
    return;
  }
  pUVar3 = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar2->klass == TypeInfo_UnityEngine_RectTransform) {
    pUVar3 = pUVar2;
  }
  (__this->fields)._rect = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rect);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__OnEnable (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x53931d0

void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__OnEnable
               (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__LateUpdate (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x53936e0

void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__LateUpdate
               (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x53936f0

void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$Refresh
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__Refresh (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x53931e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53932dd: jmp 0x53932e9

bool Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__Refresh
               (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o **targetAddress;
  UnityEngine_RectTransform_o **targetAddress_00;
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Object_o *y;
  UnityEngine_Sprite_o *__this_00;
  bool bVar3;
  UnityEngine_UI_Image_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  uint uVar8;
  uint uVar9;
  UnityEngine_Vector2_o value;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Rect_o UVar15;
  
  if (Il2CppMethodInitialized_07542b40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542b40 = '\x01';
  }
  pUVar4 = (__this->fields)._image;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._image;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar4 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    (__this->fields)._image = pUVar4;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  pUVar5 = (__this->fields)._rect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress_00 = &(__this->fields)._rect;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar5 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
      *targetAddress_00 = (UnityEngine_RectTransform_o *)0x0;
    }
    else {
      pUVar7 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar5->klass == TypeInfo_UnityEngine_RectTransform) {
        pUVar7 = pUVar5;
      }
      *targetAddress_00 = pUVar7;
    }
    Il2CppCodeGenWriteBarrier(targetAddress_00);
  }
  pUVar4 = *targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    if (*targetAddress == (UnityEngine_UI_Image_o *)0x0) goto label_053936d7;
    pUVar2 = (UnityEngine_Object_o *)((*targetAddress)->fields).m_Sprite;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pUVar5 = *targetAddress_00;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
label_053936d7:
          ThrowNullReferenceException();
        }
        pUVar6 = UnityEngine_Transform__get_parent(pUVar6,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar3) {
          pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_053936d7;
          pUVar7 = (UnityEngine_RectTransform_o *)UnityEngine_Transform__get_parent(pUVar6,(MethodInfo *)0x0);
          pUVar5 = (UnityEngine_RectTransform_o *)0x0;
          if ((pUVar7 != (UnityEngine_RectTransform_o *)0x0) &&
             (pUVar5 = (UnityEngine_RectTransform_o *)0x0, pUVar7->klass == TypeInfo_UnityEngine_RectTransform
             )) {
            pUVar5 = pUVar7;
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar3) {
            if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto label_053936d7;
            UVar15 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
            if (0.0 < UVar15.fields.m_Width) {
              UVar15 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
              }
              if (0.0 < UVar15.fields.m_Height) {
                UVar15 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
                fVar14 = UVar15.fields.m_Width;
                fVar10 = UVar15.fields.m_Height;
                if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                }
                UVar1 = (__this->fields)._lastParent.fields;
                fVar11 = fVar14 - UVar1.x;
                fVar12 = fVar10 - UVar1.y;
                if (fVar12 * fVar12 + fVar11 * fVar11 < 9.9999994e-11) {
                  if (*targetAddress == (UnityEngine_UI_Image_o *)0x0) goto label_053936d7;
                  pUVar2 = (UnityEngine_Object_o *)((*targetAddress)->fields).m_Sprite;
                  y = (UnityEngine_Object_o *)(__this->fields)._lastSprite;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar3 = UnityEngine_Object__op_Equality(pUVar2,y,(MethodInfo *)0x0);
                  if (bVar3) {
                    return false;
                  }
                }
                (__this->fields)._lastParent.fields = UVar15.fields._8_8_;
                pUVar4 = (__this->fields)._image;
                if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
                  (__this->fields)._lastSprite = (pUVar4->fields).m_Sprite;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._lastSprite);
                  pUVar4 = (__this->fields)._image;
                  if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
                    UnityEngine_UI_Image__set_preserveAspect(pUVar4,true,(MethodInfo *)0x0);
                    if (*targetAddress_00 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_anchorMin
                                (*targetAddress_00,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0
                                );
                      if (*targetAddress_00 != (UnityEngine_RectTransform_o *)0x0) {
                        UnityEngine_RectTransform__set_anchorMax
                                  (*targetAddress_00,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                   (MethodInfo *)0x0);
                        if (*targetAddress_00 != (UnityEngine_RectTransform_o *)0x0) {
                          UnityEngine_RectTransform__set_pivot
                                    (*targetAddress_00,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                     (MethodInfo *)0x0);
                          pUVar5 = *targetAddress_00;
                          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                            Il2CppMethodInitialized_0753ecc8 = '\x01';
                          }
                          if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                            UnityEngine_RectTransform__set_anchoredPosition
                                      (pUVar5,(UnityEngine_Vector2_o)
                                              (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields
                                       ,(MethodInfo *)0x0);
                            if ((*targetAddress != (UnityEngine_UI_Image_o *)0x0) &&
                               (__this_00 = ((*targetAddress)->fields).m_Sprite,
                               __this_00 != (UnityEngine_Sprite_o *)0x0)) {
                              pUVar5 = *targetAddress_00;
                              UVar15 = UnityEngine_Sprite__get_rect(__this_00,(MethodInfo *)0x0);
                              if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                              }
                              if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                                uVar8 = -(uint)(0.0 < UVar15.fields.m_Height);
                                uVar9 = -(uint)(0.0 < UVar15.fields.m_Width);
                                fVar12 = (float)(~uVar9 & 0x3f800000 |
                                                (~uVar8 & 0x3f800000 |
                                                (uint)(UVar15.fields.m_Width / UVar15.fields.m_Height) & uVar8
                                                ) & uVar9);
                                fVar13 = fVar10 * fVar12;
                                fVar11 = fVar14;
                                if (fVar14 <= fVar13) {
                                  fVar11 = fVar13;
                                }
                                fVar14 = fVar14 / fVar12;
                                if (fVar10 <= fVar14) {
                                  fVar10 = fVar14;
                                }
                                value.fields.y = fVar10;
                                value.fields.x = fVar11;
                                UnityEngine_RectTransform__set_sizeDelta(pUVar5,value,(MethodInfo *)0x0);
                                return true;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto label_053936d7;
              }
            }
          }
        }
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover___ctor (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x5393700

void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover___ctor
               (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


