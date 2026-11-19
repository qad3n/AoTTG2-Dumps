// Type: Gisketch.Aottg2UI.Building.GisketchSpriteCover
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchSpriteCover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$Awake
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSpriteCover__Awake (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x53929d0

void Gisketch_Aottg2UI_Building_GisketchSpriteCover__Awake
               (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  Gilzoide_FlexUi_FlexLayout_o *pGVar2;
  
  if (Il2CppMethodInitialized_07542b3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    Il2CppMethodInitialized_07542b3d = '\x01';
  }
  pUVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
  (__this->fields)._image = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._image);
  pGVar2 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
  (__this->fields)._flex = pGVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._flex);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSpriteCover__OnEnable (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x5392a50

void Gisketch_Aottg2UI_Building_GisketchSpriteCover__OnEnable
               (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchSpriteCover__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSpriteCover__LateUpdate (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x5392ff0

void Gisketch_Aottg2UI_Building_GisketchSpriteCover__LateUpdate
               (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchSpriteCover__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSpriteCover__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x5393000

void Gisketch_Aottg2UI_Building_GisketchSpriteCover__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchSpriteCover__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$Refresh
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchSpriteCover__Refresh (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x5392a60

bool Gisketch_Aottg2UI_Building_GisketchSpriteCover__Refresh
               (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o **targetAddress;
  Gilzoide_FlexUi_FlexLayout_o **targetAddress_00;
  UnityEngine_Vector2_Fields UVar1;
  int iVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Object_o *y;
  UnityEngine_Sprite_o *__this_00;
  bool bVar4;
  char cVar5;
  UnityEngine_UI_Image_o *pUVar6;
  Gilzoide_FlexUi_FlexLayout_o *pGVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_RectTransform_o *pUVar9;
  Gilzoide_FlexUi_Yoga_YGValue_Fields value;
  Gilzoide_FlexUi_Yoga_YGValue_o value_00;
  UnityEngine_RectTransform_o *__this_01;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Rect_o UVar18;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  if (Il2CppMethodInitialized_07542b3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_07542b3e = '\x01';
  }
  pUVar6 = (__this->fields)._image;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._image;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar6 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    (__this->fields)._image = pUVar6;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  pGVar7 = (__this->fields)._flex;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress_00 = &(__this->fields)._flex;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pGVar7 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    (__this->fields)._flex = pGVar7;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
  }
  pUVar6 = *targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if (*targetAddress == (UnityEngine_UI_Image_o *)0x0) goto label_05392fde;
    pUVar3 = (UnityEngine_Object_o *)((*targetAddress)->fields).m_Sprite;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      pGVar7 = *targetAddress_00;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pGVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
label_05392fde:
          ThrowNullReferenceException();
        }
        pUVar8 = UnityEngine_Transform__get_parent(pUVar8,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar4) {
          pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_05392fde;
          pUVar9 = (UnityEngine_RectTransform_o *)UnityEngine_Transform__get_parent(pUVar8,(MethodInfo *)0x0);
          __this_01 = (UnityEngine_RectTransform_o *)0x0;
          if ((pUVar9 != (UnityEngine_RectTransform_o *)0x0) &&
             (__this_01 = (UnityEngine_RectTransform_o *)0x0,
             pUVar9->klass == TypeInfo_UnityEngine_RectTransform)) {
            __this_01 = pUVar9;
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar4) {
            if (__this_01 == (UnityEngine_RectTransform_o *)0x0) goto label_05392fde;
            UVar18 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
            if (0.0 < UVar18.fields.m_Width) {
              UVar18 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
              }
              if (0.0 < UVar18.fields.m_Height) {
                UVar18 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
                fVar13 = UVar18.fields.m_Width;
                fVar14 = UVar18.fields.m_Height;
                if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                }
                UVar1 = (__this->fields)._lastParent.fields;
                fVar15 = fVar13 - UVar1.x;
                fVar17 = fVar14 - UVar1.y;
                if (fVar17 * fVar17 + fVar15 * fVar15 < 9.9999994e-11) {
                  if (*targetAddress == (UnityEngine_UI_Image_o *)0x0) goto label_05392fde;
                  pUVar3 = (UnityEngine_Object_o *)((*targetAddress)->fields).m_Sprite;
                  y = (UnityEngine_Object_o *)(__this->fields)._lastSprite;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar4 = UnityEngine_Object__op_Equality(pUVar3,y,(MethodInfo *)0x0);
                  if (bVar4) {
                    return false;
                  }
                }
                (__this->fields)._lastParent.fields = UVar18.fields._8_8_;
                pUVar6 = (__this->fields)._image;
                if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                  (__this->fields)._lastSprite = (pUVar6->fields).m_Sprite;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._lastSprite);
                  pUVar6 = (__this->fields)._image;
                  if ((pUVar6 != (UnityEngine_UI_Image_o *)0x0) &&
                     (__this_00 = (pUVar6->fields).m_Sprite, __this_00 != (UnityEngine_Sprite_o *)0x0)) {
                    UVar18 = UnityEngine_Sprite__get_rect(__this_00,(MethodInfo *)0x0);
                    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                    }
                    if (*targetAddress != (UnityEngine_UI_Image_o *)0x0) {
                      uVar11 = -(uint)(0.0 < UVar18.fields.m_Height);
                      uVar12 = -(uint)(0.0 < UVar18.fields.m_Width);
                      fVar16 = (float)(~uVar12 & 0x3f800000 |
                                      (~uVar11 & 0x3f800000 |
                                      (uint)(UVar18.fields.m_Width / UVar18.fields.m_Height) & uVar11) &
                                      uVar12);
                      fVar17 = fVar14 * fVar16;
                      fVar15 = fVar13;
                      if (fVar13 <= fVar17) {
                        fVar15 = fVar17;
                      }
                      uStack_58 = CONCAT44(fVar14,fVar15);
                      fVar13 = fVar13 / fVar16;
                      fVar17 = fVar14;
                      if (fVar14 <= fVar13) {
                        fVar17 = fVar13;
                      }
                      uStack_48 = CONCAT44(fVar14,fVar17);
                      value.Value = 1.4013e-45;
                      value.Unit = 0;
                      UnityEngine_UI_Image__set_preserveAspect(*targetAddress,true,(MethodInfo *)0x0);
                      cVar5 = il2cpp_runtime_helper_03296c30(uStack_58,(__this->fields)._lastWidth,0);
                      if ((cVar5 != '\0') &&
                         (cVar5 = il2cpp_runtime_helper_03296c30(uStack_48,(__this->fields)._lastHeight,0), cVar5 != '\0')) {
                        return false;
                      }
                      (__this->fields)._lastWidth = fVar15;
                      (__this->fields)._lastHeight = fVar17;
                      pGVar7 = (__this->fields)._flex;
                      if (pGVar7 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                        iVar2 = (pGVar7->fields)._alignSelf;
                        if (iVar2 != 2) {
                          value.Value = 2.8026e-45;
                          value.Unit = 0;
                          Gilzoide_FlexUi_FlexLayout__set_AlignSelf(pGVar7,2,(MethodInfo *)0x0);
                          pGVar7 = *targetAddress_00;
                          if (pGVar7 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_05392fde;
                        }
                        bVar10 = iVar2 != 2;
                        bVar4 = Gisketch_Aottg2UI_Building_GisketchSpriteCover__SamePoint
                                          ((Gilzoide_FlexUi_Yoga_YGValue_o)(pGVar7->fields)._width.fields,
                                           fVar15,(MethodInfo *)value);
                        if (!bVar4) {
                          pGVar7 = *targetAddress_00;
                          if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
                          }
                          value = (Gilzoide_FlexUi_Yoga_YGValue_Fields)
                                  Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar15,(MethodInfo *)0x0);
                          if (pGVar7 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_05392fde;
                          Gilzoide_FlexUi_FlexLayout__set_Width
                                    (pGVar7,(Gilzoide_FlexUi_Yoga_YGValue_o)value,(MethodInfo *)0x0);
                          bVar10 = true;
                        }
                        if (*targetAddress_00 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                          bVar4 = Gisketch_Aottg2UI_Building_GisketchSpriteCover__SamePoint
                                            ((Gilzoide_FlexUi_Yoga_YGValue_o)
                                             ((*targetAddress_00)->fields)._height.fields,fVar17,
                                             (MethodInfo *)value);
                          if (bVar4) {
                            return bVar10;
                          }
                          pGVar7 = *targetAddress_00;
                          if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
                          }
                          value_00 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar17,(MethodInfo *)0x0);
                          if (pGVar7 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                            Gilzoide_FlexUi_FlexLayout__set_Height(pGVar7,value_00,(MethodInfo *)0x0);
                            return true;
                          }
                        }
                      }
                    }
                  }
                }
                goto label_05392fde;
              }
            }
          }
        }
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$CoverSize
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Building_GisketchSpriteCover__CoverSize (UnityEngine_Vector2_o parentSize, UnityEngine_Vector2_o spriteSize, const MethodInfo* method);
// 0x5393010

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Building_GisketchSpriteCover__CoverSize
          (UnityEngine_Vector2_o parentSize,UnityEngine_Vector2_o spriteSize,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = parentSize.fields.x;
  fVar3 = parentSize.fields.y;
  fVar5 = 1.0;
  if ((0.0 < spriteSize.fields.x) && (0.0 < spriteSize.fields.y)) {
    fVar5 = spriteSize.fields.x / spriteSize.fields.y;
  }
  fVar4 = fVar2;
  if (fVar2 <= fVar3 * fVar5) {
    fVar4 = fVar3 * fVar5;
  }
  if (fVar3 <= fVar2 / fVar5) {
    fVar3 = fVar2 / fVar5;
  }
  UVar1.fields.y = fVar3;
  UVar1.fields.x = fVar4;
  return (UnityEngine_Vector2_o)UVar1.fields;
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$SamePoint
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchSpriteCover__SamePoint (Gilzoide_FlexUi_Yoga_YGValue_o value, float expected, const MethodInfo* method);
// 0x5393060

bool Gisketch_Aottg2UI_Building_GisketchSpriteCover__SamePoint
               (Gilzoide_FlexUi_Yoga_YGValue_o value,float expected,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (value.fields.Unit != 1) {
    return false;
  }
  if (Il2CppMethodInitialized_0753e7b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    Il2CppMethodInitialized_0753e7b4 = '\x01';
  }
  fVar3 = ABS(value.fields.Value);
  if (fVar3 <= ABS(expected)) {
    fVar3 = ABS(expected);
  }
  fVar2 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
  fVar1 = fVar3 * 1e-06;
  if (fVar3 * 1e-06 <= fVar2) {
    fVar1 = fVar2;
  }
  return ABS(expected - value.fields.Value) < fVar1;
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSpriteCover___ctor (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x5393100

void Gisketch_Aottg2UI_Building_GisketchSpriteCover___ctor
               (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *__this,MethodInfo *method)

{
  (__this->fields)._lastWidth = -1.0;
  (__this->fields)._lastHeight = -1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


