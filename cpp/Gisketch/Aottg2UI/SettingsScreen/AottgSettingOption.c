// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingOption.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o __this, System_String_o* value, System_String_o* text, bool enabled, System_String_o* tooltip, System_String_o* textKey, System_String_o* tooltipKey, const MethodInfo* method);
// 0x18230c580

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o *__this,System_String_o *value,
               System_String_o *text,bool enabled,System_String_o *tooltip,System_String_o *textKey,
               System_String_o *tooltipKey,MethodInfo *method)

{
  (__this->fields).Value = value;
  Il2CppCodeGenWriteBarrier((void **)__this,value);
  if (text == (System_String_o *)0x0) {
    text = value;
  }
  (__this->fields).Text = text;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Text,text);
  (__this->fields).TextKey = textKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TextKey,textKey);
  (__this->fields).Tooltip = tooltip;
  (__this->fields).Enabled = enabled;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Tooltip,tooltip);
  (__this->fields).TooltipKey = tooltipKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TooltipKey,tooltipKey);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$ToChoice
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o __this, const MethodInfo* method);
// 0x18230c4c0

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184347723 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
    Il2CppMethodInitialized_184347723 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
    pSVar1 = (__this->fields).Value;
    (__this_00->fields).value = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).value,pSVar1);
    pSVar1 = (__this->fields).Text;
    (__this_00->fields).text = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,pSVar1);
    pSVar1 = (__this->fields).TextKey;
    (__this_00->fields).textKey = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).textKey,pSVar1);
    (__this_00->fields).enabled = (__this->fields).Enabled;
    pSVar1 = (__this->fields).Tooltip;
    (__this_00->fields).tooltip = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).tooltip,pSVar1);
    pSVar1 = (__this->fields).TooltipKey;
    (__this_00->fields).tooltipKey = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).tooltipKey,pSVar1);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$StringOptions
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__StringOptions (System_String_array* values, const MethodInfo* method);
// 0x18230c440

Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__StringOptions
          (System_String_array *values,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *pGVar1;
  
  pGVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__LocalizedStringOptions
                     (values,(System_String_array *)0x0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$LocalizedStringOptions
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__LocalizedStringOptions (System_String_array* values, System_String_array* localizedText, const MethodInfo* method);
// 0x18230c250
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18230c2bc: nop dword ptr [rax]

Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__LocalizedStringOptions
          (System_String_array *values,System_String_array *localizedText,MethodInfo *method)

{
  uint uVar1;
  System_String_o *value;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_Fields *pGVar2;
  bool bVar3;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *pGVar4;
  uint uVar5;
  System_String_o *pSVar6;
  System_String_o *local_48;
  System_String_o *pSStack_40;
  System_String_o *pSStack_38;
  undefined8 uStack_30;
  System_String_o *pSStack_28;
  System_String_o *local_20;
  
  if (Il2CppMethodInitialized_184347724 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array);
    Il2CppMethodInitialized_184347724 = '\x01';
  }
  if (values == (System_String_array *)0x0) {
    pGVar4 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array,0);
    return pGVar4;
  }
  pGVar4 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array,
                      (uint32_t)values->max_length);
  uVar5 = 0;
  while( true ) {
    if ((int)values->max_length <= (int)uVar5) {
      return pGVar4;
    }
    if ((uint)values->max_length <= uVar5) break;
    value = values->m_Items[(int)uVar5];
    pSVar6 = values->m_Items[(int)uVar5];
    if (((localizedText != (System_String_array *)0x0) && (-1 < (int)uVar5)) &&
       (uVar1 = (uint)localizedText->max_length, (int)uVar5 < (int)uVar1)) {
      if (uVar1 <= uVar5) break;
      bVar3 = System_String__IsNullOrEmpty(localizedText->m_Items[(int)uVar5],(MethodInfo *)0x0);
      if (!bVar3) {
        if ((uint)localizedText->max_length <= uVar5) break;
        pSVar6 = localizedText->m_Items[(int)uVar5];
      }
    }
    local_20 = (System_String_o *)0x0;
    pSStack_40 = (System_String_o *)0x0;
    pSStack_38 = (System_String_o *)0x0;
    uStack_30 = 0;
    pSStack_28 = (System_String_o *)0x0;
    local_48 = value;
    Il2CppCodeGenWriteBarrier(&local_48,value);
    pSStack_40 = pSVar6;
    if (pSVar6 == (System_String_o *)0x0) {
      pSStack_40 = value;
    }
    Il2CppCodeGenWriteBarrier(&pSStack_40,pSStack_40);
    pSStack_38 = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&pSStack_38,(void *)0x0);
    uStack_30 = CONCAT71(uStack_30._1_7_,1);
    pSStack_28 = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&pSStack_28,(void *)0x0);
    local_20 = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&local_20,(void *)0x0);
    if (pGVar4 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((uint)pGVar4->max_length <= uVar5) break;
    pGVar4->m_Items[(int)uVar5].fields.Value = local_48;
    pGVar4->m_Items[(int)uVar5].fields.Text = pSStack_40;
    pGVar2 = &pGVar4->m_Items[(int)uVar5].fields;
    pGVar2->TextKey = pSStack_38;
    *(undefined8 *)&pGVar2->Enabled = uStack_30;
    pGVar2 = &pGVar4->m_Items[(int)uVar5].fields;
    pGVar2->Tooltip = pSStack_28;
    pGVar2->TooltipKey = local_20;
    Il2CppCodeGenWriteBarrier((void **)(pGVar4->m_Items + (int)uVar5),(void *)0x0);
    uVar5 = uVar5 + 1;
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$IndexedOptions
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__IndexedOptions (System_String_array* labels, const MethodInfo* method);
// 0x18230c020

Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__IndexedOptions
          (System_String_array *labels,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *pGVar1;
  
  pGVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__LocalizedIndexedOptions
                     (labels,(System_String_array *)0x0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$LocalizedIndexedOptions
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__LocalizedIndexedOptions (System_String_array* labels, System_String_array* localizedText, const MethodInfo* method);
// 0x18230c030

Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__LocalizedIndexedOptions
          (System_String_array *labels,System_String_array *localizedText,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_Fields *pGVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *pGVar6;
  System_String_o *value;
  longlong lVar7;
  System_String_o *pSVar8;
  uint local_res8 [2];
  System_String_o *local_58;
  System_String_o *pSStack_50;
  System_String_o *pSStack_48;
  undefined8 uStack_40;
  System_String_o *pSStack_38;
  System_String_o *local_30;
  
  if (Il2CppMethodInitialized_184347725 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array);
    Il2CppMethodInitialized_184347725 = '\x01';
  }
  local_res8[0] = 0;
  if (labels == (System_String_array *)0x0) {
    pGVar6 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array,0);
    return pGVar6;
  }
  pGVar6 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array,
                      (uint32_t)labels->max_length);
  local_res8[0] = 0;
  while( true ) {
    uVar3 = local_res8[0];
    if ((int)labels->max_length <= (int)local_res8[0]) {
      return pGVar6;
    }
    value = System_Int32__ToString((int32_t *)local_res8,(MethodInfo *)0x0);
    uVar4 = local_res8[0];
    lVar7 = (longlong)(int)local_res8[0];
    if ((uint)labels->max_length <= local_res8[0]) break;
    pSVar8 = labels->m_Items[lVar7];
    if (((localizedText != (System_String_array *)0x0) && (-1 < (int)local_res8[0])) &&
       (uVar1 = (uint)localizedText->max_length, (int)local_res8[0] < (int)uVar1)) {
      if (uVar1 <= local_res8[0]) break;
      bVar5 = System_String__IsNullOrEmpty(localizedText->m_Items[lVar7],(MethodInfo *)0x0);
      if (!bVar5) {
        if ((uint)localizedText->max_length <= uVar4) break;
        pSVar8 = localizedText->m_Items[lVar7];
      }
    }
    local_30 = (System_String_o *)0x0;
    pSStack_50 = (System_String_o *)0x0;
    pSStack_48 = (System_String_o *)0x0;
    uStack_40 = 0;
    pSStack_38 = (System_String_o *)0x0;
    local_58 = value;
    Il2CppCodeGenWriteBarrier(&local_58,value);
    pSStack_50 = value;
    if (pSVar8 != (System_String_o *)0x0) {
      pSStack_50 = pSVar8;
    }
    Il2CppCodeGenWriteBarrier(&pSStack_50,pSStack_50);
    pSStack_48 = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&pSStack_48,(void *)0x0);
    uStack_40 = CONCAT71(uStack_40._1_7_,1);
    pSStack_38 = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&pSStack_38,(void *)0x0);
    local_30 = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&local_30,(void *)0x0);
    if (pGVar6 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((uint)pGVar6->max_length <= uVar3) break;
    lVar7 = (longlong)(int)uVar3;
    pGVar6->m_Items[lVar7].fields.Value = local_58;
    pGVar6->m_Items[lVar7].fields.Text = pSStack_50;
    pGVar2 = &pGVar6->m_Items[lVar7].fields;
    pGVar2->TextKey = pSStack_48;
    *(undefined8 *)&pGVar2->Enabled = uStack_40;
    pGVar2 = &pGVar6->m_Items[lVar7].fields;
    pGVar2->Tooltip = pSStack_38;
    pGVar2->TooltipKey = local_30;
    Il2CppCodeGenWriteBarrier((void **)(pGVar6->m_Items + (int)uVar3),(void *)0x0);
    local_res8[0] = local_res8[0] + 1;
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$TextAt
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__TextAt (System_String_array* values, int32_t index, System_String_o* fallback, const MethodInfo* method);
// 0x18230c450

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__TextAt
          (System_String_array *values,int32_t index,System_String_o *fallback,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  
  if (((values == (System_String_array *)0x0) || (index < 0)) ||
     (uVar1 = (uint)values->max_length, (int)uVar1 <= index)) {
    return fallback;
  }
  if ((uint)index < uVar1) {
    bVar2 = System_String__IsNullOrEmpty(values->m_Items[index],(MethodInfo *)0x0);
    if (bVar2) {
      return fallback;
    }
    if ((uint)index < (uint)values->max_length) {
      return values->m_Items[index];
    }
  }
  ThrowIndexOutOfRangeException();
}


