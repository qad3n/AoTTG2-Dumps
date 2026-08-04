// Type: Gisketch.Aottg2UI.Game.AottgCharacterFontUi
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterFontUi.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterFontUi$$Options
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* Gisketch_Aottg2UI_Game_AottgCharacterFontUi__Options (bool hasAccess, const MethodInfo* method);
// 0x44fd240

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *
Gisketch_Aottg2UI_Game_AottgCharacterFontUi__Options(bool_conflict hasAccess,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar3;
  char cVar4;
  bool_conflict bVar5;
  ulong uVar6;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *__this;
  System_String_o *pSVar7;
  undefined8 *puVar8;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar9;
  SimpleJSONFixed_JSONNode_o *node;
  undefined8 *puVar10;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *unaff_RBP;
  MethodInfo *pMVar12;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar13;
  byte unaff_R14B;
  ulong uVar14;
  undefined1 auVar15 [12];
  byte local_4c;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *local_48;
  
  local_4c = (byte)hasAccess;
  pGVar3 = local_48;
  if (g_data_057aecf2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&"Normal");
    il2cpp_runtime_helper_023445d0(&"This feature is only available for supporters.");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Profile.SupporterOnlyFeature");
    g_data_057aecf2 = '\x01';
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) goto label_044fd2e9;
label_044fd26e:
    __this = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)&TypeInfo_NameFontCatalog;
    pGVar13 = *(Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o **)
               (*(long *)(TypeInfo_NameFontCatalog + 0xb8) + 8);
    if (pGVar13 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto label_044fd4e8;
label_044fd305:
    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchChoiceOptionDefinition);
    pSVar7 = (pGVar13->fields).text;
    if ((int)pSVar7 < 1) {
      return pGVar9;
    }
    local_48 = unaff_RBP;
    pGVar3 = pGVar13;
    if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
      bVar5 = System_String__op_Equality((pGVar13->fields).textKey,"Normal",(MethodInfo *)0x0);
      unaff_R14B = (byte)bVar5;
      __this = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchChoiceOptionDefinition);
      Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(__this,(MethodInfo *)0x0);
      if (*(int *)&(pGVar13->fields).text == 0) goto label_044fd509;
      local_48 = pGVar13;
      if (__this == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto label_044fd4e8;
      goto label_044fd4ed;
    }
    uVar6 = (ulong)pSVar7 & 0xffffffff;
    pGVar11 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0;
    uVar14 = 0;
    while (__this = pGVar11, uVar14 < uVar6) {
      bVar5 = System_String__op_Equality((&(pGVar13->fields).textKey)[uVar14],"Normal",(MethodInfo *)0x0);
      unaff_R14B = (byte)bVar5;
      local_48 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchChoiceOptionDefinition);
      Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(local_48,(MethodInfo *)0x0);
      if (*(uint *)&(pGVar13->fields).text <= uVar14) break;
      if (local_48 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto label_044fd4e8;
      (local_48->fields).value = (&(pGVar13->fields).textKey)[uVar14];
      il2cpp_runtime_helper_022b4080(&local_48->fields);
      __this = pGVar13;
      if (*(uint *)&(pGVar13->fields).text <= uVar14) break;
      pSVar7 = (&(pGVar13->fields).textKey)[uVar14];
      if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = PatreonEffects_NameFontCatalog__Label(pSVar7,(MethodInfo *)0x0);
      (local_48->fields).text = pSVar7;
      il2cpp_runtime_helper_022b4080(&(local_48->fields).text,pSVar7);
      unaff_R14B = unaff_R14B | local_4c;
      *(byte *)&(local_48->fields).enabled = unaff_R14B;
      pSVar7 = (System_String_o *)0x0;
      if (unaff_R14B == 0) {
        pSVar7 = "This feature is only available for supporters.";
      }
      (local_48->fields).tooltip = pSVar7;
      il2cpp_runtime_helper_022b4080(&(local_48->fields).tooltip);
      pSVar7 = (System_String_o *)0x0;
      if (unaff_R14B == 0) {
        pSVar7 = "MainMenu.Profile.SupporterOnlyFeature";
      }
      (local_48->fields).tooltipKey = pSVar7;
      il2cpp_runtime_helper_022b4080(&(local_48->fields).tooltipKey);
      __this = pGVar11;
      if ((uint)pGVar9->max_length <= uVar14) break;
      pGVar9->m_Items[uVar14] = local_48;
      il2cpp_runtime_helper_022b4080((long)pGVar9->m_Items + (long)pGVar11);
      uVar14 = uVar14 + 1;
      uVar1 = *(uint *)&(pGVar13->fields).text;
      uVar6 = (ulong)uVar1;
      pGVar11 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)&pGVar11->monitor;
      if ((long)(int)uVar1 <= (long)uVar14) {
        return pGVar9;
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) != 0) goto label_044fd26e;
label_044fd2e9:
    __this = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)&TypeInfo_NameFontCatalog;
    il2cpp_runtime_helper_02337ed0();
    pGVar13 = *(Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o **)
               (*(long *)(TypeInfo_NameFontCatalog + 0xb8) + 8);
    if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto label_044fd305;
label_044fd4e8:
    local_48 = pGVar3;
    il2cpp_runtime_helper_022b2c90();
label_044fd4ed:
    (__this->fields).value = (local_48->fields).textKey;
    il2cpp_runtime_helper_022b4080(&__this->fields);
    if (*(int *)&(local_48->fields).text != 0) goto label_044fd50e;
  }
label_044fd509:
  il2cpp_runtime_helper_022b2ca0();
label_044fd50e:
  pSVar7 = (local_48->fields).textKey;
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = PatreonEffects_NameFontCatalog__Label(pSVar7,(MethodInfo *)0x0);
  (__this->fields).text = pSVar7;
  il2cpp_runtime_helper_022b4080(&(__this->fields).text,pSVar7);
  local_4c = unaff_R14B | local_4c;
  *(byte *)&(__this->fields).enabled = local_4c;
  pSVar7 = (System_String_o *)0x0;
  if (local_4c == 0) {
    pSVar7 = "This feature is only available for supporters.";
  }
  (__this->fields).tooltip = pSVar7;
  il2cpp_runtime_helper_022b4080(&(__this->fields).tooltip);
  pSVar7 = (System_String_o *)0x0;
  if (local_4c == 0) {
    pSVar7 = "MainMenu.Profile.SupporterOnlyFeature";
  }
  (__this->fields).tooltipKey = pSVar7;
  il2cpp_runtime_helper_022b4080(&(__this->fields).tooltipKey);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecfa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057aecfa = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (lVar2 == 0) {
    puVar8 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x60);
    if (lVar2 == 0) {
      auVar15 = il2cpp_runtime_helper_022b2c90();
      if (auVar15._8_4_ != 1) {
        _Unwind_Resume(auVar15._0_8_);
      }
      puVar8 = (undefined8 *)__cxa_begin_catch(auVar15._0_8_);
      pMVar12 = *(MethodInfo **)*puVar8;
      cVar4 = il2cpp_runtime_helper_0233e000();
      if (cVar4 != '\0') {
        __cxa_end_catch();
        pGVar9 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
                 Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize
                           ((SimpleJSONFixed_JSONNode_o *)0x0,pMVar12);
        return pGVar9;
      }
      puVar10 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar10 = *puVar8;
      __cxa_throw(puVar10,&PTR_PTR_05215060,0);
    }
    puVar8 = (undefined8 *)(lVar2 + 0x18);
  }
  pSVar7 = (System_String_o *)*puVar8;
  pMVar12 = (MethodInfo *)0x0;
  bVar5 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
             Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize
                       ((SimpleJSONFixed_JSONNode_o *)0x0,pMVar12);
    return pGVar9;
  }
  pMVar12 = (MethodInfo *)0x0;
  node = SimpleJSONFixed_JSON__Parse(pSVar7,(MethodInfo *)0x0);
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
           Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Sanitize(node,pMVar12);
  return pGVar9;
}


