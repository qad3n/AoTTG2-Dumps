// Type: Gisketch.Aottg2UI.Game.AottgCharacterFontUi
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterFontUi.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterFontUi$$Options
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* Gisketch_Aottg2UI_Game_AottgCharacterFontUi__Options (bool hasAccess, const MethodInfo* method);
// 0x58d9640
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58d967e: jmp 0x58d9874

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *
Gisketch_Aottg2UI_Game_AottgCharacterFontUi__Options(bool hasAccess,MethodInfo *method)

{
  uint32_t uVar1;
  uint uVar2;
  System_String_array *pSVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar5;
  ulong uVar6;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *__this;
  System_String_o *pSVar7;
  long lVar8;
  ulong uVar9;
  
  if (Il2CppMethodInitialized_075454c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.SupporterOnlyFeature");
    Il2CppMethodInitialized_075454c5 = '\x01';
    uVar1 = (TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    pSVar3 = TypeInfo_PatreonEffects_NameFontCatalog->static_fields->Ids;
  }
  else {
    pSVar3 = *(System_String_array **)
              ((long)((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog)->static_fields + 8);
  }
  if (pSVar3 == (System_String_array *)0x0) {
label_058d9874:
    ThrowNullReferenceException();
  }
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array,
                      (uint32_t)pSVar3->max_length);
  if (0 < (int)pSVar3->max_length) {
    uVar6 = pSVar3->max_length & 0xffffffff;
    lVar8 = 0;
    uVar9 = 0;
    do {
      if (uVar6 <= uVar9) {
label_058d986f:
        ThrowIndexOutOfRangeException();
      }
      bVar4 = System_String__op_Equality(pSVar3->m_Items[uVar9],"Normal",(MethodInfo *)0x0);
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
      Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(__this,(MethodInfo *)0x0);
      if ((uint)pSVar3->max_length <= uVar9) goto label_058d986f;
      if (__this == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto label_058d9874;
      (__this->fields).value = pSVar3->m_Items[uVar9];
      Il2CppCodeGenWriteBarrier(&(__this->fields).value);
      if ((uint)pSVar3->max_length <= uVar9) goto label_058d986f;
      pSVar7 = pSVar3->m_Items[uVar9];
      if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
      }
      pSVar7 = PatreonEffects_NameFontCatalog__Label(pSVar7,(MethodInfo *)0x0);
      (__this->fields).text = pSVar7;
      Il2CppCodeGenWriteBarrier(&(__this->fields).text);
      (__this->fields).enabled = bVar4 || hasAccess;
      pSVar7 = (System_String_o *)0x0;
      if (!bVar4 && !hasAccess) {
        pSVar7 = "MainMenu.Profile.SupporterOnlyFeature";
      }
      (__this->fields).tooltipKey = pSVar7;
      Il2CppCodeGenWriteBarrier(&(__this->fields).tooltipKey);
      if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) goto label_058d9874;
      if ((uint)pGVar5->max_length <= uVar9) goto label_058d986f;
      pGVar5->m_Items[uVar9] = __this;
      Il2CppCodeGenWriteBarrier((void **)((long)pGVar5->m_Items + lVar8));
      uVar9 = uVar9 + 1;
      uVar2 = (uint)pSVar3->max_length;
      uVar6 = (ulong)uVar2;
      lVar8 = lVar8 + 8;
    } while ((long)uVar9 < (long)(int)uVar2);
  }
  return pGVar5;
}


