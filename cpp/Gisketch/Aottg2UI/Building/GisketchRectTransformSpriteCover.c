// Type: Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchRectTransformSpriteCover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$Awake
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__Awake (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x1819033c0

void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__Awake
               (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *value;
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  
  if (Il2CppMethodInitialized_1843421c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_1843421c0 = '\x01';
  }
  value = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)__this,
                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
  (__this->fields)._image = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._image,value);
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) {
    (__this->fields)._rect = (UnityEngine_RectTransform_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._rect,(void *)0x0);
    return;
  }
  pUVar2 = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar1->klass == TypeInfo_UnityEngine_RectTransform) {
    pUVar2 = pUVar1;
  }
  (__this->fields)._rect = pUVar2;
  pUVar2 = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar1->klass == TypeInfo_UnityEngine_RectTransform) {
    pUVar2 = pUVar1;
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rect,pUVar2);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__OnEnable (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x181903470

void
Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__OnEnable(Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__LateUpdate (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x181903470

void
Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__LateUpdate(Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x181903470

void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$Refresh
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__Refresh (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x181903480

bool Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__Refresh
               (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Object_o *y;
  UnityEngine_Sprite_o *pUVar4;
  bool bVar5;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_RectTransform_o *pUVar9;
  UnityEngine_Rect_o *pUVar10;
  UnityEngine_Vector2_o UVar11;
  UnityEngine_Vector2_o UVar12;
  MethodInfo *method_00;
  float fVar13;
  float fVar14;
  UnityEngine_Rect_o local_58 [5];
  
  if (Il2CppMethodInitialized_1843421c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_1843421c1 = '\x01';
  }
  pUVar6 = (__this->fields)._image;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pUVar6 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    (__this->fields)._image = pUVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._image,pUVar6);
  }
  pUVar7 = (__this->fields)._rect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pUVar7 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) {
      (__this->fields)._rect = (UnityEngine_RectTransform_o *)0x0;
      pUVar9 = (UnityEngine_RectTransform_o *)0x0;
    }
    else {
      pUVar9 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar7->klass == TypeInfo_UnityEngine_RectTransform) {
        pUVar9 = pUVar7;
      }
      (__this->fields)._rect = pUVar9;
      pUVar9 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar7->klass == TypeInfo_UnityEngine_RectTransform) {
        pUVar9 = pUVar7;
      }
    }
    Il2CppCodeGenWriteBarrier(&(__this->fields)._rect,pUVar9);
  }
  pUVar6 = (__this->fields)._image;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    pUVar6 = (__this->fields)._image;
    if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) goto label_181903973;
    pUVar3 = (UnityEngine_Object_o *)(pUVar6->fields).m_Sprite;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) {
      pUVar7 = (__this->fields)._rect;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar5) {
        pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
label_181903973:
          ThrowNullReferenceException();
        }
        pUVar8 = UnityEngine_Transform__GetParent(pUVar8,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar5) {
          pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_181903973;
          pUVar9 = (UnityEngine_RectTransform_o *)UnityEngine_Transform__GetParent(pUVar8,(MethodInfo *)0x0);
          pUVar7 = (UnityEngine_RectTransform_o *)0x0;
          if ((pUVar9 != (UnityEngine_RectTransform_o *)0x0) &&
             (pUVar9->klass == TypeInfo_UnityEngine_RectTransform)) {
            pUVar7 = pUVar9;
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar5) {
            if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_181903973;
            pUVar10 = UnityEngine_RectTransform__get_rect(local_58,pUVar7,(MethodInfo *)0x0);
            fVar1 = (pUVar10->fields).m_Width;
            if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
            if (0.0 < fVar1) {
              pUVar10 = UnityEngine_RectTransform__get_rect(local_58,pUVar7,(MethodInfo *)0x0);
              fVar1 = (pUVar10->fields).m_Height;
              if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
              }
              if (0.0 < fVar1) {
                pUVar10 = UnityEngine_RectTransform__get_rect(local_58,pUVar7,(MethodInfo *)0x0);
                fVar1 = (pUVar10->fields).m_Width;
                fVar2 = (pUVar10->fields).m_Height;
                UVar12.fields.x = (pUVar10->fields).m_Width;
                UVar12.fields.y = (pUVar10->fields).m_Height;
                if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                }
                fVar13 = fVar1 - (__this->fields)._lastParent.fields.x;
                fVar14 = fVar2 - (__this->fields)._lastParent.fields.y;
                fVar13 = fVar14 * fVar14 + fVar13 * fVar13;
                if (fVar13 < 9.9999994e-11) {
                  pUVar6 = (__this->fields)._image;
                  if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) goto label_181903973;
                  pUVar3 = (UnityEngine_Object_o *)(pUVar6->fields).m_Sprite;
                  y = (UnityEngine_Object_o *)(__this->fields)._lastSprite;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar5 = UnityEngine_Object__op_Equality(pUVar3,y,(MethodInfo *)0x0);
                  if (bVar5) {
                    return false;
                  }
                }
                pUVar6 = (__this->fields)._image;
                (__this->fields)._lastParent.fields.x = fVar1;
                (__this->fields)._lastParent.fields.y = fVar2;
                if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                  pUVar4 = (pUVar6->fields).m_Sprite;
                  (__this->fields)._lastSprite = pUVar4;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._lastSprite,pUVar4);
                  pUVar6 = (__this->fields)._image;
                  if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                    UnityEngine_UI_Image__set_preserveAspect(pUVar6,true,(MethodInfo *)0x0);
                    pUVar7 = (__this->fields)._rect;
                    if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_anchorMin
                                (pUVar7,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                      pUVar7 = (__this->fields)._rect;
                      if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                        UnityEngine_RectTransform__set_anchorMax
                                  (pUVar7,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                        pUVar7 = (__this->fields)._rect;
                        if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                          method_00 = (MethodInfo *)0x0;
                          UnityEngine_RectTransform__set_pivot
                                    (pUVar7,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                          pUVar7 = (__this->fields)._rect;
                          UVar11 = UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition
                                             ((UnityEngine_Rendering_MousePositionDebug_o *)0x0,fVar13,
                                              method_00);
                          if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                            UnityEngine_RectTransform__set_anchoredPosition(pUVar7,UVar11,(MethodInfo *)0x0);
                            pUVar6 = (__this->fields)._image;
                            if ((pUVar6 != (UnityEngine_UI_Image_o *)0x0) &&
                               (pUVar4 = (pUVar6->fields).m_Sprite, pUVar4 != (UnityEngine_Sprite_o *)0x0)) {
                              pUVar7 = (__this->fields)._rect;
                              pUVar10 = UnityEngine_Sprite__get_rect(local_58,pUVar4,(MethodInfo *)0x0);
                              UVar11.fields.x = (pUVar10->fields).m_Width;
                              UVar11.fields.y = (pUVar10->fields).m_Height;
                              if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                              }
                              UVar12 = Gisketch_Aottg2UI_Building_GisketchSpriteCover__CoverSize
                                                 (UVar12,UVar11,(MethodInfo *)0x0);
                              if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                                UnityEngine_RectTransform__set_sizeDelta(pUVar7,UVar12,(MethodInfo *)0x0);
                                return true;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto label_181903973;
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
// 0x180528540

void
Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover___ctor(Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


