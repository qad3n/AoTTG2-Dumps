// Type: Gisketch.Aottg2UI.Game.AottgCharacterEffectUi
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterEffectUi.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$Options
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Options (bool hasAccess, const MethodInfo* method);
// 0x44fc840

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *
Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Options(bool_conflict hasAccess,MethodInfo *method)

{
  uint uVar1;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *enumType;
  System_String_array *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar5;
  ulong uVar6;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  ulong uVar9;
  uint uVar10;
  char local_3c;
  undefined8 uVar8;
  
  if (g_data_057aeceb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionDefinition);
    il2cpp_runtime_helper_023445d0(&TypeRef_NameEffectType);
    il2cpp_runtime_helper_023445d0(&"FourColorGradient");
    il2cpp_runtime_helper_023445d0(&"TwoColorGradient");
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"This feature is only available for supporters.");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Two-Color Gradient");
    il2cpp_runtime_helper_023445d0(&"Four-Color Gradient");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Profile.SupporterOnlyFeature");
    il2cpp_runtime_helper_023445d0(&"Custom Color");
    g_data_057aeceb = '\x01';
  }
  handle.fields.value = TypeRef_NameEffectType.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)
             System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = System_Enum__GetNames((System_Type_o *)enumType,(MethodInfo *)0x0);
  if (pSVar3 != (System_String_array *)0x0) {
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchChoiceOptionDefinition);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchChoiceOptionDefinition);
    enumType = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
      (pGVar5->fields).value = "Color";
      il2cpp_runtime_helper_022b4080(&pGVar5->fields);
      enumType = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)&(pGVar5->fields).text;
      (pGVar5->fields).text = "Custom Color";
      il2cpp_runtime_helper_022b4080();
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
        if ((int)pGVar4->max_length != 0) {
          pGVar4->m_Items[0] = pGVar5;
          il2cpp_runtime_helper_022b4080(pGVar4->m_Items);
          pGVar5 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchChoiceOptionDefinition)
          ;
          enumType = pGVar5;
          Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar5,(MethodInfo *)0x0);
          if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto label_044fcd08;
          (pGVar5->fields).value = "TwoColorGradient";
          il2cpp_runtime_helper_022b4080(&pGVar5->fields);
          enumType = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)&(pGVar5->fields).text;
          (pGVar5->fields).text = "Two-Color Gradient";
          il2cpp_runtime_helper_022b4080();
          if (1 < (uint)pGVar4->max_length) {
            pGVar4->m_Items[1] = pGVar5;
            il2cpp_runtime_helper_022b4080(pGVar4->m_Items + 1);
            pGVar5 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)
                     il2cpp_runtime_helper_023052d0(TypeInfo_GisketchChoiceOptionDefinition);
            enumType = pGVar5;
            Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar5,(MethodInfo *)0x0);
            if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto label_044fcd08;
            (pGVar5->fields).value = "FourColorGradient";
            il2cpp_runtime_helper_022b4080(&pGVar5->fields);
            enumType = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)&(pGVar5->fields).text;
            (pGVar5->fields).text = "Four-Color Gradient";
            il2cpp_runtime_helper_022b4080();
            if (2 < (uint)pGVar4->max_length) {
              enumType = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)(pGVar4->m_Items + 2);
              pGVar4->m_Items[2] = pGVar5;
              il2cpp_runtime_helper_022b4080(enumType,pGVar5);
              if ((int)pSVar3->max_length < 1) {
                return pGVar4;
              }
              uVar6 = pSVar3->max_length & 0xffffffff;
              local_3c = (char)hasAccess;
              if (local_3c == '\0') {
                uVar10 = 3;
                uVar9 = 0;
                if (uVar6 != 0) {
                  do {
                    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)pSVar3->m_Items[uVar9]
                    ;
                    enumType = pGVar5;
                    bVar2 = System_String__op_Equality
                                      ((System_String_o *)pGVar5,"None",(MethodInfo *)0x0);
                    if ((char)bVar2 == '\0') {
                      pGVar7 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)
                               il2cpp_runtime_helper_023052d0(TypeInfo_GisketchChoiceOptionDefinition);
                      enumType = pGVar7;
                      Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar7,(MethodInfo *)0x0);
                      if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
                      goto label_044fcd08;
                      (pGVar7->fields).value = (System_String_o *)pGVar5;
                      il2cpp_runtime_helper_022b4080(&pGVar7->fields,pGVar5);
                      (pGVar7->fields).text = (System_String_o *)pGVar5;
                      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).text,pGVar5);
                      *(undefined1 *)&(pGVar7->fields).enabled = 0;
                      (pGVar7->fields).tooltip = "This feature is only available for supporters.";
                      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).tooltip);
                      enumType = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)
                                 &(pGVar7->fields).tooltipKey;
                      (pGVar7->fields).tooltipKey = "MainMenu.Profile.SupporterOnlyFeature";
                      il2cpp_runtime_helper_022b4080();
                      if ((uint)pGVar4->max_length <= uVar10) break;
                      enumType = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)
                                 (pGVar4->m_Items + (int)uVar10);
                      pGVar4->m_Items[(int)uVar10] = pGVar7;
                      il2cpp_runtime_helper_022b4080(enumType,pGVar7);
                      uVar10 = uVar10 + 1;
                    }
                    uVar9 = uVar9 + 1;
                    uVar1 = (uint)pSVar3->max_length;
                    if ((long)(int)uVar1 <= (long)uVar9) {
                      return pGVar4;
                    }
                  } while (uVar9 < uVar1);
                }
              }
              else {
                uVar10 = 3;
                uVar9 = 0;
                if (uVar6 != 0) {
                  do {
                    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)pSVar3->m_Items[uVar9]
                    ;
                    enumType = pGVar5;
                    bVar2 = System_String__op_Equality
                                      ((System_String_o *)pGVar5,"None",(MethodInfo *)0x0);
                    if ((char)bVar2 == '\0') {
                      pGVar7 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)
                               il2cpp_runtime_helper_023052d0(TypeInfo_GisketchChoiceOptionDefinition);
                      enumType = pGVar7;
                      Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar7,(MethodInfo *)0x0);
                      if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
                      goto label_044fcd08;
                      (pGVar7->fields).value = (System_String_o *)pGVar5;
                      il2cpp_runtime_helper_022b4080(&pGVar7->fields,pGVar5);
                      (pGVar7->fields).text = (System_String_o *)pGVar5;
                      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).text,pGVar5);
                      *(char *)&(pGVar7->fields).enabled = local_3c;
                      (pGVar7->fields).tooltip = (System_String_o *)0x0;
                      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).tooltip,0);
                      enumType = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)
                                 &(pGVar7->fields).tooltipKey;
                      (pGVar7->fields).tooltipKey = (System_String_o *)0x0;
                      il2cpp_runtime_helper_022b4080(enumType,0);
                      if ((uint)pGVar4->max_length <= uVar10) break;
                      enumType = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)
                                 (pGVar4->m_Items + (int)uVar10);
                      pGVar4->m_Items[(int)uVar10] = pGVar7;
                      il2cpp_runtime_helper_022b4080(enumType,pGVar7);
                      uVar10 = uVar10 + 1;
                    }
                    uVar9 = uVar9 + 1;
                    uVar1 = (uint)pSVar3->max_length;
                    if ((long)(int)uVar1 <= (long)uVar9) {
                      return pGVar4;
                    }
                  } while (uVar9 < uVar1);
                }
              }
            }
          }
        }
        il2cpp_runtime_helper_022b2ca0();
      }
    }
  }
label_044fcd08:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecec == '\0') {
    il2cpp_runtime_helper_023445d0(&"FourColorGradient");
    il2cpp_runtime_helper_023445d0(&"TwoColorGradient");
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057aecec = '\x01';
  }
  bVar2 = System_String__op_Equality((System_String_o *)enumType,"Color",(MethodInfo *)0x0);
  uVar8 = CONCAT44(extraout_var,bVar2);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality((System_String_o *)enumType,"TwoColorGradient",(MethodInfo *)0x0);
    uVar8 = CONCAT44(extraout_var_00,bVar2);
    if ((char)bVar2 == '\0') {
      bVar2 = System_String__op_Equality((System_String_o *)enumType,"FourColorGradient",(MethodInfo *)0x0);
      return (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)CONCAT44(extraout_var_01,bVar2);
    }
  }
  return (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)CONCAT71((int7)((ulong)uVar8 >> 8),1);
}


// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$IsTextColorMode
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__IsTextColorMode (System_String_o* type, const MethodInfo* method);
// 0x44fcd10

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__IsTextColorMode(System_String_o *type,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057aecec == '\0') {
    il2cpp_runtime_helper_023445d0(&"FourColorGradient");
    il2cpp_runtime_helper_023445d0(&"TwoColorGradient");
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057aecec = '\x01';
  }
  bVar1 = System_String__op_Equality(type,"Color",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(type,"TwoColorGradient",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__op_Equality(type,"FourColorGradient",(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1);
}


// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$GradientStops
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops (System_String_o* type, const MethodInfo* method);
// 0x44fcda0

int32_t Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops(System_String_o *type,MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  
  if (g_data_057aeced == '\0') {
    il2cpp_runtime_helper_023445d0(&"FourColorGradient");
    il2cpp_runtime_helper_023445d0(&"TwoColorGradient");
    g_data_057aeced = '\x01';
  }
  bVar1 = System_String__op_Equality(type,"TwoColorGradient",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return 2;
  }
  uVar2 = System_String__op_Equality(type,"FourColorGradient",(MethodInfo *)0x0);
  return (uVar2 & 0xff) << 2;
}


// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$SelectValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__SelectValue (bool hasAccess, bool enabled, System_String_o* type, const MethodInfo* method);
// 0x44fce10

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__SelectValue
          (bool_conflict hasAccess,bool_conflict enabled,System_String_o *type,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  int32_t iStack_34;
  System_Enum_o SStack_30;
  int32_t iStack_20;
  
  if (g_data_057aecee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectType);
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057aecee = '\x01';
  }
  iStack_34 = 0;
  pSVar2 = "Color";
  if ((((char)hasAccess != '\0') && ((char)enabled != '\0')) &&
     (bVar1 = PatreonEffects_NameEffectPresets__TryResolve(type,&iStack_34,(MethodInfo *)0x0),
     pSVar2 = "Color", (char)bVar1 != '\0')) {
    SStack_30.klass = TypeInfo_NameEffectType;
    SStack_30.monitor = (void *)0xffffffffffffffff;
    iStack_20 = iStack_34;
    pSVar2 = System_Enum__ToString(&SStack_30,(MethodInfo *)0x0);
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$IsEffect
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__IsEffect (bool enabled, System_String_o* type, const MethodInfo* method);
// 0x44fceb0

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__IsEffect
          (bool_conflict enabled,System_String_o *type,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057aecef == '\0') {
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057aecef = '\x01';
  }
  if ((char)enabled != '\0') {
    bVar1 = System_String__IsNullOrEmpty(type,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__op_Inequality(type,"None",(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$PresetColors
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__PresetColors (System_String_o* type, const MethodInfo* method);
// 0x44fcf10

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
  uint uVar8;
  undefined8 uVar9;
  bool_conflict bVar10;
  PatreonEffects_NameEffectSettings_o *pPVar11;
  System_String_array *pSVar12;
  System_String_o *pSVar13;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  int32_t local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar5._0_4_ = in_XMM1_Da;
  uVar5._4_4_ = in_XMM1_Db;
  if (g_data_057aecf0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    g_data_057aecf0 = '\x01';
    uVar5._0_4_ = in_XMM1_Da;
    uVar5._4_4_ = in_XMM1_Db;
  }
  local_3c = 0;
  bVar10 = PatreonEffects_NameEffectPresets__TryResolve(type,&local_3c,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    pSVar12 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
    if (pSVar12 == (System_String_array *)0x0) goto label_044fd1d1;
    if ((int)pSVar12->max_length != 0) {
      pSVar12->m_Items[0] = "#FFFFFFFF";
      il2cpp_runtime_helper_022b4080();
      if (1 < (uint)pSVar12->max_length) {
        pSVar12->m_Items[1] = "#FFFFFFFF";
        il2cpp_runtime_helper_022b4080();
        if (2 < (uint)pSVar12->max_length) {
          pSVar12->m_Items[2] = "#FFFFFFFF";
          il2cpp_runtime_helper_022b4080();
          uVar8 = (uint)pSVar12->max_length;
          pSVar13 = "#FFFFFFFF";
joined_r0x044fd1ad:
          if (3 < uVar8) {
            pSVar12->m_Items[3] = pSVar13;
            il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 3);
            return pSVar12;
          }
        }
      }
    }
  }
  else {
    pPVar11 = PatreonEffects_NameEffectPresets__GetPreset(local_3c,(MethodInfo *)0x0);
    pSVar12 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
    if (pPVar11 == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_044fd1d1;
    uVar9._0_4_ = (pPVar11->fields).gradientA.fields.r;
    uVar9._4_4_ = (pPVar11->fields).gradientA.fields.g;
    uVar1._0_4_ = (pPVar11->fields).gradientA.fields.b;
    uVar1._4_4_ = (pPVar11->fields).gradientA.fields.a;
    uVar5._0_4_ = (undefined4)uVar1;
    uVar5._4_4_ = uVar1._4_4_;
    if (g_data_057aecf1 == '\0') {
      uStack_20 = 0;
      uStack_30 = 0;
      local_38 = uVar1;
      local_28 = uVar9;
      il2cpp_runtime_helper_023445d0();
      g_data_057aecf1 = '\x01';
      uVar9._0_4_ = (undefined4)local_28;
      uVar9._4_4_ = local_28._4_4_;
      uVar5._0_4_ = (undefined4)local_38;
      uVar5._4_4_ = local_38._4_4_;
    }
    color.fields.g = (float)uVar9._4_4_;
    color.fields.r = (float)(undefined4)uVar9;
    color.fields.a = (float)uVar5._4_4_;
    color.fields.b = (float)(undefined4)uVar5;
    pSVar13 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
    pSVar13 = System_String__Concat_3ae5ba0("#",pSVar13,(MethodInfo *)0x0);
    if (pSVar12 == (System_String_array *)0x0) goto label_044fd1d1;
    if ((int)pSVar12->max_length != 0) {
      pSVar12->m_Items[0] = pSVar13;
      il2cpp_runtime_helper_022b4080(pSVar12->m_Items,pSVar13);
      uVar2._0_4_ = (pPVar11->fields).gradientB.fields.r;
      uVar2._4_4_ = (pPVar11->fields).gradientB.fields.g;
      uVar3._0_4_ = (pPVar11->fields).gradientB.fields.b;
      uVar3._4_4_ = (pPVar11->fields).gradientB.fields.a;
      uVar5._0_4_ = (undefined4)uVar3;
      uVar5._4_4_ = uVar3._4_4_;
      if (g_data_057aecf1 == '\0') {
        uStack_20 = 0;
        uStack_30 = 0;
        local_38 = uVar3;
        local_28 = uVar2;
        il2cpp_runtime_helper_023445d0();
        g_data_057aecf1 = '\x01';
        uVar2._0_4_ = (undefined4)local_28;
        uVar2._4_4_ = local_28._4_4_;
        uVar5._0_4_ = (undefined4)local_38;
        uVar5._4_4_ = local_38._4_4_;
      }
      color_00.fields.g = (float)uVar2._4_4_;
      color_00.fields.r = (float)(undefined4)uVar2;
      color_00.fields.a = (float)uVar5._4_4_;
      color_00.fields.b = (float)(undefined4)uVar5;
      pSVar13 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
      pSVar13 = System_String__Concat_3ae5ba0("#",pSVar13,(MethodInfo *)0x0);
      if (1 < (uint)pSVar12->max_length) {
        pSVar12->m_Items[1] = pSVar13;
        il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 1,pSVar13);
        uVar4._0_4_ = (pPVar11->fields).gradientC.fields.r;
        uVar4._4_4_ = (pPVar11->fields).gradientC.fields.g;
        uVar5._0_4_ = (pPVar11->fields).gradientC.fields.b;
        uVar5._4_4_ = (pPVar11->fields).gradientC.fields.a;
        if (g_data_057aecf1 == '\0') {
          uStack_20 = 0;
          uStack_30 = 0;
          local_38 = uVar5;
          local_28 = uVar4;
          il2cpp_runtime_helper_023445d0();
          g_data_057aecf1 = '\x01';
          uVar4._0_4_ = (undefined4)local_28;
          uVar4._4_4_ = local_28._4_4_;
          uVar5._0_4_ = (undefined4)local_38;
          uVar5._4_4_ = local_38._4_4_;
        }
        color_01.fields.g = (float)uVar4._4_4_;
        color_01.fields.r = (float)(undefined4)uVar4;
        color_01.fields.a = (float)uVar5._4_4_;
        color_01.fields.b = (float)(undefined4)uVar5;
        pSVar13 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_01,(MethodInfo *)0x0);
        pSVar13 = System_String__Concat_3ae5ba0("#",pSVar13,(MethodInfo *)0x0);
        if (2 < (uint)pSVar12->max_length) {
          pSVar12->m_Items[2] = pSVar13;
          il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 2,pSVar13);
          uVar6._0_4_ = (pPVar11->fields).gradientD.fields.r;
          uVar6._4_4_ = (pPVar11->fields).gradientD.fields.g;
          uVar7._0_4_ = (pPVar11->fields).gradientD.fields.b;
          uVar7._4_4_ = (pPVar11->fields).gradientD.fields.a;
          if (g_data_057aecf1 == '\0') {
            uStack_20 = 0;
            uStack_30 = 0;
            local_38 = uVar7;
            local_28 = uVar6;
            il2cpp_runtime_helper_023445d0();
            g_data_057aecf1 = '\x01';
            uVar6._0_4_ = (undefined4)local_28;
            uVar6._4_4_ = local_28._4_4_;
            uVar7._0_4_ = (undefined4)local_38;
            uVar7._4_4_ = local_38._4_4_;
          }
          color_02.fields.g = (float)uVar6._4_4_;
          color_02.fields.r = (float)(undefined4)uVar6;
          color_02.fields.a = (float)uVar7._4_4_;
          color_02.fields.b = (float)(undefined4)uVar7;
          pSVar13 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_02,(MethodInfo *)0x0);
          pSVar13 = System_String__Concat_3ae5ba0("#",pSVar13,(MethodInfo *)0x0);
          uVar8 = (uint)pSVar12->max_length;
          uVar5._0_4_ = (undefined4)uVar7;
          uVar5._4_4_ = uVar7._4_4_;
          goto joined_r0x044fd1ad;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_044fd1d1:
  uVar9 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecf1 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057aecf1 = '\x01';
  }
  color_03.fields.a = (float)uVar5._4_4_;
  color_03.fields.b = (float)(undefined4)uVar5;
  color_03.fields.r = (float)(int)uVar9;
  color_03.fields.g = (float)(int)((ulong)uVar9 >> 0x20);
  pSVar13 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_03,(MethodInfo *)0x0);
  pSVar12 = (System_String_array *)System_String__Concat_3ae5ba0("#",pSVar13,(MethodInfo *)0x0);
  return pSVar12;
}


// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$Hex
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Hex (UnityEngine_Color_o color, const MethodInfo* method);
// 0x44fd1e0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Hex(UnityEngine_Color_o color,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057aecf1 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057aecf1 = '\x01';
  }
  pSVar1 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_3ae5ba0("#",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


