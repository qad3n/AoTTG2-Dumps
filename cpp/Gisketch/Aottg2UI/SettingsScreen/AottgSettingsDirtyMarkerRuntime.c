// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsDirtyMarkerRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__RegisterFactory (const MethodInfo* method);
// 0x5e3b440

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__RegisterFactory(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_075485ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_Build);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgSettingsDirtyMarker");
    Il2CppMethodInitialized_075485ab = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_Build,
             (MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this,"AottgSettingsDirtyMarker",__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$Build
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__Build (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5e3b500

bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__Build
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o *__this;
  System_String_o *stateKey;
  Gisketch_Aottg2UI_State_GisketchUIState_o *state;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme;
  
  if (Il2CppMethodInitialized_075485ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgSettingsDirtyMarkerRuntime);
    Il2CppMethodInitialized_075485ac = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_AottgSettingsDirtyMarkerRuntime);
    if (context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
      theme = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0;
      state = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
    }
    else {
      theme = (context->fields).Theme;
      state = (context->fields).State;
    }
    if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      stateKey = (System_String_o *)0x0;
    }
    else {
      stateKey = (node->fields).value;
    }
    if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o *)0x0) {
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__Setup
                (__this,theme,state,stateKey,method);
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__Setup (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o* __this, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* stateKey, const MethodInfo* method);
// 0x5e3b590

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__Setup
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o *__this,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *stateKey,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o **targetAddress;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_CanvasGroup_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  System_Action_string__o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Color_o UVar5;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  undefined8 local_48;
  undefined8 local_38;
  
  if (Il2CppMethodInitialized_075485ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_OnStateChanged);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"dirty-dot");
    il2cpp_codegen_initialize_runtime_metadata(&"dirty-strip");
    il2cpp_codegen_initialize_runtime_metadata(&"settingsDirty");
    Il2CppMethodInitialized_075485ad = '\x01';
  }
  (__this->fields)._state = state;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._state);
  (__this->fields)._stateKey = stateKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stateKey);
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar2,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    targetAddress = &(__this->fields)._group;
    (__this->fields)._group = pUVar3;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar3 = (__this->fields)._group;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_05e3b817;
      pUVar3 = UnityEngine_GameObject__AddComponent_object_
                         (pUVar2,(MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
      *targetAddress = pUVar3;
      Il2CppCodeGenWriteBarrier(targetAddress);
    }
    if (*targetAddress != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_blocksRaycasts(*targetAddress,false,(MethodInfo *)0x0);
      if (*targetAddress != (UnityEngine_CanvasGroup_o *)0x0) {
        UnityEngine_CanvasGroup__set_interactable(*targetAddress,false,(MethodInfo *)0x0);
        if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          local_38 = 0x3f5c28f63df5c28f;
          local_48 = 0x3f28f5c33f800000;
        }
        else {
          UVar5.fields.b = (float)(int)g_data_01004fe0;
          UVar5.fields.a = (float)g_data_01004fe0._4_4_;
          UVar5.fields.r = 1.0;
          UVar5.fields.g = 0.66;
          UVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                            (theme,"settingsDirty",UVar5,(MethodInfo *)0x0);
          local_48 = UVar5.fields._0_8_;
          local_38 = UVar5.fields._8_8_;
        }
        pUVar4 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)__this,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform)
        ;
        (__this->fields)._rect = pUVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._rect);
        color.fields.b = (float)(undefined4)local_38;
        color.fields.a = (float)local_38._4_4_;
        color.fields.r = (float)(undefined4)local_48;
        color.fields.g = (float)local_48._4_4_;
        pUVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__CreateImage
                           (__this,"dirty-strip",color,method_00);
        (__this->fields)._strip = pUVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._strip);
        color_00.fields.b = (float)(undefined4)local_38;
        color_00.fields.a = (float)local_38._4_4_;
        color_00.fields.r = (float)(undefined4)local_48;
        color_00.fields.g = (float)local_48._4_4_;
        __this_01 = (System_Action_string__o *)
                    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__CreateImage
                              (__this,"dirty-dot",color_00,method_01);
        (__this->fields)._dot = (UnityEngine_RectTransform_o *)__this_01;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._dot);
        __this_00 = (__this->fields)._state;
        if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
          System_Action_object____ctor
                    ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_OnStateChanged
                     ,(MethodInfo_4A81BE0 *)0x0);
          Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(__this_00,__this_01,(MethodInfo *)0x0);
        }
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__Refresh
                  (__this,(MethodInfo *)__this_01);
        return;
      }
    }
  }
label_05e3b817:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__OnDestroy (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o* __this, const MethodInfo* method);
// 0x5e3bb90

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__OnDestroy
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_Action_string__o *__this_01;
  
  if (Il2CppMethodInitialized_075485ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_OnStateChanged);
    Il2CppMethodInitialized_075485ae = '\x01';
  }
  __this_00 = (__this->fields)._state;
  if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    return;
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_OnStateChanged,
             (MethodInfo_4A81BE0 *)0x0);
  Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$OnStateChanged
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__OnStateChanged (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o* __this, System_String_o* key, const MethodInfo* method);
// 0x5e3bc10
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e3bc29: mov rdi, rbx
// asm:   0x5e3bc2c: pop rbx
// asm:   0x5e3bc2d: jmp 0x5e3baf0  ; Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__Refresh()

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__OnStateChanged
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o *__this,
               System_String_o *key,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *pUVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool bVar2;
  float value;
  
  bVar2 = System_String__op_Equality(key,(__this->fields)._stateKey,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  if (Il2CppMethodInitialized_075485af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075485af = '\x01';
  }
  pUVar1 = (__this->fields)._group;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._group;
    __this_00 = (__this->fields)._state;
    if ((__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) ||
       (bVar2 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                          (__this_00,(__this->fields)._stateKey,false,(MethodInfo *)0x0), !bVar2)) {
      value = 0.0;
    }
    else {
      value = 1.0;
    }
    if (pUVar1 == (UnityEngine_CanvasGroup_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_CanvasGroup__set_alpha(pUVar1,value,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$Refresh
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__Refresh (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o* __this, const MethodInfo* method);
// 0x5e3baf0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__Refresh
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *pUVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool bVar2;
  float value;
  
  if (Il2CppMethodInitialized_075485af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075485af = '\x01';
  }
  pUVar1 = (__this->fields)._group;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pUVar1 = (__this->fields)._group;
  __this_00 = (__this->fields)._state;
  if ((__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) ||
     (bVar2 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                        (__this_00,(__this->fields)._stateKey,false,(MethodInfo *)0x0), !bVar2)) {
    value = 0.0;
  }
  else {
    value = 1.0;
  }
  if (pUVar1 == (UnityEngine_CanvasGroup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_CanvasGroup__set_alpha(pUVar1,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__LateUpdate (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o* __this, const MethodInfo* method);
// 0x5e3bc40

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__LateUpdate
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **targetAddress;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o *pUVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Rect_o UVar6;
  UnityEngine_Rect_o UVar7;
  UnityEngine_Vector3_o UVar8;
  float fStack_44;
  
  if (Il2CppMethodInitialized_075485b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_075485b0 = '\x01';
  }
  pUVar2 = (__this->fields)._rect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._rect;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    (__this->fields)._rect = pUVar2;
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
  pUVar2 = (__this->fields)._strip;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pUVar2 = (__this->fields)._dot;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pUVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__RowRect(__this,method_00);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_05e3bee1;
    pUVar3 = pUVar2;
  }
  else {
    pUVar3 = *targetAddress;
    if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_05e3bee1;
  }
  UVar6 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar4 = 0.0;
  if (bVar1) {
    if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_05e3bee1;
    pUVar3 = *targetAddress;
    UVar7 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    UVar8.fields.x = UVar7.fields.m_XMin + UVar7.fields.m_Width * 0.5;
    UVar8.fields.y = UVar7.fields.m_YMin + UVar7.fields.m_Height * 0.5;
    UVar8.fields.z = 0.0;
    UVar8 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)pUVar2,UVar8,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_05e3bee1;
    UVar8 = UnityEngine_Transform__InverseTransformPoint
                      ((UnityEngine_Transform_o *)pUVar3,UVar8,(MethodInfo *)0x0);
    fVar4 = UVar8.fields.y;
  }
  pUVar2 = (__this->fields)._strip;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    fStack_44 = UVar6.fields.m_Height;
    fVar5 = 1.0;
    if (1.0 <= fStack_44) {
      fVar5 = fStack_44;
    }
    value.fields.y = fVar5;
    value.fields.x = 3.0;
    UnityEngine_RectTransform__set_sizeDelta(pUVar2,value,(MethodInfo *)0x0);
    value_00.fields.y = fVar4;
    value_00.fields.x = -6.0;
    UnityEngine_RectTransform__set_anchoredPosition(pUVar2,value_00,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._dot;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_sizeDelta
                (pUVar2,(UnityEngine_Vector2_o)0x40e0000040e00000,(MethodInfo *)0x0);
      value_01.fields.y = fVar4;
      value_01.fields.x = 10.0;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar2,value_01,(MethodInfo *)0x0);
      return;
    }
  }
label_05e3bee1:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$RowRect
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__RowRect (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o* __this, const MethodInfo* method);
// 0x5e3bef0

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__RowRect
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  
  if (Il2CppMethodInitialized_075485b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_075485b1 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
label_05e3bf99:
    ThrowNullReferenceException();
  }
  pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar4 = (UnityEngine_RectTransform_o *)0x0;
  if (bVar1) {
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05e3bf99;
    pUVar3 = (UnityEngine_RectTransform_o *)UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_RectTransform_o *)0x0;
    if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar4 = (UnityEngine_RectTransform_o *)0x0, pUVar3->klass == TypeInfo_UnityEngine_RectTransform)) {
      pUVar4 = pUVar3;
    }
  }
  return pUVar4;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$CreateImage
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__CreateImage (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o* __this, System_String_o* name, UnityEngine_Color_o color, const MethodInfo* method);
// 0x5e3b820

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__CreateImage
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o *__this,System_String_o *name,
          UnityEngine_Color_o color,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *pUVar3;
  UnityEngine_RectTransform_o *__this_02;
  
  if (Il2CppMethodInitialized_075485b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_075485b2 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_05e3bad3:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) goto label_05e3badd;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_05e3badd;
    }
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      pSVar1 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
      if (pSVar1 != (System_Type_o *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar2 == (Il2CppObject *)0x0) {
label_05e3badd:
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar1;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_691aa60(__this_00,name,components,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_692d510(__this_01,parent,false,(MethodInfo *)0x0);
            pUVar3 = UnityEngine_GameObject__GetComponent_object_
                               (__this_00,
                                (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
            if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
              (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                        (pUVar3,color,(pUVar3->klass->vtable)._23_set_color.method);
              (*(pUVar3->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (pUVar3,false,(pUVar3->klass->vtable)._25_set_raycastTarget.method);
              __this_02 = UnityEngine_GameObject__GetComponent_object_
                                    (__this_00,
                                     (MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_anchorMin
                          (__this_02,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                UnityEngine_RectTransform__set_anchorMax
                          (__this_02,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                UnityEngine_RectTransform__set_pivot
                          (__this_02,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                return __this_02;
              }
            }
          }
        }
        goto label_05e3bad3;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$SetRect
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__SetRect (UnityEngine_RectTransform_o* rect, float width, float height, float x, float y, const MethodInfo* method);
// 0x5e3bfa0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__SetRect
               (UnityEngine_RectTransform_o *rect,float width,float height,float x,float y,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  
  if (rect == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  value.fields.y = height;
  value.fields.x = width;
  UnityEngine_RectTransform__set_sizeDelta(rect,value,(MethodInfo *)0x0);
  value_00.fields.y = y;
  value_00.fields.x = x;
  UnityEngine_RectTransform__set_anchoredPosition(rect,value_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o* __this, const MethodInfo* method);
// 0x5e3bfe0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


