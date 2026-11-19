// Type: Gisketch.Aottg2UI.Building.GisketchScaleToParent
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchScaleToParent.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchScaleToParent$$Setup
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScaleToParent__Setup (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o* __this, UnityEngine_RectTransform_o* content, float referenceWidth, float referenceHeight, const MethodInfo* method);
// 0x537bd30

void Gisketch_Aottg2UI_Building_GisketchScaleToParent__Setup
               (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this,
               UnityEngine_RectTransform_o *content,float referenceWidth,float referenceHeight,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  undefined4 in_XMM0_Db;
  undefined1 auVar2 [16];
  undefined4 in_XMM1_Db;
  
  if (Il2CppMethodInitialized_07542ab4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    Il2CppMethodInitialized_07542ab4 = '\x01';
  }
  pUVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  (__this->fields)._root = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._root);
  (__this->fields)._content = content;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._content);
  auVar2._4_4_ = referenceHeight;
  auVar2._0_4_ = referenceWidth;
  auVar2._8_4_ = in_XMM0_Db;
  auVar2._12_4_ = in_XMM1_Db;
  auVar2 = maxps(_DAT_01005870,auVar2);
  (__this->fields)._referenceWidth = (float)auVar2._0_4_;
  (__this->fields)._referenceHeight = (float)auVar2._4_4_;
  Gisketch_Aottg2UI_Building_GisketchScaleToParent__Apply(__this,(MethodInfo *)content);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScaleToParent$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScaleToParent__LateUpdate (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o* __this, const MethodInfo* method);
// 0x537c020

void Gisketch_Aottg2UI_Building_GisketchScaleToParent__LateUpdate
               (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchScaleToParent__Apply(__this,method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScaleToParent$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScaleToParent__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o* __this, const MethodInfo* method);
// 0x537c030

void Gisketch_Aottg2UI_Building_GisketchScaleToParent__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchScaleToParent__Apply(__this,method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScaleToParent$$Apply
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScaleToParent__Apply (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o* __this, const MethodInfo* method);
// 0x537bdc0

void Gisketch_Aottg2UI_Building_GisketchScaleToParent__Apply
               (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **targetAddress;
  UnityEngine_Vector2_o value;
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  float fVar3;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Rect_o UVar4;
  
  if (Il2CppMethodInitialized_07542ab5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542ab5 = '\x01';
  }
  pUVar2 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._root;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    (__this->fields)._root = pUVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  pUVar2 = *targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pUVar2 = (__this->fields)._content;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pUVar2 = (__this->fields)._content;
  if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_0537c01a;
  UnityEngine_RectTransform__set_anchorMin(pUVar2,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0)
  ;
  pUVar2 = (__this->fields)._content;
  if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_0537c01a;
  UnityEngine_RectTransform__set_anchorMax(pUVar2,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0)
  ;
  pUVar2 = (__this->fields)._content;
  if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_0537c01a;
  UnityEngine_RectTransform__set_pivot(pUVar2,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
  pUVar2 = (__this->fields)._content;
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_0537c01a;
  UnityEngine_RectTransform__set_anchoredPosition
            (pUVar2,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  pUVar2 = (__this->fields)._content;
  if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_0537c01a;
  value.fields.x = (__this->fields)._referenceWidth;
  value.fields.y = (__this->fields)._referenceHeight;
  UnityEngine_RectTransform__set_sizeDelta(pUVar2,value,(MethodInfo *)0x0);
  pUVar2 = (__this->fields)._root;
  if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_0537c01a;
  UVar4 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    if (0.0 < UVar4.fields.m_Height) goto label_0537bf99;
label_0537bfea:
    fVar3 = 1.0;
  }
  else {
    if (UVar4.fields.m_Height <= 0.0) goto label_0537bfea;
label_0537bf99:
    if (*targetAddress == (UnityEngine_RectTransform_o *)0x0) goto label_0537c01a;
    UVar4 = UnityEngine_RectTransform__get_rect(*targetAddress,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fVar3 = UVar4.fields.m_Height / (__this->fields)._referenceHeight;
  }
  pUVar2 = (__this->fields)._content;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    value_00.fields.y = fVar3;
    value_00.fields.x = fVar3;
    value_00.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar2,value_00,(MethodInfo *)0x0);
    return;
  }
label_0537c01a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScaleToParent$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScaleToParent___ctor (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o* __this, const MethodInfo* method);
// 0x537c040

void Gisketch_Aottg2UI_Building_GisketchScaleToParent___ctor
               (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this,MethodInfo *method)

{
  (__this->fields)._referenceWidth = 1920.0;
  (__this->fields)._referenceHeight = 1080.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


