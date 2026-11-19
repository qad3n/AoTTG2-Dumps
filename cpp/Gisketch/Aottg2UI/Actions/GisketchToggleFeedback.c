// Type: Gisketch.Aottg2UI.Actions.GisketchToggleFeedback
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchToggleFeedback.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback.<>c__DisplayClass17_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass17_0___ctor (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x53aa910

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass17_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass17_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback.<>c__DisplayClass17_0$$<RefreshSwitch>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass17_0___RefreshSwitch_b__0 (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass17_0_o* __this, float value, const MethodInfo* method);
// 0x53aaa20

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass17_0___RefreshSwitch_b__0
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass17_0_o *__this,float value,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  UnityEngine_Vector2_Fields UVar5;
  UnityEngine_Vector2_Fields UVar6;
  Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *pGVar11;
  UnityEngine_UI_Image_o *pUVar12;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value_00;
  float fVar13;
  float fVar14;
  UnityEngine_Color_o UVar15;
  
  pGVar11 = (__this->fields).__4__this;
  if ((pGVar11 != (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0) &&
     (pUVar12 = (pGVar11->fields)._switchTrack, pUVar12 != (UnityEngine_UI_Image_o *)0x0)) {
    uVar1 = (__this->fields).startColor.fields.r;
    uVar7 = (__this->fields).startColor.fields.g;
    uVar2 = (__this->fields).startColor.fields.b;
    uVar8 = (__this->fields).startColor.fields.a;
    uVar3 = (__this->fields).targetColor.fields.r;
    uVar9 = (__this->fields).targetColor.fields.g;
    uVar4 = (__this->fields).targetColor.fields.b;
    uVar10 = (__this->fields).targetColor.fields.a;
    UVar15.fields.b = ((float)uVar4 - (float)uVar2) * value + (float)uVar2;
    UVar15.fields.a = ((float)uVar10 - (float)uVar8) * value + (float)uVar8;
    UVar15.fields.r = ((float)uVar3 - (float)uVar1) * value + (float)uVar1;
    UVar15.fields.g = ((float)uVar9 - (float)uVar7) * value + (float)uVar7;
    (*(pUVar12->klass->vtable)._23_set_color.methodPtr)
              (pUVar12,UVar15,(pUVar12->klass->vtable)._23_set_color.method);
    pGVar11 = (__this->fields).__4__this;
    if ((pGVar11 != (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0) &&
       (__this_00 = (pGVar11->fields)._switchThumb, __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar5 = (__this->fields).startPosition.fields;
      UVar6 = (__this->fields).targetPosition.fields;
      fVar13 = UVar5.x;
      fVar14 = UVar5.y;
      value_00.fields.x = (UVar6.x - fVar13) * value + fVar13;
      value_00.fields.y = (UVar6.y - fVar14) * value + fVar14;
      UnityEngine_RectTransform__set_anchoredPosition(__this_00,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__Setup (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, UnityEngine_UI_Toggle_o* toggle, TMPro_TextMeshProUGUI_o* label, UnityEngine_UI_Image_o* switchTrack, UnityEngine_RectTransform_o* switchThumb, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x53a9e40

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__Setup
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,UnityEngine_UI_Toggle_o *toggle,
               TMPro_TextMeshProUGUI_o *label,UnityEngine_UI_Image_o *switchTrack,
               UnityEngine_RectTransform_o *switchThumb,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
               MethodInfo *method)

{
  UnityEngine_UI_Toggle_o **targetAddress;
  UnityEngine_UI_Toggle_o *pUVar1;
  UnityEngine_Events_UnityEvent_bool__o *__this_00;
  bool bVar2;
  UnityEngine_Events_UnityAction_T0__o *call;
  int32_t iVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542c03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_OnValueChanged);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener);
    Il2CppMethodInitialized_07542c03 = '\x01';
  }
  targetAddress = &(__this->fields)._toggle;
  (__this->fields)._toggle = toggle;
  Il2CppCodeGenWriteBarrier(targetAddress);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label);
  (__this->fields)._switchTrack = switchTrack;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._switchTrack);
  (__this->fields)._switchThumb = switchThumb;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._switchThumb);
  (__this->fields)._theme = theme;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._theme);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  iVar3 = 400;
  if (bVar2) {
    if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto label_053a9fc4;
    iVar3 = (label->fields).m_fontWeight;
  }
  (__this->fields)._normalWeight = iVar3;
  pUVar1 = (__this->fields)._toggle;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if (bVar2) {
    pUVar1 = *targetAddress;
    if (pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
      __this_00 = (UnityEngine_Events_UnityEvent_bool__o *)(pUVar1->fields).onValueChanged;
      call = (UnityEngine_Events_UnityAction_T0__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_bool);
      UnityEngine_Events_UnityAction_bool____ctor
                ((UnityEngine_Events_UnityAction_bool__o *)call,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_OnValueChanged,
                 (MethodInfo_4311710 *)0x0);
      if (__this_00 != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
        UnityEngine_Events_UnityEvent_bool___AddListener
                  (__this_00,call,
                   (MethodInfo_43179D0 *)MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener);
        method_00 = extraout_RDX_00;
        goto label_053a9fac;
      }
    }
label_053a9fc4:
    ThrowNullReferenceException();
  }
label_053a9fac:
  Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshSwitch(__this,false,method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$RefreshValue
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshValue (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, bool animate, const MethodInfo* method);
// 0x53aa3c0

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshValue
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,bool animate,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  int32_t value;
  
  Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshSwitch(__this,animate,method);
  if (Il2CppMethodInitialized_07542c05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542c05 = '\x01';
  }
  pTVar1 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pTVar1 = (__this->fields)._label;
  value = 700;
  if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
    value = (__this->fields)._normalWeight;
  }
  if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
    ThrowNullReferenceException();
  }
  TMPro_TMP_Text__set_fontWeight((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnValueChanged
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnValueChanged (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, bool __, const MethodInfo* method);
// 0x53aa4e0

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnValueChanged
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,bool __,MethodInfo *method)

{
  MethodInfo *method_00;
  undefined7 in_register_00000031;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)CONCAT71(in_register_00000031,__);
  if (Il2CppMethodInitialized_07542c04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Il2CppMethodInitialized_07542c04 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(0,method_01);
  Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshSwitch(__this,true,method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x53aa6d0

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  int32_t value;
  
  (__this->fields)._hovered = true;
  if (Il2CppMethodInitialized_07542c05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542c05 = '\x01';
  }
  pTVar1 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pTVar1 = (__this->fields)._label;
  value = 700;
  if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
    value = (__this->fields)._normalWeight;
  }
  if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
    ThrowNullReferenceException();
  }
  TMPro_TMP_Text__set_fontWeight((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnPointerExit (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x53aa760

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnPointerExit
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  int32_t value;
  
  (__this->fields)._hovered = false;
  if (Il2CppMethodInitialized_07542c05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542c05 = '\x01';
  }
  pTVar1 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pTVar1 = (__this->fields)._label;
  value = 700;
  if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
    value = (__this->fields)._normalWeight;
  }
  if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
    ThrowNullReferenceException();
  }
  TMPro_TMP_Text__set_fontWeight((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnSelect (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x53aa7f0

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnSelect
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  int32_t value;
  
  (__this->fields)._selected = true;
  if (Il2CppMethodInitialized_07542c05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542c05 = '\x01';
  }
  pTVar1 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pTVar1 = (__this->fields)._label;
  value = 700;
  if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
    value = (__this->fields)._normalWeight;
  }
  if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
    ThrowNullReferenceException();
  }
  TMPro_TMP_Text__set_fontWeight((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnDeselect (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x53aa880

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnDeselect
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  int32_t value;
  
  (__this->fields)._selected = false;
  if (Il2CppMethodInitialized_07542c05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542c05 = '\x01';
  }
  pTVar1 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pTVar1 = (__this->fields)._label;
  value = 700;
  if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
    value = (__this->fields)._normalWeight;
  }
  if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
    ThrowNullReferenceException();
  }
  TMPro_TMP_Text__set_fontWeight((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__Refresh (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, const MethodInfo* method);
// 0x53aa450

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__Refresh
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  int32_t value;
  
  if (Il2CppMethodInitialized_07542c05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542c05 = '\x01';
  }
  pTVar1 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pTVar1 = (__this->fields)._label;
  value = 700;
  if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
    value = (__this->fields)._normalWeight;
  }
  if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
    ThrowNullReferenceException();
  }
  TMPro_TMP_Text__set_fontWeight((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$RefreshSwitch
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshSwitch (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, bool animate, const MethodInfo* method);
// 0x53a9fd0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53aa291: movss dword ptr [rsp + 0xc], xmm1
// asm:   0x53aa297: jmp 0x53aa307

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshSwitch
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,bool animate,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_Toggle_o *pUVar3;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  DG_Tweening_Tween_o *pDVar4;
  UnityEngine_Vector2_Fields UVar5;
  bool bVar6;
  Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass17_0_o *__this_01;
  System_String_o **ppSVar7;
  Gisketch_Aottg2UI_Tweening_GisketchMotion_StaticFields *pGVar8;
  DG_Tweening_TweenCallback_float__o *__this_02;
  DG_Tweening_Tweener_o *pDVar9;
  MethodInfo *method_00;
  DG_Tweening_Tween_o **targetAddress;
  float fVar10;
  UnityEngine_Color_Fields UVar11;
  UnityEngine_Color_o fallback;
  float local_2c;
  
  if (Il2CppMethodInitialized_07542c06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_c__DisplayClass17_0_RefreshSwitch_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_c__DisplayClass17_0);
    il2cpp_codegen_initialize_runtime_metadata(&"primary");
    il2cpp_codegen_initialize_runtime_metadata(&"engravedBg");
    Il2CppMethodInitialized_07542c06 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_c__DisplayClass17_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 == (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass17_0_o *)0x0) {
label_053aa3ba:
    ThrowNullReferenceException();
  }
  (__this_01->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
  pUVar1 = (__this->fields)._switchTrack;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    pUVar2 = (__this->fields)._switchThumb;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((!bVar6) && ((__this->fields)._theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
      pUVar3 = (__this->fields)._toggle;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar6) {
        pUVar3 = (__this->fields)._toggle;
        if ((pUVar3 != (UnityEngine_UI_Toggle_o *)0x0) &&
           (__this_00 = (__this->fields)._theme, __this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0
           )) {
          if ((pUVar3->fields).m_IsOn == false) {
            ppSVar7 = &"engravedBg";
          }
          else {
            ppSVar7 = &"primary";
          }
          fallback.fields.b = 1.0;
          fallback.fields.a = 1.0;
          fallback.fields.r = 1.0;
          fallback.fields.g = 1.0;
          UVar11 = (UnityEngine_Color_Fields)
                   Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                             (__this_00,*ppSVar7,fallback,(MethodInfo *)0x0);
          (__this_01->fields).targetColor.fields = UVar11;
          pUVar3 = (__this->fields)._toggle;
          if (pUVar3 != (UnityEngine_UI_Toggle_o *)0x0) {
            UVar5 = (UnityEngine_Vector2_Fields)
                    Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__SwitchThumbPosition
                              (__this,(pUVar3->fields).m_IsOn,method_00);
            (__this_01->fields).targetPosition.fields = UVar5;
            if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
            }
            bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
            pDVar4 = (__this->fields)._switchTween;
            if ((!bVar6) || (!animate)) {
              if (pDVar4 != (DG_Tweening_Tween_o *)0x0) {
                DG_Tweening_TweenExtensions__Kill(pDVar4,false,(MethodInfo *)0x0);
              }
              pUVar1 = (__this->fields)._switchTrack;
              if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                          (pUVar1,(UnityEngine_Color_o)(__this_01->fields).targetColor.fields,
                           (pUVar1->klass->vtable)._23_set_color.method);
                pUVar2 = (__this->fields)._switchThumb;
                if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchoredPosition
                            (pUVar2,(UnityEngine_Vector2_o)(__this_01->fields).targetPosition.fields,
                             (MethodInfo *)0x0);
                  return;
                }
              }
            }
            else {
              if (pDVar4 != (DG_Tweening_Tween_o *)0x0) {
                DG_Tweening_TweenExtensions__Kill(pDVar4,false,(MethodInfo *)0x0);
              }
              pUVar1 = (__this->fields)._switchTrack;
              if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                UVar11 = (UnityEngine_Color_Fields)
                         (*(pUVar1->klass->vtable)._22_get_color.methodPtr)
                                   (pUVar1,(pUVar1->klass->vtable)._22_get_color.method);
                (__this_01->fields).startColor.fields = UVar11;
                pUVar2 = (__this->fields)._switchThumb;
                if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                  UVar5 = (UnityEngine_Vector2_Fields)
                          UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
                  (__this_01->fields).startPosition.fields = UVar5;
                  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0
                     ) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                  }
                  targetAddress = &(__this->fields)._switchTween;
                  pGVar8 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields;
                  if (pGVar8->Enabled == false) {
                    local_2c = 0.01;
                  }
                  else {
                    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor ==
                        0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                      pGVar8 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields;
                    }
                    fVar10 = pGVar8->DurationScale * 0.12;
                    local_2c = 0.01;
                    if (0.01 <= fVar10) {
                      local_2c = fVar10;
                    }
                  }
                  __this_02 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
                  DG_Tweening_TweenCallback_float____ctor
                            (__this_02,(Il2CppObject *)__this_01,
                             (intptr_t)
                             MethodInfo_Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_c__DisplayClass17_0_RefreshSwitch_b__0
                             ,(MethodInfo_4293C90 *)0x0);
                  pDVar9 = DG_Tweening_DOVirtual__Float(0.0,1.0,local_2c,__this_02,(MethodInfo *)0x0);
                  pDVar9 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                     ((Il2CppObject *)pDVar9,9,
                                      (MethodInfo_36B0160 *)
                                      MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
                  pDVar9 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                     ((Il2CppObject *)pDVar9,true,
                                      (MethodInfo_36B08F0 *)
                                      MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
                  *targetAddress = (DG_Tweening_Tween_o *)pDVar9;
                  Il2CppCodeGenWriteBarrier(targetAddress);
                  pDVar4 = *targetAddress;
                  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).
                      cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
                  }
                  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar4,false,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        goto label_053aa3ba;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$SwitchThumbPosition
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__SwitchThumbPosition (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, bool on, const MethodInfo* method);
// 0x53aa920

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__SwitchThumbPosition
          (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,bool on,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_RectTransform_o *pUVar4;
  float fVar5;
  float fVar6;
  float fStack_34;
  float local_28;
  
  pUVar1 = (__this->fields)._switchTrack;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
    pUVar4 = UnityEngine_UI_Graphic__get_rectTransform((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      UVar2 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._switchThumb;
      if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
        UVar3 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
        fStack_34 = UVar2.fields.y;
        fVar6 = (fStack_34 - UVar3.fields.y) * 0.5;
        fVar5 = 0.0;
        if (0.0 <= fVar6) {
          fVar5 = fVar6;
        }
        if (!on) {
label_053aa9cb:
          UVar2.fields.y = 0.0;
          UVar2.fields.x = fVar5;
          return (UnityEngine_Vector2_o)UVar2.fields;
        }
        pUVar1 = (__this->fields)._switchTrack;
        if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
          pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
            UVar2 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
            pUVar4 = (__this->fields)._switchThumb;
            if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
              UVar3 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
              local_28 = UVar2.fields.x;
              fVar5 = (local_28 - UVar3.fields.x) - fVar5;
              goto label_053aa9cb;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, const MethodInfo* method);
// 0x53aa9e0

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnDestroy
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields)._switchTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  UnityEngine_EventSystems_UIBehaviour__OnDestroy
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___ctor (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, const MethodInfo* method);
// 0x53aaa10

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___ctor
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_EventSystems_UIBehaviour___ctor
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


