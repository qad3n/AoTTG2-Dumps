// Type: Gisketch.Aottg2UI.Game.AottgCharacterFontUi
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterFontUi.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterFontUi$$Options
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* Gisketch_Aottg2UI_Game_AottgCharacterFontUi__Options (bool hasAccess, const MethodInfo* method);
// 0x181df1ea0

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *
Gisketch_Aottg2UI_Game_AottgCharacterFontUi__Options(bool hasAccess,MethodInfo *method)

{
  System_String_o **targetAddress;
  System_String_array *pSVar1;
  bool bVar2;
  uint uVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *__this;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_184344b5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"This feature is only available for supporters.");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.SupporterOnlyFeature");
    Il2CppMethodInitialized_184344b5a = '\x01';
  }
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  pSVar1 = TypeInfo_PatreonEffects_NameFontCatalog->static_fields->Ids;
  if (pSVar1 != (System_String_array *)0x0) {
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array,
                        (uint32_t)pSVar1->max_length);
    pSVar5 = (System_String_o *)0x0;
    do {
      uVar3 = (uint)pSVar5;
      if ((int)pSVar1->max_length <= (int)uVar3) {
        return pGVar4;
      }
      if ((uint)pSVar1->max_length <= uVar3) {
label_181df20c4:
        ThrowIndexOutOfRangeException();
      }
      bVar2 = System_String__op_Equality(pSVar1->m_Items[(int)uVar3],"Normal",(MethodInfo *)0x0);
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
      Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(__this,(MethodInfo *)0x0);
      if ((uint)pSVar1->max_length <= uVar3) goto label_181df20c4;
      if (__this == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) break;
      pSVar5 = pSVar1->m_Items[(int)uVar3];
      (__this->fields).value = pSVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields).value,pSVar5);
      if ((uint)pSVar1->max_length <= uVar3) goto label_181df20c4;
      pSVar5 = pSVar1->m_Items[(int)uVar3];
      if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
      }
      pSVar5 = PatreonEffects_NameFontCatalog__Label(pSVar5,(MethodInfo *)0x0);
      (__this->fields).text = pSVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields).text,pSVar5);
      targetAddress = &(__this->fields).tooltip;
      (__this->fields).enabled = bVar2 || hasAccess;
      pSVar5 = "This feature is only available for supporters.";
      if (bVar2 || hasAccess) {
        (__this->fields).tooltip = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(targetAddress,(void *)0x0);
        pSVar5 = (System_String_o *)0x0;
      }
      else {
        (__this->fields).tooltip = "This feature is only available for supporters.";
        Il2CppCodeGenWriteBarrier(targetAddress,pSVar5);
        pSVar5 = "MainMenu.Profile.SupporterOnlyFeature";
      }
      (__this->fields).tooltipKey = pSVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields).tooltipKey,pSVar5);
      if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) break;
      if ((uint)pGVar4->max_length <= uVar3) goto label_181df20c4;
      pGVar4->m_Items[(int)uVar3] = __this;
      Il2CppCodeGenWriteBarrier(pGVar4->m_Items + (int)uVar3,__this);
      pSVar5 = (System_String_o *)(ulonglong)(uVar3 + 1);
    } while( true );
  }
  ThrowNullReferenceException();
}


