// Type: Gisketch.Aottg2UI.Game.AottgCharacterEffectUi
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterEffectUi.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$Options
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Options (bool hasAccess, const MethodInfo* method);
// 0x58d8b90

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *
Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Options(bool hasAccess,MethodInfo *method)

{
  uint uVar1;
  Il2CppType *handle;
  bool bVar2;
  System_Type_o *enumType;
  System_String_array *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar6;
  ulong uVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  System_String_o *pSVar8;
  uint uVar9;
  ulong uVar10;
  
  if (Il2CppMethodInitialized_075454bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_PatreonEffects_NameEffectType);
    il2cpp_codegen_initialize_runtime_metadata(&"FourColorGradient");
    il2cpp_codegen_initialize_runtime_metadata(&"TwoColorGradient");
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.SupporterOnlyFeature");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Effect.");
    Il2CppMethodInitialized_075454bc = '\x01';
  }
  handle = TypeRef_PatreonEffects_NameEffectType;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  pSVar3 = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
  if (pSVar3 != (System_String_array *)0x0) {
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array,
                        (int)pSVar3->max_length + 2);
    pSVar8 = "Color";
    if (Il2CppMethodInitialized_075454bd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Effect.");
      Il2CppMethodInitialized_075454bd = '\x01';
    }
    pSVar5 = System_String__Concat_52f0320("MainMenu.Profile.Effect.",pSVar8,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar5 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar5,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Option_57d9020(pSVar8,pSVar5,method_00);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
      if ((int)pGVar4->max_length != 0) {
        pGVar4->m_Items[0] = pGVar6;
        Il2CppCodeGenWriteBarrier(pGVar4->m_Items);
        pSVar8 = "TwoColorGradient";
        if (Il2CppMethodInitialized_075454bd == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
          il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Effect.");
          Il2CppMethodInitialized_075454bd = '\x01';
        }
        pSVar5 = System_String__Concat_52f0320("MainMenu.Profile.Effect.",pSVar8,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        pSVar5 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar5,(MethodInfo *)0x0);
        pGVar6 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Option_57d9020(pSVar8,pSVar5,method_01);
        if ((pGVar4->max_length & 0xfffffffe) != 0) {
          pGVar4->m_Items[1] = pGVar6;
          Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 1);
          pSVar8 = "FourColorGradient";
          if (Il2CppMethodInitialized_075454bd == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
            il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Effect.");
            Il2CppMethodInitialized_075454bd = '\x01';
          }
          pSVar5 = System_String__Concat_52f0320("MainMenu.Profile.Effect.",pSVar8,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
          }
          pSVar5 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar5,(MethodInfo *)0x0);
          pGVar6 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Option_57d9020(pSVar8,pSVar5,method_02);
          if (2 < (uint)pGVar4->max_length) {
            pGVar4->m_Items[2] = pGVar6;
            Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 2);
            if (0 < (int)pSVar3->max_length) {
              uVar7 = pSVar3->max_length & 0xffffffff;
              uVar9 = 3;
              uVar10 = 0;
              do {
                if (uVar7 <= uVar10) goto label_058d8f93;
                pSVar8 = pSVar3->m_Items[uVar10];
                bVar2 = System_String__op_Equality(pSVar8,"None",(MethodInfo *)0x0);
                if (!bVar2) {
                  pSVar5 = System_String__Concat_52f0320("MainMenu.Profile.Effect.",pSVar8,(MethodInfo *)0x0);
                  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).
                      cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
                  }
                  pSVar5 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text_525ff30
                                     (pSVar5,pSVar8,(MethodInfo *)0x0);
                  pGVar6 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Option_57d9020
                                     (pSVar8,pSVar5,method_03);
                  if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
                  goto label_058d8f98;
                  (pGVar6->fields).enabled = hasAccess;
                  if (hasAccess) {
                    pSVar8 = (System_String_o *)0x0;
                  }
                  else {
                    pSVar8 = "MainMenu.Profile.SupporterOnlyFeature";
                  }
                  (pGVar6->fields).tooltipKey = pSVar8;
                  Il2CppCodeGenWriteBarrier(&(pGVar6->fields).tooltipKey);
                  if ((uint)pGVar4->max_length <= uVar9) goto label_058d8f93;
                  pGVar4->m_Items[(int)uVar9] = pGVar6;
                  Il2CppCodeGenWriteBarrier(pGVar4->m_Items + (int)uVar9);
                  uVar9 = uVar9 + 1;
                }
                uVar10 = uVar10 + 1;
                uVar1 = (uint)pSVar3->max_length;
                uVar7 = (ulong)uVar1;
              } while ((long)uVar10 < (long)(int)uVar1);
            }
            return pGVar4;
          }
        }
      }
label_058d8f93:
      ThrowIndexOutOfRangeException();
    }
  }
label_058d8f98:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$Option
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o* Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Option (System_String_o* value, const MethodInfo* method);
// 0x58d8fa0

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *
Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Option(System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075454bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Effect.");
    Il2CppMethodInitialized_075454bd = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320("MainMenu.Profile.Effect.",value,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Option_57d9020(value,pSVar1,method_00);
  return pGVar2;
}


// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$Option
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o* Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Option (System_String_o* value, System_String_o* text, const MethodInfo* method);
// 0x58d9020

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *
Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Option_57d9020
          (System_String_o *value,System_String_o *text,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *__this;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075454be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Effect.");
    Il2CppMethodInitialized_075454be = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).value = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).value);
  (__this->fields).text = text;
  Il2CppCodeGenWriteBarrier(&(__this->fields).text);
  pSVar1 = System_String__Concat_52f0320("MainMenu.Profile.Effect.",value,(MethodInfo *)0x0);
  (__this->fields).textKey = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).textKey);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$IsTextColorMode
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__IsTextColorMode (System_String_o* type, const MethodInfo* method);
// 0x58d90d0

bool Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__IsTextColorMode(System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075454bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"FourColorGradient");
    il2cpp_codegen_initialize_runtime_metadata(&"TwoColorGradient");
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    Il2CppMethodInitialized_075454bf = '\x01';
  }
  bVar1 = System_String__op_Equality(type,"Color",(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__op_Equality(type,"TwoColorGradient",(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__op_Equality(type,"FourColorGradient",(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return true;
}


// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$GradientStops
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops (System_String_o* type, const MethodInfo* method);
// 0x58d9160

int32_t Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops(System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  
  if (Il2CppMethodInitialized_075454c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"FourColorGradient");
    il2cpp_codegen_initialize_runtime_metadata(&"TwoColorGradient");
    Il2CppMethodInitialized_075454c0 = '\x01';
  }
  bVar1 = System_String__op_Equality(type,"TwoColorGradient",(MethodInfo *)0x0);
  iVar2 = 2;
  if (!bVar1) {
    bVar1 = System_String__op_Equality(type,"FourColorGradient",(MethodInfo *)0x0);
    iVar2 = (uint)bVar1 << 2;
  }
  return iVar2;
}


// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$SelectValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__SelectValue (bool hasAccess, bool enabled, System_String_o* type, const MethodInfo* method);
// 0x58d91d0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__SelectValue
          (bool hasAccess,bool enabled,System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  int32_t local_34;
  System_Enum_o local_30;
  int32_t local_20;
  
  if (Il2CppMethodInitialized_075454c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectType);
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    Il2CppMethodInitialized_075454c1 = '\x01';
  }
  local_34 = 0;
  if (((hasAccess) && (enabled)) &&
     (bVar1 = PatreonEffects_NameEffectPresets__TryResolve(type,&local_34,(MethodInfo *)0x0), bVar1)) {
    local_30.klass = (System_Enum_c *)TypeInfo_PatreonEffects_NameEffectType;
    local_30.monitor = (void *)0xffffffffffffffff;
    local_20 = local_34;
    pSVar2 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
    return pSVar2;
  }
  return "Color";
}


// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$IsEffect
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__IsEffect (bool enabled, System_String_o* type, const MethodInfo* method);
// 0x58d9270

bool Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__IsEffect
               (bool enabled,System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075454c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_075454c2 = '\x01';
  }
  if (enabled) {
    bVar1 = System_String__IsNullOrEmpty(type,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__op_Inequality(type,"None",(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$PresetColors
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__PresetColors (System_String_o* type, const MethodInfo* method);
// 0x58d92d0

System_String_array *
Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__PresetColors(System_String_o *type,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  PatreonEffects_NameEffectSettings_o *pPVar10;
  System_String_array *pSVar11;
  System_String_o *pSVar12;
  int32_t local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  UnityEngine_Color_o local_28;
  
  if (Il2CppMethodInitialized_075454c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    Il2CppMethodInitialized_075454c3 = '\x01';
  }
  local_4c = 0;
  bVar9 = PatreonEffects_NameEffectPresets__TryResolve(type,&local_4c,(MethodInfo *)0x0);
  if (bVar9) {
    pPVar10 = PatreonEffects_NameEffectPresets__GetPreset(local_4c,(MethodInfo *)0x0);
    pSVar11 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
    if (pPVar10 != (PatreonEffects_NameEffectSettings_o *)0x0) {
      uVar1._0_4_ = (pPVar10->fields).gradientA.fields.r;
      uVar1._4_4_ = (pPVar10->fields).gradientA.fields.g;
      uVar2._0_4_ = (pPVar10->fields).gradientA.fields.b;
      uVar2._4_4_ = (pPVar10->fields).gradientA.fields.a;
      if (Il2CppMethodInitialized_075454c4 == '\0') {
        uStack_30 = 0;
        uStack_40 = 0;
        local_48 = uVar2;
        local_38 = uVar1;
        il2cpp_codegen_initialize_runtime_metadata(&"#");
        Il2CppMethodInitialized_075454c4 = '\x01';
        uVar1._0_4_ = (float)local_38;
        uVar1._4_4_ = local_38._4_4_;
        uVar2._0_4_ = (float)local_48;
        uVar2._4_4_ = local_48._4_4_;
      }
      local_28.fields.r = (float)uVar1;
      local_28.fields.g = uVar1._4_4_;
      local_28.fields.b = (float)uVar2;
      local_28.fields.a = uVar2._4_4_;
      pSVar12 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0(&local_28,(MethodInfo *)0x0);
      pSVar12 = System_String__Concat_52f0320("#",pSVar12,(MethodInfo *)0x0);
      if (pSVar11 != (System_String_array *)0x0) {
        if ((int)pSVar11->max_length != 0) {
          pSVar11->m_Items[0] = pSVar12;
          Il2CppCodeGenWriteBarrier(pSVar11->m_Items);
          uVar3._0_4_ = (pPVar10->fields).gradientB.fields.r;
          uVar3._4_4_ = (pPVar10->fields).gradientB.fields.g;
          uVar4._0_4_ = (pPVar10->fields).gradientB.fields.b;
          uVar4._4_4_ = (pPVar10->fields).gradientB.fields.a;
          if (Il2CppMethodInitialized_075454c4 == '\0') {
            uStack_30 = 0;
            uStack_40 = 0;
            local_48 = uVar4;
            local_38 = uVar3;
            il2cpp_codegen_initialize_runtime_metadata(&"#");
            Il2CppMethodInitialized_075454c4 = '\x01';
            uVar3._0_4_ = (float)local_38;
            uVar3._4_4_ = local_38._4_4_;
            uVar4._0_4_ = (float)local_48;
            uVar4._4_4_ = local_48._4_4_;
          }
          local_28.fields.r = (float)uVar3;
          local_28.fields.g = uVar3._4_4_;
          local_28.fields.b = (float)uVar4;
          local_28.fields.a = uVar4._4_4_;
          pSVar12 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0(&local_28,(MethodInfo *)0x0);
          pSVar12 = System_String__Concat_52f0320("#",pSVar12,(MethodInfo *)0x0);
          if ((pSVar11->max_length & 0xfffffffe) != 0) {
            pSVar11->m_Items[1] = pSVar12;
            Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 1);
            uVar5._0_4_ = (pPVar10->fields).gradientC.fields.r;
            uVar5._4_4_ = (pPVar10->fields).gradientC.fields.g;
            uVar6._0_4_ = (pPVar10->fields).gradientC.fields.b;
            uVar6._4_4_ = (pPVar10->fields).gradientC.fields.a;
            if (Il2CppMethodInitialized_075454c4 == '\0') {
              uStack_30 = 0;
              uStack_40 = 0;
              local_48 = uVar6;
              local_38 = uVar5;
              il2cpp_codegen_initialize_runtime_metadata(&"#");
              Il2CppMethodInitialized_075454c4 = '\x01';
              uVar5._0_4_ = (float)local_38;
              uVar5._4_4_ = local_38._4_4_;
              uVar6._0_4_ = (float)local_48;
              uVar6._4_4_ = local_48._4_4_;
            }
            local_28.fields.r = (float)uVar5;
            local_28.fields.g = uVar5._4_4_;
            local_28.fields.b = (float)uVar6;
            local_28.fields.a = uVar6._4_4_;
            pSVar12 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0(&local_28,(MethodInfo *)0x0);
            pSVar12 = System_String__Concat_52f0320("#",pSVar12,(MethodInfo *)0x0);
            if (2 < (uint)pSVar11->max_length) {
              pSVar11->m_Items[2] = pSVar12;
              Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 2);
              uVar7._0_4_ = (pPVar10->fields).gradientD.fields.r;
              uVar7._4_4_ = (pPVar10->fields).gradientD.fields.g;
              uVar8._0_4_ = (pPVar10->fields).gradientD.fields.b;
              uVar8._4_4_ = (pPVar10->fields).gradientD.fields.a;
              if (Il2CppMethodInitialized_075454c4 == '\0') {
                uStack_30 = 0;
                uStack_40 = 0;
                local_48 = uVar8;
                local_38 = uVar7;
                il2cpp_codegen_initialize_runtime_metadata(&"#");
                Il2CppMethodInitialized_075454c4 = '\x01';
                uVar7._0_4_ = (float)local_38;
                uVar7._4_4_ = local_38._4_4_;
                uVar8._0_4_ = (float)local_48;
                uVar8._4_4_ = local_48._4_4_;
              }
              local_28.fields.r = (float)uVar7;
              local_28.fields.g = uVar7._4_4_;
              local_28.fields.b = (float)uVar8;
              local_28.fields.a = uVar8._4_4_;
              pSVar12 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0(&local_28,(MethodInfo *)0x0);
              pSVar12 = System_String__Concat_52f0320("#",pSVar12,(MethodInfo *)0x0);
              if ((pSVar11->max_length & 0xfffffffc) != 0) {
                pSVar11->m_Items[3] = pSVar12;
                goto label_058d95c2;
              }
            }
          }
        }
        goto label_058d95d4;
      }
    }
  }
  else {
    pSVar11 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
    if (pSVar11 != (System_String_array *)0x0) {
      if ((int)pSVar11->max_length != 0) {
        pSVar11->m_Items[0] = "#FFFFFFFF";
        Il2CppCodeGenWriteBarrier(pSVar11->m_Items);
        if ((pSVar11->max_length & 0xfffffffe) != 0) {
          pSVar11->m_Items[1] = "#FFFFFFFF";
          Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 1);
          if (2 < (uint)pSVar11->max_length) {
            pSVar11->m_Items[2] = "#FFFFFFFF";
            Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 2);
            if ((pSVar11->max_length & 0xfffffffc) != 0) {
              pSVar11->m_Items[3] = "#FFFFFFFF";
label_058d95c2:
              Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 3);
              return pSVar11;
            }
          }
        }
      }
label_058d95d4:
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$Hex
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Hex (UnityEngine_Color_o color, const MethodInfo* method);
// 0x58d95e0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Hex(UnityEngine_Color_o color,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Color_o UStack_10;
  
  if (Il2CppMethodInitialized_075454c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_075454c4 = '\x01';
  }
  UStack_10.fields.r = color.fields.r;
  UStack_10.fields.g = color.fields.g;
  UStack_10.fields.b = color.fields.b;
  UStack_10.fields.a = color.fields.a;
  pSVar1 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0(&UStack_10,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320("#",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


