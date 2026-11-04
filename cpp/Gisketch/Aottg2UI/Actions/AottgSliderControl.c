// Type: Gisketch.Aottg2UI.Actions.AottgSliderControl
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgSliderControl.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgSliderControl$$get_Value
// il2cpp: float Gisketch_Aottg2UI_Actions_AottgSliderControl__get_Value (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, const MethodInfo* method);
// 0x1818fb090

float Gisketch_Aottg2UI_Actions_AottgSliderControl__get_Value
                (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,MethodInfo *method)

{
  return (__this->fields)._Value_k__BackingField;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$set_Value
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__set_Value (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, float value, const MethodInfo* method);
// 0x1818fb0a0

void Gisketch_Aottg2UI_Actions_AottgSliderControl__set_Value
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._Value_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__Setup (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_RectTransform_o* track, UnityEngine_RectTransform_o* fill, UnityEngine_RectTransform_o* thumb, UnityEngine_RectTransform_o* thumbFace, TMPro_TextMeshProUGUI_o* label, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o* actions, UnityEngine_GameObject_o* target, float railHeight, const MethodInfo* method);
// 0x1818fad70

void Gisketch_Aottg2UI_Actions_AottgSliderControl__Setup
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,UnityEngine_RectTransform_o *track,
               UnityEngine_RectTransform_o *fill,UnityEngine_RectTransform_o *thumb,
               UnityEngine_RectTransform_o *thumbFace,TMPro_TextMeshProUGUI_o *label,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions,UnityEngine_GameObject_o *target,
               float railHeight,MethodInfo *method)

{
  System_String_o *s;
  System_Globalization_CultureInfo_o *provider;
  bool bVar1;
  float fVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843421f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault_40c2078);
    Il2CppMethodInitialized_1843421f6 = '\x01';
  }
  (__this->fields)._track = track;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._track,track);
  (__this->fields)._fill = fill;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._fill,fill);
  (__this->fields)._thumb = thumb;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._thumb,thumb);
  (__this->fields)._thumbFace = thumbFace;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._thumbFace,thumbFace);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label,label);
  (__this->fields)._node = node;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._node,node);
  (__this->fields)._actions = actions;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._actions,actions);
  (__this->fields)._target = target;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._target,target);
  (__this->fields)._railHeight = railHeight;
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    fVar2 = System_Nullable_float___GetValueOrDefault_adc4c0
                      (&(node->fields).min,0.0,
                       (MethodInfo_ADC4C0 *)MethodInfo_System_Nullable_float_GetValueOrDefault_40c2078);
    (__this->fields)._min = fVar2;
    fVar3 = System_Nullable_float___GetValueOrDefault_adc4c0
                      (&(node->fields).max,1.0,
                       (MethodInfo_ADC4C0 *)MethodInfo_System_Nullable_float_GetValueOrDefault_40c2078);
    bVar1 = Il2CppMethodInitialized_1843421ff == '\0';
    fVar2 = (__this->fields)._min;
    (__this->fields)._max = fVar3;
    (__this->fields)._lastVisualTrackWidth = -1.0;
    s = (node->fields).value;
    if (bVar1) {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
      Il2CppMethodInitialized_1843421ff = '\x01';
    }
    railHeight = 0.0;
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    bVar1 = System_Single__TryParse_1b4a540
                      (s,0xa7,(System_IFormatProvider_o *)provider,&railHeight,(MethodInfo *)0x0);
    if (bVar1) {
      fVar2 = railHeight;
    }
    Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue(__this,fVar2,false,0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__LateUpdate (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, const MethodInfo* method);
// 0x1818fa090
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818fa159: movaps xmm6, xmmword ptr [rsp + 0x30]

void
Gisketch_Aottg2UI_Actions_AottgSliderControl__LateUpdate(Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, MethodInfo* method)

{
  float fVar1;
  UnityEngine_RectTransform_o *pUVar2;
  bool bVar3;
  char cVar4;
  UnityEngine_Rect_o *pUVar5;
  UnityEngine_Rect_o local_28 [2];
  
  if (Il2CppMethodInitialized_1843421f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_1843421f7 = '\x01';
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
    pUVar5 = UnityEngine_RectTransform__get_rect(local_28,pUVar2,(MethodInfo *)0x0);
    fVar1 = (pUVar5->fields).m_Width;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if ((0.0 < fVar1) &&
       (cVar4 = il2cpp_runtime_helper_180562af0(fVar1,(__this->fields)._lastVisualTrackWidth,0), cVar4 == '\0')) {
      Gisketch_Aottg2UI_Actions_AottgSliderControl__RefreshVisuals(__this,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$RefreshVisualsForLayout
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__RefreshVisualsForLayout (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, const MethodInfo* method);
// 0x1818fa090
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818fa159: movaps xmm6, xmmword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_Actions_AottgSliderControl__RefreshVisualsForLayout
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_RectTransform_o *pUVar2;
  bool bVar3;
  char cVar4;
  UnityEngine_Rect_o *pUVar5;
  UnityEngine_Rect_o local_28 [2];
  
  if (Il2CppMethodInitialized_1843421f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_1843421f7 = '\x01';
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
    pUVar5 = UnityEngine_RectTransform__get_rect(local_28,pUVar2,(MethodInfo *)0x0);
    fVar1 = (pUVar5->fields).m_Width;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if ((0.0 < fVar1) &&
       (cVar4 = il2cpp_runtime_helper_180562af0(fVar1,(__this->fields)._lastVisualTrackWidth,0), cVar4 == '\0')) {
      Gisketch_Aottg2UI_Actions_AottgSliderControl__RefreshVisuals(__this,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$SetNormalizedValue
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetNormalizedValue (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, float normalized, bool notify, const MethodInfo* method);
// 0x1818faae0

void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetNormalizedValue
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,float normalized,bool notify,
               MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (__this->fields)._min;
  if (normalized < 0.0) {
    normalized = 0.0;
  }
  else if (1.0 < normalized) {
    normalized = 1.0;
  }
  if (normalized < 0.0) {
    normalized = 0.0;
  }
  else if (1.0 < normalized) {
    normalized = 1.0;
  }
  Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue
            (__this,((__this->fields)._max - fVar1) * normalized + fVar1,notify,0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$SetValueWithoutNotify
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValueWithoutNotify (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, float value, const MethodInfo* method);
// 0x1818fab50

void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValueWithoutNotify
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue(__this,value,false,0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnPointerDown (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818fa320

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnPointerDown
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843421f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Il2CppMethodInitialized_1843421f8 = '\x01';
  }
  UnityEngine_UI_Selectable__OnPointerDown((UnityEngine_UI_Selectable_o *)__this,eventData,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Actions_AottgSliderControl__SetFromPointer(__this,eventData,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnBeginDrag
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnBeginDrag (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818fa170

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnBeginDrag
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Actions_AottgSliderControl__SetFromPointer(__this,eventData,(MethodInfo *)0x0);
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    (*(eventData->klass->vtable)._5_Use.methodPtr)(eventData,(eventData->klass->vtable)._5_Use.method);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnDrag
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnDrag (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818fa1c0

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnDrag
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgSliderControl__SetFromPointer(__this,eventData,(MethodInfo *)0x0);
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    (*(eventData->klass->vtable)._5_Use.methodPtr)(eventData,(eventData->klass->vtable)._5_Use.method);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnEndDrag
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnEndDrag (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818fa200

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnEndDrag
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    (*(eventData->klass->vtable)._5_Use.methodPtr)(eventData,(eventData->klass->vtable)._5_Use.method);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnPointerUp
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnPointerUp (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818fa3a0

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnPointerUp
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843421f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Il2CppMethodInitialized_1843421f9 = '\x01';
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
// 0x1818fa220

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnMove
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_AxisEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_1843421fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Il2CppMethodInitialized_1843421fa = '\x01';
  }
  if (eventData != (UnityEngine_EventSystems_AxisEventData_o *)0x0) {
    if (((eventData->fields)._moveDir_k__BackingField != 0) &&
       ((eventData->fields)._moveDir_k__BackingField != 2)) {
      UnityEngine_UI_Selectable__OnMove((UnityEngine_UI_Selectable_o *)__this,eventData,(MethodInfo *)0x0);
      return;
    }
    Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(1,(MethodInfo *)0x0);
    if ((eventData->fields)._moveDir_k__BackingField == 2) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = -1.0;
    }
    Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue
              (__this,((__this->fields)._max - (__this->fields)._min) * 0.05 * fVar1 +
                      (__this->fields)._Value_k__BackingField,true,2,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(0,(MethodInfo *)0x0);
    (*(eventData->klass->vtable)._5_Use.methodPtr)(eventData,(eventData->klass->vtable)._5_Use.method);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnSubmit (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1818fa410

void
Gisketch_Aottg2UI_Actions_AottgSliderControl__OnSubmit(Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, MethodInfo* method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$SetFromPointer
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetFromPointer (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818fa8c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818faa6a: xorps xmm0, xmm0

void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetFromPointer
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Vector2_Fields screenPoint;
  bool bVar2;
  UnityEngine_Camera_o *cam;
  UnityEngine_Rect_o *pUVar3;
  UnityEngine_Vector2_o UVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector2_Fields local_res8;
  UnityEngine_Rect_o local_38 [3];
  
  if (Il2CppMethodInitialized_1843421fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_1843421fb = '\x01';
  }
  pUVar1 = (__this->fields)._track;
  local_res8.x = 0.0;
  local_res8.y = 0.0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    return;
  }
  pUVar1 = (__this->fields)._track;
  screenPoint = (eventData->fields)._position_k__BackingField.fields;
  cam = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
  }
  UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
            (pUVar1,(UnityEngine_Vector2_o)screenPoint,cam,(UnityEngine_Vector2_o *)&local_res8,
             (MethodInfo *)0x0);
  pUVar1 = (__this->fields)._track;
  if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) {
label_1818faad6:
    ThrowNullReferenceException();
  }
  pUVar3 = UnityEngine_RectTransform__get_rect(local_38,pUVar1,(MethodInfo *)0x0);
  fVar6 = (pUVar3->fields).m_Width;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  pUVar1 = (__this->fields)._track;
  if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_1818faad6;
  UVar4 = UnityEngine_RectTransform__get_pivot(pUVar1,(MethodInfo *)0x0);
  fVar5 = Gisketch_Aottg2UI_Actions_AottgSliderControl__ThumbWidth(__this,(MethodInfo *)0x0);
  fVar5 = fVar5 * 0.5;
  if (fVar5 + fVar5 < fVar6) {
    if ((fVar5 != fVar6 - fVar5) &&
       (fVar6 = ((local_res8.x - -fVar6 * UVar4.fields.x) - fVar5) / ((fVar6 - fVar5) - fVar5), 0.0 <= fVar6))
    {
      if (1.0 < fVar6) {
        fVar6 = 1.0;
      }
      goto label_1818faa70;
    }
  }
  fVar6 = 0.0;
label_1818faa70:
  fVar5 = (__this->fields)._min;
  if (fVar6 < 0.0) {
    fVar6 = 0.0;
  }
  else if (1.0 < fVar6) {
    fVar6 = 1.0;
  }
  Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue
            (__this,((__this->fields)._max - fVar5) * fVar6 + fVar5,true,1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$SetValue
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, float value, bool notify, int32_t source, const MethodInfo* method);
// 0x1818fab70

void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,float value,bool notify,int32_t source,
               MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *pGVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar8;
  float fVar9;
  float local_res10 [2];
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_58;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int32_t iStack_20;
  undefined4 uStack_1c;
  
  if (Il2CppMethodInitialized_1843421fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    Il2CppMethodInitialized_1843421fc = '\x01';
  }
  fVar9 = (__this->fields)._max;
  pfVar1 = &(__this->fields)._min;
  lVar7 = 0x144;
  local_res10[0] = 0.0;
  if (*pfVar1 <= fVar9 && fVar9 != *pfVar1) {
    lVar7 = 0x140;
  }
  fVar9 = *(float *)((longlong)&__this->klass + lVar7);
  fVar2 = (__this->fields)._min;
  pfVar1 = &(__this->fields)._max;
  uVar5 = 0x144;
  if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
    uVar5 = 0x140;
  }
  if ((fVar9 <= value) && (fVar9 = *(float *)((longlong)&__this->klass + (ulonglong)uVar5), value <= fVar9)) {
    fVar9 = value;
  }
  (__this->fields)._Value_k__BackingField = fVar9;
  if ((__this->fields)._node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pGVar3 = (__this->fields)._node;
    local_res10[0] = fVar9;
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pSVar8 = System_Single__ToString_1b49fe0
                       (local_res10,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
    (pGVar3->fields).value = pSVar8;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).value,pSVar8);
  }
  Gisketch_Aottg2UI_Actions_AottgSliderControl__RefreshVisuals(__this,(MethodInfo *)0x0);
  if (notify) {
    if ((__this->fields)._node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      pSVar8 = (System_String_o *)0x0;
    }
    else {
      pSVar8 = (((__this->fields)._node)->fields).action;
    }
    bVar6 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
    if ((!bVar6) && ((__this->fields)._actions != (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0))
    {
      pGVar3 = (__this->fields)._node;
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        pSVar8 = (pGVar3->fields).action;
        pGVar4 = (__this->fields)._actions;
        local_58.fields.ElementId = (System_String_o *)0x0;
        local_58.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
        local_58.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        local_58.fields.InputSource = 0;
        local_58.fields._28_4_ = 0;
        Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_190b9a0
                  (&local_58,(pGVar3->fields).id,(__this->fields)._target,pGVar3,source,(MethodInfo *)0x0);
        if (pGVar4 != (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0) {
          local_38 = local_58.fields.ElementId._0_4_;
          uStack_34 = local_58.fields.ElementId._4_4_;
          uStack_30 = local_58.fields.GameObject._0_4_;
          uStack_2c = local_58.fields.GameObject._4_4_;
          local_28 = local_58.fields.Node._0_4_;
          uStack_24 = local_58.fields.Node._4_4_;
          iStack_20 = local_58.fields.InputSource;
          uStack_1c = local_58.fields._28_4_;
          il2cpp_runtime_helper_18022f820(0,TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler,pGVar4,pSVar8,&local_38);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$RefreshVisuals
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__RefreshVisuals (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, const MethodInfo* method);
// 0x1818fa4c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818fa54a: xorps xmm7, xmm7

void Gisketch_Aottg2UI_Actions_AottgSliderControl__RefreshVisuals
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,MethodInfo *method)

{
  float fVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Vector2_o value;
  double dVar4;
  UnityEngine_Vector2_o value_00;
  double x;
  bool bVar5;
  System_String_o *pSVar6;
  UnityEngine_Rect_o *pUVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar8;
  float fVar9;
  float fVar10;
  int32_t local_res8 [2];
  Il2CppMethodPointer local_res18;
  UnityEngine_Rect_o local_78 [7];
  
  if (Il2CppMethodInitialized_1843421fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&"%");
    Il2CppMethodInitialized_1843421fd = '\x01';
  }
  fVar9 = (__this->fields)._min;
  fVar1 = (__this->fields)._max;
  local_res8[0] = 0;
  if ((fVar9 == fVar1) ||
     (fVar9 = ((__this->fields)._Value_k__BackingField - fVar9) / (fVar1 - fVar9), fVar9 < 0.0)) {
    fVar9 = 0.0;
  }
  else if (1.0 < fVar9) {
    fVar9 = 1.0;
  }
  pTVar2 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_01 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pTVar2 = (__this->fields)._label;
    if (Il2CppMethodInitialized_184340a0c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_184340a0c = '\x01';
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    x = (double)(fVar9 * 100.0);
    method_00 = (MethodInfo *)&local_res18;
    if (x < 0.0) {
      dVar4 = il2cpp_runtime_helper_1804f3b80(x,(double *)method_00,method_01);
      if (dVar4 == -0.5) {
        if (((longlong)(double)local_res18 & 1U) != 0) {
          local_res18 = (Il2CppMethodPointer)((double)local_res18 - 1.0);
        }
      }
      else {
        local_res18 = (Il2CppMethodPointer)il2cpp_runtime_helper_1804f45c0(x - 0.5,method_00);
      }
    }
    else {
      dVar4 = il2cpp_runtime_helper_1804f3b80(x,(double *)method_00,method_01);
      if (dVar4 == 0.5) {
        if (((longlong)(double)local_res18 & 1U) != 0) {
          local_res18 = (Il2CppMethodPointer)((double)local_res18 + 1.0);
        }
      }
      else {
        local_res18 = (Il2CppMethodPointer)il2cpp_runtime_helper_1804f4690(x + 0.5,method_00);
      }
    }
    local_res8[0] = (int32_t)(double)local_res18;
    pSVar6 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    pSVar6 = System_String__Concat_1969e50(pSVar6,"%",(MethodInfo *)0x0);
    if (pTVar2 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818fa8b9;
    (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
              (pTVar2,pSVar6,(pTVar2->klass->vtable)._66_set_text.method);
  }
  pUVar3 = (__this->fields)._track;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    return;
  }
  pUVar3 = (__this->fields)._track;
  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar7 = UnityEngine_RectTransform__get_rect(local_78,pUVar3,(MethodInfo *)0x0);
    fVar1 = (pUVar7->fields).m_Width;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (fVar1 <= 0.0) {
      return;
    }
    (__this->fields)._lastVisualTrackWidth = fVar1;
    fVar8 = Gisketch_Aottg2UI_Actions_AottgSliderControl__ThumbWidth(__this,(MethodInfo *)0x0);
    fVar8 = fVar8 * 0.5;
    fVar10 = fVar8;
    if (fVar8 <= fVar1 - fVar8) {
      fVar10 = fVar1 - fVar8;
    }
    if (fVar9 < 0.0) {
      fVar9 = 0.0;
    }
    else if (1.0 < fVar9) {
      fVar9 = 1.0;
    }
    pUVar3 = (__this->fields)._thumb;
    fVar8 = (fVar10 - fVar8) * fVar9 + fVar8;
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      value.fields.y = 0.0;
      value.fields.x = fVar8;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar3,value,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._fill;
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchorMin
                  (pUVar3,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._fill;
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMax
                    (pUVar3,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._fill;
          if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_offsetMin
                      (pUVar3,(UnityEngine_Vector2_o)
                              ((ulonglong)(uint)(-(__this->fields)._railHeight * 0.5) << 0x20),
                       (MethodInfo *)0x0);
            pUVar3 = (__this->fields)._fill;
            if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
              value_00.fields.y = (__this->fields)._railHeight * 0.5;
              value_00.fields.x = fVar8;
              UnityEngine_RectTransform__set_offsetMax(pUVar3,value_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_1818fa8b9:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$ThumbWidth
// il2cpp: float Gisketch_Aottg2UI_Actions_AottgSliderControl__ThumbWidth (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, const MethodInfo* method);
// 0x1818faf90

float Gisketch_Aottg2UI_Actions_AottgSliderControl__ThumbWidth
                (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  UnityEngine_Vector2_o UVar3;
  
  if (Il2CppMethodInitialized_1843421fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421fe = '\x01';
  }
  pUVar1 = (__this->fields)._thumbFace;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._thumbFace;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = UnityEngine_RectTransform__get_sizeDelta(pUVar1,(MethodInfo *)0x0);
      return UVar3.fields.x;
    }
    ThrowNullReferenceException();
  }
  return 24.0;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$ParseFloat
// il2cpp: float Gisketch_Aottg2UI_Actions_AottgSliderControl__ParseFloat (System_String_o* value, float fallback, const MethodInfo* method);
// 0x1818fa420

float Gisketch_Aottg2UI_Actions_AottgSliderControl__ParseFloat
                (System_String_o *value,float fallback,MethodInfo *method)

{
  bool bVar1;
  System_Globalization_CultureInfo_o *provider;
  float local_res8 [8];
  
  if (Il2CppMethodInitialized_1843421ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_1843421ff = '\x01';
  }
  local_res8[0] = 0.0;
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar1 = System_Single__TryParse_1b4a540
                    (value,0xa7,(System_IFormatProvider_o *)provider,local_res8,(MethodInfo *)0x0);
  if (bVar1) {
    return local_res8[0];
  }
  return fallback;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl___ctor (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, const MethodInfo* method);
// 0x1818fb030

void Gisketch_Aottg2UI_Actions_AottgSliderControl___ctor
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184342200 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_Selectable);
    Il2CppMethodInitialized_184342200 = '\x01';
  }
  (__this->fields)._lastVisualTrackWidth = -1.0;
  if ((TypeInfo_UnityEngine_UI_Selectable->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_Selectable);
  }
  UnityEngine_UI_Selectable___ctor((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
  return;
}


