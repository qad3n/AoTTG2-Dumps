// Type: Gisketch.Aottg2UI.Game.AottgCharacterEffectUi
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterEffectUi.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$Options
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Options (bool hasAccess, const MethodInfo* method);
// 0x181df1770

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *
Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Options(bool hasAccess,MethodInfo *method)

{
  System_String_o **targetAddress;
  Il2CppType *handle;
  bool bVar1;
  uint uVar2;
  System_Type_o *enumType;
  System_String_array *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar5;
  System_String_o *pSVar6;
  uint uVar7;
  
  if (Il2CppMethodInitialized_184344b53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_PatreonEffects_NameEffectType);
    il2cpp_codegen_initialize_runtime_metadata(&"FourColorGradient");
    il2cpp_codegen_initialize_runtime_metadata(&"TwoColorGradient");
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"This feature is only available for supporters.");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Two-Color Gradient");
    il2cpp_codegen_initialize_runtime_metadata(&"Four-Color Gradient");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.SupporterOnlyFeature");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom Color");
    Il2CppMethodInitialized_184344b53 = '\x01';
  }
  handle = TypeRef_PatreonEffects_NameEffectType;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  pSVar3 = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
  if (pSVar3 != (System_String_array *)0x0) {
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array,
                        (int)pSVar3->max_length + 2);
    pGVar5 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
    Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
      (pGVar5->fields).value = "Color";
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).value,"Color");
      (pGVar5->fields).text = "Custom Color";
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).text,"Custom Color");
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
        if ((int)pGVar4->max_length != 0) {
          pGVar4->m_Items[0] = pGVar5;
          Il2CppCodeGenWriteBarrier(pGVar4->m_Items,pGVar5);
          pGVar5 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
          Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar5,(MethodInfo *)0x0);
          if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto label_181df1b1b;
          (pGVar5->fields).value = "TwoColorGradient";
          Il2CppCodeGenWriteBarrier(&(pGVar5->fields).value,"TwoColorGradient");
          (pGVar5->fields).text = "Two-Color Gradient";
          Il2CppCodeGenWriteBarrier(&(pGVar5->fields).text,"Two-Color Gradient");
          if (1 < (uint)pGVar4->max_length) {
            pGVar4->m_Items[1] = pGVar5;
            Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 1,pGVar5);
            pGVar5 = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition)
            ;
            Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar5,(MethodInfo *)0x0);
            if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto label_181df1b1b;
            (pGVar5->fields).value = "FourColorGradient";
            Il2CppCodeGenWriteBarrier(&(pGVar5->fields).value,"FourColorGradient");
            (pGVar5->fields).text = "Four-Color Gradient";
            Il2CppCodeGenWriteBarrier(&(pGVar5->fields).text,"Four-Color Gradient");
            if (2 < (uint)pGVar4->max_length) {
              pGVar4->m_Items[2] = pGVar5;
              Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 2,pGVar5);
              uVar7 = 3;
              pSVar6 = (System_String_o *)0x0;
              do {
                uVar2 = (uint)pSVar6;
                if ((int)pSVar3->max_length <= (int)uVar2) {
                  return pGVar4;
                }
                if ((uint)pSVar3->max_length <= uVar2) break;
                pSVar6 = pSVar3->m_Items[(int)uVar2];
                bVar1 = System_String__op_Equality(pSVar6,"None",(MethodInfo *)0x0);
                if (!bVar1) {
                  pGVar5 = il2cpp_codegen_object_new
                                     ((Il2CppClass *)
                                      TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
                  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar5,(MethodInfo *)0x0);
                  if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
                  goto label_181df1b1b;
                  (pGVar5->fields).value = pSVar6;
                  Il2CppCodeGenWriteBarrier(&(pGVar5->fields).value,pSVar6);
                  (pGVar5->fields).text = pSVar6;
                  Il2CppCodeGenWriteBarrier(&(pGVar5->fields).text,pSVar6);
                  (pGVar5->fields).enabled = hasAccess;
                  pSVar6 = "This feature is only available for supporters.";
                  targetAddress = &(pGVar5->fields).tooltip;
                  if (hasAccess) {
                    (pGVar5->fields).tooltip = (System_String_o *)0x0;
                    Il2CppCodeGenWriteBarrier(targetAddress,(void *)0x0);
                    pSVar6 = (System_String_o *)0x0;
                  }
                  else {
                    (pGVar5->fields).tooltip = "This feature is only available for supporters.";
                    Il2CppCodeGenWriteBarrier(targetAddress,pSVar6);
                    pSVar6 = "MainMenu.Profile.SupporterOnlyFeature";
                  }
                  (pGVar5->fields).tooltipKey = pSVar6;
                  Il2CppCodeGenWriteBarrier(&(pGVar5->fields).tooltipKey,pSVar6);
                  if ((uint)pGVar4->max_length <= uVar7) break;
                  pGVar4->m_Items[(int)uVar7] = pGVar5;
                  Il2CppCodeGenWriteBarrier(pGVar4->m_Items + (int)uVar7,pGVar5);
                  uVar7 = uVar7 + 1;
                }
                pSVar6 = (System_String_o *)(ulonglong)(uVar2 + 1);
              } while( true );
            }
          }
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_181df1b1b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$IsTextColorMode
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__IsTextColorMode (System_String_o* type, const MethodInfo* method);
// 0x181df16e0

bool Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__IsTextColorMode(System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344b54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"FourColorGradient");
    il2cpp_codegen_initialize_runtime_metadata(&"TwoColorGradient");
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    Il2CppMethodInitialized_184344b54 = '\x01';
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
// 0x181df1590

int32_t Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops(System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344b55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"FourColorGradient");
    il2cpp_codegen_initialize_runtime_metadata(&"TwoColorGradient");
    Il2CppMethodInitialized_184344b55 = '\x01';
  }
  bVar1 = System_String__op_Equality(type,"TwoColorGradient",(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__op_Equality(type,"FourColorGradient",(MethodInfo *)0x0);
    return -(uint)bVar1 & 4;
  }
  return 2;
}


// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$SelectValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__SelectValue (bool hasAccess, bool enabled, System_String_o* type, const MethodInfo* method);
// 0x181df1de0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__SelectValue
          (bool hasAccess,bool enabled,System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  int32_t local_res8 [2];
  System_Enum_o local_28;
  int32_t local_18;
  
  if (Il2CppMethodInitialized_184344b56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectType);
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    Il2CppMethodInitialized_184344b56 = '\x01';
  }
  local_res8[0] = 0;
  if (enabled && hasAccess) {
    bVar1 = PatreonEffects_NameEffectPresets__TryResolve(type,local_res8,(MethodInfo *)0x0);
    if (bVar1) {
      local_28.klass = (System_Enum_c *)TypeInfo_PatreonEffects_NameEffectType;
      local_18 = local_res8[0];
      local_28.monitor = &g_data_ffffffffffffffff;
      pSVar2 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  return "Color";
}


// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$IsEffect
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__IsEffect (bool enabled, System_String_o* type, const MethodInfo* method);
// 0x181df1670

bool Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__IsEffect
               (bool enabled,System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344b57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_184344b57 = '\x01';
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
// 0x181df1b30

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
  int32_t local_res8 [2];
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344b58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    Il2CppMethodInitialized_184344b58 = '\x01';
  }
  local_res8[0] = 0;
  bVar9 = PatreonEffects_NameEffectPresets__TryResolve(type,local_res8,(MethodInfo *)0x0);
  if (bVar9) {
    pPVar10 = PatreonEffects_NameEffectPresets__GetPreset(local_res8[0],(MethodInfo *)0x0);
    pSVar11 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
    if (pPVar10 != (PatreonEffects_NameEffectSettings_o *)0x0) {
      uVar1._0_4_ = (pPVar10->fields).gradientA.fields.r;
      uVar1._4_4_ = (pPVar10->fields).gradientA.fields.g;
      uVar2._0_4_ = (pPVar10->fields).gradientA.fields.b;
      uVar2._4_4_ = (pPVar10->fields).gradientA.fields.a;
      if (Il2CppMethodInitialized_184344b59 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"#");
        Il2CppMethodInitialized_184344b59 = '\x01';
      }
      local_28[0]._0_8_ = uVar1;
      local_28[0]._8_8_ = uVar2;
      pSVar12 = UnityEngine_ColorUtility__ToHtmlStringRGBA_2f00800
                          ((UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
      pSVar12 = System_String__Concat_1969e50("#",pSVar12,(MethodInfo *)0x0);
      if (pSVar11 != (System_String_array *)0x0) {
        if ((int)pSVar11->max_length != 0) {
          pSVar11->m_Items[0] = pSVar12;
          Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar12);
          uVar3._0_4_ = (pPVar10->fields).gradientB.fields.r;
          uVar3._4_4_ = (pPVar10->fields).gradientB.fields.g;
          uVar4._0_4_ = (pPVar10->fields).gradientB.fields.b;
          uVar4._4_4_ = (pPVar10->fields).gradientB.fields.a;
          if (Il2CppMethodInitialized_184344b59 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"#");
            Il2CppMethodInitialized_184344b59 = '\x01';
          }
          local_28[0]._0_8_ = uVar3;
          local_28[0]._8_8_ = uVar4;
          pSVar12 = UnityEngine_ColorUtility__ToHtmlStringRGBA_2f00800
                              ((UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
          pSVar12 = System_String__Concat_1969e50("#",pSVar12,(MethodInfo *)0x0);
          if (1 < (uint)pSVar11->max_length) {
            pSVar11->m_Items[1] = pSVar12;
            Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 1,pSVar12);
            uVar5._0_4_ = (pPVar10->fields).gradientC.fields.r;
            uVar5._4_4_ = (pPVar10->fields).gradientC.fields.g;
            uVar6._0_4_ = (pPVar10->fields).gradientC.fields.b;
            uVar6._4_4_ = (pPVar10->fields).gradientC.fields.a;
            if (Il2CppMethodInitialized_184344b59 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&"#");
              Il2CppMethodInitialized_184344b59 = '\x01';
            }
            local_28[0]._0_8_ = uVar5;
            local_28[0]._8_8_ = uVar6;
            pSVar12 = UnityEngine_ColorUtility__ToHtmlStringRGBA_2f00800
                                ((UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
            pSVar12 = System_String__Concat_1969e50("#",pSVar12,(MethodInfo *)0x0);
            if (2 < (uint)pSVar11->max_length) {
              pSVar11->m_Items[2] = pSVar12;
              Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 2,pSVar12);
              uVar7._0_4_ = (pPVar10->fields).gradientD.fields.r;
              uVar7._4_4_ = (pPVar10->fields).gradientD.fields.g;
              uVar8._0_4_ = (pPVar10->fields).gradientD.fields.b;
              uVar8._4_4_ = (pPVar10->fields).gradientD.fields.a;
              if (Il2CppMethodInitialized_184344b59 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&"#");
                Il2CppMethodInitialized_184344b59 = '\x01';
              }
              local_28[0]._0_8_ = uVar7;
              local_28[0]._8_8_ = uVar8;
              pSVar12 = UnityEngine_ColorUtility__ToHtmlStringRGBA_2f00800
                                  ((UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
              pSVar12 = System_String__Concat_1969e50("#",pSVar12,(MethodInfo *)0x0);
              if (3 < (uint)pSVar11->max_length) {
                pSVar11->m_Items[3] = pSVar12;
                goto label_181df1d32;
              }
            }
          }
        }
        goto label_181df1dd1;
      }
    }
  }
  else {
    pSVar11 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
    pSVar12 = "#FFFFFFFF";
    if (pSVar11 != (System_String_array *)0x0) {
      if ((int)pSVar11->max_length != 0) {
        pSVar11->m_Items[0] = "#FFFFFFFF";
        Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar12);
        pSVar12 = "#FFFFFFFF";
        if (1 < (uint)pSVar11->max_length) {
          pSVar11->m_Items[1] = "#FFFFFFFF";
          Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 1,pSVar12);
          pSVar12 = "#FFFFFFFF";
          if (2 < (uint)pSVar11->max_length) {
            pSVar11->m_Items[2] = "#FFFFFFFF";
            Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 2,pSVar12);
            pSVar12 = "#FFFFFFFF";
            if (3 < (uint)pSVar11->max_length) {
              pSVar11->m_Items[3] = "#FFFFFFFF";
label_181df1d32:
              Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 3,pSVar12);
              return pSVar11;
            }
          }
        }
      }
label_181df1dd1:
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$Hex
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Hex (UnityEngine_Color_o color, const MethodInfo* method);
// 0x181df1610

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Hex(UnityEngine_Color_o *color,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184344b59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_184344b59 = '\x01';
  }
  local_18.r = (color->fields).r;
  local_18.g = (color->fields).g;
  local_18.b = (color->fields).b;
  local_18.a = (color->fields).a;
  pSVar1 = UnityEngine_ColorUtility__ToHtmlStringRGBA_2f00800
                     ((UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50("#",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


