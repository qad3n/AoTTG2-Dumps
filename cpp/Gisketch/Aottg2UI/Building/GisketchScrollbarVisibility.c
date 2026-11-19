// Type: Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchScrollbarVisibility.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$Setup
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__Setup (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, UnityEngine_UI_ScrollRect_o* scroll, const MethodInfo* method);
// 0x5391360

void Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__Setup
               (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,
               UnityEngine_UI_ScrollRect_o *scroll,MethodInfo *method)

{
  (__this->fields)._scroll = scroll;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scroll);
  Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateVisibility(__this,(MethodInfo *)scroll);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__LateUpdate (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, const MethodInfo* method);
// 0x5391610

void Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__LateUpdate
               (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateVisibility(__this,method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$UpdateVisibility
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateVisibility (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, const MethodInfo* method);
// 0x5391380

bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateVisibility
               (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o **targetAddress;
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_UI_Scrollbar_o *pUVar2;
  bool bVar3;
  bool bVar4;
  UnityEngine_UI_ScrollRect_o *pUVar5;
  UnityEngine_GameObject_o *scrollbar;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Rect_o UVar6;
  UnityEngine_Rect_o UVar7;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07542b33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542b33 = '\x01';
  }
  pUVar5 = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._scroll;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar5 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
    (__this->fields)._scroll = pUVar5;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  pUVar5 = *targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return false;
  }
  if (*targetAddress != (UnityEngine_UI_ScrollRect_o *)0x0) {
    pUVar1 = ((*targetAddress)->fields).m_Viewport;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      return false;
    }
    if (*targetAddress != (UnityEngine_UI_ScrollRect_o *)0x0) {
      pUVar1 = ((*targetAddress)->fields).m_Content;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        return false;
      }
      if (*targetAddress != (UnityEngine_UI_ScrollRect_o *)0x0) {
        pUVar2 = ((*targetAddress)->fields).m_VerticalScrollbar;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        method_01 = (MethodInfo *)0x0;
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          return false;
        }
        bVar3 = Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__FitAutoHeightToContent
                          (__this,method_01);
        pUVar5 = (__this->fields)._scroll;
        if ((pUVar5 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
           (pUVar1 = (pUVar5->fields).m_Content, pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar6 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          if ((*targetAddress != (UnityEngine_UI_ScrollRect_o *)0x0) &&
             (pUVar1 = ((*targetAddress)->fields).m_Viewport, pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
            UVar7 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
            if ((*targetAddress != (UnityEngine_UI_ScrollRect_o *)0x0) &&
               (pUVar2 = ((*targetAddress)->fields).m_VerticalScrollbar,
               pUVar2 != (UnityEngine_UI_Scrollbar_o *)0x0)) {
              fStack_34 = UVar6.fields.m_Height;
              fStack_34 = fStack_34 - UVar7.fields.m_Height;
              scrollbar = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
              if ((__this->fields)._hasVisibleState == false) {
                (__this->fields)._visible = 0.5 < fStack_34;
                (__this->fields)._hasVisibleState = true;
                (__this->fields)._pendingVisible.fields = (System_Nullable_bool__Fields)0x0;
                (__this->fields)._pendingPasses = 0;
                bVar4 = Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__ApplyVisibility
                                  (scrollbar,0.5 < fStack_34,method_00);
              }
              else {
                bVar4 = -2.0 < fStack_34;
                if ((__this->fields)._visible == false) {
                  bVar4 = 2.0 < fStack_34;
                }
                bVar4 = Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateStableVisibility
                                  (__this,scrollbar,bVar4,(MethodInfo *)(ulong)(2.0 < fStack_34));
              }
              return (bool)(bVar3 | bVar4);
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$FitAutoHeightToContent
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__FitAutoHeightToContent (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, const MethodInfo* method);
// 0x5391620
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53917ba: shufps xmm1, xmm1, 0x55
// asm:   0x53917be: xorps xmm0, xmm0
// asm:   0x53917c1: ucomiss xmm0, xmm1
// asm:   0x53917c4: jae 0x539189f
// asm:   0x53917ca: jmp 0x53917eb
// asm:   0x539180f: jmp 0x539182a

bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__FitAutoHeightToContent
               (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o **targetAddress;
  System_Nullable_bool__o *__this_00;
  int iVar1;
  UnityEngine_UI_ScrollRect_o *pUVar2;
  UnityEngine_RectTransform_o *__this_01;
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar3;
  bool bVar4;
  Gilzoide_FlexUi_FlexLayout_o *pGVar5;
  ulong uVar6;
  Gilzoide_FlexUi_Yoga_YGValue_o value;
  float fVar7;
  float fVar8;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar9;
  UnityEngine_Rect_o UVar10;
  System_Nullable_bool__Fields local_40 [4];
  undefined1 local_38 [8];
  float fStack_30;
  float fStack_2c;
  
  if (Il2CppMethodInitialized_07542b34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_07542b34 = '\x01';
  }
  pGVar5 = (__this->fields)._flex;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._flex;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pGVar5 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    (__this->fields)._flex = pGVar5;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  pGVar5 = *targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    __this_00 = &(__this->fields)._autoHeight;
    if ((__this->fields)._autoHeight.fields.hasValue == false) {
      if (*targetAddress == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_053918b1;
      uVar6 = (ulong)((*targetAddress)->fields)._height.fields >> 0x20;
      local_40[0].hasValue = false;
      local_40[0].value = false;
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o *)local_40,uVar6 == 0 || uVar6 == 3,
                 (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
      __this_00->fields = local_40[0];
    }
    bVar4 = System_Nullable_bool___get_Value
                      (__this_00,(MethodInfo_3CCFD40 *)MethodInfo_System_Nullable_bool_get_Value);
    if (bVar4) {
      pUVar2 = (__this->fields)._scroll;
      if ((pUVar2 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
         (__this_01 = (pUVar2->fields).m_Content, __this_01 == (UnityEngine_RectTransform_o *)0x0)) {
label_053918b1:
        ThrowNullReferenceException();
      }
      UVar10 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
      fVar8 = UVar10.fields.m_Height;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        fStack_30 = (float)in_XMM1_Dc;
        local_38 = (undefined1  [8])UVar10.fields._8_8_;
        fStack_2c = (float)in_XMM1_Dd;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        fVar8 = (float)local_38._4_4_;
      }
      if (0.0 < fVar8) {
        pGVar5 = *targetAddress;
        if (pGVar5 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_053918b1;
        fVar7 = 0.0;
        if ((pGVar5->fields)._paddingTop.fields.Unit == 1) {
          fVar9 = (pGVar5->fields)._paddingTop.fields.Value;
          iVar1 = (pGVar5->fields)._paddingBottom.fields.Unit;
        }
        else {
          fVar9 = 0.0;
          iVar1 = (pGVar5->fields)._paddingBottom.fields.Unit;
        }
        if (iVar1 == 1) {
          fVar7 = (pGVar5->fields)._paddingBottom.fields.Value;
        }
        fVar7 = fVar8 + fVar9 + fVar7;
        GVar3 = (pGVar5->fields)._height.fields;
        if ((GVar3.Unit != 1) || (0.5 < ABS(GVar3.Value - fVar7))) {
          if ((((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue)->_2).cctor_finished_or_no_cctor == 0) {
            local_38._4_4_ = fVar8;
            local_38._0_4_ = fVar7;
            fStack_30 = fVar8;
            fStack_2c = fVar8;
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
            fVar7 = (float)local_38._0_4_;
          }
          value = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar7,(MethodInfo *)0x0);
          Gilzoide_FlexUi_FlexLayout__set_Height(pGVar5,value,(MethodInfo *)0x0);
          return true;
        }
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$UpdateStableVisibility
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateStableVisibility (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, UnityEngine_GameObject_o* scrollbar, bool desired, const MethodInfo* method);
// 0x5391900

bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateStableVisibility
               (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,
               UnityEngine_GameObject_o *scrollbar,bool desired,MethodInfo *method)

{
  System_Nullable_bool__Fields SVar1;
  bool bVar2;
  int iVar3;
  ulong in_RAX;
  ulong local_28;
  
  local_28 = in_RAX;
  if (Il2CppMethodInitialized_07542b35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_get_HasValue);
    Il2CppMethodInitialized_07542b35 = '\x01';
  }
  if ((__this->fields)._visible == desired) {
    (__this->fields)._pendingVisible.fields = (System_Nullable_bool__Fields)0x0;
    (__this->fields)._pendingPasses = 0;
    if (scrollbar == (UnityEngine_GameObject_o *)0x0) {
label_05391a1f:
      ThrowNullReferenceException();
    }
    bVar2 = UnityEngine_GameObject__get_activeSelf(scrollbar,(MethodInfo *)0x0);
    if (bVar2 == desired) {
      return false;
    }
    UnityEngine_GameObject__SetActive(scrollbar,desired,(MethodInfo *)0x0);
  }
  else {
    SVar1 = (__this->fields)._pendingVisible.fields;
    if ((SVar1.hasValue != false) && ((ushort)SVar1 < 0x100 != desired)) {
      iVar3 = (__this->fields)._pendingPasses + 1;
      (__this->fields)._pendingPasses = iVar3;
      if (iVar3 < 2) {
        return true;
      }
      (__this->fields)._visible = desired;
      (__this->fields)._pendingVisible.fields = (System_Nullable_bool__Fields)0x0;
      (__this->fields)._pendingPasses = 0;
      if (scrollbar != (UnityEngine_GameObject_o *)0x0) {
        bVar2 = UnityEngine_GameObject__get_activeSelf(scrollbar,(MethodInfo *)0x0);
        if (bVar2 == desired) {
          return true;
        }
        UnityEngine_GameObject__SetActive(scrollbar,desired,(MethodInfo *)0x0);
        return true;
      }
      goto label_05391a1f;
    }
    local_28 = local_28 & 0xffffffffffff0000;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o *)&local_28,desired,
               (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
    (__this->fields)._pendingVisible.fields = local_28._0_2_;
    (__this->fields)._pendingPasses = 1;
  }
  return true;
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$ApplyVisibility
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__ApplyVisibility (UnityEngine_GameObject_o* scrollbar, bool visible, const MethodInfo* method);
// 0x53918c0

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
  }
  return bVar1 != visible;
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$Point
// il2cpp: float Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__Point (Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x5391a30

float Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__Point
                (Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  if (value.fields.Unit == 1) {
    return value.fields.Value;
  }
  return 0.0;
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility___ctor (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, const MethodInfo* method);
// 0x5391a50

void Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility___ctor
               (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


