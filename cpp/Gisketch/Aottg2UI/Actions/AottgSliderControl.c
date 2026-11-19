// Type: Gisketch.Aottg2UI.Actions.AottgSliderControl
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgSliderControl.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgSliderControl$$get_Value
// il2cpp: float Gisketch_Aottg2UI_Actions_AottgSliderControl__get_Value (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, const MethodInfo* method);
// 0x539b730

float Gisketch_Aottg2UI_Actions_AottgSliderControl__get_Value
                (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,MethodInfo *method)

{
  return (__this->fields)._Value_k__BackingField;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$set_Value
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__set_Value (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, float value, const MethodInfo* method);
// 0x539b740

void Gisketch_Aottg2UI_Actions_AottgSliderControl__set_Value
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._Value_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__Setup (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_RectTransform_o* track, UnityEngine_RectTransform_o* fill, UnityEngine_RectTransform_o* thumb, UnityEngine_RectTransform_o* thumbFace, TMPro_TextMeshProUGUI_o* label, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o* actions, UnityEngine_GameObject_o* target, float railHeight, const MethodInfo* method);
// 0x539b750

void Gisketch_Aottg2UI_Actions_AottgSliderControl__Setup
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,UnityEngine_RectTransform_o *track,
               UnityEngine_RectTransform_o *fill,UnityEngine_RectTransform_o *thumb,
               UnityEngine_RectTransform_o *thumbFace,TMPro_TextMeshProUGUI_o *label,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions,UnityEngine_GameObject_o *target,
               float railHeight,MethodInfo *method)

{
  System_String_o *s;
  bool bVar1;
  undefined8 in_RAX;
  System_Globalization_CultureInfo_o *provider;
  MethodInfo *method_00;
  float fVar2;
  undefined8 local_38;
  
  local_38._4_4_ = (float)((ulong)in_RAX >> 0x20);
  local_38._0_4_ = railHeight;
  if (Il2CppMethodInitialized_07542b75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault_719b178);
    Il2CppMethodInitialized_07542b75 = '\x01';
  }
  (__this->fields)._track = track;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._track);
  (__this->fields)._fill = fill;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._fill);
  (__this->fields)._thumb = thumb;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._thumb);
  (__this->fields)._thumbFace = thumbFace;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._thumbFace);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label);
  (__this->fields)._node = node;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._node);
  (__this->fields)._actions = actions;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._actions);
  (__this->fields)._target = target;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._target);
  (__this->fields)._railHeight = (float)local_38;
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar2 = System_Nullable_float___GetValueOrDefault_3cda300
                    (&(node->fields).min,0.0,
                     (MethodInfo_3CDA300 *)MethodInfo_System_Nullable_float_GetValueOrDefault_719b178);
  (__this->fields)._min = fVar2;
  fVar2 = System_Nullable_float___GetValueOrDefault_3cda300
                    (&(node->fields).max,1.0,
                     (MethodInfo_3CDA300 *)MethodInfo_System_Nullable_float_GetValueOrDefault_719b178);
  (__this->fields)._max = fVar2;
  (__this->fields)._lastVisualTrackWidth = -1.0;
  s = (node->fields).value;
  local_38 = CONCAT44(local_38._4_4_,(__this->fields)._min);
  if (Il2CppMethodInitialized_07542b7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_07542b7e = '\x01';
  }
  local_38 = local_38 & 0xffffffff;
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  method_00 = (MethodInfo *)((long)&local_38 + 4);
  bVar1 = System_Single__TryParse_54d11a0
                    (s,0xa7,(System_IFormatProvider_o *)provider,(float *)method_00,(MethodInfo *)0x0);
  if (bVar1) {
    fVar2 = local_38._4_4_;
  }
  else {
    fVar2 = (float)local_38;
  }
  Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue(__this,fVar2,false,0,method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__LateUpdate (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, const MethodInfo* method);
// 0x539bbf0

void Gisketch_Aottg2UI_Actions_AottgSliderControl__LateUpdate
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgSliderControl__RefreshVisualsForLayout(__this,method);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$RefreshVisualsForLayout
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__RefreshVisualsForLayout (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, const MethodInfo* method);
// 0x539bc00
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x539bc8f: xorps xmm0, xmm0
// asm:   0x539bc92: ucomiss xmm0, xmm1
// asm:   0x539bc95: jb 0x539bcb5
// asm:   0x539bc97: jmp 0x539bd44

void Gisketch_Aottg2UI_Actions_AottgSliderControl__RefreshVisualsForLayout
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_RectTransform_o *pUVar2;
  bool bVar3;
  MethodInfo *method_00;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  
  if (Il2CppMethodInitialized_07542b76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542b76 = '\x01';
  }
  pUVar2 = (__this->fields)._track;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._track;
    if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)0x0;
    UVar8 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    fVar4 = UVar8.fields.m_Width;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (0.0 < fVar4) {
      fVar1 = (__this->fields)._lastVisualTrackWidth;
      if (Il2CppMethodInitialized_0753e7b4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
        Il2CppMethodInitialized_0753e7b4 = '\x01';
      }
      fVar6 = ABS(fVar1);
      fVar5 = ABS(fVar4);
      if (ABS(fVar4) <= fVar6) {
        fVar5 = fVar6;
      }
      fVar7 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
      fVar6 = fVar5 * 1e-06;
      if (fVar5 * 1e-06 <= fVar7) {
        fVar6 = fVar7;
      }
      if (fVar6 <= ABS(fVar1 - fVar4)) {
        Gisketch_Aottg2UI_Actions_AottgSliderControl__RefreshVisuals(__this,method_00);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$SetNormalizedValue
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetNormalizedValue (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, float normalized, bool notify, const MethodInfo* method);
// 0x539c160

void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetNormalizedValue
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,float normalized,bool notify,
               MethodInfo *method)

{
  float fVar1;
  MethodInfo *in_RCX;
  float fVar2;
  float fVar3;
  
  fVar1 = (__this->fields)._min;
  fVar2 = 1.0;
  if (normalized <= 1.0) {
    fVar2 = normalized;
  }
  fVar2 = (float)(-(uint)(0.0 <= normalized) & (uint)fVar2);
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar2;
  }
  Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue
            (__this,((__this->fields)._max - fVar1) * fVar3 + fVar1,notify,0,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$SetValueWithoutNotify
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValueWithoutNotify (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, float value, const MethodInfo* method);
// 0x539c1b0

void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValueWithoutNotify
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,float value,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue(__this,value,false,0,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnPointerDown (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x539c1c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x539c2c1: jmp 0x539c267

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnPointerDown
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields *pGVar1;
  System_Action_o *pSVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542b77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Il2CppMethodInitialized_07542b77 = '\x01';
  }
  UnityEngine_UI_Selectable__OnPointerDown((UnityEngine_UI_Selectable_o *)__this,eventData,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07542bac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542bac = '\x01';
  }
  if (Il2CppMethodInitialized_07542884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542884 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
  if (pGVar1->_Mode_k__BackingField != 0) {
    if (Il2CppMethodInitialized_07542bea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542bea = '\x01';
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
      pGVar1->_Mode_k__BackingField = 0;
      pSVar2 = pGVar1->Changed;
    }
    else {
      pGVar1->_Mode_k__BackingField = 0;
      pSVar2 = pGVar1->Changed;
    }
    if (pSVar2 != (System_Action_o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code);
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Actions_AottgSliderControl__SetFromPointer(__this,eventData,method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnBeginDrag
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnBeginDrag (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x539c510
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x539c5e8: jmp 0x539c58e

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnBeginDrag
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields *pGVar1;
  System_Action_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  
  if (Il2CppMethodInitialized_07542bac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542bac = '\x01';
    method = extraout_RDX;
  }
  if (Il2CppMethodInitialized_07542884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542884 = '\x01';
    method = extraout_RDX_00;
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
  if (pGVar1->_Mode_k__BackingField != 0) {
    if (Il2CppMethodInitialized_07542bea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542bea = '\x01';
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
      pGVar1->_Mode_k__BackingField = 0;
      pSVar2 = pGVar1->Changed;
      method = extraout_RDX_02;
    }
    else {
      pGVar1->_Mode_k__BackingField = 0;
      pSVar2 = pGVar1->Changed;
    }
    if (pSVar2 != (System_Action_o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
      method = extraout_RDX_01;
    }
  }
  Gisketch_Aottg2UI_Actions_AottgSliderControl__SetFromPointer(__this,eventData,method);
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    return;
  }
  (*(eventData->klass->vtable)._5_Use.methodPtr)(eventData,(eventData->klass->vtable)._5_Use.method);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnDrag
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnDrag (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x539c5f0

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnDrag
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgSliderControl__SetFromPointer(__this,eventData,method);
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    return;
  }
  (*(eventData->klass->vtable)._5_Use.methodPtr)(eventData,(eventData->klass->vtable)._5_Use.method);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnEndDrag
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnEndDrag (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x539c620

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnEndDrag
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    return;
  }
  (*(eventData->klass->vtable)._5_Use.methodPtr)(eventData,(eventData->klass->vtable)._5_Use.method);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnPointerUp
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnPointerUp (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x539c640

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnPointerUp
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07542b78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Il2CppMethodInitialized_07542b78 = '\x01';
  }
  UnityEngine_UI_Selectable__OnPointerUp((UnityEngine_UI_Selectable_o *)__this,eventData,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnMove
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnMove (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_AxisEventData_o* eventData, const MethodInfo* method);
// 0x539c6a0

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnMove
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_AxisEventData_o *eventData,MethodInfo *method)

{
  System_Action_o *pSVar1;
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields *pGVar2;
  MethodInfo *in_RCX;
  float fVar3;
  
  if (Il2CppMethodInitialized_07542b79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Il2CppMethodInitialized_07542b79 = '\x01';
  }
  if (eventData == (UnityEngine_EventSystems_AxisEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((eventData->fields)._moveDir_k__BackingField & 0xfffffffdU) != 0) {
    UnityEngine_UI_Selectable__OnMove((UnityEngine_UI_Selectable_o *)__this,eventData,(MethodInfo *)0x0);
    return;
  }
  if (Il2CppMethodInitialized_07542bac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542bac = '\x01';
  }
  if (Il2CppMethodInitialized_07542884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542884 = '\x01';
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
  if (pGVar2->_Mode_k__BackingField != 1) {
    if (Il2CppMethodInitialized_07542bea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542bea = '\x01';
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
    }
    pGVar2->_Mode_k__BackingField = 1;
    pSVar1 = pGVar2->Changed;
    if (pSVar1 != (System_Action_o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
    }
  }
  fVar3 = ((__this->fields)._max - (__this->fields)._min) * 0.05;
  if ((eventData->fields)._moveDir_k__BackingField != 2) {
    fVar3 = -fVar3;
  }
  Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue
            (__this,fVar3 + (__this->fields)._Value_k__BackingField,true,2,in_RCX);
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(0,(MethodInfo *)0x0);
  (*(eventData->klass->vtable)._5_Use.methodPtr)(eventData,(eventData->klass->vtable)._5_Use.method);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnSubmit (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x539c800

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnSubmit
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields *pGVar1;
  System_Action_o *pSVar2;
  
  if (Il2CppMethodInitialized_07542bac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542bac = '\x01';
  }
  if (Il2CppMethodInitialized_07542884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542884 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
  if (pGVar1->_Mode_k__BackingField != 1) {
    if (Il2CppMethodInitialized_07542bea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542bea = '\x01';
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
      pGVar1->_Mode_k__BackingField = 1;
      pSVar2 = pGVar1->Changed;
    }
    else {
      pGVar1->_Mode_k__BackingField = 1;
      pSVar2 = pGVar1->Changed;
    }
    if (pSVar2 != (System_Action_o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$SetFromPointer
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetFromPointer (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x539c2d0

void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetFromPointer
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Vector2_o UVar2;
  bool bVar3;
  UnityEngine_Camera_o *cam;
  MethodInfo *method_00;
  float fVar4;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar5;
  float fVar6;
  UnityEngine_Rect_o UVar7;
  UnityEngine_Vector2_Fields local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  if (Il2CppMethodInitialized_07542b7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542b7a = '\x01';
  }
  local_50.x = 0.0;
  local_50.y = 0.0;
  pUVar1 = (__this->fields)._track;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) || (bVar3)) {
    return;
  }
  pUVar1 = (__this->fields)._track;
  local_48._8_8_ = 0;
  local_48._0_8_ = (eventData->fields)._position_k__BackingField.fields;
  cam = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
  }
  method_00 = (MethodInfo *)0x0;
  UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
            (pUVar1,(UnityEngine_Vector2_o)local_48._0_8_,cam,(UnityEngine_Vector2_o *)&local_50,
             (MethodInfo *)0x0);
  pUVar1 = (__this->fields)._track;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar7 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    local_48._8_4_ = in_XMM1_Dc;
    local_48._0_8_ = UVar7.fields._8_8_;
    local_48._12_4_ = in_XMM1_Dd;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    pUVar1 = (__this->fields)._track;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar2 = UnityEngine_RectTransform__get_pivot(pUVar1,(MethodInfo *)0x0);
      local_38._8_4_ = extraout_XMM0_Dc;
      local_38._0_4_ = UVar2.fields.x;
      local_38._4_4_ = UVar2.fields.y;
      local_38._12_4_ = extraout_XMM0_Dd;
      if (Il2CppMethodInitialized_07542b7d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_07542b7d = '\x01';
      }
      pUVar1 = (__this->fields)._thumbFace;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        pUVar1 = (__this->fields)._thumbFace;
        if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_0539c509;
        UVar2 = UnityEngine_RectTransform__get_sizeDelta(pUVar1,(MethodInfo *)0x0);
        fVar4 = UVar2.fields.x * 0.5;
      }
      else {
        fVar4 = 12.0;
      }
      fVar6 = 0.0;
      if (fVar4 + fVar4 < (float)local_48._0_4_) {
        fVar5 = (float)local_48._0_4_ - fVar4;
        fVar6 = 0.0;
        if ((fVar4 != fVar5) || (NAN(fVar4) || NAN(fVar5))) {
          fVar4 = (((float)local_48._0_4_ * (float)local_38._0_4_ + local_50.x) - fVar4) / (fVar5 - fVar4);
          fVar6 = 1.0;
          if (fVar4 <= 1.0) {
            fVar6 = fVar4;
          }
          fVar6 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar6);
        }
      }
      fVar4 = (__this->fields)._min;
      fVar5 = 0.0;
      if (0.0 <= fVar6) {
        fVar5 = fVar6;
      }
      Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue
                (__this,((__this->fields)._max - fVar4) * fVar5 + fVar4,true,1,method_00);
      return;
    }
  }
label_0539c509:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$SetValue
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, float value, bool notify, int32_t source, const MethodInfo* method);
// 0x539b9e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x539bae4: jmp 0x539bbdc

void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,float value,bool notify,int32_t source,
               MethodInfo *method)

{
  float fVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Il2CppObject *obj;
  System_String_o *actionId;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context;
  bool bVar5;
  System_Globalization_CultureInfo_o *provider;
  MethodInfo *method_00;
  VirtualInvokeData *pVVar6;
  ulong uVar7;
  undefined7 in_register_00000031;
  long lVar8;
  float fVar9;
  float fVar10;
  float local_7c;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_78;
  float local_58;
  System_String_o *local_48;
  UnityEngine_GameObject_o *pUStack_40;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *local_38;
  int32_t iStack_30;
  undefined4 uStack_2c;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000031,notify);
  if (g_data_07542b7b == '\0') {
    local_58 = value;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    g_data_07542b7b = '\x01';
    value = local_58;
  }
  local_7c = 0.0;
  fVar9 = (__this->fields)._min;
  fVar1 = (__this->fields)._max;
  fVar10 = fVar9;
  if (fVar1 <= fVar9) {
    fVar10 = fVar1;
  }
  if (fVar9 <= fVar1) {
    fVar9 = fVar1;
  }
  if (value <= fVar9) {
    fVar9 = value;
  }
  fVar9 = (float)(~-(uint)(fVar10 <= value) & (uint)fVar10 | (uint)fVar9 & -(uint)(fVar10 <= value));
  (__this->fields)._Value_k__BackingField = fVar9;
  pGVar2 = (__this->fields)._node;
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    local_7c = fVar9;
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    method_00 = (MethodInfo *)
                System_Single__ToString_54d09f0
                          (&local_7c,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
    (pGVar2->fields).value = (System_String_o *)method_00;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).value);
  }
  Gisketch_Aottg2UI_Actions_AottgSliderControl__RefreshVisuals(__this,method_00);
  if (notify) {
    pGVar2 = (__this->fields)._node;
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      bVar5 = System_String__IsNullOrEmpty((System_String_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        return;
      }
    }
    else {
      bVar5 = System_String__IsNullOrEmpty((pGVar2->fields).action,(MethodInfo *)0x0);
      if (bVar5) {
        return;
      }
    }
    obj = (Il2CppObject *)(__this->fields)._actions;
    if (obj != (Il2CppObject *)0x0) {
      pGVar2 = (__this->fields)._node;
      if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        ThrowNullReferenceException();
      }
      actionId = (pGVar2->fields).action;
      local_78.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      local_78.fields.InputSource = 0;
      local_78.fields._28_4_ = 0;
      local_78.fields.ElementId = (System_String_o *)0x0;
      local_78.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
      Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_52ab380
                (&local_78,(pGVar2->fields).id,(__this->fields)._target,pGVar2,source,(MethodInfo *)0x0);
      local_38 = local_78.fields.Node;
      iStack_30 = local_78.fields.InputSource;
      uStack_2c = local_78.fields._28_4_;
      local_48 = local_78.fields.ElementId;
      pUStack_40 = local_78.fields.GameObject;
      pIVar3 = obj->klass;
      uVar7 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar7 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(Gisketch_Aottg2UI_Actions_IGisketchActionHandler_c **)((long)&pIVar4->interfaceType + lVar8)
              == TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler) {
            pVVar6 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar8);
            goto label_0539bbbd;
          }
          lVar8 = lVar8 + 0x10;
        } while (uVar7 * 0x10 != lVar8);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler,0);
label_0539bbbd:
      context.fields.GameObject = pUStack_40;
      context.fields.ElementId = local_48;
      context.fields.Node = local_38;
      context.fields.InputSource = iStack_30;
      context.fields._28_4_ = uStack_2c;
      (*pVVar6->methodPtr)(obj,actionId,context,pVVar6->method);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$RefreshVisuals
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__RefreshVisuals (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, const MethodInfo* method);
// 0x539bd60
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x539bfb9: xorps xmm0, xmm0
// asm:   0x539bfbc: ucomiss xmm0, xmm1
// asm:   0x539bfbf: jb 0x539bfe1
// asm:   0x539bfc1: jmp 0x539c144

void Gisketch_Aottg2UI_Actions_AottgSliderControl__RefreshVisuals
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_RectTransform_o *pUVar2;
  bool bVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  double dVar5;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector2_o value;
  undefined1 auVar7 [12];
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Rect_o UVar13;
  int32_t local_5c;
  undefined1 local_58 [8];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  double local_30;
  Il2CppMethodPointer local_28;
  
  if (Il2CppMethodInitialized_07542b7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&"%");
    Il2CppMethodInitialized_07542b7c = '\x01';
  }
  local_5c = 0;
  fVar11 = (__this->fields)._min;
  fVar8 = (__this->fields)._max;
  if ((fVar11 != fVar8) || (NAN(fVar11) || NAN(fVar8))) {
    fVar11 = ((__this->fields)._Value_k__BackingField - fVar11) / (fVar8 - fVar11);
    auVar7 = ZEXT812(0x3f800000);
    if (fVar11 <= auVar7._0_4_) {
      auVar7._4_8_ = auVar7._4_8_;
      auVar7._0_4_ = fVar11;
    }
    local_48 = ZEXT416(-(uint)(0.0 <= fVar11) & auVar7._0_4_);
  }
  else {
    local_48 = ZEXT816(0);
  }
  uVar10 = 0;
  uVar9 = 0;
  pTVar1 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pTVar1 = (__this->fields)._label;
    if (Il2CppMethodInitialized_07541320 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_07541320 = '\x01';
    }
    local_58._0_4_ = (float)local_48._0_4_ * 100.0;
    fVar11 = (float)local_48._0_4_ * 100.0;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      fVar11 = (float)local_58._0_4_;
    }
    local_30 = (double)fVar11;
    method_01 = (MethodInfo *)&local_28;
    dVar5 = modf(local_30,(double *)method_01,method_00);
    uVar9 = 0;
    uVar10 = 0;
    if (0.0 <= (float)local_58._0_4_) {
      if ((dVar5 != 0.5) || (NAN(dVar5))) {
        local_28 = (Il2CppMethodPointer)floor(local_30 + 0.5,method_01);
      }
      else if (((long)(double)local_28 & 1U) != 0) {
        local_28 = (Il2CppMethodPointer)((double)local_28 + 1.0);
      }
    }
    else if ((dVar5 != -0.5) || (NAN(dVar5))) {
      local_28 = (Il2CppMethodPointer)ceil(local_30 + -0.5,method_01);
    }
    else if (((long)(double)local_28 & 1U) != 0) {
      local_28 = (Il2CppMethodPointer)((double)local_28 + -1.0);
    }
    local_5c = (int32_t)(double)local_28;
    pSVar4 = System_Int32__ToString(&local_5c,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_52f0320(pSVar4,"%",(MethodInfo *)0x0);
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0539c150;
    (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
              (pTVar1,pSVar4,(pTVar1->klass->vtable)._66_set_text.method);
  }
  pUVar2 = (__this->fields)._track;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pUVar2 = (__this->fields)._track;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UVar13 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    local_58._0_4_ = UVar13.fields.m_Width;
    local_58._4_4_ = UVar13.fields.m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      uStack_50 = uVar9;
      local_58 = (undefined1  [8])UVar13.fields._8_8_;
      uStack_4c = uVar10;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      uVar9 = uStack_50;
      uVar10 = uStack_4c;
    }
    if ((float)local_58._0_4_ <= 0.0) {
      return;
    }
    uStack_50 = uVar9;
    uStack_4c = uVar10;
    (__this->fields)._lastVisualTrackWidth = (float)local_58._0_4_;
    if (Il2CppMethodInitialized_07542b7d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07542b7d = '\x01';
    }
    pUVar2 = (__this->fields)._thumbFace;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar2 = (__this->fields)._thumbFace;
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_0539c150;
      UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
      fVar11 = UVar6.fields.x * 0.5;
    }
    else {
      fVar11 = 12.0;
    }
    pUVar2 = (__this->fields)._thumb;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      fVar8 = fVar11;
      if (fVar11 <= (float)local_58._0_4_ - fVar11) {
        fVar8 = (float)local_58._0_4_ - fVar11;
      }
      fVar12 = 0.0;
      if (0.0 <= (float)local_48._0_4_) {
        fVar12 = (float)local_48._0_4_;
      }
      fVar11 = (fVar8 - fVar11) * fVar12 + fVar11;
      local_48 = ZEXT416((uint)fVar11);
      UVar6.fields.y = 0.0;
      UVar6.fields.x = fVar11;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar2,UVar6,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._fill;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchorMin
                  (pUVar2,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._fill;
        if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMax
                    (pUVar2,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
          pUVar2 = (__this->fields)._fill;
          if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_offsetMin
                      (pUVar2,(UnityEngine_Vector2_o)
                              ((ulong)(uint)((__this->fields)._railHeight * -0.5) << 0x20),(MethodInfo *)0x0);
            pUVar2 = (__this->fields)._fill;
            if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
              value.fields.y = (__this->fields)._railHeight * 0.5;
              value.fields.x = (float)local_48._0_4_;
              UnityEngine_RectTransform__set_offsetMax(pUVar2,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_0539c150:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$ThumbWidth
// il2cpp: float Gisketch_Aottg2UI_Actions_AottgSliderControl__ThumbWidth (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, const MethodInfo* method);
// 0x539c8b0

float Gisketch_Aottg2UI_Actions_AottgSliderControl__ThumbWidth
                (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  UnityEngine_Vector2_o UVar3;
  
  if (Il2CppMethodInitialized_07542b7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b7d = '\x01';
  }
  pUVar1 = (__this->fields)._thumbFace;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._thumbFace;
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UVar3 = UnityEngine_RectTransform__get_sizeDelta(pUVar1,(MethodInfo *)0x0);
    return UVar3.fields.x;
  }
  return 24.0;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$ParseFloat
// il2cpp: float Gisketch_Aottg2UI_Actions_AottgSliderControl__ParseFloat (System_String_o* value, float fallback, const MethodInfo* method);
// 0x539b950

float Gisketch_Aottg2UI_Actions_AottgSliderControl__ParseFloat
                (System_String_o *value,float fallback,MethodInfo *method)

{
  bool bVar1;
  System_Globalization_CultureInfo_o *provider;
  float local_10;
  float local_c;
  
  local_c = fallback;
  if (Il2CppMethodInitialized_07542b7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_07542b7e = '\x01';
  }
  local_10 = 0.0;
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar1 = System_Single__TryParse_54d11a0
                    (value,0xa7,(System_IFormatProvider_o *)provider,&local_10,(MethodInfo *)0x0);
  if (bVar1) {
    return local_10;
  }
  return local_c;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl___ctor (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, const MethodInfo* method);
// 0x539c940

void Gisketch_Aottg2UI_Actions_AottgSliderControl___ctor
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07542b7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_Selectable);
    Il2CppMethodInitialized_07542b7f = '\x01';
  }
  (__this->fields)._lastVisualTrackWidth = -1.0;
  if ((TypeInfo_UnityEngine_UI_Selectable->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_Selectable);
    UnityEngine_UI_Selectable___ctor((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_UI_Selectable___ctor((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
  return;
}


