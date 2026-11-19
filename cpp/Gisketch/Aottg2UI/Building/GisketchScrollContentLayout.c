// Type: Gisketch.Aottg2UI.Building.GisketchScrollContentLayout
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchScrollContentLayout.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchScrollContentLayout$$SyncScrollOffset
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollContentLayout__SyncScrollOffset (Gisketch_Aottg2UI_Building_GisketchScrollContentLayout_o* __this, const MethodInfo* method);
// 0x5390970

void Gisketch_Aottg2UI_Building_GisketchScrollContentLayout__SyncScrollOffset
               (Gisketch_Aottg2UI_Building_GisketchScrollContentLayout_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_RectTransform_o *__this_00;
  float fVar3;
  uint extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  uint extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  UnityEngine_Rect_o UVar10;
  float local_58;
  Gilzoide_FlexUi_Yoga_YGNode_o local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  float fStack_20;
  float fStack_1c;
  
  if (Il2CppMethodInitialized_07542b2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542b2e = '\x01';
  }
  local_40.fields._nodePtr = (Gilzoide_FlexUi_Yoga_YGNode_Fields)0;
  __this_00 = Gilzoide_FlexUi_FlexLayout__get_RectTransform
                        ((Gilzoide_FlexUi_FlexLayout_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = UnityEngine_RectTransform__get_anchorMin(__this_00,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e7b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    Il2CppMethodInitialized_0753e7b4 = '\x01';
  }
  fVar4 = ABS(UVar1.fields.x);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar9 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
  fVar3 = fVar4 * 1e-06;
  if (fVar4 * 1e-06 <= fVar9) {
    fVar3 = fVar9;
  }
  if (ABS(0.0 - UVar1.fields.x) < fVar3) {
    UVar1 = UnityEngine_RectTransform__get_anchorMax(__this_00,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e7b4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
      Il2CppMethodInitialized_0753e7b4 = '\x01';
    }
    fVar4 = ABS(UVar1.fields.x);
    uVar5 = extraout_XMM0_Dc & 0x7fffffff;
    uVar7 = extraout_XMM0_Dd & 0x7fffffff;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    fVar9 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
    fVar3 = fVar4 * 1e-06;
    if (fVar4 * 1e-06 <= fVar9) {
      fVar3 = fVar9;
    }
    if (ABS(0.0 - UVar1.fields.x) < fVar3) {
      UVar1 = UnityEngine_RectTransform__get_anchoredPosition(__this_00,(MethodInfo *)0x0);
      UVar2 = UnityEngine_RectTransform__get_pivot(__this_00,(MethodInfo *)0x0);
      fStack_20 = (float)extraout_XMM0_Dc_00;
      local_28._0_4_ = UVar2.fields.x;
      local_28._4_4_ = UVar2.fields.y;
      fStack_1c = (float)extraout_XMM0_Dd_00;
      UVar10 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
      fVar4 = UVar10.fields.m_Width;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        local_38._8_4_ = uVar5;
        local_38._0_8_ = UVar10.fields._8_8_;
        local_38._12_4_ = uVar7;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        fVar4 = (float)local_38._0_4_;
      }
      local_58 = UVar1.fields.x;
      local_58 = local_58 - (float)local_28._0_4_ * fVar4;
      if (0.01 <= ABS(local_58 - (__this->fields)._styleLeft)) {
        (__this->fields)._styleLeft = local_58;
        local_40 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode
                             ((Gilzoide_FlexUi_FlexLayout_o *)__this,(MethodInfo *)0x0);
        Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition_52171b0(&local_40,0,local_58,(MethodInfo *)0x0);
      }
    }
  }
  UVar1 = UnityEngine_RectTransform__get_anchorMin(__this_00,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e7b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    Il2CppMethodInitialized_0753e7b4 = '\x01';
  }
  fVar4 = ABS(UVar1.fields.y);
  if (fVar4 <= 1.0) {
    fVar4 = 1.0;
  }
  fVar9 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
  fVar3 = fVar4 * 1e-06;
  if (fVar4 * 1e-06 <= fVar9) {
    fVar3 = fVar9;
  }
  if (ABS(1.0 - UVar1.fields.y) < fVar3) {
    UVar1 = UnityEngine_RectTransform__get_anchorMax(__this_00,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e7b4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
      Il2CppMethodInitialized_0753e7b4 = '\x01';
    }
    fVar4 = ABS(UVar1.fields.y);
    if (fVar4 <= 1.0) {
      fVar4 = 1.0;
    }
    uVar6 = 0;
    uVar8 = 0;
    fVar9 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
    fVar3 = fVar4 * 1e-06;
    if (fVar4 * 1e-06 <= fVar9) {
      fVar3 = fVar9;
    }
    if (ABS(1.0 - UVar1.fields.y) < fVar3) {
      UVar1 = UnityEngine_RectTransform__get_anchoredPosition(__this_00,(MethodInfo *)0x0);
      UVar2 = UnityEngine_RectTransform__get_pivot(__this_00,(MethodInfo *)0x0);
      local_28._4_4_ = UVar2.fields.y;
      local_28._0_4_ = local_28._4_4_;
      fStack_20 = (float)local_28._4_4_;
      fStack_1c = (float)local_28._4_4_;
      UVar10 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
      fVar4 = UVar10.fields.m_Height;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        local_38._8_4_ = uVar6;
        local_38._0_8_ = UVar10.fields._8_8_;
        local_38._12_4_ = uVar8;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        fVar4 = (float)local_38._4_4_;
      }
      fVar4 = -UVar1.fields.y - (1.0 - (float)local_28._0_4_) * fVar4;
      if (0.01 <= ABS(fVar4 - (__this->fields)._styleTop)) {
        (__this->fields)._styleTop = fVar4;
        local_40 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode
                             ((Gilzoide_FlexUi_FlexLayout_o *)__this,(MethodInfo *)0x0);
        Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition_52171b0(&local_40,1,fVar4,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScrollContentLayout$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollContentLayout___ctor (Gisketch_Aottg2UI_Building_GisketchScrollContentLayout_o* __this, const MethodInfo* method);
// 0x5390d20

void Gisketch_Aottg2UI_Building_GisketchScrollContentLayout___ctor
               (Gisketch_Aottg2UI_Building_GisketchScrollContentLayout_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07542b2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_FlexLayout);
    Il2CppMethodInitialized_07542b2f = '\x01';
    uVar1 = (TypeInfo_Gilzoide_FlexUi_FlexLayout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gilzoide_FlexUi_FlexLayout->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_FlexLayout);
    Gilzoide_FlexUi_FlexLayout___ctor((Gilzoide_FlexUi_FlexLayout_o *)__this,(MethodInfo *)0x0);
    return;
  }
  Gilzoide_FlexUi_FlexLayout___ctor((Gilzoide_FlexUi_FlexLayout_o *)__this,(MethodInfo *)0x0);
  return;
}


