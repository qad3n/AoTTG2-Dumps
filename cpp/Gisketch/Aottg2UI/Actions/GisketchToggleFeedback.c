// Type: Gisketch.Aottg2UI.Actions.GisketchToggleFeedback
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchToggleFeedback.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback.<>c__DisplayClass17_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass17_0___ctor (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass17_0___ctor(Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass17_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback.<>c__DisplayClass17_0$$<RefreshSwitch>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass17_0___RefreshSwitch_b__0 (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass17_0_o* __this, float value, const MethodInfo* method);
// 0x1819104b0

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass17_0___RefreshSwitch_b__0
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass17_0_o *__this,float value,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *pGVar3;
  UnityEngine_UI_Image_o *pUVar4;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Color_o local_28 [2];
  
  pGVar3 = (__this->fields).__4__this;
  if (pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0) {
    fVar1 = (__this->fields).startColor.fields.r;
    fVar2 = (__this->fields).startColor.fields.g;
    pUVar4 = (pGVar3->fields)._switchTrack;
    if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
      local_28[0].fields.r = ((__this->fields).targetColor.fields.r - fVar1) * value + fVar1;
      local_28[0].fields.b =
           ((__this->fields).targetColor.fields.b - (__this->fields).startColor.fields.b) * value +
           (__this->fields).startColor.fields.b;
      local_28[0].fields.a =
           ((__this->fields).targetColor.fields.a - (__this->fields).startColor.fields.a) * value +
           (__this->fields).startColor.fields.a;
      local_28[0].fields.g = ((__this->fields).targetColor.fields.g - fVar2) * value + fVar2;
      (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                (pUVar4,local_28,(pUVar4->klass->vtable)._23_set_color.method);
      pGVar3 = (__this->fields).__4__this;
      if (pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0) {
        fVar1 = (__this->fields).startPosition.fields.x;
        fVar2 = (__this->fields).startPosition.fields.y;
        __this_00 = (pGVar3->fields)._switchThumb;
        if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
          value_00.fields.y = ((__this->fields).targetPosition.fields.y - fVar2) * value + fVar2;
          value_00.fields.x = ((__this->fields).targetPosition.fields.x - fVar1) * value + fVar1;
          UnityEngine_RectTransform__set_anchoredPosition(__this_00,value_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__Setup (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, UnityEngine_UI_Toggle_o* toggle, TMPro_TextMeshProUGUI_o* label, UnityEngine_UI_Image_o* switchTrack, UnityEngine_RectTransform_o* switchThumb, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x18190f7b0

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__Setup
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,UnityEngine_UI_Toggle_o *toggle,
               TMPro_TextMeshProUGUI_o *label,UnityEngine_UI_Image_o *switchTrack,
               UnityEngine_RectTransform_o *switchThumb,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
               MethodInfo *method)

{
  UnityEngine_UI_Toggle_o *pUVar1;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_00;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *__this_01;
  
  if (Il2CppMethodInitialized_184342284 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_OnValueChanged);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener);
    Il2CppMethodInitialized_184342284 = '\x01';
  }
  (__this->fields)._toggle = toggle;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._toggle,toggle);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label,label);
  (__this->fields)._switchTrack = switchTrack;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._switchTrack,switchTrack);
  (__this->fields)._switchThumb = switchThumb;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._switchThumb,switchThumb);
  (__this->fields)._theme = theme;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._theme,theme);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto label_18190f922;
    iVar3 = (label->fields).m_fontWeight;
  }
  else {
    iVar3 = 400;
  }
  (__this->fields)._normalWeight = iVar3;
  pUVar1 = (__this->fields)._toggle;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._toggle;
    if (pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
      __this_00 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pUVar1->fields).onValueChanged;
      __this_01 = (UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_bool);
      UnityEngine_Events_UnityAction_bool____ctor
                (__this_01,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_OnValueChanged,
                 (MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
        UnityEngine_Events_UnityEvent_Vector2___AddListener
                  (__this_00,(UnityEngine_Events_UnityAction_T0__o *)__this_01,
                   (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener);
        goto label_18190f90d;
      }
    }
label_18190f922:
    ThrowNullReferenceException();
  }
label_18190f90d:
  Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshSwitch(__this,false,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$RefreshValue
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshValue (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, bool animate, const MethodInfo* method);
// 0x18190f700

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshValue
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,bool animate,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshSwitch(__this,animate,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnValueChanged
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnValueChanged (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, bool __, const MethodInfo* method);
// 0x18190f020

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnValueChanged
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,bool __,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_AudioClip_o *clip;
  UnityEngine_AudioSource_o *__this_00;
  
  if (Il2CppMethodInitialized_184342285 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Il2CppMethodInitialized_184342285 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  if (Il2CppMethodInitialized_184342289 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342289 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    iVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_lastFrame;
    iVar3 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    if (iVar1 == iVar3) {
      if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
      }
      if (TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_lastKind == 0)
      goto label_18190f1c4;
    }
  }
  iVar3 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_lastFrame = iVar3;
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_lastKind = 0;
  clip = Gisketch_Aottg2UI_Actions_GisketchUiSounds__Clip(0,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)clip,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    __this_00 = Gisketch_Aottg2UI_Actions_GisketchUiSounds__Source((MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_AudioSource_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_AudioSource__PlayOneShot_2eb41e0(__this_00,clip,0.6,(MethodInfo *)0x0);
  }
label_18190f1c4:
  Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshSwitch(__this,true,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x18190ee70

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  int32_t value;
  bool bVar2;
  
  bVar2 = Il2CppMethodInitialized_184342286 == '\0';
  (__this->fields)._hovered = true;
  if (bVar2) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342286 = '\x01';
  }
  pTVar1 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._label;
    if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
      value = (__this->fields)._normalWeight;
    }
    else {
      value = 700;
    }
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
      ThrowNullReferenceException();
    }
    TMPro_TMP_Text__set_fontWeight((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnPointerExit (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x18190ef00

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnPointerExit
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  int32_t value;
  bool bVar2;
  
  bVar2 = Il2CppMethodInitialized_184342286 == '\0';
  (__this->fields)._hovered = false;
  if (bVar2) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342286 = '\x01';
  }
  pTVar1 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._label;
    if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
      value = (__this->fields)._normalWeight;
    }
    else {
      value = 700;
    }
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
      ThrowNullReferenceException();
    }
    TMPro_TMP_Text__set_fontWeight((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnSelect (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x18190ef90

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnSelect
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  int32_t value;
  bool bVar2;
  
  bVar2 = Il2CppMethodInitialized_184342286 == '\0';
  (__this->fields)._selected = true;
  if (bVar2) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342286 = '\x01';
  }
  pTVar1 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._label;
    if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
      value = (__this->fields)._normalWeight;
    }
    else {
      value = 700;
    }
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
      ThrowNullReferenceException();
    }
    TMPro_TMP_Text__set_fontWeight((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnDeselect (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x18190edb0

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnDeselect
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  int32_t value;
  bool bVar2;
  
  bVar2 = Il2CppMethodInitialized_184342286 == '\0';
  (__this->fields)._selected = false;
  if (bVar2) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342286 = '\x01';
  }
  pTVar1 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._label;
    if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
      value = (__this->fields)._normalWeight;
    }
    else {
      value = 700;
    }
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
      ThrowNullReferenceException();
    }
    TMPro_TMP_Text__set_fontWeight((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__Refresh (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, const MethodInfo* method);
// 0x18190f720

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__Refresh
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  int32_t value;
  
  if (Il2CppMethodInitialized_184342286 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342286 = '\x01';
  }
  pTVar1 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._label;
    if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
      value = (__this->fields)._normalWeight;
    }
    else {
      value = 700;
    }
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
      ThrowNullReferenceException();
    }
    TMPro_TMP_Text__set_fontWeight((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$RefreshSwitch
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshSwitch (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, bool animate, const MethodInfo* method);
// 0x18190f1f0
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18190f4ae: movaps xmm7, xmm6
// asm:   0x18190f6cc: movss xmm0, dword ptr [rsi + 0x44]
// asm:   0x18190f6d1: xor r8d, r8d
// asm:   0x18190f6d4: movss xmm1, dword ptr [rsi + 0x40]
// asm:   0x18190f6d9: unpcklps xmm1, xmm0
// asm:   0x18190f6dc: movq rdx, xmm1
// asm:   0x18190f6e1: call 0x182f542e0  ; UnityEngine_RectTransform__set_anchoredPosition()
// asm:   0x18190f6e6: jmp 0x18190f65c

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshSwitch
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,bool animate,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_UI_Toggle_o *pUVar2;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  DG_Tweening_Tween_o *pDVar3;
  float fVar4;
  undefined4 uVar5;
  int32_t iVar6;
  undefined4 uVar7;
  bool bVar8;
  Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass17_0_o *object;
  UnityEngine_Color_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  UnityEngine_Vector2_o UVar11;
  UnityEngine_Vector2_o UVar12;
  Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *pUVar13;
  DG_Tweening_TweenCallback_float__o *__this_01;
  DG_Tweening_Tweener_o *pDVar14;
  System_String_o *token;
  float fVar15;
  float fVar16;
  float fStackX_24;
  UnityEngine_Vector2_Fields local_58;
  undefined8 uStack_50;
  UnityEngine_Color_o local_48 [4];
  
  if (Il2CppMethodInitialized_184342287 == '\0') {
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
    Il2CppMethodInitialized_184342287 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_c__DisplayClass17_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass17_0_o *)0x0)
  goto label_18190f6eb;
  (object->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
  pUVar1 = (__this->fields)._switchTrack;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar8) {
    pUVar10 = (__this->fields)._switchThumb;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((!bVar8) && ((__this->fields)._theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
      pUVar2 = (__this->fields)._toggle;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar8 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar8) {
        pUVar2 = (__this->fields)._toggle;
        if (pUVar2 != (UnityEngine_UI_Toggle_o *)0x0) {
          token = "engravedBg";
          if ((pUVar2->fields).m_IsOn != false) {
            token = "primary";
          }
          __this_00 = (__this->fields)._theme;
          if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
            local_58.x = 1.0;
            local_58.y = 1.0;
            uStack_50 = 0x3f8000003f800000;
            pUVar9 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                               (local_48,__this_00,token,(UnityEngine_Color_o *)&local_58,(MethodInfo *)0x0);
            fVar16 = (pUVar9->fields).g;
            fVar15 = (pUVar9->fields).b;
            fVar4 = (pUVar9->fields).a;
            (object->fields).targetColor.fields.r = (pUVar9->fields).r;
            (object->fields).targetColor.fields.g = fVar16;
            (object->fields).targetColor.fields.b = fVar15;
            (object->fields).targetColor.fields.a = fVar4;
            pUVar2 = (__this->fields)._toggle;
            if ((pUVar2 != (UnityEngine_UI_Toggle_o *)0x0) &&
               (pUVar1 = (__this->fields)._switchTrack, pUVar1 != (UnityEngine_UI_Image_o *)0x0)) {
              bVar8 = (pUVar2->fields).m_IsOn;
              pUVar10 = UnityEngine_UI_Graphic__get_rectTransform
                                  ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0);
              if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                UVar11 = UnityEngine_RectTransform__get_sizeDelta(pUVar10,(MethodInfo *)0x0);
                pUVar10 = (__this->fields)._switchThumb;
                if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                  local_58 = (UnityEngine_Vector2_Fields)
                             UnityEngine_RectTransform__get_sizeDelta(pUVar10,(MethodInfo *)0x0);
                  fStackX_24 = UVar11.fields.y;
                  fVar16 = (fStackX_24 - local_58.y) * 0.5;
                  if (fVar16 < 0.0) {
                    fVar16 = 0.0;
                  }
                  if (bVar8 != false) {
                    pUVar1 = (__this->fields)._switchTrack;
                    if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
                       (pUVar10 = UnityEngine_UI_Graphic__get_rectTransform
                                            ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0),
                       pUVar10 == (UnityEngine_RectTransform_o *)0x0)) goto label_18190f6eb;
                    UVar11 = UnityEngine_RectTransform__get_sizeDelta(pUVar10,(MethodInfo *)0x0);
                    pUVar10 = (__this->fields)._switchThumb;
                    if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto label_18190f6eb;
                    UVar12 = UnityEngine_RectTransform__get_sizeDelta(pUVar10,(MethodInfo *)0x0);
                    fVar16 = (UVar11.fields.x - UVar12.fields.x) - fVar16;
                  }
                  (object->fields).targetPosition.fields.x = fVar16;
                  (object->fields).targetPosition.fields.y = 0.0;
                  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
                  }
                  bVar8 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                  if ((bVar8) && (animate)) {
                    pDVar3 = (__this->fields)._switchTween;
                    if (pDVar3 != (DG_Tweening_Tween_o *)0x0) {
                      DG_Tweening_TweenExtensions__Kill(pDVar3,false,(MethodInfo *)0x0);
                    }
                    pUVar1 = (__this->fields)._switchTrack;
                    if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                      pUVar13 = (*(pUVar1->klass->vtable)._22_get_color.methodPtr)
                                          ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)
                                           local_48,pUVar1,(pUVar1->klass->vtable)._22_get_color.method);
                      uVar5 = *(undefined4 *)((longlong)&(pUVar13->fields).m_Ptr + 4);
                      iVar6 = (pUVar13->fields).m_Count;
                      uVar7 = *(undefined4 *)&(pUVar13->fields).field_0xc;
                      (object->fields).startColor.fields.r = (float)*(undefined4 *)&(pUVar13->fields).m_Ptr;
                      (object->fields).startColor.fields.g = (float)uVar5;
                      (object->fields).startColor.fields.b = (float)iVar6;
                      (object->fields).startColor.fields.a = (float)uVar7;
                      pUVar10 = (__this->fields)._switchThumb;
                      if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                        UVar11 = UnityEngine_RectTransform__get_anchoredPosition(pUVar10,(MethodInfo *)0x0);
                        (object->fields).startPosition.fields.x = UVar11.fields.x;
                        fStackX_24 = UVar11.fields.y;
                        (object->fields).startPosition.fields.y = fStackX_24;
                        if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).
                            cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init
                                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                        }
                        if (TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->Enabled ==
                            false) {
                          fVar16 = 0.01;
                        }
                        else {
                          if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).
                              cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                          }
                          fVar15 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->
                                   DurationScale * 0.12;
                          fVar16 = 0.01;
                          if (0.01 <= fVar15) {
                            fVar16 = fVar15;
                          }
                        }
                        __this_01 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
                        DG_Tweening_TweenCallback_float____ctor
                                  ((DG_Tweening_Core_DOSetter_float__o *)__this_01,(Il2CppObject *)object,
                                   (intptr_t)
                                   MethodInfo_Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_c__DisplayClass17_0_RefreshSwitch_b__0
                                   ,(MethodInfo_E5A750 *)0x0);
                        pDVar14 = DG_Tweening_DOVirtual__Float(0.0,1.0,fVar16,__this_01,(MethodInfo *)0x0);
                        pDVar14 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                            ((Il2CppObject *)pDVar14,9,
                                             (MethodInfo_7C9BC0 *)
                                             MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
                        pDVar14 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                            ((Il2CppObject *)pDVar14,true,
                                             (MethodInfo_7CA3D0 *)
                                             MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener)
                        ;
                        (__this->fields)._switchTween = (DG_Tweening_Tween_o *)pDVar14;
                        Il2CppCodeGenWriteBarrier(&(__this->fields)._switchTween,pDVar14);
                        pDVar3 = (__this->fields)._switchTween;
                        if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).
                            cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init
                                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
                        }
                        Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar3,false,(MethodInfo *)0x0)
                        ;
                        return;
                      }
                    }
                  }
                  else {
                    pDVar3 = (__this->fields)._switchTween;
                    if (pDVar3 != (DG_Tweening_Tween_o *)0x0) {
                      DG_Tweening_TweenExtensions__Kill(pDVar3,false,(MethodInfo *)0x0);
                    }
                    pUVar1 = (__this->fields)._switchTrack;
                    if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                      local_58.x = (object->fields).targetColor.fields.r;
                      local_58.y = (object->fields).targetColor.fields.g;
                      uStack_50._0_4_ = (object->fields).targetColor.fields.b;
                      uStack_50._4_4_ = (object->fields).targetColor.fields.a;
                      (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                                (pUVar1,(UnityEngine_Color_o *)&local_58,
                                 (pUVar1->klass->vtable)._23_set_color.method);
                      pUVar10 = (__this->fields)._switchThumb;
                      if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                        UnityEngine_RectTransform__set_anchoredPosition
                                  (pUVar10,(UnityEngine_Vector2_o)(object->fields).targetPosition.fields,
                                   (MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
label_18190f6eb:
        ThrowNullReferenceException();
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$SwitchThumbPosition
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__SwitchThumbPosition (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, bool on, const MethodInfo* method);
// 0x18190f930
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18190f9fc: movaps xmm6, xmm7

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__SwitchThumbPosition
          (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,bool on,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Vector2_o UVar4;
  float fVar5;
  float fVar6;
  float fStackX_c;
  float fStackX_24;
  UnityEngine_Vector2_Fields UVar7;
  
  pUVar1 = (__this->fields)._switchTrack;
  if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
     (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0)
     , pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar3 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._switchThumb;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UVar4 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
      fStackX_c = UVar3.fields.y;
      fStackX_24 = UVar4.fields.y;
      fVar5 = (fStackX_c - fStackX_24) * 0.5;
      fVar6 = 0.0;
      if (0.0 <= fVar5) {
        fVar6 = fVar5;
      }
      if (!on) {
label_18190f9ff:
        UVar7.y = 0.0;
        UVar7.x = fVar6;
        return (UnityEngine_Vector2_o)UVar7;
      }
      pUVar1 = (__this->fields)._switchTrack;
      if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
        UVar3 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._switchThumb;
        if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
          UVar4 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
          fVar6 = (UVar3.fields.x - UVar4.fields.x) - fVar6;
          goto label_18190f9ff;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, const MethodInfo* method);
// 0x18190ee40

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnDestroy
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields)._switchTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___ctor (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, const MethodInfo* method);
// 0x18190eda0

void
Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___ctor(Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, MethodInfo* method)

{
  UnityEngine_EventSystems_UIBehaviour___ctor((GetParentPosition_o *)__this,(MethodInfo *)0x0);
  return;
}


