// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgKeybindConflictWarningRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__RegisterFactory (const MethodInfo* method);
// 0x5dc1dd0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__RegisterFactory(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_0754818a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_Build);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgKeybindConflictWarning");
    Il2CppMethodInitialized_0754818a = '\x01';
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
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_Build,
             (MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this,"AottgKeybindConflictWarning",__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$Build
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__Build (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5dc1e90

bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__Build
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o *__this;
  System_String_o *stateKeys;
  Gisketch_Aottg2UI_State_GisketchUIState_o *state;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme;
  
  if (Il2CppMethodInitialized_0754818b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgKeybindConflictWarningRuntime);
    Il2CppMethodInitialized_0754818b = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_AottgKeybindConflictWarningRuntime);
    if (context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
      theme = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0;
      state = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
    }
    else {
      theme = (context->fields).Theme;
      state = (context->fields).State;
    }
    if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      stateKeys = (System_String_o *)0x0;
    }
    else {
      stateKeys = (node->fields).value;
    }
    if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o *)0x0) {
      Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__Setup
                (__this,theme,state,stateKeys,method);
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$StateKeys
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__StateKeys (System_String_o* visibleStateKey, System_String_o* tooltipStateKey, const MethodInfo* method);
// 0x5dc2230
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc2243: test rbx, rbx
// asm:   0x5dc2246: je 0x5dc2283
// asm:   0x5dc2248: test r14, r14
// asm:   0x5dc224b: je 0x5dc22a0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__StateKeys
          (System_String_o *visibleStateKey,System_String_o *tooltipStateKey,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754818c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_0754818c = '\x01';
  }
  if (visibleStateKey == (System_String_o *)0x0) {
    visibleStateKey = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (tooltipStateKey == (System_String_o *)0x0) {
    tooltipStateKey = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  pSVar1 = System_String__Concat_5301f10
                     (visibleStateKey,"\n",tooltipStateKey,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__Setup (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o* __this, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* stateKeys, const MethodInfo* method);
// 0x5dc1f20
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc1f40: test r12, r12
// asm:   0x5dc1f43: je 0x5dc1feb
// asm:   0x5dc1f49: test rbp, rbp
// asm:   0x5dc1f52: jmp 0x5dc222a

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__Setup
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o *__this,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *stateKeys,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o **targetAddress;
  UnityEngine_CanvasGroup_o **targetAddress_00;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_01;
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Image_o *__this_02;
  UnityEngine_Sprite_o *value;
  UnityEngine_CanvasGroup_o *pUVar3;
  System_Action_string__o *__this_03;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar4;
  
  if (Il2CppMethodInitialized_0754818d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_OnStateChanged)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/kenney-icons/warning");
    il2cpp_codegen_initialize_runtime_metadata(&"settingsDirty");
    Il2CppMethodInitialized_0754818d = '\x01';
  }
  if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme)->_2).cctor_finished_or_no_cctor ==
        0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    theme = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->static_fields->Default;
  }
  if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o *)0x0) {
    targetAddress = &(__this->fields)._theme;
    (__this->fields)._theme = theme;
    Il2CppCodeGenWriteBarrier(targetAddress);
    (__this->fields)._state = state;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._state);
    Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__ReadStateKeys
              (__this,stateKeys,method_00);
    pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      __this_02 = UnityEngine_GameObject__AddComponent_object_
                            (pUVar2,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image
                            );
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
      }
      value = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load("Icons/kenney-icons/warning",(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_UI_Image_o *)0x0) {
        UnityEngine_UI_Image__set_sprite(__this_02,value,(MethodInfo *)0x0);
        __this_00 = *targetAddress;
        if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          UVar4.fields.b = 0.12;
          UVar4.fields.a = 0.86;
          UVar4.fields.r = 1.0;
          UVar4.fields.g = 0.66;
          UVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                            (__this_00,"settingsDirty",UVar4,(MethodInfo *)0x0);
          (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                    (__this_02,UVar4,(__this_02->klass->vtable)._23_set_color.method);
          (*(__this_02->klass->vtable)._25_set_raycastTarget.methodPtr)
                    (__this_02,true,(__this_02->klass->vtable)._25_set_raycastTarget.method);
          pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
            pUVar3 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar2,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
            targetAddress_00 = &(__this->fields)._group;
            (__this->fields)._group = pUVar3;
            Il2CppCodeGenWriteBarrier(targetAddress_00);
            pUVar3 = (__this->fields)._group;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar1 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar1) {
              pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_05dc222a;
              pUVar3 = UnityEngine_GameObject__AddComponent_object_
                                 (pUVar2,(MethodInfo_353B6A0 *)
                                         MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
              *targetAddress_00 = pUVar3;
              Il2CppCodeGenWriteBarrier(targetAddress_00);
            }
            pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
              __this_03 = (System_Action_string__o *)
                          UnityEngine_GameObject__AddComponent_object_
                                    (pUVar2,(MethodInfo_353B6A0 *)
                                            MethodInfo_UnityEngine_GameObject_AddComponent_GisketchTooltipTrigger
                                    );
              (__this->fields)._tooltip = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)__this_03;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltip);
              __this_01 = (__this->fields)._state;
              if (__this_01 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
                System_Action_object____ctor
                          ((System_Action_object__o *)__this_03,(Il2CppObject *)__this,
                           (intptr_t)
                           MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_OnStateChanged
                           ,(MethodInfo_4A81BE0 *)0x0);
                Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(__this_01,__this_03,(MethodInfo *)0x0);
              }
              Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__RefreshVisibility
                        (__this,(MethodInfo *)__this_03);
              Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__RefreshTooltip
                        (__this,(MethodInfo *)__this_03);
              return;
            }
          }
        }
      }
    }
  }
label_05dc222a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__OnDestroy (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o* __this, const MethodInfo* method);
// 0x5dc2530

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__OnDestroy
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_Action_string__o *__this_01;
  
  if (Il2CppMethodInitialized_0754818e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_OnStateChanged)
    ;
    Il2CppMethodInitialized_0754818e = '\x01';
  }
  __this_00 = (__this->fields)._state;
  if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    return;
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_OnStateChanged,
             (MethodInfo_4A81BE0 *)0x0);
  Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$OnStateChanged
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__OnStateChanged (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o* __this, System_String_o* key, const MethodInfo* method);
// 0x5dc25b0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__OnStateChanged
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o *__this,
               System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *pMVar2;
  
  pMVar2 = (MethodInfo *)(__this->fields)._visibleStateKey;
  bVar1 = System_String__op_Equality(key,(System_String_o *)pMVar2,(MethodInfo *)0x0);
  if (bVar1) {
    Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__RefreshVisibility(__this,pMVar2);
  }
  pMVar2 = (MethodInfo *)(__this->fields)._tooltipStateKey;
  bVar1 = System_String__op_Equality(key,(System_String_o *)pMVar2,(MethodInfo *)0x0);
  if (bVar1) {
    Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__RefreshTooltip(__this,pMVar2);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$ReadStateKeys
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__ReadStateKeys (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o* __this, System_String_o* stateKeys, const MethodInfo* method);
// 0x5dc22c0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__ReadStateKeys
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o *__this,
               System_String_o *stateKeys,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o **ppSVar2;
  
  if (((stateKeys != (System_String_o *)0x0) ||
      (stateKeys = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), stateKeys != (System_String_o *)0x0))
     && (pSVar1 = System_String__Split(stateKeys,10,0,(MethodInfo *)0x0), pSVar1 != (System_String_array *)0x0
        )) {
    if (pSVar1->max_length == 0) {
      ppSVar2 = *(System_String_o ***)(g_data_07556758 + 0xb8);
    }
    else {
      if ((int)pSVar1->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      ppSVar2 = pSVar1->m_Items;
    }
    if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o *)0x0) {
      (__this->fields)._visibleStateKey = *ppSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._visibleStateKey);
      if ((int)pSVar1->max_length < 2) {
        ppSVar2 = *(System_String_o ***)(g_data_07556758 + 0xb8);
      }
      else {
        ppSVar2 = pSVar1->m_Items + 1;
      }
      (__this->fields)._tooltipStateKey = *ppSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltipStateKey);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$RefreshVisibility
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__RefreshVisibility (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o* __this, const MethodInfo* method);
// 0x5dc2390

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__RefreshVisibility
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  UnityEngine_CanvasGroup_o *pUVar1;
  bool value;
  bool bVar2;
  float value_00;
  
  if (Il2CppMethodInitialized_0754818f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754818f = '\x01';
  }
  __this_00 = (__this->fields)._state;
  if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    value = false;
  }
  else {
    value = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                      (__this_00,(__this->fields)._visibleStateKey,false,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._group;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pUVar1 = (__this->fields)._group;
  if (pUVar1 != (UnityEngine_CanvasGroup_o *)0x0) {
    if (value == false) {
      value_00 = 0.0;
    }
    else {
      value_00 = 1.0;
    }
    UnityEngine_CanvasGroup__set_alpha(pUVar1,value_00,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._group;
    if (pUVar1 != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_blocksRaycasts(pUVar1,value,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._group;
      if (pUVar1 != (UnityEngine_CanvasGroup_o *)0x0) {
        UnityEngine_CanvasGroup__set_interactable(pUVar1,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$RefreshTooltip
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__RefreshTooltip (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o* __this, const MethodInfo* method);
// 0x5dc2460

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__RefreshTooltip
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *pGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool bVar2;
  System_String_o *text;
  
  if (Il2CppMethodInitialized_07548190 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548190 = '\x01';
  }
  pGVar1 = (__this->fields)._tooltip;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  __this_00 = (__this->fields)._state;
  if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    text = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    pGVar1 = (__this->fields)._tooltip;
  }
  else {
    text = Gisketch_Aottg2UI_State_GisketchUIState__Get
                     (__this_00,(__this->fields)._tooltipStateKey,
                      (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
    pGVar1 = (__this->fields)._tooltip;
  }
  if (pGVar1 == (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup
            (pGVar1,text,(__this->fields)._theme,(System_String_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o* __this, const MethodInfo* method);
// 0x5dc2600

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o *__this,
               MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


