// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingOption.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o __this, System_String_o* value, System_String_o* text, bool enabled, System_String_o* tooltip, System_String_o* textKey, System_String_o* tooltipKey, const MethodInfo* method);
// 0x5dc6760

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o *__this,System_String_o *value,
               System_String_o *text,bool enabled,System_String_o *tooltip,System_String_o *textKey,
               System_String_o *tooltipKey,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075481c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    Il2CppMethodInitialized_075481c8 = '\x01';
  }
  (__this->fields).Value = value;
  Il2CppCodeGenWriteBarrier((void **)__this);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
  }
  if (text != (System_String_o *)0x0) {
    value = text;
  }
  pSVar1 = Gisketch_Aottg2UI_Styling_GisketchArabicText__ToVisual(value,false,(MethodInfo *)0x0);
  (__this->fields).Text = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Text);
  (__this->fields).TextKey = textKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TextKey);
  (__this->fields).Enabled = enabled;
  (__this->fields).Tooltip = tooltip;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Tooltip);
  (__this->fields).TooltipKey = tooltipKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TooltipKey);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$ToChoice
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o __this, const MethodInfo* method);
// 0x5dc6830

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_075481c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
    Il2CppMethodInitialized_075481c9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).value = (__this->fields).Value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
  (__this_00->fields).text = (__this->fields).Text;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).text);
  (__this_00->fields).textKey = (__this->fields).TextKey;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).textKey);
  (__this_00->fields).enabled = (__this->fields).Enabled;
  (__this_00->fields).tooltip = (__this->fields).Tooltip;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).tooltip);
  (__this_00->fields).tooltipKey = (__this->fields).TooltipKey;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).tooltipKey);
  return __this_00;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$StringOptions
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__StringOptions (System_String_array* values, const MethodInfo* method);
// 0x5dc68f0

Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__StringOptions
          (System_String_array *values,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *pGVar1;
  MethodInfo *in_RDX;
  
  pGVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__LocalizedStringOptions
                     (values,(System_String_array *)0x0,in_RDX);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$LocalizedStringOptions
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__LocalizedStringOptions (System_String_array* values, System_String_array* localizedText, const MethodInfo* method);
// 0x5dc6900
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc6a48: jmp 0x5dc6af5
// asm:   0x5dc6a69: nop dword ptr [rax]

Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__LocalizedStringOptions
          (System_String_array *values,System_String_array *localizedText,MethodInfo *method)

{
  uint uVar1;
  System_String_o *pSVar2;
  bool bVar3;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *pGVar4;
  ulong uVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o *targetAddress;
  ulong uVar7;
  MethodInfo *in_stack_ffffffffffffff90;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o local_68;
  
  if (Il2CppMethodInitialized_075481ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array);
    Il2CppMethodInitialized_075481ca = '\x01';
  }
  if (values == (System_String_array *)0x0) {
    pGVar4 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array,0);
    return pGVar4;
  }
  pGVar4 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array,
                      (uint32_t)values->max_length);
  if (0 < (int)values->max_length) {
    if (pGVar4 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)0x0) {
      pSVar2 = values->m_Items[0];
      pSVar6 = pSVar2;
      if (((localizedText != (System_String_array *)0x0) && (0 < (int)localizedText->max_length)) &&
         (bVar3 = System_String__IsNullOrEmpty(localizedText->m_Items[0],(MethodInfo *)0x0), !bVar3)) {
        if ((int)localizedText->max_length == 0) {
label_05dc6b37:
          ThrowIndexOutOfRangeException();
        }
        pSVar6 = localizedText->m_Items[0];
      }
      local_68.fields.Tooltip = (System_String_o *)0x0;
      local_68.fields.TooltipKey = (System_String_o *)0x0;
      local_68.fields.TextKey = (System_String_o *)0x0;
      local_68.fields.Enabled = false;
      local_68.fields._25_7_ = 0;
      local_68.fields.Value = (System_String_o *)0x0;
      local_68.fields.Text = (System_String_o *)0x0;
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption___ctor
                (&local_68,pSVar2,pSVar6,true,(System_String_o *)0x0,(System_String_o *)0x0,
                 (System_String_o *)0x0,in_stack_ffffffffffffff90);
      ThrowNullReferenceException();
    }
    uVar5 = values->max_length & 0xffffffff;
    targetAddress = pGVar4->m_Items;
    if (localizedText == (System_String_array *)0x0) {
      uVar7 = 0;
      do {
        if (uVar5 <= uVar7) goto label_05dc6b37;
        local_68.fields.Tooltip = (System_String_o *)0x0;
        local_68.fields.TooltipKey = (System_String_o *)0x0;
        local_68.fields.TextKey = (System_String_o *)0x0;
        local_68.fields.Enabled = false;
        local_68.fields._25_7_ = 0;
        local_68.fields.Value = (System_String_o *)0x0;
        local_68.fields.Text = (System_String_o *)0x0;
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption___ctor
                  (&local_68,values->m_Items[uVar7],values->m_Items[uVar7],true,(System_String_o *)0x0,
                   (System_String_o *)0x0,(System_String_o *)0x0,in_stack_ffffffffffffff90);
        if ((uint)pGVar4->max_length <= uVar7) goto label_05dc6b37;
        (targetAddress->fields).Tooltip = local_68.fields.Tooltip;
        (targetAddress->fields).TooltipKey = local_68.fields.TooltipKey;
        (targetAddress->fields).TextKey = local_68.fields.TextKey;
        (targetAddress->fields).Enabled = local_68.fields.Enabled;
        *(undefined7 *)&(targetAddress->fields).field_0x19 = local_68.fields._25_7_;
        (targetAddress->fields).Value = local_68.fields.Value;
        (targetAddress->fields).Text = local_68.fields.Text;
        Il2CppCodeGenWriteBarrier((void **)targetAddress);
        uVar7 = uVar7 + 1;
        uVar1 = (uint)values->max_length;
        uVar5 = (ulong)uVar1;
        targetAddress = targetAddress + 1;
      } while ((long)uVar7 < (long)(int)uVar1);
    }
    else {
      uVar7 = 0;
      do {
        if (uVar5 <= uVar7) goto label_05dc6b37;
        pSVar2 = values->m_Items[uVar7];
        uVar1 = (uint)localizedText->max_length;
        pSVar6 = pSVar2;
        if ((long)uVar7 < (long)(int)uVar1) {
          if (uVar1 <= uVar7) goto label_05dc6b37;
          bVar3 = System_String__IsNullOrEmpty(localizedText->m_Items[uVar7],(MethodInfo *)0x0);
          if (!bVar3) {
            if ((uint)localizedText->max_length <= uVar7) goto label_05dc6b37;
            pSVar6 = localizedText->m_Items[uVar7];
          }
        }
        local_68.fields.Tooltip = (System_String_o *)0x0;
        local_68.fields.TooltipKey = (System_String_o *)0x0;
        local_68.fields.TextKey = (System_String_o *)0x0;
        local_68.fields.Enabled = false;
        local_68.fields._25_7_ = 0;
        local_68.fields.Value = (System_String_o *)0x0;
        local_68.fields.Text = (System_String_o *)0x0;
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption___ctor
                  (&local_68,pSVar2,pSVar6,true,(System_String_o *)0x0,(System_String_o *)0x0,
                   (System_String_o *)0x0,in_stack_ffffffffffffff90);
        if ((uint)pGVar4->max_length <= uVar7) goto label_05dc6b37;
        (targetAddress->fields).Tooltip = local_68.fields.Tooltip;
        (targetAddress->fields).TooltipKey = local_68.fields.TooltipKey;
        (targetAddress->fields).TextKey = local_68.fields.TextKey;
        (targetAddress->fields).Enabled = local_68.fields.Enabled;
        *(undefined7 *)&(targetAddress->fields).field_0x19 = local_68.fields._25_7_;
        (targetAddress->fields).Value = local_68.fields.Value;
        (targetAddress->fields).Text = local_68.fields.Text;
        Il2CppCodeGenWriteBarrier((void **)targetAddress);
        uVar7 = uVar7 + 1;
        uVar1 = (uint)values->max_length;
        uVar5 = (ulong)uVar1;
        targetAddress = targetAddress + 1;
      } while ((long)uVar7 < (long)(int)uVar1);
    }
  }
  return pGVar4;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$IndexedOptions
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__IndexedOptions (System_String_array* labels, const MethodInfo* method);
// 0x5dc6bd0

Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__IndexedOptions
          (System_String_array *labels,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_Fields *pGVar1;
  uint uVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *pGVar3;
  System_String_o *pSVar4;
  long lVar5;
  MethodInfo *in_stack_ffffffffffffff80;
  uint local_6c;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o local_68;
  
  if (Il2CppMethodInitialized_075481cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array);
    Il2CppMethodInitialized_075481cb = '\x01';
  }
  if (labels == (System_String_array *)0x0) {
    pGVar3 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array,0);
    return pGVar3;
  }
  pGVar3 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array,
                      (uint32_t)labels->max_length);
  local_6c = 0;
  if (0 < (int)labels->max_length) {
    if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)0x0) {
      pSVar4 = System_Int32__ToString((int32_t *)&local_6c,(MethodInfo *)0x0);
      if (local_6c < (uint)labels->max_length) {
        local_68.fields.Tooltip = (System_String_o *)0x0;
        local_68.fields.TooltipKey = (System_String_o *)0x0;
        local_68.fields.TextKey = (System_String_o *)0x0;
        local_68.fields.Enabled = false;
        local_68.fields._25_7_ = 0;
        local_68.fields.Value = (System_String_o *)0x0;
        local_68.fields.Text = (System_String_o *)0x0;
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption___ctor
                  (&local_68,pSVar4,labels->m_Items[(int)local_6c],true,(System_String_o *)0x0,
                   (System_String_o *)0x0,(System_String_o *)0x0,in_stack_ffffffffffffff80);
        ThrowNullReferenceException();
      }
label_05dc6d68:
      ThrowIndexOutOfRangeException();
    }
    do {
      uVar2 = local_6c;
      pSVar4 = System_Int32__ToString((int32_t *)&local_6c,(MethodInfo *)0x0);
      if ((uint)labels->max_length <= local_6c) goto label_05dc6d68;
      local_68.fields.Tooltip = (System_String_o *)0x0;
      local_68.fields.TooltipKey = (System_String_o *)0x0;
      local_68.fields.TextKey = (System_String_o *)0x0;
      local_68.fields.Enabled = false;
      local_68.fields._25_7_ = 0;
      local_68.fields.Value = (System_String_o *)0x0;
      local_68.fields.Text = (System_String_o *)0x0;
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption___ctor
                (&local_68,pSVar4,labels->m_Items[(int)local_6c],true,(System_String_o *)0x0,
                 (System_String_o *)0x0,(System_String_o *)0x0,in_stack_ffffffffffffff80);
      if ((uint)pGVar3->max_length <= uVar2) goto label_05dc6d68;
      lVar5 = (long)(int)uVar2;
      pGVar1 = &pGVar3->m_Items[lVar5].fields;
      pGVar1->Tooltip = local_68.fields.Tooltip;
      pGVar1->TooltipKey = local_68.fields.TooltipKey;
      pGVar1 = &pGVar3->m_Items[lVar5].fields;
      pGVar1->TextKey = local_68.fields.TextKey;
      pGVar1->Enabled = local_68.fields.Enabled;
      *(undefined7 *)&pGVar1->field_0x19 = local_68.fields._25_7_;
      pGVar3->m_Items[lVar5].fields.Value = local_68.fields.Value;
      pGVar3->m_Items[lVar5].fields.Text = local_68.fields.Text;
      Il2CppCodeGenWriteBarrier((void **)(pGVar3->m_Items + lVar5));
      local_6c = local_6c + 1;
    } while ((int)local_6c < (int)labels->max_length);
  }
  return pGVar3;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingOption$$TextAt
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__TextAt (System_String_array* values, int32_t index, System_String_o* fallback, const MethodInfo* method);
// 0x5dc6b80

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__TextAt
          (System_String_array *values,int32_t index,System_String_o *fallback,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  
  if (((values != (System_String_array *)0x0) && (-1 < index)) &&
     (uVar1 = (uint)values->max_length, index < (int)uVar1)) {
    if (uVar1 <= (uint)index) {
label_05dc6bca:
      ThrowIndexOutOfRangeException();
    }
    bVar2 = System_String__IsNullOrEmpty(values->m_Items[(uint)index],(MethodInfo *)0x0);
    if (!bVar2) {
      if ((uint)values->max_length <= (uint)index) goto label_05dc6bca;
      fallback = values->m_Items[(uint)index];
    }
  }
  return fallback;
}


