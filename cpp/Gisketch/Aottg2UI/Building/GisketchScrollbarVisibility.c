// Type: Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchScrollbarVisibility.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$Setup
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__Setup (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, UnityEngine_UI_ScrollRect_o* scroll, const MethodInfo* method);
// 0x181905420

void Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__Setup
               (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,
               UnityEngine_UI_ScrollRect_o *scroll,MethodInfo *method)

{
  (__this->fields)._scroll = scroll;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scroll,scroll);
  Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateVisibility(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__LateUpdate (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, const MethodInfo* method);
// 0x1819053f0

void Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__LateUpdate
               (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateVisibility(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$UpdateVisibility
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateVisibility (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, const MethodInfo* method);
// 0x1819055a0

bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateVisibility
               (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,MethodInfo *method)

{
  System_Nullable_bool__Fields SVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_Scrollbar_o *pUVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  UnityEngine_UI_ScrollRect_o *pUVar7;
  UnityEngine_Rect_o *pUVar8;
  UnityEngine_GameObject_o *__this_00;
  bool bVar9;
  float fVar10;
  System_Nullable_bool__Fields local_res8 [4];
  UnityEngine_Rect_o local_28 [2];
  
  if (Il2CppMethodInitialized_1843421b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_1843421b4 = '\x01';
  }
  pUVar7 = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar7 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
    (__this->fields)._scroll = pUVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._scroll,pUVar7);
  }
  pUVar7 = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return false;
  }
  pUVar7 = (__this->fields)._scroll;
  if (pUVar7 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    pUVar2 = (pUVar7->fields).m_Viewport;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      return false;
    }
    pUVar7 = (__this->fields)._scroll;
    if (pUVar7 != (UnityEngine_UI_ScrollRect_o *)0x0) {
      pUVar2 = (pUVar7->fields).m_Content;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        return false;
      }
      pUVar7 = (__this->fields)._scroll;
      if (pUVar7 != (UnityEngine_UI_ScrollRect_o *)0x0) {
        pUVar3 = (pUVar7->fields).m_VerticalScrollbar;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          return false;
        }
        bVar4 = Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__FitAutoHeightToContent
                          (__this,(MethodInfo *)0x0);
        pUVar7 = (__this->fields)._scroll;
        if ((pUVar7 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
           (pUVar2 = (pUVar7->fields).m_Content, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
          pUVar8 = UnityEngine_RectTransform__get_rect(local_28,pUVar2,(MethodInfo *)0x0);
          fVar10 = (pUVar8->fields).m_Height;
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          pUVar7 = (__this->fields)._scroll;
          if ((pUVar7 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
             (pUVar2 = (pUVar7->fields).m_Viewport, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
            pUVar8 = UnityEngine_RectTransform__get_rect(local_28,pUVar2,(MethodInfo *)0x0);
            pUVar7 = (__this->fields)._scroll;
            if ((pUVar7 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
               (pUVar3 = (pUVar7->fields).m_VerticalScrollbar, pUVar3 != (UnityEngine_UI_Scrollbar_o *)0x0)) {
              fVar10 = fVar10 - (pUVar8->fields).m_Height;
              __this_00 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
              if ((__this->fields)._hasVisibleState != false) {
                if ((__this->fields)._visible == false) {
                  bVar9 = fVar10 == 2.0;
                  bVar5 = fVar10 < 2.0;
                }
                else {
                  bVar9 = fVar10 == -2.0;
                  bVar5 = fVar10 < -2.0;
                }
                bVar9 = !bVar5 && !bVar9;
                if (Il2CppMethodInitialized_1843421b6 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_System_Nullable_bool_GetValueOrDefault);
                  il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
                  il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_get_HasValue);
                  Il2CppMethodInitialized_1843421b6 = '\x01';
                }
                if (bVar9 == (__this->fields)._visible) {
                  (__this->fields)._pendingVisible.fields = (System_Nullable_bool__Fields)0x0;
                  (__this->fields)._pendingPasses = 0;
                  if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_181905962;
                  bVar9 = (__this->fields)._visible;
                  bVar5 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
                  if (bVar5 == bVar9) {
                    return bVar4;
                  }
                  UnityEngine_GameObject__SetActive(__this_00,bVar9,(MethodInfo *)0x0);
                }
                else {
                  SVar1 = (__this->fields)._pendingVisible.fields;
                  if ((SVar1.hasValue & SVar1.value == bVar9) == 0) {
                    local_res8[0].hasValue = false;
                    local_res8[0].value = false;
                    System_Nullable_bool____ctor
                              ((System_Data_SqlTypes_SqlByte_o *)local_res8,bVar9,
                               MethodInfo_System_Nullable_bool_ctor);
                    (__this->fields)._pendingVisible.fields = local_res8[0];
                    (__this->fields)._pendingPasses = 1;
                    return true;
                  }
                  iVar6 = (__this->fields)._pendingPasses + 1;
                  (__this->fields)._pendingPasses = iVar6;
                  if (1 < iVar6) {
                    (__this->fields)._visible = bVar9;
                    (__this->fields)._pendingVisible.fields = (System_Nullable_bool__Fields)0x0;
                    (__this->fields)._pendingPasses = 0;
                    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_181905962;
                    bVar4 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
                    if (bVar4 != bVar9) {
                      UnityEngine_GameObject__SetActive(__this_00,bVar9,(MethodInfo *)0x0);
                      return true;
                    }
                  }
                }
                return true;
              }
              (__this->fields)._hasVisibleState = true;
              (__this->fields)._visible = 0.5 < fVar10;
              (__this->fields)._pendingVisible.fields = (System_Nullable_bool__Fields)0x0;
              (__this->fields)._pendingPasses = 0;
              if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                bVar9 = (__this->fields)._visible;
                bVar5 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
                if (bVar5 != bVar9) {
                  UnityEngine_GameObject__SetActive(__this_00,bVar9,(MethodInfo *)0x0);
                  return true;
                }
                return bVar4;
              }
            }
          }
        }
      }
    }
  }
label_181905962:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$FitAutoHeightToContent
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__FitAutoHeightToContent (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, const MethodInfo* method);
// 0x181905120

bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__FitAutoHeightToContent
               (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_RectTransform_o *__this_00;
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar2;
  bool bVar3;
  int8_t iVar4;
  Gilzoide_FlexUi_FlexLayout_o *pGVar5;
  UnityEngine_Rect_o *pUVar6;
  Gilzoide_FlexUi_Yoga_YGValue_o value;
  float fVar7;
  float fVar8;
  Gilzoide_FlexUi_Yoga_YGValue_Fields local_res8;
  UnityEngine_Rect_o local_38 [3];
  
  if (Il2CppMethodInitialized_1843421b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_1843421b5 = '\x01';
  }
  pGVar5 = (__this->fields)._flex;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pGVar5 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    (__this->fields)._flex = pGVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._flex,pGVar5);
  }
  pGVar5 = (__this->fields)._flex;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    if ((__this->fields)._autoHeight.fields.hasValue == false) {
      pGVar5 = (__this->fields)._flex;
      GVar2 = local_res8;
      if (pGVar5 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_1819053dd;
      if ((pGVar5->fields)._height.fields.Unit == 3) {
        bVar3 = true;
      }
      else {
        bVar3 = (((__this->fields)._flex)->fields)._height.fields.Unit == 0;
      }
      local_res8 = (Gilzoide_FlexUi_Yoga_YGValue_Fields)((ulonglong)local_res8 & 0xffffffffffff0000);
      System_Nullable_bool____ctor
                ((System_Data_SqlTypes_SqlByte_o *)&local_res8,bVar3,MethodInfo_System_Nullable_bool_ctor);
      (__this->fields)._autoHeight.fields = local_res8.Value._0_2_;
    }
    iVar4 = System_Nullable_sbyte___get_Value
                      ((System_Nullable_sbyte__o *)&(__this->fields)._autoHeight,
                       (MethodInfo_AE2BA0 *)MethodInfo_System_Nullable_bool_get_Value);
    if (iVar4 != '\0') {
      pUVar1 = (__this->fields)._scroll;
      GVar2 = local_res8;
      if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
         (__this_00 = (pUVar1->fields).m_Content, __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
        pUVar6 = UnityEngine_RectTransform__get_rect(local_38,__this_00,(MethodInfo *)0x0);
        fVar8 = (pUVar6->fields).m_Height;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        if (fVar8 <= 0.0) {
          return false;
        }
        pGVar5 = (__this->fields)._flex;
        GVar2 = local_res8;
        if (pGVar5 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          GVar2 = (pGVar5->fields)._paddingTop.fields;
          if (GVar2.Unit == 1) {
            local_res8.Value = GVar2.Value;
            fVar7 = local_res8.Value;
          }
          else {
            fVar7 = 0.0;
          }
          pGVar5 = (__this->fields)._flex;
          if (pGVar5 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
            GVar2 = (pGVar5->fields)._paddingBottom.fields;
            local_res8.Value = 0.0;
            if (GVar2.Unit == 1) {
              local_res8.Value = GVar2.Value;
            }
            pGVar5 = (__this->fields)._flex;
            if (pGVar5 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
              fVar8 = fVar7 + fVar8 + local_res8.Value;
              local_res8 = GVar2;
              if ((pGVar5->fields)._height.fields.Unit == 1) {
                local_res8 = (((__this->fields)._flex)->fields)._height.fields;
                if (ABS(local_res8.Value - fVar8) <= 0.5) {
                  return false;
                }
              }
              pGVar5 = (__this->fields)._flex;
              if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
              }
              value = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar8,(MethodInfo *)0x0);
              GVar2 = local_res8;
              if (pGVar5 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                Gilzoide_FlexUi_FlexLayout__set_Height(pGVar5,value,(MethodInfo *)0x0);
                return true;
              }
            }
          }
        }
      }
label_1819053dd:
      local_res8 = GVar2;
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$UpdateStableVisibility
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateStableVisibility (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, UnityEngine_GameObject_o* scrollbar, bool desired, const MethodInfo* method);
// 0x181905450
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1819054f2: xor r8d, r8d
// asm:   0x1819054f5: movzx edx, sil
// asm:   0x181905571: xor r8d, r8d
// asm:   0x181905574: movzx edx, bl
// asm:   0x181905577: jmp 0x1819054f9

bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateStableVisibility
               (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,
               UnityEngine_GameObject_o *scrollbar,bool desired,MethodInfo *method)

{
  System_Nullable_bool__Fields SVar1;
  bool bVar2;
  int iVar3;
  System_Nullable_bool__Fields local_res18 [8];
  
  if (Il2CppMethodInitialized_1843421b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_get_HasValue);
    Il2CppMethodInitialized_1843421b6 = '\x01';
  }
  if (desired == (__this->fields)._visible) {
    (__this->fields)._pendingVisible.fields = (System_Nullable_bool__Fields)0x0;
    (__this->fields)._pendingPasses = 0;
    if (scrollbar == (UnityEngine_GameObject_o *)0x0) goto label_18190558b;
    desired = (__this->fields)._visible;
    bVar2 = UnityEngine_GameObject__get_activeSelf(scrollbar,(MethodInfo *)0x0);
    if (bVar2 == desired) {
      return false;
    }
  }
  else {
    SVar1 = (__this->fields)._pendingVisible.fields;
    if ((SVar1.hasValue & SVar1.value == desired) == 0) {
      local_res18[0].hasValue = false;
      local_res18[0].value = false;
      System_Nullable_bool____ctor
                ((System_Data_SqlTypes_SqlByte_o *)local_res18,desired,MethodInfo_System_Nullable_bool_ctor);
      (__this->fields)._pendingVisible.fields = local_res18[0];
      (__this->fields)._pendingPasses = 1;
      return true;
    }
    iVar3 = (__this->fields)._pendingPasses + 1;
    (__this->fields)._pendingPasses = iVar3;
    if (iVar3 < 2) {
      return true;
    }
    (__this->fields)._visible = desired;
    (__this->fields)._pendingVisible.fields = (System_Nullable_bool__Fields)0x0;
    (__this->fields)._pendingPasses = 0;
    if (scrollbar == (UnityEngine_GameObject_o *)0x0) {
label_18190558b:
      ThrowNullReferenceException();
    }
    bVar2 = UnityEngine_GameObject__get_activeSelf(scrollbar,(MethodInfo *)0x0);
    if (bVar2 == desired) {
      return true;
    }
  }
  UnityEngine_GameObject__SetActive(scrollbar,desired,(MethodInfo *)0x0);
  return true;
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$ApplyVisibility
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__ApplyVisibility (UnityEngine_GameObject_o* scrollbar, bool visible, const MethodInfo* method);
// 0x1819050d0

bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__ApplyVisibility
               (UnityEngine_GameObject_o *scrollbar,bool visible,MethodInfo *method)

{
  bool bVar1;
  
  if (scrollbar == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_GameObject__get_activeSelf(scrollbar,(MethodInfo *)0x0);
  if (bVar1 != visible) {
    UnityEngine_GameObject__SetActive(scrollbar,visible,(MethodInfo *)0x0);
    return true;
  }
  return false;
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$Point
// il2cpp: float Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__Point (Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x181905400

float Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__Point
                (Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  undefined4 local_res8;
  
  if (value.fields.Unit == 1) {
    local_res8 = value.fields.Value;
    return local_res8;
  }
  return 0.0;
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility___ctor (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility___ctor(Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


