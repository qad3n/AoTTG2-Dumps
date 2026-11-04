// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsDirtyMarkerRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__RegisterFactory (const MethodInfo* method);
// 0x182314f60

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__RegisterFactory(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_18434776a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_Build);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgSettingsDirtyMarker");
    Il2CppMethodInitialized_18434776a = '\x01';
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
  if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"AottgSettingsDirtyMarker",__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$Build
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__Build (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x182314650

bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__Build
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o *__this;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme;
  Gisketch_Aottg2UI_State_GisketchUIState_o *state;
  System_String_o *stateKey;
  
  if (Il2CppMethodInitialized_18434776b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgSettingsDirtyMarkerRuntime);
    Il2CppMethodInitialized_18434776b = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)
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
                (__this,theme,state,stateKey,(MethodInfo *)0x0);
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__Setup (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o* __this, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* stateKey, const MethodInfo* method);
// 0x182315120

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__Setup
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o *__this,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *stateKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_CanvasGroup_o *pUVar3;
  UnityEngine_Color_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Color_Fields local_88;
  UnityEngine_Color_o local_78 [5];
  
  if (Il2CppMethodInitialized_18434776c == '\0') {
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
    Il2CppMethodInitialized_18434776c = '\x01';
  }
  (__this->fields)._state = state;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._state,state);
  (__this->fields)._stateKey = stateKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stateKey,stateKey);
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar2,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup
                       );
    (__this->fields)._group = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._group,pUVar3);
    pUVar3 = (__this->fields)._group;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_182315422;
      pUVar3 = UnityEngine_GameObject__AddComponent_object_
                         (pUVar2,(MethodInfo_6F4D60 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
      (__this->fields)._group = pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._group,pUVar3);
    }
    pUVar3 = (__this->fields)._group;
    if (pUVar3 != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_blocksRaycasts(pUVar3,false,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._group;
      if (pUVar3 != (UnityEngine_CanvasGroup_o *)0x0) {
        UnityEngine_CanvasGroup__set_interactable(pUVar3,false,(MethodInfo *)0x0);
        if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          fVar6 = 1.0;
          fVar7 = 0.66;
          fVar8 = 0.12;
          fVar9 = 0.86;
        }
        else {
          local_88.r = 1.0;
          local_88.g = 0.66;
          local_88.b = 0.12;
          local_88.a = 0.86;
          pUVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                             (local_78,theme,"settingsDirty",(UnityEngine_Color_o *)&local_88,
                              (MethodInfo *)0x0);
          fVar6 = (pUVar4->fields).r;
          fVar7 = (pUVar4->fields).g;
          fVar8 = (pUVar4->fields).b;
          fVar9 = (pUVar4->fields).a;
        }
        pUVar5 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)__this,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
        (__this->fields)._rect = pUVar5;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._rect,pUVar5);
        local_88.g = fVar7;
        local_88.r = fVar6;
        local_88.a = fVar9;
        local_88.b = fVar8;
        pUVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__CreateImage
                           (__this,"dirty-strip",(UnityEngine_Color_o *)&local_88,(MethodInfo *)0x0);
        (__this->fields)._strip = pUVar5;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._strip,pUVar5);
        pUVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__CreateImage
                           (__this,"dirty-dot",(UnityEngine_Color_o *)&local_88,(MethodInfo *)0x0);
        (__this->fields)._dot = pUVar5;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._dot,pUVar5);
        if ((__this->fields)._state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          __this_00 = (__this->fields)._state;
          __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
          System_Action_object____ctor
                    (__this_01,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_OnStateChanged
                     ,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_State_GisketchUIState__add_Changed
                    (__this_00,(System_Action_string__o *)__this_01,(MethodInfo *)0x0);
        }
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__Refresh(__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_182315422:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__OnDestroy (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o* __this, const MethodInfo* method);
// 0x182314de0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__OnDestroy
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  
  if (Il2CppMethodInitialized_18434776d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_OnStateChanged);
    Il2CppMethodInitialized_18434776d = '\x01';
  }
  if ((__this->fields)._state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    __this_00 = (__this->fields)._state;
    __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    System_Action_object____ctor
              (__this_01,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_OnStateChanged,
               (MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed
              (__this_00,(System_Action_string__o *)__this_01,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$OnStateChanged
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__OnStateChanged (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o* __this, System_String_o* key, const MethodInfo* method);
// 0x182314e70

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__OnStateChanged
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o *__this,
               System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__op_Equality(key,(__this->fields)._stateKey,(MethodInfo *)0x0);
  if (bVar1) {
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__Refresh(__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$Refresh
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__Refresh (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o* __this, const MethodInfo* method);
// 0x182314eb0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__Refresh
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *pUVar1;
  bool bVar2;
  float value;
  
  if (Il2CppMethodInitialized_18434776e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434776e = '\x01';
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
  if (((__this->fields)._state == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) ||
     (bVar2 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                        ((__this->fields)._state,(__this->fields)._stateKey,false,(MethodInfo *)0x0), !bVar2))
  {
    value = 0.0;
  }
  else {
    value = 1.0;
  }
  if (pUVar1 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(pUVar1,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__LateUpdate (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o* __this, const MethodInfo* method);
// 0x1823149e0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182314ba2: jmp 0x182314ba6
// asm:   0x182314bcc: test rbx, rbx
// asm:   0x182314bcf: je 0x182314dd4
// asm:   0x182314bd5: mov rdx, rbx
// asm:   0x182314bd8: jmp 0x182314be7

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__LateUpdate
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  bool bVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Rect_o *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  UnityEngine_RectTransform_o *__this_00;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Rect_o local_68 [6];
  
  if (Il2CppMethodInitialized_18434776f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_18434776f = '\x01';
  }
  pUVar5 = (__this->fields)._rect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar5 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    (__this->fields)._rect = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._rect,pUVar5);
  }
  pUVar5 = (__this->fields)._rect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  pUVar5 = (__this->fields)._strip;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  pUVar5 = (__this->fields)._dot;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  if (Il2CppMethodInitialized_184347770 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_184347770 = '\x01';
  }
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_182314dd4;
  pUVar6 = UnityEngine_Transform__GetParent(pUVar6,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_182314dd4;
    pUVar5 = (UnityEngine_RectTransform_o *)UnityEngine_Transform__GetParent(pUVar6,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto label_182314ba4;
    __this_00 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar5->klass == TypeInfo_UnityEngine_RectTransform) {
      __this_00 = pUVar5;
    }
  }
  else {
label_182314ba4:
    __this_00 = (UnityEngine_RectTransform_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar5 = __this_00;
  if (!bVar4) {
    pUVar5 = (__this->fields)._rect;
  }
  if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto label_182314dd4;
  pUVar7 = UnityEngine_RectTransform__get_rect(local_68,pUVar5,(MethodInfo *)0x0);
  fVar1 = (pUVar7->fields).m_Height;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto label_182314dd4;
    pUVar5 = (__this->fields)._rect;
    pUVar7 = UnityEngine_RectTransform__get_rect(local_68,__this_00,(MethodInfo *)0x0);
    fVar10 = (pUVar7->fields).m_XMin;
    fVar9 = (pUVar7->fields).m_YMin;
    fVar2 = (pUVar7->fields).m_Width;
    fVar3 = (pUVar7->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    local_78.z = 0.0;
    local_78.y = fVar3 * 0.5 + fVar9;
    local_78.x = fVar2 * 0.5 + fVar10;
    pUVar8 = UnityEngine_Transform__TransformPoint
                       ((UnityEngine_Vector3_o *)local_68,(UnityEngine_Transform_o *)__this_00,
                        (UnityEngine_Vector3_o *)&local_78,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto label_182314dd4;
    local_78.x = (pUVar8->fields).x;
    local_78.y = (pUVar8->fields).y;
    local_78.z = (pUVar8->fields).z;
    pUVar8 = UnityEngine_Transform__InverseTransformPoint
                       ((UnityEngine_Vector3_o *)local_68,(UnityEngine_Transform_o *)pUVar5,
                        (UnityEngine_Vector3_o *)&local_78,(MethodInfo *)0x0);
    fVar10 = (pUVar8->fields).y;
  }
  else {
    fVar10 = 0.0;
  }
  pUVar5 = (__this->fields)._strip;
  fVar9 = 1.0;
  if (1.0 <= fVar1) {
    fVar9 = fVar1;
  }
  if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
    value_01.fields.y = fVar9;
    value_01.fields.x = 3.0;
    UnityEngine_RectTransform__set_sizeDelta(pUVar5,value_01,(MethodInfo *)0x0);
    value.fields.y = fVar10;
    value.fields.x = -6.0;
    UnityEngine_RectTransform__set_anchoredPosition(pUVar5,value,(MethodInfo *)0x0);
    pUVar5 = (__this->fields)._dot;
    if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_sizeDelta
                (pUVar5,(UnityEngine_Vector2_o)0x40e0000040e00000,(MethodInfo *)0x0);
      value_00.fields.y = fVar10;
      value_00.fields.x = 10.0;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar5,value_00,(MethodInfo *)0x0);
      return;
    }
  }
label_182314dd4:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$RowRect
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__RowRect (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o* __this, const MethodInfo* method);
// 0x182315020

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__RowRect
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  
  if (Il2CppMethodInitialized_184347770 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_184347770 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__GetParent(pUVar2,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_1823150c8;
      pUVar3 = (UnityEngine_RectTransform_o *)UnityEngine_Transform__GetParent(pUVar2,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar4 = (UnityEngine_RectTransform_o *)0x0;
        if (pUVar3->klass == TypeInfo_UnityEngine_RectTransform) {
          pUVar4 = pUVar3;
        }
        return pUVar4;
      }
    }
    return (UnityEngine_RectTransform_o *)0x0;
  }
label_1823150c8:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$CreateImage
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__CreateImage (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o* __this, System_String_o* name, UnityEngine_Color_o color, const MethodInfo* method);
// 0x1823146f0

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__CreateImage
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o *__this,System_String_o *name,
          UnityEngine_Color_o *color,MethodInfo *method)

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
  UnityEngine_Color_Fields local_58 [3];
  
  if (Il2CppMethodInitialized_184347771 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_184347771 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_1823149a2:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar1);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar1);
      pSVar1 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
      if (pSVar1 != (System_Type_o *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar2 == (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar1;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2,pSVar1);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_2f1abe0(__this_00,name,components,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_2f5a7e0(__this_01,parent,false,(MethodInfo *)0x0);
            pUVar3 = UnityEngine_GameObject__GetComponent_object_
                               (__this_00,
                                (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
            if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
              local_58[0].r = (color->fields).r;
              local_58[0].g = (color->fields).g;
              local_58[0].b = (color->fields).b;
              local_58[0].a = (color->fields).a;
              (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                        (pUVar3,(UnityEngine_Color_o *)local_58,(pUVar3->klass->vtable)._23_set_color.method);
              (*(pUVar3->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (pUVar3,false,(pUVar3->klass->vtable)._25_set_raycastTarget.method);
              __this_02 = UnityEngine_GameObject__GetComponent_object_
                                    (__this_00,
                                     (MethodInfo_6F5650 *)
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
        goto label_1823149a2;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$SetRect
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__SetRect (UnityEngine_RectTransform_o* rect, float width, float height, float x, float y, const MethodInfo* method);
// 0x1823150d0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime__SetRect
               (UnityEngine_RectTransform_o *rect,float width,float height,float x,float y,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    value.fields.y = height;
    value.fields.x = width;
    UnityEngine_RectTransform__set_sizeDelta(rect,value,(MethodInfo *)0x0);
    value_00.fields.y = y;
    value_00.fields.x = x;
    UnityEngine_RectTransform__set_anchoredPosition(rect,value_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyMarkerRuntime_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


