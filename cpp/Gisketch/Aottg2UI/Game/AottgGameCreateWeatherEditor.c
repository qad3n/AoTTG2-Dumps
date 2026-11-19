// Type: Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateWeatherEditor.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c___cctor (const MethodInfo* method);
// 0x58ac9d0

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545316 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c);
    Il2CppMethodInitialized_07545316 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c_o* __this, const MethodInfo* method);
// 0x58aca40

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c$$<BuildHeader>b__9_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c___BuildHeader_b__9_0 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x58aca50
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58acbec: cmp byte ptr [rip + 0x1c9870b], 0
// asm:   0x58acbf3: jne 0x58acc08
// asm:   0x58acca8: mov r15, r12
// asm:   0x58accab: add r15, 0x18
// asm:   0x58accaf: jmp 0x58accd8
// asm:   0x58accc3: jmp 0x58acc08
// asm:   0x58acfd1: jmp 0x58acfec

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c___BuildHeader_b__9_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  byte bVar1;
  Settings_WeatherSettings_o *pSVar2;
  Settings_SetSettingsContainer_WeatherSet__o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Settings_IntSetting_o *setting;
  Il2CppObject *object;
  Settings_WeatherSet_c *pSVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_0_o *__this_00;
  Settings_WeatherSet_o *pSVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this_01;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *__this_02;
  System_String_array *labels;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *pGVar8;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c_StaticFields *pGVar9;
  System_Action_GisketchActionContext__o *__this_03;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_04;
  System_Action_AottgUi__o *__this_05;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *method_00;
  Settings_WeatherSet_o **targetAddress;
  
  if (Il2CppMethodInitialized_07545317 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c_BuildHeader_b__9_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass9_0_BuildHeader_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass9_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_WeatherSet);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"Set");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-preset-notice");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-set");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"Description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-title");
    Il2CppMethodInitialized_07545317 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass9_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  if (Il2CppMethodInitialized_075452fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_075452fe = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
  if (((pSVar2 != (Settings_WeatherSettings_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).WeatherSets, pSVar3 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0))
     && (pSVar6 = (Settings_WeatherSet_o *)
                  Settings_SetSettingsContainer_object___GetSelectedSet
                            ((Settings_SetSettingsContainer_T__o *)pSVar3,
                             (MethodInfo_40477A0 *)
                             MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSelectedSet),
        pSVar5 = TypeInfo_Settings_WeatherSet,
        __this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_0_o *)0x0)) {
    if (pSVar6 == (Settings_WeatherSet_o *)0x0) {
      (__this_00->fields).selected = (Settings_WeatherSet_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_Settings_WeatherSet->_2).typeHierarchyDepth;
      if (((pSVar6->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_WeatherSet))
      {
label_058ad1fc:
        il2cpp_codegen_raise_invalid_cast_exception(pSVar6);
      }
      (__this_00->fields).selected = pSVar6;
      if (((pSVar6->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pSVar5)) goto label_058ad1fc;
    }
    targetAddress = &(__this_00->fields).selected;
    Il2CppCodeGenWriteBarrier(targetAddress);
    if ((*targetAddress != (Settings_WeatherSet_o *)0x0) &&
       (pSVar4 = ((*targetAddress)->fields).Preset, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
      (__this_00->fields).preset = (pSVar4->fields)._value;
      pSVar7 = "Title";
      if (Il2CppMethodInitialized_07545314 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
        Il2CppMethodInitialized_07545314 = '\x01';
      }
      pSVar7 = System_String__Concat_52f0320("GameCreate.Sandbox.Weather.",pSVar7,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar7,(MethodInfo *)0x0);
      if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Text
                  (header,pSVar7,"header","game-create-weather-title",(System_String_o *)0x0,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pSVar7 = "Description";
        if (Il2CppMethodInitialized_07545314 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
          il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
          Il2CppMethodInitialized_07545314 = '\x01';
        }
        pSVar7 = System_String__Concat_52f0320("GameCreate.Sandbox.Weather.",pSVar7,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar7,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Text
                  (header,pSVar7,"text","game-create-weather-description",(System_String_o *)0x0,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pSVar7 = "Set";
        if (Il2CppMethodInitialized_07545314 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
          il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
          Il2CppMethodInitialized_07545314 = '\x01';
        }
        pSVar7 = System_String__Concat_52f0320("GameCreate.Sandbox.Weather.",pSVar7,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar7,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_075452fe == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
          Il2CppMethodInitialized_075452fe = '\x01';
        }
        pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
        if ((pSVar2 != (Settings_WeatherSettings_o *)0x0) &&
           (pSVar3 = (pSVar2->fields).WeatherSets,
           pSVar3 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0)) {
          setting = (pSVar3->fields).SelectedSetIndex;
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
          Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter___ctor(__this_01,setting,(MethodInfo *)0x0);
          __this_02 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor);
          Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor___ctor
                    (__this_02,"game-create-weather-set",pSVar7,1,
                     (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this_01,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_075452fe == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
            Il2CppMethodInitialized_075452fe = '\x01';
          }
          pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
          if ((pSVar2 != (Settings_WeatherSettings_o *)0x0) &&
             (pSVar3 = (pSVar2->fields).WeatherSets,
             pSVar3 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0)) {
            labels = Settings_SetSettingsContainer_object___GetSetNames
                               ((Settings_SetSettingsContainer_T__o *)pSVar3,
                                (MethodInfo_40482D0 *)
                                MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames);
            pGVar8 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__IndexedOptions
                               (labels,(MethodInfo *)0x0);
            if (__this_02 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
              (__this_02->fields).Options = pGVar8;
              Il2CppCodeGenWriteBarrier(&(__this_02->fields).Options);
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c);
                pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->static_fields;
                __this_03 = pGVar9->__9__9_2;
              }
              else {
                pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->static_fields;
                __this_03 = pGVar9->__9__9_2;
              }
              if (__this_03 == (System_Action_GisketchActionContext__o *)0x0) {
                if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c)->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c);
                  pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->static_fields;
                }
                object = (Il2CppObject *)pGVar9->__9;
                __this_03 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
                System_Action_GisketchActionContext____ctor
                          (__this_03,object,
                           (intptr_t)
                           MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c_BuildHeader_b__9_2
                           ,(MethodInfo_4A803E0 *)0x0);
                pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->static_fields;
                pGVar9->__9__9_2 = __this_03;
                Il2CppCodeGenWriteBarrier(&pGVar9->__9__9_2);
              }
              (__this_02->fields).OnChanged = __this_03;
              Il2CppCodeGenWriteBarrier(&(__this_02->fields).OnChanged);
              root = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
              Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncValue(root,__this_02,(MethodInfo *)0x0);
              __this_04 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow)
              ;
              Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor(__this_04,__this_02,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Code_AottgUi__Component
                        (header,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_04,(MethodInfo *)0x0);
              __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
              System_Action_object____ctor
                        ((System_Action_object__o *)__this_05,(Il2CppObject *)__this_00,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass9_0_BuildHeader_b__1
                         ,(MethodInfo_4A81BE0 *)0x0);
              width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
              layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                 ("Row",(System_String_o *)0x0,(System_String_o *)0x0,
                                  (System_String_o *)0x0,"Wrap",12.0,width,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                  0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
              method_00 = (MethodInfo *)"clear";
              Gisketch_Aottg2UI_Code_AottgUi__Panel
                        (header,"clear",__this_05,"game-create-weather-actions",layout,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
              if ((__this_00->fields).preset == false) {
                return;
              }
              pSVar6 = *targetAddress;
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
              }
              pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__PresetNotice(pSVar6,method_00);
              Gisketch_Aottg2UI_Code_AottgUi__Callout(header,0,pSVar7,"game-create-weather-preset-notice",(MethodInfo *)0x0)
              ;
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c$$<BuildHeader>b__9_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c___BuildHeader_b__9_2 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58ad220
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ad245: cmp byte ptr [rip + 0x1c98081], 0
// asm:   0x58ad276: jmp 0x58ad455
// asm:   0x58ad341: cmp byte ptr [rip + 0x1c97fb6], 0
// asm:   0x58ad348: jne 0x58ad35d
// asm:   0x58ad450: jmp 0x58ad35d

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c___BuildHeader_b__9_2
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_IntSetting_o *__this_00;
  Settings_WeatherSettings_o *pSVar3;
  Settings_SetSettingsContainer_WeatherSet__o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  
  if (Il2CppMethodInitialized_07545318 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07545318 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    pSVar2 = *(Settings_InGameSet_o **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
              0x40);
  }
  if (pSVar2 != (Settings_InGameSet_o *)0x0) {
    __this_00 = (pSVar2->fields).WeatherIndex;
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    }
    if (Il2CppMethodInitialized_075452fe == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      Il2CppMethodInitialized_075452fe = '\x01';
    }
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
    if ((((pSVar3 != (Settings_WeatherSettings_o *)0x0) &&
         (pSVar4 = (pSVar3->fields).WeatherSets, pSVar4 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0)
         ) && (pSVar5 = (pSVar4->fields).SelectedSetIndex, pSVar5 != (Settings_IntSetting_o *)0x0)) &&
       ((__this_00 != (Settings_IntSetting_o *)0x0 &&
        (Settings_TypedSetting_int___set_Value
                   ((Settings_TypedSetting_int__o *)__this_00,(pSVar5->fields)._value,
                    (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value),
        context.fields.GameObject != (UnityEngine_GameObject_o *)0x0)))) {
      root = UnityEngine_GameObject__GetComponentInParent_object_
                       (context.fields.GameObject,
                        (MethodInfo_353BB40 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      if (Il2CppMethodInitialized_07545313 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_07545313 = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandboxContent((MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh(root,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c$$<TryImport>b__26_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c___TryImport_b__26_0 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c_o* __this, SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x58ad460

bool Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c___TryImport_b__26_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c_o *__this,
               SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  
  if (item == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (*(item->klass->vtable)._12_get_IsNumber.methodPtr)
                    (item,(item->klass->vtable)._12_get_IsNumber.method);
  bVar2 = true;
  if (bVar1) {
    fVar3 = (*(item->klass->vtable)._37_get_AsFloat.methodPtr)
                      (item,(item->klass->vtable)._37_get_AsFloat.method);
    if ((uint)ABS(fVar3) < 0x7f800001) {
      fVar3 = (*(item->klass->vtable)._37_get_AsFloat.methodPtr)
                        (item,(item->klass->vtable)._37_get_AsFloat.method);
      bVar2 = ABS(fVar3) == INFINITY;
    }
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass14_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass14_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x58aa200

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass14_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass14_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass14_0$$<ExistingCopy>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass14_0___ExistingCopy_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass14_0_o* __this, Settings_WeatherSet_o* set, const MethodInfo* method);
// 0x58ad4e0

bool Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass14_0___ExistingCopy_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass14_0_o *__this,
               Settings_WeatherSet_o *set,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07545319 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07545319 = '\x01';
  }
  if ((set != (Settings_WeatherSet_o *)0x0) &&
     (pSVar1 = (set->fields).Preset, pSVar1 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar1->fields)._value != false) {
      return false;
    }
    pSVar2 = (set->fields).Name;
    if (pSVar2 != (Settings_StringSetting_o *)0x0) {
      bVar3 = System_String__op_Equality((pSVar2->fields)._value,(__this->fields).name,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass23_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass23_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass23_0_o* __this, const MethodInfo* method);
// 0x58ab300

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass23_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass23_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass23_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass23_1___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass23_1_o* __this, const MethodInfo* method);
// 0x58ab310

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass23_1___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass23_1_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass23_1$$<Vector>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass23_1___Vector_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass23_1_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58ad560
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ad604: mov rax, rsp

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass23_1___Vector_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass23_1_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass23_0_o *pGVar2;
  Settings_Vector3Setting_o *__this_00;
  Settings_FloatSetting_o *pSVar3;
  float *pfVar4;
  Il2CppClass *klass;
  System_IndexOutOfRangeException_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c *method_00;
  UnityEngine_Vector3_o value;
  float local_18 [2];
  undefined8 local_10;
  
  if (Il2CppMethodInitialized_0754531a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_set_Value);
    Il2CppMethodInitialized_0754531a = '\x01';
  }
  pfVar4 = local_18;
  pGVar2 = (__this->fields).CS___8__locals1;
  if ((pGVar2 != (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass23_0_o *)0x0) &&
     (__this_00 = (pGVar2->fields).setting, __this_00 != (Settings_Vector3Setting_o *)0x0)) {
    local_10._0_4_ = (__this_00->fields)._value.fields.x;
    local_10._4_4_ = (__this_00->fields)._value.fields.y;
    local_18[0] = (((Settings_TypedSetting_Vector3__Fields *)&__this_00->fields)->_value).fields.z;
    pSVar3 = (__this->fields).value;
    if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
      iVar1 = (__this->fields).component;
      if (iVar1 == 0) {
        pfVar4 = (float *)&local_10;
      }
      else if (iVar1 != 2) {
        if (iVar1 != 1) {
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IndexOutOfRangeException);
          __this_01 = (System_IndexOutOfRangeException_o *)il2cpp_codegen_object_new(klass);
          message = il2cpp_codegen_get_runtime_metadata(&"Invalid Vector3 index!");
          System_IndexOutOfRangeException___ctor_54b5410(__this_01,message,(MethodInfo *)0x0);
          lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UnityEngine_Vector3_set_Item);
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
        }
        pfVar4 = (float *)((long)&local_10 + 4);
      }
      *pfVar4 = (pSVar3->fields)._value;
      value.fields.z = local_18[0];
      value.fields.x = (float)(undefined4)local_10;
      value.fields.y = (float)local_10._4_4_;
      Settings_TypedSetting_Vector3___set_Value
                ((Settings_TypedSetting_Vector3__o *)__this_00,value,
                 (MethodInfo_42DA4D0 *)MethodInfo_Settings_TypedSetting_Vector3_set_Value);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0)
      {
        method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
        Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Edited(context,(MethodInfo *)method_00);
        return;
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Edited
                (context,(MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass24_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass24_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x58aba10

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass24_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass24_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass24_0$$<Operate>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass24_0___Operate_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x58ad6a0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ad7f1: cmp byte ptr [rip + 0x1c97b06], 0
// asm:   0x58ad7f8: jne 0x58ad80d
// asm:   0x58ad914: jmp 0x58ad97f
// asm:   0x58ada36: jmp 0x58adb27
// asm:   0x58ada4d: jmp 0x58ad80d

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass24_0___Operate_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass24_0_o *__this,
               MethodInfo *method)

{
  uint32_t uVar1;
  uint value;
  UI_BaseMenu_o *pUVar2;
  UI_SetNamePopup_o *pUVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_WeatherSet_o *pSVar5;
  Settings_WeatherSettings_o *pSVar6;
  Settings_SetSettingsContainer_WeatherSet__o *pSVar7;
  Settings_ListSetting_T__o *pSVar8;
  System_Collections_Generic_List_object__o *__this_00;
  Settings_IntSetting_o *pSVar9;
  Settings_InGameSet_o *pSVar10;
  Settings_IntSetting_o *pSVar11;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  bool bVar12;
  int32_t iVar13;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754531b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_WeatherSet_GetCount);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherSet_IndexOf)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_WeatherSet_CopySelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_SetSettingsContainer_WeatherSet_CreateSet)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_WeatherSet_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Create");
    il2cpp_codegen_initialize_runtime_metadata(&"Rename");
    Il2CppMethodInitialized_0754531b = '\x01';
  }
  pUVar2 = (__this->fields).menu;
  if (((pUVar2 == (UI_BaseMenu_o *)0x0) ||
      (pUVar3 = (pUVar2->fields).SetNamePopup, pUVar3 == (UI_SetNamePopup_o *)0x0)) ||
     (pSVar4 = (pUVar3->fields).NameSetting, pSVar4 == (Settings_StringSetting_o *)0x0)) goto label_058adb27;
  method_00 = (MethodInfo *)(pSVar4->fields)._value;
  bVar12 = System_String__op_Equality((__this->fields).operation,"Rename",(MethodInfo *)0x0);
  if (bVar12) {
    pSVar5 = (__this->fields).selected;
    if ((pSVar5 == (Settings_WeatherSet_o *)0x0) ||
       (pSVar4 = (pSVar5->fields).Name, pSVar4 == (Settings_StringSetting_o *)0x0)) goto label_058adb27;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)method_00,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    goto label_058adaf5;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  if (Il2CppMethodInitialized_075452fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_075452fe = '\x01';
  }
  pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
  if (((pSVar6 == (Settings_WeatherSettings_o *)0x0) ||
      (pSVar7 = (pSVar6->fields).WeatherSets, pSVar7 == (Settings_SetSettingsContainer_WeatherSet__o *)0x0))
     || ((pSVar8 = (pSVar7->fields).Sets, pSVar8 == (Settings_ListSetting_T__o *)0x0 ||
         (__this_00 = (System_Collections_Generic_List_object__o *)(pSVar8->fields)._value,
         __this_00 == (System_Collections_Generic_List_object__o *)0x0)))) goto label_058adb27;
  pSVar9 = (pSVar7->fields).SelectedSetIndex;
  iVar13 = System_Collections_Generic_List_object___IndexOf
                     (__this_00,(Il2CppObject *)(__this->fields).selected,
                      (MethodInfo_395E250 *)MethodInfo_System_Collections_Generic_List_WeatherSet_IndexOf);
  if (pSVar9 == (Settings_IntSetting_o *)0x0) goto label_058adb27;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar9,iVar13,
             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  bVar12 = System_String__op_Equality((__this->fields).operation,"Create",(MethodInfo *)0x0);
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor;
  if (bVar12) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    }
    if (Il2CppMethodInitialized_075452fe == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      Il2CppMethodInitialized_075452fe = '\x01';
    }
    pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
    if ((pSVar6 == (Settings_WeatherSettings_o *)0x0) ||
       (pSVar7 = (pSVar6->fields).WeatherSets, pSVar7 == (Settings_SetSettingsContainer_WeatherSet__o *)0x0))
    goto label_058adb27;
    Settings_SetSettingsContainer_object___CreateSet
              ((Settings_SetSettingsContainer_T__o *)pSVar7,(System_String_o *)method_00,
               (MethodInfo_40478C0 *)MethodInfo_Settings_SetSettingsContainer_WeatherSet_CreateSet);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    }
    if (Il2CppMethodInitialized_075452fe == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      Il2CppMethodInitialized_075452fe = '\x01';
    }
    pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
    if ((pSVar6 == (Settings_WeatherSettings_o *)0x0) ||
       (pSVar7 = (pSVar6->fields).WeatherSets, pSVar7 == (Settings_SetSettingsContainer_WeatherSet__o *)0x0))
    goto label_058adb27;
    Settings_SetSettingsContainer_object___CopySelectedSet
              ((Settings_SetSettingsContainer_T__o *)pSVar7,(System_String_o *)method_00,
               (MethodInfo_40479F0 *)MethodInfo_Settings_SetSettingsContainer_WeatherSet_CopySelectedSet);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  if (Il2CppMethodInitialized_075452fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_075452fe = '\x01';
  }
  pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
  if (((pSVar6 == (Settings_WeatherSettings_o *)0x0) ||
      (pSVar7 = (pSVar6->fields).WeatherSets, pSVar7 == (Settings_SetSettingsContainer_WeatherSet__o *)0x0))
     || (pSVar8 = (pSVar7->fields).Sets, pSVar8 == (Settings_ListSetting_T__o *)0x0)) goto label_058adb27;
  pSVar9 = (pSVar7->fields).SelectedSetIndex;
  iVar13 = Settings_ListSetting_object___GetCount
                     (pSVar8,(MethodInfo_515DE80 *)MethodInfo_Settings_ListSetting_WeatherSet_GetCount);
  if (pSVar9 == (Settings_IntSetting_o *)0x0) goto label_058adb27;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar9,iVar13 + -1,
             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_058ada1a;
label_058ada60:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058ada26;
label_058ada7f:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar10 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_058ada60;
label_058ada1a:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058ada7f;
label_058ada26:
    pSVar10 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (pSVar10 != (Settings_InGameSet_o *)0x0) {
    pSVar9 = (pSVar10->fields).WeatherIndex;
    if (Il2CppMethodInitialized_075452fe == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      Il2CppMethodInitialized_075452fe = '\x01';
    }
    pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
    if (((pSVar6 != (Settings_WeatherSettings_o *)0x0) &&
        (pSVar7 = (pSVar6->fields).WeatherSets, pSVar7 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0))
       && ((pSVar11 = (pSVar7->fields).SelectedSetIndex, pSVar11 != (Settings_IntSetting_o *)0x0 &&
           (pSVar9 != (Settings_IntSetting_o *)0x0)))) {
      value = (pSVar11->fields)._value;
      method_00 = (MethodInfo *)(ulong)value;
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar9,value,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
label_058adaf5:
      root = (__this->fields).root;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Save(root,method_00);
      return;
    }
  }
label_058adb27:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass24_0$$<Operate>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass24_0___Operate_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x58adb30
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58adb63: cmp byte ptr [rip + 0x1c97794], 0
// asm:   0x58adbf3: cmp byte ptr [rip + 0x1c97704], 0
// asm:   0x58adbfa: jne 0x58adc0f
// asm:   0x58adca7: jmp 0x58adf59
// asm:   0x58add31: jmp 0x58adb7f
// asm:   0x58add57: jmp 0x58adc0f
// asm:   0x58adddf: jmp 0x58adf59
// asm:   0x58ade56: cmp byte ptr [rip + 0x1c974a1], 0
// asm:   0x58ade5d: jne 0x58ade72
// asm:   0x58adecc: jmp 0x58adf59
// asm:   0x58adedf: jmp 0x58ade72

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass24_0___Operate_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass24_0_o *__this,
               MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  uint value;
  Settings_WeatherSettings_o *pSVar3;
  Settings_SetSettingsContainer_WeatherSet__o *pSVar4;
  Settings_ListSetting_T__o *pSVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  Settings_InGameSet_o *pSVar7;
  Settings_IntSetting_o *pSVar8;
  Settings_IntSetting_o *pSVar9;
  int32_t index;
  int32_t value_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754531c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherSet_IndexOf)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_WeatherSet_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_WeatherSet_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_0754531c = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  if (Il2CppMethodInitialized_075452fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_075452fe = '\x01';
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
  if ((((pSVar3 == (Settings_WeatherSettings_o *)0x0) ||
       (pSVar4 = (pSVar3->fields).WeatherSets, pSVar4 == (Settings_SetSettingsContainer_WeatherSet__o *)0x0))
      || (pSVar5 = (pSVar4->fields).Sets, pSVar5 == (Settings_ListSetting_T__o *)0x0)) ||
     (pSVar6 = (System_Collections_Generic_List_object__o *)(pSVar5->fields)._value,
     pSVar6 == (System_Collections_Generic_List_object__o *)0x0)) goto label_058adf59;
  index = System_Collections_Generic_List_object___IndexOf
                    (pSVar6,(Il2CppObject *)(__this->fields).selected,
                     (MethodInfo_395E250 *)MethodInfo_System_Collections_Generic_List_WeatherSet_IndexOf);
  if (index < 0) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  if (Il2CppMethodInitialized_075452fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_075452fe = '\x01';
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
  if (((pSVar3 == (Settings_WeatherSettings_o *)0x0) ||
      (pSVar4 = (pSVar3->fields).WeatherSets, pSVar4 == (Settings_SetSettingsContainer_WeatherSet__o *)0x0))
     || ((pSVar5 = (pSVar4->fields).Sets, pSVar5 == (Settings_ListSetting_T__o *)0x0 ||
         (pSVar6 = (System_Collections_Generic_List_object__o *)(pSVar5->fields)._value,
         pSVar6 == (System_Collections_Generic_List_object__o *)0x0)))) goto label_058adf59;
  System_Collections_Generic_List_object___RemoveAt
            (pSVar6,index,(MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_WeatherSet_RemoveAt
            );
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_058add6e;
label_058adc83:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058adc93;
label_058add91:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_058adc83;
label_058add6e:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058add91;
label_058adc93:
    pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar7 == (Settings_InGameSet_o *)0x0) ||
     (pSVar8 = (pSVar7->fields).WeatherIndex, pSVar8 == (Settings_IntSetting_o *)0x0)) goto label_058adf59;
  iVar2 = (pSVar8->fields)._value;
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058addff;
label_058addcf:
    pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058addcf;
label_058addff:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar7 == (Settings_InGameSet_o *)0x0) ||
     (pSVar8 = (pSVar7->fields).WeatherIndex, pSVar8 == (Settings_IntSetting_o *)0x0)) goto label_058adf59;
  value_00 = 0;
  if (iVar2 != index) {
    value_00 = iVar2 - (uint)(index < iVar2);
  }
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar8,value_00,
             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  if (Il2CppMethodInitialized_075452fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_075452fe = '\x01';
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
  if ((pSVar3 == (Settings_WeatherSettings_o *)0x0) ||
     (pSVar4 = (pSVar3->fields).WeatherSets, pSVar4 == (Settings_SetSettingsContainer_WeatherSet__o *)0x0))
  goto label_058adf59;
  pSVar8 = (pSVar4->fields).SelectedSetIndex;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_058adeef;
label_058adeb0:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058adebc;
label_058adf0e:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_058adeb0;
label_058adeef:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058adf0e;
label_058adebc:
    pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (((pSVar7 != (Settings_InGameSet_o *)0x0) &&
      (pSVar9 = (pSVar7->fields).WeatherIndex, pSVar9 != (Settings_IntSetting_o *)0x0)) &&
     (pSVar8 != (Settings_IntSetting_o *)0x0)) {
    value = (pSVar9->fields)._value;
    method_00 = (MethodInfo *)(ulong)value;
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar8,value,
               (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Save((__this->fields).root,method_00);
    return;
  }
label_058adf59:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass24_0$$<Operate>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass24_0___Operate_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x58adf60

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass24_0___Operate_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass24_0_o *__this,
               MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  UI_ImportPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *text;
  Settings_WeatherSet_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  Settings_BoolSetting_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  bool bVar6;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  Settings_WeatherSet_o *pSStack_28;
  System_String_o *pSStack_20;
  
  if (Il2CppMethodInitialized_0754531d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_0754531d = '\x01';
  }
  pSStack_28 = (Settings_WeatherSet_o *)0x0;
  pSStack_20 = (System_String_o *)0x0;
  pUVar1 = (__this->fields).menu;
  if (((pUVar1 != (UI_BaseMenu_o *)0x0) &&
      (pUVar2 = (pUVar1->fields).ImportPopup, pUVar2 != (UI_ImportPopup_o *)0x0)) &&
     (pSVar3 = (pUVar2->fields).ImportSetting, pSVar3 != (Settings_StringSetting_o *)0x0)) {
    text = (pSVar3->fields)._value;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    }
    bVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__TryImport
                      (text,&pSStack_28,&pSStack_20,in_RCX);
    if (bVar6) {
      if (((((pSStack_28 != (Settings_WeatherSet_o *)0x0) &&
            (pSVar4 = (__this->fields).selected, pSVar4 != (Settings_WeatherSet_o *)0x0)) &&
           ((pSVar3 = (pSVar4->fields).Name, pSVar3 != (Settings_StringSetting_o *)0x0 &&
            ((((pSVar5 = (pSStack_28->fields).Name, pSVar5 != (Settings_StringSetting_o *)0x0 &&
               (Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)(pSVar3->fields)._value,
                           (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value),
               pSStack_28 != (Settings_WeatherSet_o *)0x0)) &&
              (pSVar4 = (__this->fields).selected, pSVar4 != (Settings_WeatherSet_o *)0x0)) &&
             ((pSVar3 = (pSVar4->fields).UniqueId, pSVar3 != (Settings_StringSetting_o *)0x0 &&
              (pSVar5 = (pSStack_28->fields).UniqueId, pSVar5 != (Settings_StringSetting_o *)0x0)))))))) &&
          (Settings_TypedSetting_object___set_Value
                     ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)(pSVar3->fields)._value,
                      (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value),
          pSStack_28 != (Settings_WeatherSet_o *)0x0)) &&
         (__this_00 = (pSStack_28->fields).Preset, __this_00 != (Settings_BoolSetting_o *)0x0)) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)__this_00,false,
                   (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        pSVar4 = (__this->fields).selected;
        if (pSVar4 != (Settings_WeatherSet_o *)0x0) {
          (*(pSVar4->klass->vtable)._10_Copy.methodPtr)
                    (pSVar4,(Settings_BaseSetting_o *)pSStack_28,(pSVar4->klass->vtable)._10_Copy.method);
          pUVar1 = (__this->fields).menu;
          if ((pUVar1 != (UI_BaseMenu_o *)0x0) &&
             (pUVar2 = (pUVar1->fields).ImportPopup, pUVar2 != (UI_ImportPopup_o *)0x0)) {
            method_00 = (pUVar2->klass->vtable)._22_Hide.method;
            (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,method_00);
            root = (__this->fields).root;
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
            }
            Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Save(root,method_00);
            return;
          }
        }
      }
    }
    else {
      pUVar1 = (__this->fields).menu;
      if ((pUVar1 != (UI_BaseMenu_o *)0x0) &&
         (pUVar2 = (pUVar1->fields).ImportPopup, pUVar2 != (UI_ImportPopup_o *)0x0)) {
        UI_ImportPopup__ShowError(pUVar2,pSStack_20,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass25_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass25_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x58abba0

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass25_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass25_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass25_0$$<ImportSchedule>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass25_0___ImportSchedule_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x58ae160
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ae3ee: jmp 0x58ae2c4

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass25_0___ImportSchedule_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass25_0_o *__this,
               MethodInfo *method)

{
  uint32_t uVar1;
  UI_ImportPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_WeatherSet_o *pSVar4;
  Settings_StringSetting_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  Settings_WeatherSettings_o *pSVar5;
  bool bVar6;
  Weather_WeatherSchedule_o *__this_01;
  System_String_o *value;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754531e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherSchedule);
    Il2CppMethodInitialized_0754531e = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Weather_WeatherSchedule);
  Weather_WeatherSchedule___ctor(__this_01,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).popup;
  if (((pUVar2 != (UI_ImportPopup_o *)0x0) &&
      (pSVar3 = (pUVar2->fields).ImportSetting, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (__this_01 != (Weather_WeatherSchedule_o *)0x0)) {
    value = Weather_WeatherSchedule__DeserializeFromCSV(__this_01,(pSVar3->fields)._value,(MethodInfo *)0x0);
    bVar6 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar6) {
      pSVar4 = (__this->fields).target;
      if (((pSVar4 != (Settings_WeatherSet_o *)0x0) &&
          (pUVar2 = (__this->fields).popup, pUVar2 != (UI_ImportPopup_o *)0x0)) &&
         ((pSVar3 = (pUVar2->fields).ImportSetting, pSVar3 != (Settings_StringSetting_o *)0x0 &&
          (__this_00 = (pSVar4->fields).Schedule, __this_00 != (Settings_StringSetting_o *)0x0)))) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)(pSVar3->fields)._value,
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        pUVar2 = (__this->fields).popup;
        if (pUVar2 != (UI_ImportPopup_o *)0x0) {
          (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
            pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->static_fields->_draft;
            uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).
                    cctor_finished_or_no_cctor;
            klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor;
          }
          else {
            pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->static_fields->_draft;
            uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).
                    cctor_finished_or_no_cctor;
            klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor;
          }
          TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor =
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c *)klass;
          if (pSVar4 == (Settings_WeatherSet_o *)0x0) {
            if (uVar1 == 0) {
              il2cpp_codegen_runtime_class_init(klass);
            }
            if (Il2CppMethodInitialized_07545300 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
              Il2CppMethodInitialized_07545300 = '\x01';
            }
            pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
            if (pSVar5 == (Settings_WeatherSettings_o *)0x0) goto label_058ae3f3;
            (*(pSVar5->klass->vtable)._18_Save.methodPtr)(pSVar5,(pSVar5->klass->vtable)._18_Save.method);
            root = (__this->fields).root;
            uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).
                    cctor_finished_or_no_cctor;
          }
          else {
            if (uVar1 == 0) {
              il2cpp_codegen_runtime_class_init(klass);
            }
            Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__PromoteDraft((MethodInfo *)klass);
            root = (__this->fields).root;
            uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).
                    cctor_finished_or_no_cctor;
          }
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
          }
          if (Il2CppMethodInitialized_07545313 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen)
            ;
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            Il2CppMethodInitialized_07545313 = '\x01';
            uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
          }
          else {
            uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
          }
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandboxContent((MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          }
          Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh(root,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pUVar2 = (__this->fields).popup;
      if (pUVar2 != (UI_ImportPopup_o *)0x0) {
        UI_ImportPopup__ShowError(pUVar2,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_058ae3f3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass7_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass7_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x58a9000

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass7_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass7_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass7_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass7_0___Build_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass7_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x58ae400
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ae544: lea rax, [rip + 0x1a2d1b5]  ; "ExportSchedule"
// asm:   0x58ae54b: mov rbx, qword ptr [rax]
// asm:   0x58ae54e: cmp byte ptr [rip + 0x1c96dbf], 0
// asm:   0x58ae555: jne 0x58ae576
// asm:   0x58ae6cb: jmp 0x58ae46b
// asm:   0x58ae6ec: jmp 0x58ae576

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass7_0___Build_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass7_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  System_Action_GisketchActionContext__o *pSVar3;
  
  if (Il2CppMethodInitialized_0754531f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass7_0_Build_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass7_0_Build_b__2);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-export-schedule");
    il2cpp_codegen_initialize_runtime_metadata(&"ExportSchedule");
    il2cpp_codegen_initialize_runtime_metadata(&"ImportSchedule");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-import-schedule");
    Il2CppMethodInitialized_0754531f = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    pSVar2 = "ImportSchedule";
  }
  else {
    pSVar2 = "ImportSchedule";
  }
  "ImportSchedule" = pSVar2;
  if (Il2CppMethodInitialized_07545314 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
    Il2CppMethodInitialized_07545314 = '\x01';
  }
  pSVar2 = System_String__Concat_52f0320("GameCreate.Sandbox.Weather.",pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,(MethodInfo *)0x0);
  pSVar3 = (__this->fields).__9__1;
  if (pSVar3 == (System_Action_GisketchActionContext__o *)0x0) {
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pSVar3,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass7_0_Build_b__1,
               (MethodInfo_4A803E0 *)0x0);
    (__this->fields).__9__1 = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
  }
  if (actions == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Button_5265860
            (actions,1,pSVar2,pSVar3,"game-create-weather-import-schedule",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,(MethodInfo *)0x0
            );
  pSVar2 = "ExportSchedule";
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    pSVar2 = "ExportSchedule";
  }
  "ExportSchedule" = pSVar2;
  if (Il2CppMethodInitialized_07545314 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
    Il2CppMethodInitialized_07545314 = '\x01';
  }
  pSVar2 = System_String__Concat_52f0320("GameCreate.Sandbox.Weather.",pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,(MethodInfo *)0x0);
  pSVar3 = (__this->fields).__9__2;
  if (pSVar3 == (System_Action_GisketchActionContext__o *)0x0) {
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pSVar3,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass7_0_Build_b__2,
               (MethodInfo_4A803E0 *)0x0);
    (__this->fields).__9__2 = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2);
  }
  Gisketch_Aottg2UI_Code_AottgUi__Button_5265860
            (actions,1,pSVar2,pSVar3,"game-create-weather-export-schedule",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass7_0$$<Build>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass7_0___Build_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass7_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58ae700

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass7_0___Build_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass7_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Settings_WeatherSet_o *target;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    Il2CppMethodInitialized_07545320 = '\x01';
  }
  if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  root = UnityEngine_GameObject__GetComponentInParent_object_
                   (context.fields.GameObject,
                    (MethodInfo_353BB40 *)
                    MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  target = (__this->fields).target;
  method_00 = extraout_RDX;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    method_00 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__ImportSchedule(root,target,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass7_0$$<Build>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass7_0___Build_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass7_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x58ae790
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ae7c3: jmp 0x58ae860

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass7_0___Build_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass7_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  uint32_t uVar1;
  UI_BaseMenu_o *pUVar2;
  Settings_WeatherSet_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  UI_ExportPopup_o *__this_00;
  
  if (Il2CppMethodInitialized_07545321 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ExportPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07545321 = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    pUVar2 = *(UI_BaseMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (pUVar2 != (UI_BaseMenu_o *)0x0) {
    __this_00 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__AboveOverlay_object_
                          ((Il2CppObject *)(pUVar2->fields).ExportPopup,
                           (MethodInfo_3488650 *)
                           MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ExportPopup);
    pSVar3 = (__this->fields).target;
    if (((pSVar3 != (Settings_WeatherSet_o *)0x0) &&
        (pSVar4 = (pSVar3->fields).Schedule, pSVar4 != (Settings_StringSetting_o *)0x0)) &&
       (__this_00 != (UI_ExportPopup_o *)0x0)) {
      UI_ExportPopup__Show(__this_00,(pSVar4->fields)._value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass9_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x58ad210

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass9_0$$<BuildHeader>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_0___BuildHeader_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x58ae870
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58aea00: jmp 0x58aedf3
// asm:   0x58aed9e: cmp byte ptr [rip + 0x1c96559], 0
// asm:   0x58aeda5: jne 0x58aedba
// asm:   0x58aede1: jmp 0x58aee02
// asm:   0x58aedf1: jmp 0x58aedba

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_0___BuildHeader_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Settings_WeatherSettings_o *pSVar2;
  Settings_SetSettingsContainer_WeatherSet__o *__this_00;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  Il2CppObject *pIVar6;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_1_o *__this_01;
  System_String_o *tooltip;
  System_String_o *icon;
  System_Action_GisketchActionContext__o *__this_02;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  ulong uVar10;
  System_Nullable_bool__Fields aSStack_58 [4];
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_0_o *pGStack_50;
  Il2CppObject *pIStack_48;
  ulong uStack_40;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_1_Fields *pGStack_38;
  
  pGStack_50 = __this;
  if (Il2CppMethodInitialized_07545322 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_WeatherSet_CanDeleteSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass9_1_BuildHeader_b__3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass9_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Create");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Rename");
    il2cpp_codegen_initialize_runtime_metadata(&"Import");
    il2cpp_codegen_initialize_runtime_metadata(&"Export");
    Il2CppMethodInitialized_07545322 = '\x01';
  }
  if ((pGStack_50->fields).preset == false) {
    pIVar6 = SZArrayNew(TypeInfo_string_array,6);
    if (pIVar6 != (Il2CppObject *)0x0) {
      if (*(int *)&pIVar6[1].monitor != 0) {
        pIVar6[2].klass = (Il2CppClass *)"Create";
        Il2CppCodeGenWriteBarrier(&pIVar6[2].klass);
        if (((ulong)pIVar6[1].monitor & 0xfffffffe) != 0) {
          pIVar6[2].monitor = "Copy";
          Il2CppCodeGenWriteBarrier(&pIVar6[2].monitor);
          if (2 < *(uint *)&pIVar6[1].monitor) {
            pIVar6[3].klass = (Il2CppClass *)"Rename";
            Il2CppCodeGenWriteBarrier(&pIVar6[3].klass);
            if (((ulong)pIVar6[1].monitor & 0xfffffffc) != 0) {
              pIVar6[3].monitor = "Delete";
              Il2CppCodeGenWriteBarrier(&pIVar6[3].monitor);
              if (4 < *(uint *)&pIVar6[1].monitor) {
                pIVar6[4].klass = (Il2CppClass *)"Import";
                Il2CppCodeGenWriteBarrier(&pIVar6[4].klass);
                if (5 < *(uint *)&pIVar6[1].monitor) {
                  pIVar6[4].monitor = "Export";
                  Il2CppCodeGenWriteBarrier(&pIVar6[4].monitor);
                  uVar5 = (uint)pIVar6[1].monitor;
                  pIStack_48 = pIVar6;
                  goto joined_r0x058aeaf5;
                }
              }
            }
          }
        }
      }
      goto label_058aee07;
    }
  }
  else {
    pIVar6 = SZArrayNew(TypeInfo_string_array,3);
    if (pIVar6 != (Il2CppObject *)0x0) {
      if (*(int *)&pIVar6[1].monitor != 0) {
        pIVar6[2].klass = (Il2CppClass *)"Create";
        Il2CppCodeGenWriteBarrier(&pIVar6[2].klass);
        if (((ulong)pIVar6[1].monitor & 0xfffffffe) != 0) {
          pIVar6[2].monitor = "Copy";
          Il2CppCodeGenWriteBarrier(&pIVar6[2].monitor);
          if (2 < *(uint *)&pIVar6[1].monitor) {
            pIVar6[3].klass = (Il2CppClass *)"Export";
            Il2CppCodeGenWriteBarrier(&pIVar6[3].klass);
            uVar5 = (uint)pIVar6[1].monitor;
            pIStack_48 = pIVar6;
joined_r0x058aeaf5:
            if (0 < (int)uVar5) {
              uVar10 = 0;
              do {
                if (uVar5 <= uVar10) goto label_058aee07;
                pIVar1 = (&pIStack_48[2].klass)[uVar10];
                __this_01 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)
                                       TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass9_1
                                      );
                System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
                if (__this_01 ==
                    (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_1_o *)0x0)
                goto label_058aee02;
                (__this_01->fields).CS___8__locals1 = pGStack_50;
                uStack_40 = uVar10;
                Il2CppCodeGenWriteBarrier(&(__this_01->fields).CS___8__locals1);
                pGStack_38 = &__this_01->fields;
                (__this_01->fields).name = (System_String_o *)pIVar1;
                Il2CppCodeGenWriteBarrier(&pGStack_38->name);
                pSVar7 = (__this_01->fields).name;
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                tooltip = UI_UIManager__GetLocaleCommon(pSVar7,(MethodInfo *)0x0);
                bVar3 = System_String__op_Equality
                                  ((__this_01->fields).name,"Delete",(MethodInfo *)0x0);
                icon = UI_SetActionIcons__For((__this_01->fields).name,(MethodInfo *)0x0);
                __this_02 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
                System_Action_GisketchActionContext____ctor
                          (__this_02,(Il2CppObject *)__this_01,
                           (intptr_t)
                           MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass9_1_BuildHeader_b__3
                           ,(MethodInfo_4A803E0 *)0x0);
                pSVar7 = (__this_01->fields).name;
                if (pSVar7 == (System_String_o *)0x0) goto label_058aee02;
                pSVar7 = System_String__ToLowerInvariant(pSVar7,(MethodInfo *)0x0);
                pSVar7 = System_String__Concat_52f0320("game-create-weather-",pSVar7,(MethodInfo *)0x0);
                if ((actions == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) ||
                   (pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__IconButton
                                       (actions,(uint)bVar3 * 5 + 1,icon,__this_02,pSVar7,tooltip,
                                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                        (MethodInfo *)0x0),
                   pGVar8 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) goto label_058aee02;
                (pGVar8->fields).formLabel = tooltip;
                Il2CppCodeGenWriteBarrier(&(pGVar8->fields).formLabel);
                width = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
                height = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
                pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                   ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                    (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                    ,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                (pGVar8->fields).layout = pGVar9;
                Il2CppCodeGenWriteBarrier(&(pGVar8->fields).layout);
                bVar4 = System_String__op_Inequality(pGStack_38->name,"Delete",(MethodInfo *)0x0)
                ;
                bVar3 = true;
                if (!bVar4) {
                  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).
                      cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
                  }
                  if (Il2CppMethodInitialized_075452fe == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
                    Il2CppMethodInitialized_075452fe = '\x01';
                  }
                  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
                  if ((pSVar2 == (Settings_WeatherSettings_o *)0x0) ||
                     (__this_00 = (pSVar2->fields).WeatherSets,
                     __this_00 == (Settings_SetSettingsContainer_WeatherSet__o *)0x0)) goto label_058aee02;
                  bVar3 = Settings_SetSettingsContainer_object___CanDeleteSelectedSet
                                    ((Settings_SetSettingsContainer_T__o *)__this_00,
                                     (MethodInfo_4047B80 *)
                                     MethodInfo_Settings_SetSettingsContainer_WeatherSet_CanDeleteSelectedSet)
                  ;
                }
                aSStack_58[0].hasValue = false;
                aSStack_58[0].value = false;
                System_Nullable_bool____ctor
                          ((System_Nullable_bool__o *)aSStack_58,bVar3,
                           (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
                (pGVar8->fields).enabled.fields = aSStack_58[0];
                uVar10 = uStack_40 + 1;
                uVar5 = *(uint *)&pIStack_48[1].monitor;
              } while ((long)uVar10 < (long)(int)uVar5);
            }
            return;
          }
        }
      }
label_058aee07:
      ThrowIndexOutOfRangeException();
    }
  }
label_058aee02:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass9_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_1___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_1_o* __this, const MethodInfo* method);
// 0x58aee10

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_1___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_1_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass9_1$$<BuildHeader>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_1___BuildHeader_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_1_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58aee20

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_1___BuildHeader_b__3
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_1_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_0_o *pGVar1;
  Settings_WeatherSet_o *selected;
  System_String_o *operation;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_07545323 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    Il2CppMethodInitialized_07545323 = '\x01';
  }
  if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (context.fields.GameObject,
                      (MethodInfo_353BB40 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    pGVar1 = (__this->fields).CS___8__locals1;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass9_0_o *)0x0) {
      selected = (pGVar1->fields).selected;
      operation = (__this->fields).name;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Operate(root,selected,operation,in_RCX);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$get_Sets
// il2cpp: Settings_SetSettingsContainer_WeatherSet__o* Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__get_Sets (const MethodInfo* method);
// 0x58a8790

Settings_SetSettingsContainer_WeatherSet__o *
Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__get_Sets(MethodInfo *method)

{
  Settings_WeatherSettings_o *pSVar1;
  
  if (Il2CppMethodInitialized_075452fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_075452fe = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
  if (pSVar1 == (Settings_WeatherSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar1->fields).WeatherSets;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Build (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58a87e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a8fea: jmp 0x58a8ae8

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Build
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t length;
  uint32_t uVar3;
  System_Collections_Generic_List_IAottgSettingsStateSync__o *pSVar4;
  Settings_WeatherSettings_o *pSVar5;
  Settings_SetSettingsContainer_WeatherSet__o *__this;
  Settings_BoolSetting_o *pSVar6;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_StaticFields *pGVar7;
  Settings_StringSetting_o *setting;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass7_0_o *__this_00;
  Settings_WeatherSet_o *pSVar8;
  Settings_WeatherSet_o *pSVar9;
  Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *pGVar10;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *pGVar11;
  System_Action_AottgUi__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *__this_02;
  System_String_array *options;
  MethodInfo *pMVar12;
  Settings_WeatherSet_c *method_00;
  MethodInfo *in_R8;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass7_0_Fields *targetAddress;
  
  if (Il2CppMethodInitialized_075452ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_IAottgSettingsStateSync_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass7_0_Build_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass7_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumToStringArray_WeatherSkybox);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_WeatherSet);
    il2cpp_codegen_initialize_runtime_metadata(&"Flashlight");
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"FogDensity");
    il2cpp_codegen_initialize_runtime_metadata(&"Rain");
    il2cpp_codegen_initialize_runtime_metadata(&"Daylight");
    il2cpp_codegen_initialize_runtime_metadata(&"DaylightIntensity");
    il2cpp_codegen_initialize_runtime_metadata(&"WindForce");
    il2cpp_codegen_initialize_runtime_metadata(&"Wind");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-schedule-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"WindDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"AmbientLight");
    il2cpp_codegen_initialize_runtime_metadata(&"UseSchedule");
    il2cpp_codegen_initialize_runtime_metadata(&"Snow");
    il2cpp_codegen_initialize_runtime_metadata(&"SkyboxColor");
    il2cpp_codegen_initialize_runtime_metadata(&"FogColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DaylightDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"Skybox");
    il2cpp_codegen_initialize_runtime_metadata(&"RainForce");
    il2cpp_codegen_initialize_runtime_metadata(&"ScheduleLoop");
    il2cpp_codegen_initialize_runtime_metadata(&"SnowForce");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunder");
    Il2CppMethodInitialized_075452ff = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass7_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->static_fields->Rows;
  if (pSVar4 != (System_Collections_Generic_List_IAottgSettingsStateSync__o *)0x0) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (Il2CppMethodInitialized_075452fe == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      Il2CppMethodInitialized_075452fe = '\x01';
    }
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
    if (((pSVar5 != (Settings_WeatherSettings_o *)0x0) &&
        (__this = (pSVar5->fields).WeatherSets, __this != (Settings_SetSettingsContainer_WeatherSet__o *)0x0))
       && (pSVar8 = (Settings_WeatherSet_o *)
                    Settings_SetSettingsContainer_object___GetSelectedSet
                              ((Settings_SetSettingsContainer_T__o *)__this,
                               (MethodInfo_40477A0 *)
                               MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSelectedSet),
          pSVar8 != (Settings_WeatherSet_o *)0x0)) {
      bVar2 = (TypeInfo_Settings_WeatherSet->_2).typeHierarchyDepth;
      if (((pSVar8->klass->_2).typeHierarchyDepth < bVar2) ||
         ((pSVar8->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_WeatherSet))
      {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar8);
      }
      pSVar6 = (pSVar8->fields).Preset;
      if (pSVar6 != (Settings_BoolSetting_o *)0x0) {
        if ((pSVar6->fields)._value == false) {
          pSVar9 = (Settings_WeatherSet_o *)0x0;
          uVar3 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).
                  cctor_finished_or_no_cctor;
        }
        else {
          method_00 = TypeInfo_Settings_WeatherSet;
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
          }
          pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Draft(pSVar8,(MethodInfo *)method_00);
          uVar3 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).
                  cctor_finished_or_no_cctor;
        }
        if (uVar3 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
        }
        pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->static_fields;
        pGVar7->_draft = pSVar9;
        Il2CppCodeGenWriteBarrier(&pGVar7->_draft);
        if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass7_0_o *)0x0) {
          pSVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->static_fields->_draft;
          if (pSVar9 != (Settings_WeatherSet_o *)0x0) {
            pSVar8 = pSVar9;
          }
          targetAddress = &__this_00->fields;
          (__this_00->fields).target = pSVar8;
          Il2CppCodeGenWriteBarrier(&targetAddress->target);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
          }
          Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__BuildHeader(ui,(MethodInfo *)pSVar8);
          if (targetAddress->target != (Settings_WeatherSet_o *)0x0) {
            pSVar6 = (targetAddress->target->fields).UseSchedule;
            pGVar10 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter);
            Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter___ctor(pGVar10,pSVar6,(MethodInfo *)0x0);
            pGVar11 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Row
                                ("UseSchedule",0,
                                 (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)pGVar10,
                                 (System_String_array *)0x0,in_R8);
            if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
              Gisketch_Aottg2UI_Code_AottgUi__Component
                        (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar11,(MethodInfo *)0x0);
              if (targetAddress->target != (Settings_WeatherSet_o *)0x0) {
                pSVar6 = (targetAddress->target->fields).ScheduleLoop;
                pGVar10 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter);
                Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter___ctor
                          (pGVar10,pSVar6,(MethodInfo *)0x0);
                pGVar11 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Row
                                    ("ScheduleLoop",0,
                                     (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)pGVar10,
                                     (System_String_array *)0x0,in_R8);
                Gisketch_Aottg2UI_Code_AottgUi__Component
                          (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar11,(MethodInfo *)0x0);
                __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
                System_Action_object____ctor
                          ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
                           (intptr_t)
                           MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass7_0_Build_b__0
                           ,(MethodInfo_4A81BE0 *)0x0);
                layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                   ("Row",(System_String_o *)0x0,(System_String_o *)0x0,
                                    (System_String_o *)0x0,"Wrap",12.0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                    ,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Code_AottgUi__Panel
                          (ui,"clear",__this_01,"game-create-weather-schedule-actions",layout,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
                pSVar8 = (__this_00->fields).target;
                if (pSVar8 != (Settings_WeatherSet_o *)0x0) {
                  setting = (pSVar8->fields).Skybox;
                  __this_02 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)
                                         TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
                  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter___ctor
                            (__this_02,setting,(MethodInfo *)0x0);
                  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                  }
                  options = Utility_Util__EnumToStringArray_Int32Enum_
                                      ((MethodInfo_377C8A0 *)
                                       MethodInfo_Utility_Util_EnumToStringArray_WeatherSkybox);
                  pGVar11 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Row
                                      ("Skybox",1,
                                       (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this_02,
                                       options,(MethodInfo *)layout);
                  Gisketch_Aottg2UI_Code_AottgUi__Component
                            (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar11,(MethodInfo *)0x0);
                  if (targetAddress->target != (Settings_WeatherSet_o *)0x0) {
                    Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Color
                              (ui,"SkyboxColor",(targetAddress->target->fields).SkyboxColor,
                               (MethodInfo *)options);
                    if (targetAddress->target != (Settings_WeatherSet_o *)0x0) {
                      Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Color
                                (ui,"Daylight",(targetAddress->target->fields).Daylight,
                                 (MethodInfo *)options);
                      if (targetAddress->target != (Settings_WeatherSet_o *)0x0) {
                        pMVar12 = (MethodInfo *)0x1;
                        Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Float
                                  (ui,"DaylightIntensity",(targetAddress->target->fields).DaylightIntensity,
                                   true,(MethodInfo *)layout);
                        if (targetAddress->target != (Settings_WeatherSet_o *)0x0) {
                          Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Vector
                                    (ui,"DaylightDirection",
                                     (targetAddress->target->fields).DaylightDirection,pMVar12);
                          if (targetAddress->target != (Settings_WeatherSet_o *)0x0) {
                            Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Color
                                      (ui,"AmbientLight",(targetAddress->target->fields).AmbientLight,
                                       pMVar12);
                            if (targetAddress->target != (Settings_WeatherSet_o *)0x0) {
                              Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Color
                                        (ui,"Flashlight",(targetAddress->target->fields).Flashlight,
                                         pMVar12);
                              if (targetAddress->target != (Settings_WeatherSet_o *)0x0) {
                                Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Color
                                          (ui,"FogColor",(targetAddress->target->fields).FogColor,
                                           pMVar12);
                                if (targetAddress->target != (Settings_WeatherSet_o *)0x0) {
                                  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Float
                                            (ui,"FogDensity",
                                             (targetAddress->target->fields).FogDensity,false,
                                             (MethodInfo *)layout);
                                  if (targetAddress->target != (Settings_WeatherSet_o *)0x0) {
                                    Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Float
                                              (ui,"Rain",(targetAddress->target->fields).Rain,
                                               true,(MethodInfo *)layout);
                                    if (targetAddress->target != (Settings_WeatherSet_o *)0x0) {
                                      Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Float
                                                (ui,"Thunder",
                                                 (targetAddress->target->fields).Thunder,true,
                                                 (MethodInfo *)layout);
                                      if (targetAddress->target != (Settings_WeatherSet_o *)0x0) {
                                        Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Float
                                                  (ui,"Snow",
                                                   (targetAddress->target->fields).Snow,true,
                                                   (MethodInfo *)layout);
                                        if (targetAddress->target != (Settings_WeatherSet_o *)0x0) {
                                          pMVar12 = (MethodInfo *)0x1;
                                          Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Float
                                                    (ui,"Wind",
                                                     (targetAddress->target->fields).Wind,true,
                                                     (MethodInfo *)layout);
                                          if (targetAddress->target != (Settings_WeatherSet_o *)0x0) {
                                            Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Vector
                                                      (ui,"WindDirection",
                                                       (targetAddress->target->fields).WindDirection,pMVar12);
                                            if (targetAddress->target != (Settings_WeatherSet_o *)0x0) {
                                              Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Float
                                                        (ui,"RainForce",
                                                         (targetAddress->target->fields).RainForce,false,
                                                         (MethodInfo *)layout);
                                              if (targetAddress->target != (Settings_WeatherSet_o *)0x0) {
                                                Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Float
                                                          (ui,"SnowForce",
                                                           (targetAddress->target->fields).SnowForce,false,
                                                           (MethodInfo *)layout);
                                                if (targetAddress->target != (Settings_WeatherSet_o *)0x0) {
                                                  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Float
                                                            (ui,"WindForce",
                                                             (targetAddress->target->fields).WindForce,false,
                                                             (MethodInfo *)layout);
                                                  return;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$SaveChanges
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__SaveChanges (const MethodInfo* method);
// 0x58a9d10

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__SaveChanges(MethodInfo *method)

{
  Settings_WeatherSettings_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545300 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07545300 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
  if (pSVar1 == (Settings_WeatherSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pSVar1->klass->vtable)._18_Save.methodPtr)(pSVar1,(pSVar1->klass->vtable)._18_Save.method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$BuildHeader
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__BuildHeader (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58a9110

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__BuildHeader
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_07545301 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c_BuildHeader_b__9_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-header");
    Il2CppMethodInitialized_07545301 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c);
  }
  style = "clear";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->static_fields;
  __this = pGVar1->__9__9_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c_BuildHeader_b__9_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->static_fields;
    pGVar1->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__9_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,12.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,style,__this,"game-create-weather-header",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$PresetNotice
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__PresetNotice (Settings_WeatherSet_o* preset, const MethodInfo* method);
// 0x58a9d60
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a9dee: lea rax, [rip + 0x1a3bd53]  ; "PresetNoticeExisting"
// asm:   0x58a9df5: mov rbx, qword ptr [rax]
// asm:   0x58a9df8: cmp byte ptr [rip + 0x1c9b515], 0
// asm:   0x58a9dff: jne 0x58a9e20
// asm:   0x58a9e83: lea rax, [rip + 0x1a3bcb6]  ; "PresetNotice"
// asm:   0x58a9e8a: mov rbx, qword ptr [rax]
// asm:   0x58a9e8d: cmp byte ptr [rip + 0x1c9b480], 0
// asm:   0x58a9e9a: jmp 0x58a9e20

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__PresetNotice
          (Settings_WeatherSet_o *preset,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  Settings_WeatherSet_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07545302 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata(&"{0}");
    il2cpp_codegen_initialize_runtime_metadata(&"PresetNotice");
    il2cpp_codegen_initialize_runtime_metadata(&"PresetNoticeExisting");
    Il2CppMethodInitialized_07545302 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__CopyName(preset,method);
  pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__ExistingCopy(preset,method);
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor;
  if (pSVar3 == (Settings_WeatherSet_o *)0x0) {
    pSVar4 = "PresetNotice";
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
      pSVar4 = "PresetNotice";
    }
  }
  else {
    pSVar4 = "PresetNoticeExisting";
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
      pSVar4 = "PresetNoticeExisting";
    }
  }
  if (Il2CppMethodInitialized_07545314 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
    Il2CppMethodInitialized_07545314 = '\x01';
  }
  pSVar4 = System_String__Concat_52f0320("GameCreate.Sandbox.Weather.",pSVar4,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar4 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar4,(MethodInfo *)0x0);
  if (pSVar4 == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = System_String__Replace_5304550(pSVar4,"{0}",pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$RefreshHeader
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__RefreshHeader (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x58aa0f0

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__RefreshHeader
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *replacement;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *__this_00;
  
  if (Il2CppMethodInitialized_07545303 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_BuildHeader);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-header");
    Il2CppMethodInitialized_07545303 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_BuildHeader,
             (MethodInfo_4A81BE0 *)0x0);
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                       (root,"game-create-weather-header",__this,"game-create-weather-header",(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      if ((int)pGVar1->max_length != 1) {
        return;
      }
      replacement = pGVar1->m_Items[0];
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions);
      Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *)0x0) {
        (__this_00->fields).PreserveScroll = true;
        (__this_00->fields).PreserveFocus = true;
        (__this_00->fields).SettleLayout = true;
        Gisketch_Aottg2UI_GisketchUIRoot__RefreshNode
                  (root,"game-create-weather-header",replacement,__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Draft
// il2cpp: Settings_WeatherSet_o* Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Draft (Settings_WeatherSet_o* preset, const MethodInfo* method);
// 0x58a9010

Settings_WeatherSet_o *
Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Draft(Settings_WeatherSet_o *preset,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_StaticFields *pGVar1;
  Settings_BoolSetting_o *__this;
  Settings_StringSetting_o *__this_00;
  Settings_WeatherSet_o *__this_01;
  System_String_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545304 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_WeatherSet);
    Il2CppMethodInitialized_07545304 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->static_fields;
  pGVar1->_draftSource = preset;
  Il2CppCodeGenWriteBarrier(&pGVar1->_draftSource);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_WeatherSet);
  Settings_WeatherSet___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Settings_WeatherSet_o *)0x0) {
    (*(__this_01->klass->vtable)._10_Copy.methodPtr)
              (__this_01,(Settings_BaseSetting_o *)preset,(__this_01->klass->vtable)._10_Copy.method);
    __this = (__this_01->fields).Preset;
    if (__this != (Settings_BoolSetting_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)__this,false,
                 (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      __this_00 = (__this_01->fields).Name;
      value = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__CopyName(preset,method_00);
      if (__this_00 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        return __this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$CopyName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__CopyName (Settings_WeatherSet_o* preset, const MethodInfo* method);
// 0x58a9eb0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__CopyName
          (Settings_WeatherSet_o *preset,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545305 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&" (Custom)");
    Il2CppMethodInitialized_07545305 = '\x01';
  }
  if (((preset == (Settings_WeatherSet_o *)0x0) ||
      (pSVar1 = (preset->fields).Name, pSVar1 == (Settings_StringSetting_o *)0x0)) ||
     (pSVar2 = (pSVar1->fields)._value, pSVar2 == (System_String_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar2 = System_String__TrimEnd_53071b0(pSVar2,0x2a,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_52f0320(pSVar2," (Custom)",(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$ExistingCopy
// il2cpp: Settings_WeatherSet_o* Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__ExistingCopy (Settings_WeatherSet_o* preset, const MethodInfo* method);
// 0x58a9f20

Settings_WeatherSet_o *
Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__ExistingCopy
          (Settings_WeatherSet_o *preset,MethodInfo *method)

{
  Settings_WeatherSettings_o *pSVar1;
  Settings_SetSettingsContainer_WeatherSet__o *pSVar2;
  Settings_ListSetting_T__o *pSVar3;
  System_Collections_Generic_List_T__o *source;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass14_0_o *__this;
  System_String_o *pSVar4;
  System_Func_WeatherSet__bool__o *__this_00;
  Settings_WeatherSet_o *pSVar5;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545306 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_FirstOrDefault_WeatherSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_WeatherSet_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_WeatherSet_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass14_0_ExistingCopy_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass14_0);
    Il2CppMethodInitialized_07545306 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass14_0);
  method_00 = (MethodInfo *)0x0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__CopyName(preset,method_00);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass14_0_o *)0x0) {
    (__this->fields).name = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).name);
    if (Il2CppMethodInitialized_075452fe == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      Il2CppMethodInitialized_075452fe = '\x01';
    }
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
    if (((pSVar1 != (Settings_WeatherSettings_o *)0x0) &&
        (pSVar2 = (pSVar1->fields).WeatherSets, pSVar2 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0))
       && (pSVar3 = (pSVar2->fields).Sets, pSVar3 != (Settings_ListSetting_T__o *)0x0)) {
      source = (pSVar3->fields)._value;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_WeatherSet_bool);
      System_Func_object__bool____ctor
                ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass14_0_ExistingCopy_b__0
                 ,(MethodInfo_4F19300 *)0x0);
      pSVar5 = System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                          (System_Func_TSource__bool__o *)__this_00,
                          (MethodInfo_34ED9E0 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_WeatherSet);
      return pSVar5;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$PromoteDraft
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__PromoteDraft (const MethodInfo* method);
// 0x58aa210
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58aa383: jmp 0x58aa4b0
// asm:   0x58aa388: test rbx, rbx
// asm:   0x58aa38b: je 0x58aa89d
// asm:   0x58aa3e0: cmp byte ptr [rip + 0x1c9af17], 0
// asm:   0x58aa3e7: jne 0x58aa3fc
// asm:   0x58aa48b: jmp 0x58aa4b0
// asm:   0x58aa583: jmp 0x58aa89d
// asm:   0x58aa6a6: lea rax, [rip + 0x1a2de0b]  ; "CopyUpdated"
// asm:   0x58aa6ad: mov rbx, qword ptr [rax]
// asm:   0x58aa6b0: cmp byte ptr [rip + 0x1c9ac5d], 0
// asm:   0x58aa6b7: jne 0x58aa6d8
// asm:   0x58aa72e: lea rax, [rip + 0x1a4224b]  ; "Title"
// asm:   0x58aa735: mov rbx, qword ptr [rax]
// asm:   0x58aa738: cmp byte ptr [rip + 0x1c9abd5], 0
// asm:   0x58aa73f: jne 0x58aa760
// asm:   0x58aa849: lea rax, [rip + 0x1a2dc48]  ; "CopyCreated"
// asm:   0x58aa850: mov rbx, qword ptr [rax]
// asm:   0x58aa853: cmp byte ptr [rip + 0x1c9aaba], 0
// asm:   0x58aa860: jmp 0x58aa6d8
// asm:   0x58aa881: jmp 0x58aa760
// asm:   0x58aa898: jmp 0x58aa3fc

bool Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__PromoteDraft(MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_StaticFields *pGVar4;
  Settings_WeatherSet_o *edited;
  System_Object_array *pSVar5;
  Settings_WeatherSettings_o *pSVar6;
  Settings_SetSettingsContainer_WeatherSet__o *pSVar7;
  Settings_ListSetting_T__o *pSVar8;
  System_Collections_Generic_List_object__o *pSVar9;
  Settings_IntSetting_o *pSVar10;
  Settings_InGameSet_o *pSVar11;
  Settings_IntSetting_o *pSVar12;
  Settings_StringSetting_o *pSVar13;
  int32_t value;
  Settings_WeatherSet_o *target;
  System_String_o *pSVar14;
  System_String_o *pSVar15;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *__this_00;
  MethodInfo *in_RCX;
  MethodInfo *pMVar16;
  bool bVar17;
  System_Guid_Fields local_48;
  Settings_WeatherSet_o *local_38;
  
  if (Il2CppMethodInitialized_07545307 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgToastDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherSet_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherSet_IndexOf)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_WeatherSet_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"{0}");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"CopyUpdated");
    il2cpp_codegen_initialize_runtime_metadata(&"information");
    il2cpp_codegen_initialize_runtime_metadata(&"CopyCreated");
    Il2CppMethodInitialized_07545307 = '\x01';
  }
  local_48 = (System_Guid_Fields)ZEXT816(0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->static_fields;
  edited = pGVar4->_draft;
  pGVar4->_draft = (Settings_WeatherSet_o *)0x0;
  pMVar16 = (MethodInfo *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar4->_draft);
  target = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__ExistingCopy
                     (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->static_fields->
                      _draftSource,pMVar16);
  if (target == (Settings_WeatherSet_o *)0x0) {
    if (edited == (Settings_WeatherSet_o *)0x0) goto label_058aa89d;
    pSVar13 = (edited->fields).UniqueId;
    local_48 = (System_Guid_Fields)System_Guid__NewGuid((MethodInfo *)0x0);
    pSVar14 = System_Guid__ToString((System_Guid_o *)&local_48,(MethodInfo *)0x0);
    if (pSVar13 == (Settings_StringSetting_o *)0x0) goto label_058aa89d;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar13,(Il2CppObject *)pSVar14,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    }
    if (Il2CppMethodInitialized_075452fe == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      Il2CppMethodInitialized_075452fe = '\x01';
    }
    pMVar16 = MethodInfo_System_Collections_Generic_List_WeatherSet_Add;
    pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
    if ((((pSVar6 == (Settings_WeatherSettings_o *)0x0) ||
         (pSVar7 = (pSVar6->fields).WeatherSets, pSVar7 == (Settings_SetSettingsContainer_WeatherSet__o *)0x0)
         ) || (pSVar8 = (pSVar7->fields).Sets, pSVar8 == (Settings_ListSetting_T__o *)0x0)) ||
       (pSVar9 = (System_Collections_Generic_List_object__o *)(pSVar8->fields)._value,
       pSVar9 == (System_Collections_Generic_List_object__o *)0x0)) goto label_058aa89d;
    piVar1 = &(pSVar9->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (pSVar9->fields)._items;
    if (pSVar5 == (System_Object_array *)0x0) goto label_058aa89d;
    uVar3 = (pSVar9->fields)._size;
    if (uVar3 < (uint)pSVar5->max_length) {
      (pSVar9->fields)._size = uVar3 + 1;
      pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)edited;
      Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3);
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor;
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar9,(Il2CppObject *)edited,(MethodInfo_395D230 *)pMVar16->klass->rgctx_data[0xe].method);
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor;
    }
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__CopyChangedSettings
              (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->static_fields->_draftSource,
               edited,target,in_RCX);
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor;
    edited = target;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  if (Il2CppMethodInitialized_075452fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_075452fe = '\x01';
  }
  pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
  if (((pSVar6 == (Settings_WeatherSettings_o *)0x0) ||
      (pSVar7 = (pSVar6->fields).WeatherSets, pSVar7 == (Settings_SetSettingsContainer_WeatherSet__o *)0x0))
     || ((pSVar8 = (pSVar7->fields).Sets, pSVar8 == (Settings_ListSetting_T__o *)0x0 ||
         (pSVar9 = (System_Collections_Generic_List_object__o *)(pSVar8->fields)._value,
         pSVar9 == (System_Collections_Generic_List_object__o *)0x0)))) goto label_058aa89d;
  pSVar10 = (pSVar7->fields).SelectedSetIndex;
  value = System_Collections_Generic_List_object___IndexOf
                    (pSVar9,(Il2CppObject *)edited,
                     (MethodInfo_395E250 *)MethodInfo_System_Collections_Generic_List_WeatherSet_IndexOf);
  if (pSVar10 == (Settings_IntSetting_o *)0x0) goto label_058aa89d;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar10,value,
             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_058aa567;
label_058aa596:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058aa573;
label_058aa5b5:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar11 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_058aa596;
label_058aa567:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058aa5b5;
label_058aa573:
    pSVar11 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (pSVar11 != (Settings_InGameSet_o *)0x0) {
    pSVar10 = (pSVar11->fields).WeatherIndex;
    if (Il2CppMethodInitialized_075452fe == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      Il2CppMethodInitialized_075452fe = '\x01';
    }
    pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
    if (((pSVar6 != (Settings_WeatherSettings_o *)0x0) &&
        (pSVar7 = (pSVar6->fields).WeatherSets, pSVar7 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0))
       && ((pSVar12 = (pSVar7->fields).SelectedSetIndex, pSVar12 != (Settings_IntSetting_o *)0x0 &&
           (pSVar10 != (Settings_IntSetting_o *)0x0)))) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar10,(pSVar12->fields)._value,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      if (Il2CppMethodInitialized_07545300 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
        Il2CppMethodInitialized_07545300 = '\x01';
      }
      pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
      if (pSVar6 != (Settings_WeatherSettings_o *)0x0) {
        (*(pSVar6->klass->vtable)._18_Save.methodPtr)(pSVar6,(pSVar6->klass->vtable)._18_Save.method);
        Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandboxContent((MethodInfo *)0x0);
        uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor;
        local_38 = target;
        if (target == (Settings_WeatherSet_o *)0x0) {
          pSVar14 = "CopyCreated";
          if (uVar2 == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
            pSVar14 = "CopyCreated";
          }
        }
        else {
          pSVar14 = "CopyUpdated";
          if (uVar2 == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
            pSVar14 = "CopyUpdated";
          }
        }
        if (Il2CppMethodInitialized_07545314 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
          il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
          Il2CppMethodInitialized_07545314 = '\x01';
        }
        pSVar14 = System_String__Concat_52f0320("GameCreate.Sandbox.Weather.",pSVar14,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        pSVar15 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar14,(MethodInfo *)0x0);
        __this = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
        pSVar14 = "Title";
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
          pSVar14 = "Title";
        }
        "Title" = pSVar14;
        if (Il2CppMethodInitialized_07545314 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
          il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
          Il2CppMethodInitialized_07545314 = '\x01';
        }
        pSVar14 = System_String__Concat_52f0320("GameCreate.Sandbox.Weather.",pSVar14,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        pSVar14 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar14,(MethodInfo *)0x0);
        if (((edited != (Settings_WeatherSet_o *)0x0) &&
            (pSVar13 = (edited->fields).Name, pSVar13 != (Settings_StringSetting_o *)0x0)) &&
           (pSVar15 != (System_String_o *)0x0)) {
          pSVar15 = System_String__Replace_5304550
                              (pSVar15,"{0}",(pSVar13->fields)._value,(MethodInfo *)0x0);
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgToastDefinition);
          Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor
                    (__this_00,2,"information",pSVar14,pSVar15,(System_String_o *)0x0,
                     (MethodInfo *)0x0);
          if (__this != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
            bVar17 = local_38 == (Settings_WeatherSet_o *)0x0;
            Gisketch_Aottg2UI_GisketchUIRoot__ShowToast(__this,__this_00,(MethodInfo *)0x0);
            return bVar17;
          }
        }
      }
    }
  }
label_058aa89d:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$CopyChangedSettings
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__CopyChangedSettings (Settings_WeatherSet_o* source, Settings_WeatherSet_o* edited, Settings_WeatherSet_o* target, const MethodInfo* method);
// 0x58aa8b0
// eh: try 0x58aaa5f..0x58aae1b -> pad 0x58aae57 (+29 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x58aae6f..0x58aae74 -> pad 0x58aae79 cleanup
// eh: try 0x58aae7c..0x58aae86 -> pad 0x58aae8e catch (...) [compiler noexcept guard]
// asm: 53 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58aaa08: lea r14, [rip + 0x19ce9e9]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x58aaa0f: lea r15, [rip + 0x1a3844a]  ; "Name"
// asm:   0x58aaa16: lea r13, [rip + 0x1cabcab]
// asm:   0x58aaa1d: jmp 0x58aaa2e
// asm:   0x58aaa20: mov rbx, qword ptr [rsp + 8]
// asm:   0x58aaa25: test rbx, rbx
// asm:   0x58aaa28: je 0x58aadba
// asm:   0x58aaa4d: nop dword ptr [rax]
// asm:   0x58aad6d: nop dword ptr [rax]
// asm:   0x58aae1b: mov rdi, r14
// asm:   0x58aae1e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58aae23: jmp 0x58aae57
// asm:   0x58aae25: jmp 0x58aae57
// asm:   0x58aae27: jmp 0x58aae57
// asm:   0x58aae29: jmp 0x58aae57
// asm:   0x58aae2b: jmp 0x58aae57
// asm:   0x58aae2d: jmp 0x58aae57
// asm:   0x58aae2f: jmp 0x58aae57
// asm:   0x58aae31: jmp 0x58aae57
// asm:   0x58aae33: jmp 0x58aae57
// asm:   0x58aae35: jmp 0x58aae57
// asm:   0x58aae37: jmp 0x58aae57
// asm:   0x58aae39: jmp 0x58aae57
// asm:   0x58aae3b: jmp 0x58aae57
// asm:   0x58aae3d: jmp 0x58aae57
// asm:   0x58aae3f: jmp 0x58aae57
// asm:   0x58aae41: jmp 0x58aae57
// asm:   0x58aae43: jmp 0x58aae57
// asm:   0x58aae45: jmp 0x58aae57
// asm:   0x58aae47: jmp 0x58aae57
// asm:   0x58aae49: jmp 0x58aae57
// asm:   0x58aae4b: jmp 0x58aae57
// asm:   0x58aae4d: jmp 0x58aae57
// asm:   0x58aae4f: jmp 0x58aae57
// asm:   0x58aae51: jmp 0x58aae57
// asm:   0x58aae53: jmp 0x58aae57
// asm:   0x58aae55: jmp 0x58aae57
// asm:   0x58aae57: mov rbx, rax
// asm:   0x58aae5a: cmp edx, 1
// asm:   0x58aae5d: jne 0x58aae7c
// asm:   0x58aae5f: mov rdi, rbx
// asm:   0x58aae62: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58aae67: mov r14, qword ptr [rax]
// asm:   0x58aae6a: mov qword ptr [rsp + 0x30], r14
// asm:   0x58aae6f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58aae74: jmp 0x58aad2b
// asm:   0x58aae79: mov rbx, rax
// asm:   0x58aae7c: lea rdi, [rsp + 0x30]
// asm:   0x58aae81: call 0x2fcfbd0  ; il2cpp_runtime_helper_02fcfbd0()
// asm:   0x58aae86: mov rdi, rbx
// asm:   0x58aae89: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58aae8e: mov rdi, rax
// asm:   0x58aae91: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__CopyChangedSettings
               (Settings_WeatherSet_o *source,Settings_WeatherSet_o *edited,Settings_WeatherSet_o *target,
               MethodInfo *method)

{
  byte bVar1;
  System_Collections_Specialized_OrderedDictionary_o *pSVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  char cVar5;
  bool bVar6;
  Il2CppObject *pIVar7;
  VirtualInvokeData *pVVar8;
  System_String_o *a;
  long *plVar9;
  System_String_o *a_00;
  long *plVar10;
  System_String_o *b;
  ulong uVar11;
  long lVar12;
  Il2CppObject *local_70;
  Il2CppObject *local_68;
  Settings_WeatherSet_o *local_60;
  Settings_WeatherSet_o *local_58;
  Settings_WeatherSet_o *local_50;
  undefined8 local_48;
  Il2CppObject **local_40;
  Il2CppObject **local_38;
  
  local_58 = source;
  if (Il2CppMethodInitialized_07545308 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&"UniqueId");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset");
    Il2CppMethodInitialized_07545308 = '\x01';
  }
  local_70 = (Il2CppObject *)0x0;
  local_68 = (Il2CppObject *)0x0;
  if (((edited == (Settings_WeatherSet_o *)0x0) ||
      (pSVar2 = (edited->fields).Settings, pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0
      )) || (pIVar7 = (Il2CppObject *)
                      System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar2,(MethodInfo *)0x0),
            pIVar7 == (Il2CppObject *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar3 = pIVar7->klass;
  uVar11 = (ulong)(pIVar3->_2).interface_offsets_count;
  local_60 = target;
  local_50 = edited;
  if (uVar11 != 0) {
    pIVar4 = (pIVar3->_1).interfaceOffsets;
    lVar12 = 0;
    do {
      if (*(System_Collections_IEnumerable_c **)((long)&pIVar4->interfaceType + lVar12) ==
          TypeInfo_System_Collections_IEnumerable) {
        pVVar8 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar12);
        goto label_058aa9d1;
      }
      lVar12 = lVar12 + 0x10;
    } while (uVar11 * 0x10 != lVar12);
  }
  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,0);
label_058aa9d1:
  pIVar7 = (Il2CppObject *)(*pVVar8->methodPtr)(pIVar7,pVVar8->method);
  local_48 = 0;
  local_40 = &local_70;
  local_38 = &local_68;
  do {
    local_70 = pIVar7;
    if (pIVar7 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = pIVar7->klass;
    uVar11 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar4->interfaceType + lVar12) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar8 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar12);
          goto label_058aaa83;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar11 * 0x10 != lVar12);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_058aaa83:
    cVar5 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
    pIVar7 = local_70;
    if (cVar5 == '\0') {
      pIVar7 = il2cpp_vm_Object_IsInst(local_70,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (pIVar7 == (Il2CppObject *)0x0) {
        return;
      }
      pIVar3 = pIVar7->klass;
      uVar11 = (ulong)(pIVar3->_2).interface_offsets_count;
      local_68 = pIVar7;
      if (uVar11 == 0) goto label_058aad7f;
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar12 = 0;
      break;
    }
    if (local_70 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = local_70->klass;
    uVar11 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar12) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar8 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar12) + 1);
          goto label_058aab17;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar11 * 0x10 != lVar12);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_70,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_058aab17:
    a = (System_String_o *)(*pVVar8->methodPtr)(pIVar7,pVVar8->method);
    if ((a != (System_String_o *)0x0) && (a->klass != g_data_07556758)) {
      il2cpp_codegen_raise_invalid_cast_exception(a);
    }
    bVar6 = System_String__op_Equality(a,"Name",(MethodInfo *)0x0);
    pIVar7 = local_70;
    if (((!bVar6) &&
        (bVar6 = System_String__op_Equality(a,"UniqueId",(MethodInfo *)0x0), pIVar7 = local_70,
        !bVar6)) &&
       (bVar6 = System_String__op_Equality(a,"Preset",(MethodInfo *)0x0), pIVar7 = local_70,
       !bVar6)) {
      pSVar2 = (local_50->fields).Settings;
      if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar7 = System_Collections_Specialized_OrderedDictionary__get_Item
                         (pSVar2,(Il2CppObject *)a,(MethodInfo *)0x0);
      if (pIVar7 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = pIVar7->klass;
      bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
      if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar7);
      }
      plVar9 = (long *)(*pIVar3->vtable[5].methodPtr)(pIVar7,pIVar3->vtable[5].method);
      if (plVar9 == (long *)0x0) {
        ThrowNullReferenceException();
      }
      a_00 = (System_String_o *)(**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
      if (local_58 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar2 = (local_58->fields).Settings;
      if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar7 = System_Collections_Specialized_OrderedDictionary__get_Item
                         (pSVar2,(Il2CppObject *)a,(MethodInfo *)0x0);
      if (pIVar7 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = pIVar7->klass;
      bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
      if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar7);
      }
      plVar10 = (long *)(*pIVar3->vtable[5].methodPtr)(pIVar7,pIVar3->vtable[5].method);
      if (plVar10 == (long *)0x0) {
        ThrowNullReferenceException();
      }
      b = (System_String_o *)(**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
      bVar6 = System_String__op_Inequality(a_00,b,(MethodInfo *)0x0);
      pIVar7 = local_70;
      if (bVar6) {
        if (local_60 == (Settings_WeatherSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar2 = (local_60->fields).Settings;
        if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar7 = System_Collections_Specialized_OrderedDictionary__get_Item
                           (pSVar2,(Il2CppObject *)a,(MethodInfo *)0x0);
        if (pIVar7 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar3 = pIVar7->klass;
        bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
        if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
           ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar7);
        }
        (*pIVar3->vtable[6].methodPtr)(pIVar7,plVar9,pIVar3->vtable[6].method);
        pIVar7 = local_70;
      }
    }
  } while( true );
  while (lVar12 = lVar12 + 0x10, uVar11 * 0x10 != lVar12) {
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_System_IDisposable) {
      pVVar8 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar12);
      goto label_058aad9d;
    }
  }
label_058aad7f:
  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar7,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_058aad9d:
  (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Edited
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Edited (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58aaea0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58aaf3d: jmp 0x58aafb9
// asm:   0x58aafec: cmp byte ptr [rip + 0x1c9a320], 0
// asm:   0x58aaff3: je 0x58ab046

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Edited
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_WeatherSet_o *pSVar2;
  bool bVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  MethodInfo *method_00;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07545309 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545309 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->static_fields->_draft;
  }
  else {
    pSVar2 = *(Settings_WeatherSet_o **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor)->
                     static_fields + 8);
  }
  if (pSVar2 == (Settings_WeatherSet_o *)0x0) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar3) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot;
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (context.fields.GameObject,
                      (MethodInfo_353BB40 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor;
  }
  else {
    root = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor =
       (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
  }
  bVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__PromoteDraft((MethodInfo *)klass);
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor;
  if (bVar3) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__RefreshHeader(root,method_00);
    return;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  if (Il2CppMethodInitialized_07545313 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545313 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandboxContent((MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh(root,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Track<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Track_object_ (Il2CppObject* row, const MethodInfo_3488560* method);
// 0x3588560
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x3588592: jmp 0x358863e

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Track_object_
          (Il2CppObject *row,MethodInfo_3488560 *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar4;
  MethodInfo *pMVar5;
  
  if (Il2CppMethodInitialized_0753e83c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_IAottgSettingsStateSync_Add);
    Il2CppMethodInitialized_0753e83c = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    __this = (System_Collections_Generic_List_object__o *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->static_fields->Rows;
    pMVar5 = MethodInfo_System_Collections_Generic_List_IAottgSettingsStateSync_Add;
  }
  else {
    __this = *(System_Collections_Generic_List_object__o **)
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor)->static_fields;
    pMVar5 = MethodInfo_System_Collections_Generic_List_IAottgSettingsStateSync_Add;
  }
  MethodInfo_System_Collections_Generic_List_IAottgSettingsStateSync_Add = pMVar5;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this->fields)._items;
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar3 = (__this->fields)._size;
      if (uVar3 < (uint)pSVar4->max_length) {
        (__this->fields)._size = uVar3 + 1;
        pSVar4->m_Items[(int)uVar3] = row;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar3);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this,row,(MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
      }
      return row;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$SyncState
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__SyncState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x58ab110
// eh: try 0x58ab1f0..0x58ab299 -> pad 0x58ab2a2 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58ab2ba..0x58ab2bf -> pad 0x58ab2de cleanup
// eh: try 0x58ab2e1..0x58ab2eb -> pad 0x58ab2f3 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ab24f: jmp 0x58ab1f0
// asm:   0x58ab29e: jmp 0x58ab2a2
// asm:   0x58ab2a0: jmp 0x58ab2a2
// asm:   0x58ab2a2: mov rbx, rax
// asm:   0x58ab2a5: cmp edx, 1
// asm:   0x58ab2a8: jne 0x58ab2e1
// asm:   0x58ab2aa: mov rdi, rbx
// asm:   0x58ab2ad: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58ab2b2: mov rbx, qword ptr [rax]
// asm:   0x58ab2b5: mov qword ptr [rsp + 0x20], rbx
// asm:   0x58ab2ba: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58ab2bf: lea rax, [rip + 0x19e2bd2]  ; MethodInfo_System_Collections_Generic_List_Enumerator_IAottgSettingsStateSync_Dispose
// asm:   0x58ab2c6: mov rsi, qword ptr [rax]
// asm:   0x58ab2c9: mov rdi, rsp
// asm:   0x58ab2cc: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x58ab2d1: test rbx, rbx
// asm:   0x58ab2d4: je 0x58ab286
// asm:   0x58ab2d6: mov rdi, rbx
// asm:   0x58ab2d9: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58ab2de: mov rbx, rax
// asm:   0x58ab2e1: lea rdi, [rsp + 0x20]
// asm:   0x58ab2e6: call 0x2fcfc70  ; il2cpp_runtime_helper_02fcfc70()
// asm:   0x58ab2eb: mov rdi, rbx
// asm:   0x58ab2ee: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58ab2f3: mov rdi, rax
// asm:   0x58ab2f6: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__SyncState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *__this_00;
  bool bVar3;
  VirtualInvokeData *pVVar4;
  ulong uVar5;
  long lVar6;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_0754530a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_IAottgSettingsStateSync_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_IAottgSettingsStateSync_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_IAottgSettingsStateSync_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_IAottgSettingsStateSync_GetEnumerator);
    Il2CppMethodInitialized_0754530a = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  __this = (System_Collections_Generic_List_object__o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->static_fields->Rows;
  if (__this == (System_Collections_Generic_List_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_58,__this,
             (MethodInfo_395E050 *)
             MethodInfo_System_Collections_Generic_List_IAottgSettingsStateSync_GetEnumerator);
  local_38 = 0;
  local_30 = (undefined1 *)&local_58;
  do {
    bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_IAottgSettingsStateSync_MoveNext)
    ;
    __this_00 = local_58.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_IAottgSettingsStateSync_Dispose);
      return;
    }
    if (local_58.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar1 = (local_58.fields._current)->klass;
    uVar5 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar5 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar6 = 0;
      do {
        if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync_c **)
             ((long)&pIVar2->interfaceType + lVar6) ==
            TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync) {
          pVVar4 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar6);
          goto label_058ab1fa;
        }
        lVar6 = lVar6 + 0x10;
      } while (uVar5 * 0x10 != lVar6);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_58.fields._current,
                        (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync,0);
label_058ab1fa:
    (*pVVar4->methodPtr)(__this_00,root,pVVar4->method);
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Row
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Row (System_String_o* key, int32_t kind, Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o* adapter, System_String_array* options, const MethodInfo* method);
// 0x58a92f0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a9399: cmp byte ptr [rip + 0x1c9bf74], 0
// asm:   0x58a93a0: jne 0x58a93c1
// asm:   0x58a94df: jmp 0x58a93c1

Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *
Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Row
          (System_String_o *key,int32_t kind,Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter,
          System_String_array *options,MethodInfo *method)

{
  System_String_o *id;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *pGVar2;
  System_Action_GisketchActionContext__o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *pGVar3;
  
  if (Il2CppMethodInitialized_0754530b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_Edited);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_Track_AottgSettingRow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-");
    Il2CppMethodInitialized_0754530b = '\x01';
  }
  id = System_String__Concat_52f0320("game-create-weather-",key,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  if (Il2CppMethodInitialized_07545314 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
    Il2CppMethodInitialized_07545314 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320("GameCreate.Sandbox.Weather.",key,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor___ctor
            (__this,id,pSVar1,kind,adapter,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).ShowValue = true;
  pGVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__StringOptions(options,(MethodInfo *)0x0);
  (__this->fields).Options = pGVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Options);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_Edited,
             (MethodInfo_4A803E0 *)0x0);
  (__this->fields).OnChanged = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OnChanged);
  pGVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow)
  ;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor(pGVar3,__this,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Track_object_
                     ((Il2CppObject *)pGVar3,
                      (MethodInfo_3488560 *)
                      MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_Track_AottgSettingRow);
  return pGVar3;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Float
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Float (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* key, Settings_FloatSetting_o* setting, bool slider, const MethodInfo* method);
// 0x58a9700

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Float
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *key,Settings_FloatSetting_o *setting,
               bool slider,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *component;
  
  if (Il2CppMethodInitialized_0754530c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    Il2CppMethodInitialized_0754530c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter___ctor(__this,setting,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  component = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Row
                        (key,4 - (uint)slider,
                         (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,
                         (System_String_array *)0x0,method);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)component,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Color
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Color (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* key, Settings_ColorSetting_o* setting, const MethodInfo* method);
// 0x58a94f0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a95a0: cmp byte ptr [rip + 0x1c9bd6d], 0
// asm:   0x58a95a7: jne 0x58a95c8
// asm:   0x58a96f2: jmp 0x58a95c8

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Color
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *key,Settings_ColorSetting_o *setting,
               MethodInfo *method)

{
  System_String_o *id;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *__this_00;
  System_Action_GisketchActionContext__o *__this_01;
  Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o *pGVar2;
  
  if (Il2CppMethodInitialized_0754530d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_Edited);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_Track_AottgColorSettingRow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-");
    Il2CppMethodInitialized_0754530d = '\x01';
  }
  id = System_String__Concat_52f0320("game-create-weather-",key,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  if (Il2CppMethodInitialized_07545314 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
    Il2CppMethodInitialized_07545314 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320("GameCreate.Sandbox.Weather.",key,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter___ctor(__this,setting,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor___ctor
            (__this_00,id,pSVar1,6,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,
             (MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this_01,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_Edited,
             (MethodInfo_4A803E0 *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    (__this_00->fields).OnChanged = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).OnChanged);
    pGVar2 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow);
    Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___ctor(pGVar2,__this_00,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Track_object_
                       ((Il2CppObject *)pGVar2,
                        (MethodInfo_3488560 *)
                        MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_Track_AottgColorSettingRow
                       );
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar2,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Vector
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Vector (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* key, Settings_Vector3Setting_o* setting, const MethodInfo* method);
// 0x58a97b0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a9916: cmp byte ptr [rip + 0x1c9b9f7], 0
// asm:   0x58a991d: jne 0x58a993e
// asm:   0x58a9cb5: jmp 0x58a993e

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Vector
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *key,Settings_Vector3Setting_o *setting,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Settings_Vector3Setting_o *pSVar3;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass23_0_o *pGVar4;
  System_String_o *pSVar5;
  System_String_o *id;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass23_1_o *__this_00;
  Settings_FloatSetting_o *pSVar6;
  Il2CppObject *pIVar7;
  Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this_01;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *__this_02;
  System_Action_GisketchActionContext__o *__this_03;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *pGVar8;
  Il2CppClass *pIVar9;
  System_IndexOutOfRangeException_o *__this_04;
  MethodInfo *lastManagedFrame;
  float fVar10;
  uint local_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass23_0_o *local_40;
  Gisketch_Aottg2UI_Code_AottgUi_o *local_38;
  
  if (Il2CppMethodInitialized_0754530e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_Track_AottgSettingRow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass23_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass23_1_Vector_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass23_1);
    il2cpp_codegen_initialize_runtime_metadata(&"Z");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"Y");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    Il2CppMethodInitialized_0754530e = '\x01';
  }
  local_5c = 0;
  pGVar4 = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass23_0);
  System_Object___ctor((Il2CppObject *)pGVar4,(MethodInfo *)0x0);
  if (pGVar4 != (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass23_0_o *)0x0) {
    (pGVar4->fields).setting = setting;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).setting);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    }
    if (Il2CppMethodInitialized_07545314 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
      Il2CppMethodInitialized_07545314 = '\x01';
    }
    pSVar5 = System_String__Concat_52f0320("GameCreate.Sandbox.Weather.",key,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar5 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar5,(MethodInfo *)0x0);
    id = System_String__Concat_5301f10("game-create-weather-",key,"-label",(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (ui,pSVar5,"text",id,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      local_5c = 0;
      local_40 = pGVar4;
      local_38 = ui;
      while( true ) {
        pGVar4 = local_40;
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass23_1
                              );
        System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
        if (__this_00 == (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass23_1_o *)0x0)
        break;
        (__this_00->fields).CS___8__locals1 = pGVar4;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).CS___8__locals1);
        (__this_00->fields).component = local_5c;
        pGVar4 = (__this_00->fields).CS___8__locals1;
        if ((pGVar4 == (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass23_0_o *)0x0) ||
           (pSVar3 = (pGVar4->fields).setting, pSVar3 == (Settings_Vector3Setting_o *)0x0)) break;
        fVar1 = (pSVar3->fields)._value.fields.x;
        fVar2 = (pSVar3->fields)._value.fields.y;
        fVar10 = 0.0;
        if (local_5c != 0) {
          if (local_5c == 2) {
            fVar1 = (pSVar3->fields)._value.fields.z;
            fVar2 = 0.0;
            fVar10 = 0.0;
          }
          else {
            if (local_5c != 1) {
              pIVar9 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IndexOutOfRangeException);
              __this_04 = (System_IndexOutOfRangeException_o *)il2cpp_codegen_object_new(pIVar9);
              pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Invalid Vector3 index!");
              System_IndexOutOfRangeException___ctor_54b5410(__this_04,pSVar5,(MethodInfo *)0x0);
              lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UnityEngine_Vector3_get_Item)
              ;
              il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,lastManagedFrame);
            }
            fVar1 = fVar2;
            fVar10 = fVar2;
          }
        }
        local_58 = fVar1;
        fStack_54 = fVar2;
        fStack_50 = fVar10;
        fStack_4c = fVar10;
        pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
        Settings_FloatSetting___ctor_5a411f0(pSVar6,local_58,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
        (__this_00->fields).value = pSVar6;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
        pSVar5 = System_Int32__ToString((int32_t *)&local_5c,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat_5302810
                           ("game-create-weather-",key,"-",pSVar5,(MethodInfo *)0x0);
        pIVar7 = SZArrayNew(TypeInfo_string_array,3);
        if (pIVar7 == (Il2CppObject *)0x0) break;
        if (*(int *)&pIVar7[1].monitor == 0) {
label_058a9cbf:
          ThrowIndexOutOfRangeException();
        }
        pIVar7[2].klass = (Il2CppClass *)"X";
        Il2CppCodeGenWriteBarrier(&pIVar7[2].klass);
        if (((ulong)pIVar7[1].monitor & 0xfffffffe) == 0) goto label_058a9cbf;
        pIVar7[2].monitor = "Y";
        Il2CppCodeGenWriteBarrier(&pIVar7[2].monitor);
        if (*(uint *)&pIVar7[1].monitor < 3) goto label_058a9cbf;
        pIVar7[3].klass = (Il2CppClass *)"Z";
        Il2CppCodeGenWriteBarrier(&pIVar7[3].klass);
        if (*(uint *)&pIVar7[1].monitor <= local_5c) goto label_058a9cbf;
        pIVar9 = (&pIVar7[2].klass)[(int)local_5c];
        pSVar6 = (__this_00->fields).value;
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
        Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter___ctor(__this_01,pSVar6,(MethodInfo *)0x0);
        __this_02 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor
                              );
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor___ctor
                  (__this_02,pSVar5,(System_String_o *)pIVar9,4,
                   (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this_01,(MethodInfo *)0x0);
        __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor
                  (__this_03,(Il2CppObject *)__this_00,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass23_1_Vector_b__0
                   ,(MethodInfo_4A803E0 *)0x0);
        if (__this_02 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) break;
        (__this_02->fields).OnChanged = __this_03;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).OnChanged);
        pGVar8 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor(pGVar8,__this_02,(MethodInfo *)0x0);
        __this = local_38;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
        }
        pGVar8 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Track_object_
                           ((Il2CppObject *)pGVar8,
                            (MethodInfo_3488560 *)
                            MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_Track_AottgSettingRow
                           );
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (__this,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar8,(MethodInfo *)0x0);
        local_5c = local_5c + 1;
        if (2 < (int)local_5c) {
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Operate
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Operate (Gisketch_Aottg2UI_GisketchUIRoot_o* root, Settings_WeatherSet_o* selected, System_String_o* operation, const MethodInfo* method);
// 0x58ab320

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Operate
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,Settings_WeatherSet_o *selected,
               System_String_o *operation,MethodInfo *method)

{
  System_String_o **targetAddress;
  Settings_WeatherSet_o **targetAddress_00;
  Settings_BoolSetting_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_WeatherSettings_o *pSVar3;
  Settings_SetSettingsContainer_WeatherSet__o *pSVar4;
  Settings_ListSetting_T__o *__this;
  Settings_WeatherSet_o *pSVar5;
  bool bVar6;
  int32_t iVar7;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass24_0_o *__this_00;
  UI_SetNamePopup_o *__this_01;
  System_String_o *pSVar8;
  UnityEngine_Events_UnityAction_o *pUVar9;
  System_String_o *pSVar10;
  UI_ConfirmPopup_o *__this_02;
  UI_ImportPopup_o *__this_03;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  SimpleJSONFixed_JSONNode_o *pSVar12;
  UI_ExportPopup_o *__this_04;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass24_0_Fields *targetAddress_01;
  
  if (Il2CppMethodInitialized_0754530f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ConfirmPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ExportPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ImportPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_SetNamePopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_WeatherSet_GetCount);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass24_0_Operate_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass24_0_Operate_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass24_0_Operate_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass24_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"NewSet");
    il2cpp_codegen_initialize_runtime_metadata(&"Create");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Rename");
    il2cpp_codegen_initialize_runtime_metadata(&"DeleteWarning");
    il2cpp_codegen_initialize_runtime_metadata(&"Import");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Export");
    Il2CppMethodInitialized_0754530f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass24_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass24_0_o *)0x0) {
    targetAddress = &(__this_00->fields).operation;
    (__this_00->fields).operation = operation;
    Il2CppCodeGenWriteBarrier(targetAddress);
    targetAddress_00 = &(__this_00->fields).selected;
    (__this_00->fields).selected = selected;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    (__this_00->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).root);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    targetAddress_01 = &__this_00->fields;
    (__this_00->fields).menu = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    Il2CppCodeGenWriteBarrier(&targetAddress_01->menu);
    pSVar8 = (__this_00->fields).operation;
    bVar6 = System_String__op_Equality(pSVar8,"Create",(MethodInfo *)0x0);
    if (((bVar6) ||
        (bVar6 = System_String__op_Equality(pSVar8,"Copy",(MethodInfo *)0x0), bVar6)) ||
       (bVar6 = System_String__op_Equality(pSVar8,"Rename",(MethodInfo *)0x0), bVar6)) {
      bVar6 = System_String__op_Equality(*targetAddress,"Rename",(MethodInfo *)0x0);
      if (bVar6) {
        if ((*targetAddress_00 == (Settings_WeatherSet_o *)0x0) ||
           (pSVar1 = ((*targetAddress_00)->fields).Preset, pSVar1 == (Settings_BoolSetting_o *)0x0))
        goto label_058aba02;
        if ((pSVar1->fields)._value != false) {
          return;
        }
      }
      if (targetAddress_01->menu != (UI_BaseMenu_o *)0x0) {
        __this_01 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__AboveOverlay_object_
                              ((Il2CppObject *)(targetAddress_01->menu->fields).SetNamePopup,
                               (MethodInfo_3488650 *)
                               MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_SetNamePopup
                              );
        bVar6 = System_String__op_Equality(*targetAddress,"Rename",(MethodInfo *)0x0);
        if (bVar6) {
          if ((*targetAddress_00 == (Settings_WeatherSet_o *)0x0) ||
             (pSVar2 = ((*targetAddress_00)->fields).Name, pSVar2 == (Settings_StringSetting_o *)0x0))
          goto label_058aba02;
          pSVar8 = (pSVar2->fields)._value;
        }
        else {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
          }
          pSVar8 = "NewSet";
          if (Il2CppMethodInitialized_07545314 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
            il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
            Il2CppMethodInitialized_07545314 = '\x01';
          }
          pSVar8 = System_String__Concat_52f0320("GameCreate.Sandbox.Weather.",pSVar8,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
          }
          pSVar8 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar8,(MethodInfo *)0x0);
        }
        pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (pUVar9,(Il2CppObject *)__this_00,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass24_0_Operate_b__0
                   ,(MethodInfo *)0x0);
        pSVar10 = (__this_00->fields).operation;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar10 = UI_UIManager__GetLocaleCommon(pSVar10,(MethodInfo *)0x0);
        if (__this_01 != (UI_SetNamePopup_o *)0x0) {
          UI_SetNamePopup__Show(__this_01,pSVar8,pUVar9,pSVar10,(System_String_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      bVar6 = System_String__op_Equality(pSVar8,"Delete",(MethodInfo *)0x0);
      if (bVar6) {
        if ((*targetAddress_00 != (Settings_WeatherSet_o *)0x0) &&
           (pSVar1 = ((*targetAddress_00)->fields).Preset, pSVar1 != (Settings_BoolSetting_o *)0x0)) {
          if ((pSVar1->fields)._value != false) {
            return;
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
          }
          if (Il2CppMethodInitialized_075452fe == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
            Il2CppMethodInitialized_075452fe = '\x01';
          }
          pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
          if (((pSVar3 != (Settings_WeatherSettings_o *)0x0) &&
              (pSVar4 = (pSVar3->fields).WeatherSets,
              pSVar4 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0)) &&
             (__this = (pSVar4->fields).Sets, __this != (Settings_ListSetting_T__o *)0x0)) {
            iVar7 = Settings_ListSetting_object___GetCount
                              (__this,(MethodInfo_515DE80 *)
                                      MethodInfo_Settings_ListSetting_WeatherSet_GetCount);
            if (iVar7 < 2) {
              return;
            }
            if (targetAddress_01->menu != (UI_BaseMenu_o *)0x0) {
              __this_02 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__AboveOverlay_object_
                                    ((Il2CppObject *)(targetAddress_01->menu->fields).ConfirmPopup,
                                     (MethodInfo_3488650 *)
                                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ConfirmPopup
                                    );
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pSVar8 = UI_UIManager__GetLocaleCommon("DeleteWarning",(MethodInfo *)0x0);
              pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        (pUVar9,(Il2CppObject *)__this_00,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass24_0_Operate_b__1
                         ,(MethodInfo *)0x0);
              pSVar10 = UI_UIManager__GetLocaleCommon("Delete",(MethodInfo *)0x0);
              if (__this_02 != (UI_ConfirmPopup_o *)0x0) {
                UI_ConfirmPopup__Show(__this_02,pSVar8,pUVar9,pSVar10,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      else {
        bVar6 = System_String__op_Equality(pSVar8,"Import",(MethodInfo *)0x0);
        if (bVar6) {
          if ((*targetAddress_00 != (Settings_WeatherSet_o *)0x0) &&
             (pSVar1 = ((*targetAddress_00)->fields).Preset, pSVar1 != (Settings_BoolSetting_o *)0x0)) {
            if ((pSVar1->fields)._value != false) {
              return;
            }
            if (targetAddress_01->menu != (UI_BaseMenu_o *)0x0) {
              __this_03 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__AboveOverlay_object_
                                    ((Il2CppObject *)(targetAddress_01->menu->fields).ImportPopup,
                                     (MethodInfo_3488650 *)
                                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ImportPopup
                                    );
              pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        (pUVar9,(Il2CppObject *)__this_00,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass24_0_Operate_b__2
                         ,(MethodInfo *)0x0);
              if (__this_03 != (UI_ImportPopup_o *)0x0) {
                UI_ImportPopup__Show
                          (__this_03,pUVar9,true,"","",(MethodInfo *)0x0
                          );
                return;
              }
            }
          }
        }
        else {
          bVar6 = System_String__op_Equality(pSVar8,"Export",(MethodInfo *)0x0);
          if (!bVar6) {
            return;
          }
          pSVar5 = *targetAddress_00;
          if (pSVar5 != (Settings_WeatherSet_o *)0x0) {
            pSVar11 = (*(pSVar5->klass->vtable)._5_SerializeToJsonObject.methodPtr)
                                (pSVar5,(pSVar5->klass->vtable)._5_SerializeToJsonObject.method);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar12 = SimpleJSONFixed_JSONNode__op_Implicit_5764070(false,(MethodInfo *)0x0);
            if (pSVar11 != (SimpleJSONFixed_JSONNode_o *)0x0) {
              (*(pSVar11->klass->vtable)._8_set_Item.methodPtr)
                        (pSVar11,"Preset",pSVar12,(pSVar11->klass->vtable)._8_set_Item.method);
              if (targetAddress_01->menu != (UI_BaseMenu_o *)0x0) {
                __this_04 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__AboveOverlay_object_
                                      ((Il2CppObject *)(targetAddress_01->menu->fields).ExportPopup,
                                       (MethodInfo_3488650 *)
                                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ExportPopup
                                      );
                pSVar8 = (*(pSVar11->klass->vtable)._30_ToString.methodPtr)
                                   (pSVar11,4,(pSVar11->klass->vtable)._30_ToString.method);
                if (__this_04 != (UI_ExportPopup_o *)0x0) {
                  UI_ExportPopup__Show(__this_04,pSVar8,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_058aba02:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$ImportSchedule
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__ImportSchedule (Gisketch_Aottg2UI_GisketchUIRoot_o* root, Settings_WeatherSet_o* target, const MethodInfo* method);
// 0x58aba20

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__ImportSchedule
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,Settings_WeatherSet_o *target,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  Settings_WeatherSet_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass25_0_o *__this;
  UI_ImportPopup_o *pUVar4;
  UnityEngine_Events_UnityAction_o *__this_00;
  
  if (Il2CppMethodInitialized_07545310 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ImportPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass25_0_ImportSchedule_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass25_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545310 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass25_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass25_0_o *)0x0) {
    (__this->fields).target = target;
    Il2CppCodeGenWriteBarrier(&(__this->fields).target);
    (__this->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(__this->fields).root);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar1 != (UI_BaseMenu_o *)0x0) {
      pUVar4 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__AboveOverlay_object_
                         ((Il2CppObject *)(pUVar1->fields).ImportPopup,
                          (MethodInfo_3488650 *)
                          MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ImportPopup);
      (__this->fields).popup = pUVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields).popup);
      pUVar4 = (__this->fields).popup;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass25_0_ImportSchedule_b__0
                 ,(MethodInfo *)0x0);
      pSVar2 = (__this->fields).target;
      if (((pSVar2 != (Settings_WeatherSet_o *)0x0) &&
          (pSVar3 = (pSVar2->fields).Schedule, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
         (pUVar4 != (UI_ImportPopup_o *)0x0)) {
        UI_ImportPopup__Show
                  (pUVar4,__this_00,true,"",(pSVar3->fields)._value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$TryImport
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__TryImport (System_String_o* text, Settings_WeatherSet_o** imported, System_String_o** error, const MethodInfo* method);
// 0x58abbb0
// eh: try 0x58abd79..0x58ac76b -> pad 0x58ac671 (+38 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x58ac787..0x58ac7ad -> pad 0x58ac7ad (+1 call sites) cleanup
// eh: try 0x58ac7b2..0x58ac7b7 -> pad 0x58ac818 catch (...) [compiler noexcept guard]
// eh: try 0x58ac7e8..0x58ac7ed -> pad 0x58ac803 cleanup
// eh: try 0x58ac806..0x58ac810 -> pad 0x58ac818 catch (...) [compiler noexcept guard]
// asm: 151 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58abe39: nop dword ptr [rax]
// asm:   0x58abeff: nop 
// asm:   0x58ac3a9: nop dword ptr [rax]
// asm:   0x58ac542: lea rax, [rip + 0x19f282f]  ; MethodInfo_Settings_TypedSetting_bool_set_Value
// asm:   0x58ac549: mov rdx, qword ptr [rax]
// asm:   0x58ac54c: xor esi, esi
// asm:   0x58ac54e: call 0x43da020  ; Settings_TypedSetting_bool___set_Value()
// asm:   0x58ac553: mov rdi, qword ptr [rsp + 0x68]
// asm:   0x58ac558: mov qword ptr [rdi], r13
// asm:   0x58ac55b: mov rsi, r13
// asm:   0x58ac55e: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x58ac563: mov bl, 1
// asm:   0x58ac565: jmp 0x58abdb7
// asm:   0x58ac56a: mov r15, qword ptr [rsp + 8]
// asm:   0x58ac56f: mov r13, qword ptr [rsp + 0x18]
// asm:   0x58ac574: jmp 0x58ac58b
// asm:   0x58ac586: mov r15, qword ptr [rsp + 8]
// asm:   0x58ac5f9: jmp 0x58ac7c8
// asm:   0x58ac5fe: jmp 0x58ac7c8
// asm:   0x58ac603: jmp 0x58ac7c8
// asm:   0x58ac608: jmp 0x58ac7c8
// asm:   0x58ac60d: jmp 0x58ac7c8
// asm:   0x58ac612: jmp 0x58ac7c8
// asm:   0x58ac617: jmp 0x58ac7c8
// asm:   0x58ac61c: jmp 0x58ac7c8
// asm:   0x58ac621: jmp 0x58ac7c8
// asm:   0x58ac626: jmp 0x58ac7c8
// asm:   0x58ac62b: jmp 0x58ac7c8
// asm:   0x58ac630: jmp 0x58ac7c8
// asm:   0x58ac635: jmp 0x58ac7c8
// asm:   0x58ac63a: jmp 0x58ac7c8
// asm:   0x58ac63f: jmp 0x58ac7c8
// asm:   0x58ac644: jmp 0x58ac7c8
// asm:   0x58ac649: jmp 0x58ac7c8
// asm:   0x58ac64e: jmp 0x58ac7c8
// asm:   0x58ac653: jmp 0x58ac7c8
// asm:   0x58ac658: jmp 0x58ac7c8
// asm:   0x58ac65d: jmp 0x58ac7c8
// asm:   0x58ac662: jmp 0x58ac7c8
// asm:   0x58ac667: jmp 0x58ac7c8
// asm:   0x58ac66c: jmp 0x58ac7c8
// asm:   0x58ac671: mov r15, rdx
// asm:   0x58ac674: mov rbx, rax
// asm:   0x58ac677: cmp r15d, 1
// asm:   0x58ac67b: jne 0x58ac810
// asm:   0x58ac681: mov rdi, rbx
// asm:   0x58ac684: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58ac689: mov r14, rax
// asm:   0x58ac68c: mov rbx, qword ptr [rax]
// asm:   0x58ac68f: lea rdi, [rip + 0x19cba2a]  ; TypeInfo_System_Exception
// asm:   0x58ac696: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x58ac69b: test rbx, rbx
// asm:   0x58ac69e: je 0x58ac78c
// asm:   0x58ac6a4: mov rcx, qword ptr [rbx]
// asm:   0x58ac6a7: movzx edx, byte ptr [rax + 0x130]
// asm:   0x58ac6ae: cmp byte ptr [rcx + 0x130], dl
// asm:   0x58ac6b4: jb 0x58ac78c
// asm:   0x58ac6ba: mov rcx, qword ptr [rcx + 0xc8]
// asm:   0x58ac6c1: cmp qword ptr [rcx + rdx*8 - 8], rax
// asm:   0x58ac6c6: jne 0x58ac78c
// asm:   0x58ac6cc: mov rdi, rbx
// asm:   0x58ac6cf: xor esi, esi
// asm:   0x58ac6d1: call 0x55fab90  ; System_Exception__GetType()
// asm:   0x58ac6d6: mov r12, rax
// asm:   0x58ac6d9: lea rdi, [rip + 0x19bdd90]  ; TypeRef_System_Exception
// asm:   0x58ac6e0: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x58ac6e5: mov rbp, rax
// asm:   0x58ac6e8: lea rax, [rip + 0x1ca9fd9]
// asm:   0x58ac6ef: mov rdi, qword ptr [rax + 0xe0]
// asm:   0x58ac6f6: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x58ac6fd: jne 0x58ac704
// asm:   0x58ac6ff: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x58ac704: mov rdi, rbp
// asm:   0x58ac707: xor esi, esi
// asm:   0x58ac709: call 0x55cc520  ; System_Type__GetTypeFromHandle()
// asm:   0x58ac70e: mov rdi, r12
// asm:   0x58ac711: mov rsi, rax
// asm:   0x58ac714: xor edx, edx
// asm:   0x58ac716: call 0x55d7600  ; System_Type__op_Equality()
// asm:   0x58ac71b: test al, al
// asm:   0x58ac71d: je 0x58ac78c
// asm:   0x58ac71f: mov rax, qword ptr [rbx]
// asm:   0x58ac722: mov rsi, qword ptr [rax + 0x190]
// asm:   0x58ac729: mov rdi, rbx
// asm:   0x58ac72c: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x58ac732: mov rbx, rax
// asm:   0x58ac735: test rax, rax
// asm:   0x58ac738: je 0x58ac766
// asm:   0x58ac73a: lea rdi, [rip + 0x1a33d17]  ; "JSON Parse:"
// asm:   0x58ac741: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x58ac746: mov rdi, rbx
// asm:   0x58ac749: mov rsi, rax
// asm:   0x58ac74c: mov edx, 4
// asm:   0x58ac751: xor ecx, ecx
// asm:   0x58ac753: call 0x54002b0  ; System_String__StartsWith()
// asm:   0x58ac758: test al, al
// asm:   0x58ac75a: je 0x58ac78c
// asm:   0x58ac75c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58ac761: jmp 0x58abdb5
// asm:   0x58ac766: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x58ac76b: jmp 0x58ac777
// asm:   0x58ac76d: jmp 0x58ac777
// asm:   0x58ac76f: jmp 0x58ac777
// asm:   0x58ac771: jmp 0x58ac777
// asm:   0x58ac773: jmp 0x58ac777
// asm:   0x58ac775: jmp 0x58ac777
// asm:   0x58ac777: mov rbx, rax
// asm:   0x58ac77a: cmp edx, r15d
// asm:   0x58ac77d: jne 0x58ac7b2
// asm:   0x58ac77f: mov rdi, rbx
// asm:   0x58ac782: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58ac787: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58ac78c: mov edi, 8
// asm:   0x58ac791: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x58ac796: mov rcx, qword ptr [r14]
// asm:   0x58ac799: mov qword ptr [rax], rcx
// asm:   0x58ac79c: lea rsi, [rip + 0x1580d5d]
// asm:   0x58ac7a3: mov rdi, rax
// asm:   0x58ac7a6: xor edx, edx
// asm:   0x58ac7a8: call 0x6e255c0  ; __cxa_throw()
// asm:   0x58ac7ad: jmp 0x58ac7af
// asm:   0x58ac7af: mov rbx, rax
// asm:   0x58ac7b2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58ac7b7: jmp 0x58ac810
// asm:   0x58ac7b9: jmp 0x58ac7c8
// asm:   0x58ac7bb: jmp 0x58ac7c8
// asm:   0x58ac7bd: jmp 0x58ac7c3
// asm:   0x58ac7bf: jmp 0x58ac7c8
// asm:   0x58ac7c1: jmp 0x58ac7c3
// asm:   0x58ac7c3: mov qword ptr [rsp + 8], r15
// asm:   0x58ac7c8: mov rbx, rax
// asm:   0x58ac7cb: cmp edx, 1
// asm:   0x58ac7ce: jne 0x58ac806
// asm:   0x58ac7d0: mov rdi, rbx
// asm:   0x58ac7d3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58ac7d8: mov rcx, qword ptr [rax]
// asm:   0x58ac7db: mov qword ptr [rsp + 0x38], rcx
// asm:   0x58ac7e0: mov qword ptr [rsp + 0x48], rcx
// asm:   0x58ac7e5: xor r12d, r12d
// asm:   0x58ac7e8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58ac7ed: mov r15, qword ptr [rsp + 8]
// asm:   0x58ac7f2: mov r13, qword ptr [rsp + 0x18]
// asm:   0x58ac7f7: lea r14, [rip + 0x1ca9eca]
// asm:   0x58ac7fe: jmp 0x58ac367
// asm:   0x58ac803: mov rbx, rax
// asm:   0x58ac806: lea rdi, [rsp + 0x48]
// asm:   0x58ac80b: call 0x2fcfca0  ; il2cpp_runtime_helper_02fcfca0()
// asm:   0x58ac810: mov rdi, rbx
// asm:   0x58ac813: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58ac818: mov rdi, rax
// asm:   0x58ac81b: call 0x2ab61e0  ; __clang_call_terminate()

bool Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__TryImport
               (System_String_o *text,Settings_WeatherSet_o **imported,System_String_o **error,
               MethodInfo *method)

{
  byte bVar1;
  System_Collections_Specialized_OrderedDictionary_o *pSVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  SimpleJSONFixed_JSONNode_c *pSVar5;
  Settings_StringSetting_o *pSVar6;
  Settings_BoolSetting_o *__this;
  Il2CppType *handle;
  bool bVar7;
  int iVar8;
  int iVar9;
  int32_t iVar10;
  System_String_o *pSVar11;
  SimpleJSONFixed_JSONNode_o *pSVar12;
  Settings_WeatherSet_o *__this_00;
  Il2CppObject *pIVar13;
  VirtualInvokeData *pVVar14;
  SimpleJSONFixed_JSONNode_o *pSVar15;
  long *plVar16;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c_StaticFields *pGVar17;
  System_Func_JSONNode__bool__o *__this_01;
  System_Type_o *enumType;
  Weather_WeatherSchedule_o *__this_02;
  ulong uVar18;
  long lVar19;
  float fVar20;
  Il2CppObject *local_88;
  int32_t local_7c;
  ulong local_78;
  long local_70;
  Il2CppObject *local_68;
  undefined8 local_60;
  Il2CppObject **local_58;
  Il2CppObject **local_50;
  System_Collections_Generic_IEnumerable_JSONNode__o *local_48;
  Settings_WeatherSet_o **local_40;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_07545311 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_WeatherSkybox);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_JSONNode_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c_TryImport_b__26_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherSchedule);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_WeatherSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Weather_WeatherSkybox);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherSkybox);
    il2cpp_codegen_initialize_runtime_metadata(&"UniqueId");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"InvalidPreset");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545311 = '\x01';
  }
  local_7c = 0;
  local_88 = (Il2CppObject *)0x0;
  local_68 = (Il2CppObject *)0x0;
  *imported = (Settings_WeatherSet_o *)0x0;
  Il2CppCodeGenWriteBarrier(imported);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar11 = UI_UIManager__GetLocale
                      ("Common","InvalidPreset","",""
                       ,"",(MethodInfo *)0x0);
  *error = pSVar11;
  Il2CppCodeGenWriteBarrier(error);
  pSVar12 = SimpleJSONFixed_JSON__Parse(text,(MethodInfo *)0x0);
  if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    return false;
  }
  bVar1 = (TypeInfo_SimpleJSONFixed_JSONObject->_2).typeHierarchyDepth;
  if ((pSVar12->klass->_2).typeHierarchyDepth < bVar1) {
    return false;
  }
  if ((pSVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject) {
    return false;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_WeatherSet);
  Settings_WeatherSet___ctor(__this_00,(MethodInfo *)0x0);
  if (((__this_00 != (Settings_WeatherSet_o *)0x0) &&
      (pSVar2 = (__this_00->fields).Settings, local_40 = imported,
      pSVar2 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) &&
     (pIVar13 = (Il2CppObject *)
                System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar2,(MethodInfo *)0x0),
     pIVar13 != (Il2CppObject *)0x0)) {
    pIVar3 = pIVar13->klass;
    uVar18 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar18 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar19 = 0;
      do {
        if (*(System_Collections_IEnumerable_c **)((long)&pIVar4->interfaceType + lVar19) ==
            TypeInfo_System_Collections_IEnumerable) {
          pVVar14 = (VirtualInvokeData *)&pIVar3->vtable[*(int *)((long)&pIVar4->offset + lVar19)].methodPtr;
          goto label_058abe71;
        }
        lVar19 = lVar19 + 0x10;
      } while (uVar18 * 0x10 != lVar19);
    }
    pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar13,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,0);
label_058abe71:
    local_88 = (Il2CppObject *)(*pVVar14->methodPtr)(pIVar13,pVVar14->method);
    local_60 = 0;
    local_58 = &local_88;
    local_50 = &local_68;
    local_70 = 0;
    local_78 = 0;
label_058abed0:
    pIVar13 = local_88;
    if (local_88 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = local_88->klass;
    uVar18 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar18 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar19 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar19) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar14 = (VirtualInvokeData *)&pIVar3->vtable[*(int *)((long)&pIVar4->offset + lVar19)].methodPtr;
          goto label_058abf33;
        }
        lVar19 = lVar19 + 0x10;
      } while (uVar18 * 0x10 != lVar19);
    }
    pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                        (local_88,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_058abf33:
    bVar7 = (*pVVar14->methodPtr)(pIVar13,pVVar14->method);
    pIVar13 = local_88;
    if (bVar7) goto code_r0x058abf44;
    iVar8 = 0x14;
    goto label_058ac367;
  }
  goto label_058ac5d3;
code_r0x058abf44:
  if (local_88 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar3 = local_88->klass;
  uVar18 = (ulong)(pIVar3->_2).interface_offsets_count;
  if (uVar18 != 0) {
    pIVar4 = (pIVar3->_1).interfaceOffsets;
    lVar19 = 0;
    do {
      if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar19) ==
          TypeInfo_System_Collections_IEnumerator) {
        pVVar14 = (VirtualInvokeData *)&pIVar3->vtable[*(int *)((long)&pIVar4->offset + lVar19) + 1].methodPtr
        ;
        goto label_058abfc7;
      }
      lVar19 = lVar19 + 0x10;
    } while (uVar18 * 0x10 != lVar19);
  }
  pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                      (local_88,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_058abfc7:
  pSVar11 = (System_String_o *)(*pVVar14->methodPtr)(pIVar13,pVVar14->method);
  if ((pSVar11 != (System_String_o *)0x0) && (pSVar11->klass != g_data_07556758)) {
    il2cpp_codegen_raise_invalid_cast_exception(pSVar11);
  }
  bVar7 = (*(pSVar12->klass->vtable)._28_HasKey.methodPtr)
                    (pSVar12,pSVar11,(pSVar12->klass->vtable)._28_HasKey.method);
  if (!bVar7) goto label_058abed0;
  pSVar2 = (__this_00->fields).Settings;
  if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar13 = System_Collections_Specialized_OrderedDictionary__get_Item
                      (pSVar2,(Il2CppObject *)pSVar11,(MethodInfo *)0x0);
  if (pIVar13 != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
    if (((pIVar13->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BaseSetting))
    {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar13);
    }
  }
  pSVar15 = (*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar12,pSVar11,(pSVar12->klass->vtable)._7_get_Item.method);
  if (pIVar13 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  plVar16 = (long *)(*pIVar13->klass->vtable[5].methodPtr)(pIVar13,pIVar13->klass->vtable[5].method);
  local_38 = pIVar13;
  if (plVar16 == (long *)0x0) {
    ThrowNullReferenceException();
  }
  iVar8 = (**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
  if (pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar9 = (*(pSVar15->klass->vtable)._4_unknown.methodPtr)(pSVar15,(pSVar15->klass->vtable)._4_unknown.method)
  ;
  if (iVar8 == iVar9) {
    bVar1 = (TypeInfo_SimpleJSONFixed_JSONArray->_2).typeHierarchyDepth;
    if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
       (*(SimpleJSONFixed_JSONArray_c **)(*(long *)(*plVar16 + 200) + -8 + (ulong)bVar1 * 8) !=
        TypeInfo_SimpleJSONFixed_JSONArray)) {
label_058ac250:
      bVar7 = (*(pSVar15->klass->vtable)._12_get_IsNumber.methodPtr)
                        (pSVar15,(pSVar15->klass->vtable)._12_get_IsNumber.method);
      if ((!bVar7) ||
         ((fVar20 = (*(pSVar15->klass->vtable)._37_get_AsFloat.methodPtr)
                              (pSVar15,(pSVar15->klass->vtable)._37_get_AsFloat.method),
          (uint)ABS(fVar20) < 0x7f800001 &&
          (fVar20 = (*(pSVar15->klass->vtable)._37_get_AsFloat.methodPtr)
                              (pSVar15,(pSVar15->klass->vtable)._37_get_AsFloat.method),
          ABS(fVar20) != INFINITY)))) {
        (*local_38->klass->vtable[6].methodPtr)(local_38,pSVar15,local_38->klass->vtable[6].method);
        bVar7 = System_String__op_Inequality(pSVar11,"Name",(MethodInfo *)0x0);
        uVar18 = local_78;
        if (bVar7) {
          bVar7 = System_String__op_Inequality(pSVar11,"UniqueId",(MethodInfo *)0x0);
          if (bVar7) {
            bVar7 = System_String__op_Inequality(pSVar11,"Preset",(MethodInfo *)0x0);
          }
          else {
            bVar7 = false;
          }
          local_78 = uVar18 & 1;
        }
        else {
          bVar7 = false;
        }
        local_78 = CONCAT71((int7)((local_78 & 0xffffffffffffff01) >> 8),
                            (byte)(local_78 & 0xffffffffffffff01) | bVar7);
        goto label_058abed0;
      }
      iVar8 = 8;
      goto label_058ac367;
    }
    pSVar5 = pSVar15->klass;
    if ((bVar1 <= (pSVar5->_2).typeHierarchyDepth) &&
       ((pSVar5->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray)) {
      iVar10 = (*(pSVar5->vtable)._11_get_Count.methodPtr)(pSVar15,(pSVar5->vtable)._11_get_Count.method);
      iVar8 = (**(code **)(*plVar16 + 0x1e8))(plVar16,*(undefined8 *)(*plVar16 + 0x1f0));
      if (iVar10 != iVar8) {
        iVar8 = 8;
        goto label_058ac367;
      }
      local_48 = (*(pSVar15->klass->vtable)._27_get_Children.methodPtr)
                           (pSVar15,(pSVar15->klass->vtable)._27_get_Children.method);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c);
      }
      pGVar17 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->static_fields;
      __this_01 = pGVar17->__9__26_0;
      if (__this_01 == (System_Func_JSONNode__bool__o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c);
          pGVar17 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->static_fields;
        }
        pIVar13 = (Il2CppObject *)pGVar17->__9;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_JSONNode_bool);
        System_Func_object__bool____ctor
                  ((System_Func_object__bool__o *)__this_01,pIVar13,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c_TryImport_b__26_0,
                   (MethodInfo_4F19300 *)0x0);
        pGVar17 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->static_fields;
        pGVar17->__9__26_0 = __this_01;
        Il2CppCodeGenWriteBarrier(&pGVar17->__9__26_0);
      }
      bVar7 = System_Linq_Enumerable__Any_object__34dfce0
                        ((System_Collections_Generic_IEnumerable_TSource__o *)local_48,
                         (System_Func_TSource__bool__o *)__this_01,
                         (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_JSONNode);
      if (!bVar7) goto label_058ac250;
    }
  }
  iVar8 = 8;
label_058ac367:
  pIVar13 = il2cpp_vm_Object_IsInst(local_88,(Il2CppClass *)TypeInfo_System_IDisposable);
  local_68 = pIVar13;
  if (pIVar13 == (Il2CppObject *)0x0) goto label_058ac3e6;
  pIVar3 = pIVar13->klass;
  uVar18 = (ulong)(pIVar3->_2).interface_offsets_count;
  if (uVar18 == 0) goto label_058ac3bf;
  pIVar4 = (pIVar3->_1).interfaceOffsets;
  lVar19 = 0;
  goto label_058ac3b0;
  while (lVar19 = lVar19 + 0x10, uVar18 * 0x10 != lVar19) {
label_058ac3b0:
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar19) == TypeInfo_System_IDisposable) {
      pVVar14 = (VirtualInvokeData *)&pIVar3->vtable[*(int *)((long)&pIVar4->offset + lVar19)].methodPtr;
      goto label_058ac3dd;
    }
  }
label_058ac3bf:
  pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar13,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_058ac3dd:
  (*pVVar14->methodPtr)(pIVar13,pVVar14->method);
label_058ac3e6:
  if (local_70 != 0) {
    il2cpp_codegen_rethrow();
  }
  if (((iVar8 != 0x14) && (iVar8 != 0)) || ((char)local_78 == '\0')) {
    return false;
  }
  pSVar6 = (__this_00->fields).Skybox;
  if (pSVar6 != (Settings_StringSetting_o *)0x0) {
    pSVar11 = (pSVar6->fields)._value;
    if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556760);
    }
    bVar7 = System_Enum__TryParse_Int32Enum_
                      (pSVar11,&local_7c,(MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_WeatherSkybox);
    handle = TypeRef_Weather_WeatherSkybox;
    if (!bVar7) {
      return false;
    }
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    local_60 = CONCAT44(local_60._4_4_,local_7c);
    pIVar13 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_Weather_WeatherSkybox,&local_60);
    if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556760);
    }
    bVar7 = System_Enum__IsDefined(enumType,pIVar13,(MethodInfo *)0x0);
    if (!bVar7) {
      return false;
    }
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Weather_WeatherSchedule);
    Weather_WeatherSchedule___ctor(__this_02,(MethodInfo *)0x0);
    pSVar6 = (__this_00->fields).Schedule;
    if ((pSVar6 != (Settings_StringSetting_o *)0x0) && (__this_02 != (Weather_WeatherSchedule_o *)0x0)) {
      pSVar11 = Weather_WeatherSchedule__DeserializeFromCSV
                          (__this_02,(pSVar6->fields)._value,(MethodInfo *)0x0);
      *error = pSVar11;
      Il2CppCodeGenWriteBarrier(error);
      bVar7 = System_String__IsNullOrEmpty(*error,(MethodInfo *)0x0);
      if (!bVar7) {
        return false;
      }
      __this = (__this_00->fields).Preset;
      if (__this != (Settings_BoolSetting_o *)0x0) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)__this,false,
                   (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        *local_40 = __this_00;
        Il2CppCodeGenWriteBarrier(local_40);
        return true;
      }
    }
  }
label_058ac5d3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Save
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Save (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x58ac820
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ac848: cmp byte ptr [rip + 0x1c98ab1], 0
// asm:   0x58ac933: jmp 0x58ac864

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Save
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_WeatherSettings_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545312 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    Il2CppMethodInitialized_07545312 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  if (Il2CppMethodInitialized_07545300 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07545300 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
  if (pSVar2 == (Settings_WeatherSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pSVar2->klass->vtable)._18_Save.methodPtr)(pSVar2,(pSVar2->klass->vtable)._18_Save.method);
  if (Il2CppMethodInitialized_07545313 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545313 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandboxContent((MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh(root,(MethodInfo *)0x0);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh(root,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Refresh (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x58ab090

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Refresh
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545313 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545313 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandboxContent((MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh(root,(MethodInfo *)0x0);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh(root,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Text (System_String_o* key, const MethodInfo* method);
// 0x58aa070

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Text(System_String_o *key,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545314 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
    Il2CppMethodInitialized_07545314 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320("GameCreate.Sandbox.Weather.",key,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___cctor (const MethodInfo* method);
// 0x58ac950

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  
  if (Il2CppMethodInitialized_07545315 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_IAottgSettingsStateSync_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_IAottgSettingsStateSync);
    Il2CppMethodInitialized_07545315 = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_IAottgSettingsStateSync);
  System_Collections_Generic_List_object____ctor
            (__this,(MethodInfo_395C910 *)
                    MethodInfo_System_Collections_Generic_List_IAottgSettingsStateSync_ctor);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->static_fields->Rows =
       (System_Collections_Generic_List_IAottgSettingsStateSync__o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->static_fields->Rows);
  return;
}


