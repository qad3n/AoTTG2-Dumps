// Type: Gisketch.Aottg2UI.Game.AottgCharacterEffectUi
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterEffectUi.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$Options
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Options (bool hasAccess, const MethodInfo* method);
// 0x41cb360

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *
Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Options(bool_conflict hasAccess,MethodInfo *method)

{
  uint uVar1;
  System_String_o *pSVar2;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar3;
  System_Type_o *enumType;
  System_String_array *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  char local_3c;
  
  if (DAT_05704e16 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchChoiceOptionDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchChoiceOptionDefinition);
    il2cpp_init_method_metadata(&TypeRef_NameEffectType);
    il2cpp_init_method_metadata(&"FourColorGradient");
    il2cpp_init_method_metadata(&"TwoColorGradient");
    il2cpp_init_method_metadata(&"Color");
    il2cpp_init_method_metadata(&"This feature is only available for supporters.");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Two-Color Gradient");
    il2cpp_init_method_metadata(&"Four-Color Gradient");
    il2cpp_init_method_metadata(&"MainMenu.Profile.SupporterOnlyFeature");
    il2cpp_init_method_metadata(&"Custom Color");
    DAT_05704e16 = '\x01';
  }
  handle.fields.value = TypeRef_NameEffectType.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
  if (pSVar4 != (System_String_array *)0x0) {
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
             il2cpp_glue_02274930(TypeInfo_GisketchChoiceOptionDefinition);
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)
             il2cpp_runtime_glue(TypeInfo_GisketchChoiceOptionDefinition);
    Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar6,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
      (pGVar6->fields).value = "Color";
      il2cpp_runtime_glue(&pGVar6->fields);
      (pGVar6->fields).text = "Custom Color";
      il2cpp_runtime_glue(&(pGVar6->fields).text);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
        if ((int)pGVar5->max_length != 0) {
          pGVar5->m_Items[0] = pGVar6;
          il2cpp_runtime_glue(pGVar5->m_Items);
          pGVar6 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)
                   il2cpp_runtime_glue(TypeInfo_GisketchChoiceOptionDefinition);
          Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar6,(MethodInfo *)0x0);
          if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
          goto LAB_041cb828;
          (pGVar6->fields).value = "TwoColorGradient";
          il2cpp_runtime_glue(&pGVar6->fields);
          (pGVar6->fields).text = "Two-Color Gradient";
          il2cpp_runtime_glue(&(pGVar6->fields).text);
          if (1 < (uint)pGVar5->max_length) {
            pGVar5->m_Items[1] = pGVar6;
            il2cpp_runtime_glue(pGVar5->m_Items + 1);
            pGVar6 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)
                     il2cpp_runtime_glue(TypeInfo_GisketchChoiceOptionDefinition);
            Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar6,(MethodInfo *)0x0);
            if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
            goto LAB_041cb828;
            (pGVar6->fields).value = "FourColorGradient";
            il2cpp_runtime_glue(&pGVar6->fields);
            (pGVar6->fields).text = "Four-Color Gradient";
            il2cpp_runtime_glue(&(pGVar6->fields).text);
            if (2 < (uint)pGVar5->max_length) {
              pGVar5->m_Items[2] = pGVar6;
              il2cpp_runtime_glue(pGVar5->m_Items + 2,pGVar6);
              if ((int)pSVar4->max_length < 1) {
                return pGVar5;
              }
              uVar7 = pSVar4->max_length & 0xffffffff;
              local_3c = (char)hasAccess;
              if (local_3c == '\0') {
                uVar9 = 3;
                uVar8 = 0;
                if (uVar7 != 0) {
                  do {
                    pSVar2 = pSVar4->m_Items[uVar8];
                    bVar3 = System_String__op_Equality(pSVar2,"None",(MethodInfo *)0x0);
                    if ((char)bVar3 == '\0') {
                      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)
                               il2cpp_runtime_glue(TypeInfo_GisketchChoiceOptionDefinition);
                      Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor
                                (pGVar6,(MethodInfo *)0x0);
                      if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
                      goto LAB_041cb828;
                      (pGVar6->fields).value = pSVar2;
                      il2cpp_runtime_glue(&pGVar6->fields,pSVar2);
                      (pGVar6->fields).text = pSVar2;
                      il2cpp_runtime_glue(&(pGVar6->fields).text,pSVar2);
                      *(undefined1 *)&(pGVar6->fields).enabled = 0;
                      (pGVar6->fields).tooltip = "This feature is only available for supporters.";
                      il2cpp_runtime_glue(&(pGVar6->fields).tooltip);
                      (pGVar6->fields).tooltipKey = "MainMenu.Profile.SupporterOnlyFeature";
                      il2cpp_runtime_glue(&(pGVar6->fields).tooltipKey);
                      if ((uint)pGVar5->max_length <= uVar9) break;
                      pGVar5->m_Items[(int)uVar9] = pGVar6;
                      il2cpp_runtime_glue(pGVar5->m_Items + (int)uVar9,pGVar6);
                      uVar9 = uVar9 + 1;
                    }
                    uVar8 = uVar8 + 1;
                    uVar1 = (uint)pSVar4->max_length;
                    if ((long)(int)uVar1 <= (long)uVar8) {
                      return pGVar5;
                    }
                  } while (uVar8 < uVar1);
                }
              }
              else {
                uVar9 = 3;
                uVar8 = 0;
                if (uVar7 != 0) {
                  do {
                    pSVar2 = pSVar4->m_Items[uVar8];
                    bVar3 = System_String__op_Equality(pSVar2,"None",(MethodInfo *)0x0);
                    if ((char)bVar3 == '\0') {
                      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)
                               il2cpp_runtime_glue(TypeInfo_GisketchChoiceOptionDefinition);
                      Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor
                                (pGVar6,(MethodInfo *)0x0);
                      if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
                      goto LAB_041cb828;
                      (pGVar6->fields).value = pSVar2;
                      il2cpp_runtime_glue(&pGVar6->fields,pSVar2);
                      (pGVar6->fields).text = pSVar2;
                      il2cpp_runtime_glue(&(pGVar6->fields).text,pSVar2);
                      *(char *)&(pGVar6->fields).enabled = local_3c;
                      (pGVar6->fields).tooltip = (System_String_o *)0x0;
                      il2cpp_runtime_glue(&(pGVar6->fields).tooltip,0);
                      (pGVar6->fields).tooltipKey = (System_String_o *)0x0;
                      il2cpp_runtime_glue(&(pGVar6->fields).tooltipKey,0);
                      if ((uint)pGVar5->max_length <= uVar9) break;
                      pGVar5->m_Items[(int)uVar9] = pGVar6;
                      il2cpp_runtime_glue(pGVar5->m_Items + (int)uVar9,pGVar6);
                      uVar9 = uVar9 + 1;
                    }
                    uVar8 = uVar8 + 1;
                    uVar1 = (uint)pSVar4->max_length;
                    if ((long)(int)uVar1 <= (long)uVar8) {
                      return pGVar5;
                    }
                  } while (uVar8 < uVar1);
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_041cb828:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$IsTextColorMode
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__IsTextColorMode (System_String_o* type, const MethodInfo* method);
// 0x41cb830

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__IsTextColorMode
          (System_String_o *type,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704e17 == '\0') {
    il2cpp_init_method_metadata(&"FourColorGradient");
    il2cpp_init_method_metadata(&"TwoColorGradient");
    il2cpp_init_method_metadata(&"Color");
    DAT_05704e17 = '\x01';
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
// 0x41cb8c0

int32_t Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops
                  (System_String_o *type,MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  
  if (DAT_05704e18 == '\0') {
    il2cpp_init_method_metadata(&"FourColorGradient");
    il2cpp_init_method_metadata(&"TwoColorGradient");
    DAT_05704e18 = '\x01';
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
// 0x41cb930

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__SelectValue
          (bool_conflict hasAccess,bool_conflict enabled,System_String_o *type,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  int32_t iStack_34;
  System_Enum_o SStack_30;
  int32_t iStack_20;
  
  if (DAT_05704e19 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameEffectType);
    il2cpp_init_method_metadata(&"Color");
    DAT_05704e19 = '\x01';
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
// 0x41cb9d0

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__IsEffect
          (bool_conflict enabled,System_String_o *type,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704e1a == '\0') {
    il2cpp_init_method_metadata(&"None");
    DAT_05704e1a = '\x01';
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
// 0x41cba30

System_String_array *
Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__PresetColors
          (System_String_o *type,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  bool_conflict bVar10;
  PatreonEffects_NameEffectSettings_o *pPVar11;
  System_String_array *pSVar12;
  System_String_o *pSVar13;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  int32_t local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (DAT_05704e1b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"#FFFFFFFF");
    DAT_05704e1b = '\x01';
  }
  local_3c = 0;
  bVar10 = PatreonEffects_NameEffectPresets__TryResolve(type,&local_3c,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    pSVar12 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,4);
    if (pSVar12 == (System_String_array *)0x0) goto LAB_041cbcf1;
    if ((int)pSVar12->max_length == 0) goto LAB_041cbcec;
    pSVar12->m_Items[0] = "#FFFFFFFF";
    il2cpp_runtime_glue(pSVar12->m_Items);
    if ((uint)pSVar12->max_length < 2) goto LAB_041cbcec;
    pSVar12->m_Items[1] = "#FFFFFFFF";
    il2cpp_runtime_glue(pSVar12->m_Items + 1);
    if ((uint)pSVar12->max_length < 3) goto LAB_041cbcec;
    pSVar12->m_Items[2] = "#FFFFFFFF";
    il2cpp_runtime_glue(pSVar12->m_Items + 2);
    uVar9 = (uint)pSVar12->max_length;
    pSVar13 = "#FFFFFFFF";
  }
  else {
    pPVar11 = PatreonEffects_NameEffectPresets__GetPreset(local_3c,(MethodInfo *)0x0);
    pSVar12 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,4);
    if (pPVar11 == (PatreonEffects_NameEffectSettings_o *)0x0) {
LAB_041cbcf1:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar1._0_4_ = (pPVar11->fields).gradientA.fields.r;
    uVar1._4_4_ = (pPVar11->fields).gradientA.fields.g;
    uVar2._0_4_ = (pPVar11->fields).gradientA.fields.b;
    uVar2._4_4_ = (pPVar11->fields).gradientA.fields.a;
    if (DAT_05704e1c == '\0') {
      uStack_20 = 0;
      uStack_30 = 0;
      local_38 = uVar2;
      local_28 = uVar1;
      il2cpp_init_method_metadata();
      DAT_05704e1c = '\x01';
      uVar1._0_4_ = (undefined4)local_28;
      uVar1._4_4_ = local_28._4_4_;
      uVar2._0_4_ = (undefined4)local_38;
      uVar2._4_4_ = local_38._4_4_;
    }
    color.fields.g = (float)uVar1._4_4_;
    color.fields.r = (float)(undefined4)uVar1;
    color.fields.a = (float)uVar2._4_4_;
    color.fields.b = (float)(undefined4)uVar2;
    pSVar13 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
    pSVar13 = System_String__Concat("#",pSVar13,(MethodInfo *)0x0);
    if (pSVar12 == (System_String_array *)0x0) goto LAB_041cbcf1;
    if ((int)pSVar12->max_length == 0) goto LAB_041cbcec;
    pSVar12->m_Items[0] = pSVar13;
    il2cpp_runtime_glue(pSVar12->m_Items,pSVar13);
    uVar3._0_4_ = (pPVar11->fields).gradientB.fields.r;
    uVar3._4_4_ = (pPVar11->fields).gradientB.fields.g;
    uVar4._0_4_ = (pPVar11->fields).gradientB.fields.b;
    uVar4._4_4_ = (pPVar11->fields).gradientB.fields.a;
    if (DAT_05704e1c == '\0') {
      uStack_20 = 0;
      uStack_30 = 0;
      local_38 = uVar4;
      local_28 = uVar3;
      il2cpp_init_method_metadata();
      DAT_05704e1c = '\x01';
      uVar3._0_4_ = (undefined4)local_28;
      uVar3._4_4_ = local_28._4_4_;
      uVar4._0_4_ = (undefined4)local_38;
      uVar4._4_4_ = local_38._4_4_;
    }
    color_00.fields.g = (float)uVar3._4_4_;
    color_00.fields.r = (float)(undefined4)uVar3;
    color_00.fields.a = (float)uVar4._4_4_;
    color_00.fields.b = (float)(undefined4)uVar4;
    pSVar13 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
    pSVar13 = System_String__Concat("#",pSVar13,(MethodInfo *)0x0);
    if ((uint)pSVar12->max_length < 2) goto LAB_041cbcec;
    pSVar12->m_Items[1] = pSVar13;
    il2cpp_runtime_glue(pSVar12->m_Items + 1,pSVar13);
    uVar5._0_4_ = (pPVar11->fields).gradientC.fields.r;
    uVar5._4_4_ = (pPVar11->fields).gradientC.fields.g;
    uVar6._0_4_ = (pPVar11->fields).gradientC.fields.b;
    uVar6._4_4_ = (pPVar11->fields).gradientC.fields.a;
    if (DAT_05704e1c == '\0') {
      uStack_20 = 0;
      uStack_30 = 0;
      local_38 = uVar6;
      local_28 = uVar5;
      il2cpp_init_method_metadata();
      DAT_05704e1c = '\x01';
      uVar5._0_4_ = (undefined4)local_28;
      uVar5._4_4_ = local_28._4_4_;
      uVar6._0_4_ = (undefined4)local_38;
      uVar6._4_4_ = local_38._4_4_;
    }
    color_01.fields.g = (float)uVar5._4_4_;
    color_01.fields.r = (float)(undefined4)uVar5;
    color_01.fields.a = (float)uVar6._4_4_;
    color_01.fields.b = (float)(undefined4)uVar6;
    pSVar13 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_01,(MethodInfo *)0x0);
    pSVar13 = System_String__Concat("#",pSVar13,(MethodInfo *)0x0);
    if ((uint)pSVar12->max_length < 3) goto LAB_041cbcec;
    pSVar12->m_Items[2] = pSVar13;
    il2cpp_runtime_glue(pSVar12->m_Items + 2,pSVar13);
    uVar7._0_4_ = (pPVar11->fields).gradientD.fields.r;
    uVar7._4_4_ = (pPVar11->fields).gradientD.fields.g;
    uVar8._0_4_ = (pPVar11->fields).gradientD.fields.b;
    uVar8._4_4_ = (pPVar11->fields).gradientD.fields.a;
    if (DAT_05704e1c == '\0') {
      uStack_20 = 0;
      uStack_30 = 0;
      local_38 = uVar8;
      local_28 = uVar7;
      il2cpp_init_method_metadata();
      DAT_05704e1c = '\x01';
      uVar7._0_4_ = (undefined4)local_28;
      uVar7._4_4_ = local_28._4_4_;
      uVar8._0_4_ = (undefined4)local_38;
      uVar8._4_4_ = local_38._4_4_;
    }
    color_02.fields.g = (float)uVar7._4_4_;
    color_02.fields.r = (float)(undefined4)uVar7;
    color_02.fields.a = (float)uVar8._4_4_;
    color_02.fields.b = (float)(undefined4)uVar8;
    pSVar13 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_02,(MethodInfo *)0x0);
    pSVar13 = System_String__Concat("#",pSVar13,(MethodInfo *)0x0);
    uVar9 = (uint)pSVar12->max_length;
  }
  if (3 < uVar9) {
    pSVar12->m_Items[3] = pSVar13;
    il2cpp_runtime_glue(pSVar12->m_Items + 3);
    return pSVar12;
  }
LAB_041cbcec:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$Hex
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Hex (UnityEngine_Color_o color, const MethodInfo* method);
// 0x41cbd00

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Hex(UnityEngine_Color_o color,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704e1c == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704e1c = '\x01';
  }
  pSVar1 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat("#",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


