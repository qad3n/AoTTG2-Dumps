// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgKeybindConflictWarningRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__RegisterFactory (const MethodInfo* method);
// 0x182307a20

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__RegisterFactory(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_1843476e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_Build);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgKeybindConflictWarning");
    Il2CppMethodInitialized_1843476e5 = '\x01';
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
  if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"AottgKeybindConflictWarning",__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$Build
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__Build (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x182307620

bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__Build
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o *__this;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme;
  Gisketch_Aottg2UI_State_GisketchUIState_o *state;
  System_String_o *stateKeys;
  
  if (Il2CppMethodInitialized_1843476e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgKeybindConflictWarningRuntime);
    Il2CppMethodInitialized_1843476e6 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)
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
                (__this,theme,state,stateKeys,(MethodInfo *)0x0);
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$StateKeys
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__StateKeys (System_String_o* visibleStateKey, System_String_o* tooltipStateKey, const MethodInfo* method);
// 0x182307e80

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__StateKeys
          (System_String_o *visibleStateKey,System_String_o *tooltipStateKey,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843476e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_1843476e7 = '\x01';
  }
  if (visibleStateKey == (System_String_o *)0x0) {
    visibleStateKey = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (tooltipStateKey == (System_String_o *)0x0) {
    tooltipStateKey = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  pSVar1 = System_String__Concat_1969b70
                     (visibleStateKey,"\n",tooltipStateKey,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__Setup (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o* __this, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* stateKeys, const MethodInfo* method);
// 0x182307ae0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__Setup
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o *__this,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *stateKeys,MethodInfo *method)

{
  uint uVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_01;
  bool bVar3;
  System_String_array *pSVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_Image_o *__this_02;
  UnityEngine_Sprite_o *value;
  UnityEngine_Color_o *pUVar6;
  UnityEngine_CanvasGroup_o *pUVar7;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *value_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_03;
  System_String_o **ppSVar8;
  UnityEngine_Color_Fields local_48;
  UnityEngine_Color_o local_38;
  
  if (Il2CppMethodInitialized_1843476e8 == '\0') {
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
    Il2CppMethodInitialized_1843476e8 = '\x01';
  }
  if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    theme = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->static_fields->Default;
  }
  if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o *)0x0) {
    (__this->fields)._theme = theme;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._theme,theme);
    (__this->fields)._state = state;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._state,state);
    if ((stateKeys == (System_String_o *)0x0) &&
       (stateKeys = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8),
       stateKeys == (System_String_o *)0x0)) goto label_182307e69;
    pSVar4 = System_String__Split(stateKeys,10,0,(MethodInfo *)0x0);
    if (pSVar4 == (System_String_array *)0x0) goto label_182307e69;
    if (pSVar4->max_length == 0) {
      ppSVar8 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    else {
      if ((int)pSVar4->max_length == 0) goto label_182307e6f;
      ppSVar8 = pSVar4->m_Items;
    }
    pSVar2 = *ppSVar8;
    (__this->fields)._visibleStateKey = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._visibleStateKey,pSVar2);
    uVar1 = (uint)pSVar4->max_length;
    if ((int)uVar1 < 2) {
      ppSVar8 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    else {
      if (uVar1 < 2) {
label_182307e6f:
        ThrowIndexOutOfRangeException();
      }
      ppSVar8 = pSVar4->m_Items + 1;
    }
    pSVar2 = *ppSVar8;
    (__this->fields)._tooltipStateKey = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltipStateKey,pSVar2);
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      __this_02 = UnityEngine_GameObject__AddComponent_object_
                            (pUVar5,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image)
      ;
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
      }
      value = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load("Icons/kenney-icons/warning",(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_UI_Image_o *)0x0) {
        UnityEngine_UI_Image__set_sprite(__this_02,value,(MethodInfo *)0x0);
        __this_00 = (__this->fields)._theme;
        if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          local_48.r = 1.0;
          local_48.g = 0.66;
          local_48.b = 0.12;
          local_48.a = 0.86;
          pUVar6 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                             (&local_38,__this_00,"settingsDirty",(UnityEngine_Color_o *)&local_48,
                              (MethodInfo *)0x0);
          local_48.r = (pUVar6->fields).r;
          local_48.g = (pUVar6->fields).g;
          local_48.b = (pUVar6->fields).b;
          local_48.a = (pUVar6->fields).a;
          (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                    (__this_02,(UnityEngine_Color_o *)&local_48,
                     (__this_02->klass->vtable)._23_set_color.method);
          (*(__this_02->klass->vtable)._25_set_raycastTarget.methodPtr)
                    (__this_02,true,(__this_02->klass->vtable)._25_set_raycastTarget.method);
          pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
            pUVar7 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar5,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
            (__this->fields)._group = pUVar7;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._group,pUVar7);
            pUVar7 = (__this->fields)._group;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar3 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar3) {
              pUVar5 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_182307e69;
              pUVar7 = UnityEngine_GameObject__AddComponent_object_
                                 (pUVar5,(MethodInfo_6F4D60 *)
                                         MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
              (__this->fields)._group = pUVar7;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._group,pUVar7);
            }
            pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
              value_00 = UnityEngine_GameObject__AddComponent_object_
                                   (pUVar5,(MethodInfo_6F4D60 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_GisketchTooltipTrigger
                                   );
              (__this->fields)._tooltip = value_00;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltip,value_00);
              if ((__this->fields)._state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                __this_01 = (__this->fields)._state;
                __this_03 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
                System_Action_object____ctor
                          (__this_03,(Il2CppObject *)__this,
                           (intptr_t)
                           MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_OnStateChanged
                           ,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_State_GisketchUIState__add_Changed
                          (__this_01,(System_Action_string__o *)__this_03,(MethodInfo *)0x0);
              }
              Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__RefreshVisibility
                        (__this,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__RefreshTooltip
                        (__this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_182307e69:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__OnDestroy (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o* __this, const MethodInfo* method);
// 0x1823076c0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__OnDestroy
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  
  if (Il2CppMethodInitialized_1843476e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_OnStateChanged)
    ;
    Il2CppMethodInitialized_1843476e9 = '\x01';
  }
  if ((__this->fields)._state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    __this_00 = (__this->fields)._state;
    __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    System_Action_object____ctor
              (__this_01,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_OnStateChanged,
               (MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed
              (__this_00,(System_Action_string__o *)__this_01,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$OnStateChanged
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__OnStateChanged (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o* __this, System_String_o* key, const MethodInfo* method);
// 0x182307750

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__OnStateChanged
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o *__this,
               System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__op_Equality(key,(__this->fields)._visibleStateKey,(MethodInfo *)0x0);
  if (bVar1) {
    Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__RefreshVisibility
              (__this,(MethodInfo *)0x0);
  }
  bVar1 = System_String__op_Equality(key,(__this->fields)._tooltipStateKey,(MethodInfo *)0x0);
  if (bVar1) {
    Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__RefreshTooltip
              (__this,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$ReadStateKeys
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__ReadStateKeys (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o* __this, System_String_o* stateKeys, const MethodInfo* method);
// 0x1823077b0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__ReadStateKeys
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o *__this,
               System_String_o *stateKeys,MethodInfo *method)

{
  uint uVar1;
  System_String_o *pSVar2;
  System_String_array *pSVar3;
  System_String_o **ppSVar4;
  
  if ((stateKeys != (System_String_o *)0x0) ||
     (stateKeys = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8),
     stateKeys != (System_String_o *)0x0)) {
    pSVar3 = System_String__Split(stateKeys,10,0,(MethodInfo *)0x0);
    if (pSVar3 == (System_String_array *)0x0) goto label_182307866;
    if (pSVar3->max_length == 0) {
      ppSVar4 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    else {
      if ((int)pSVar3->max_length == 0) goto label_18230786c;
      ppSVar4 = pSVar3->m_Items;
    }
    if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o *)0x0) {
      pSVar2 = *ppSVar4;
      (__this->fields)._visibleStateKey = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._visibleStateKey,pSVar2);
      uVar1 = (uint)pSVar3->max_length;
      if ((int)uVar1 < 2) {
        ppSVar4 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
      }
      else {
        if (uVar1 < 2) {
label_18230786c:
          ThrowIndexOutOfRangeException();
        }
        ppSVar4 = pSVar3->m_Items + 1;
      }
      pSVar2 = *ppSVar4;
      (__this->fields)._tooltipStateKey = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltipStateKey,pSVar2);
      return;
    }
  }
label_182307866:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$RefreshVisibility
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__RefreshVisibility (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o* __this, const MethodInfo* method);
// 0x182307940

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__RefreshVisibility
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o *__this,
               MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *pUVar1;
  bool value;
  bool bVar2;
  float value_00;
  
  if (Il2CppMethodInitialized_1843476ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843476ea = '\x01';
  }
  if ((__this->fields)._state == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    value = false;
  }
  else {
    value = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                      ((__this->fields)._state,(__this->fields)._visibleStateKey,false,(MethodInfo *)0x0);
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
  if (value == false) {
    value_00 = 0.0;
  }
  else {
    value_00 = 1.0;
  }
  pUVar1 = (__this->fields)._group;
  if (pUVar1 != (UnityEngine_CanvasGroup_o *)0x0) {
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
// 0x182307880

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime__RefreshTooltip
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *pGVar1;
  bool bVar2;
  System_String_o *text;
  
  if (Il2CppMethodInitialized_1843476eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843476eb = '\x01';
  }
  pGVar1 = (__this->fields)._tooltip;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((__this->fields)._state == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      text = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      text = Gisketch_Aottg2UI_State_GisketchUIState__Get
                       ((__this->fields)._state,(__this->fields)._tooltipStateKey,
                        (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    }
    pGVar1 = (__this->fields)._tooltip;
    if (pGVar1 == (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup
              (pGVar1,text,(__this->fields)._theme,(System_String_o *)0x0,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictWarningRuntime_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


