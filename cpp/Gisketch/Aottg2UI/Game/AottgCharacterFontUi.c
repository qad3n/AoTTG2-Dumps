// Type: Gisketch.Aottg2UI.Game.AottgCharacterFontUi
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterFontUi.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterFontUi$$Options
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* Gisketch_Aottg2UI_Game_AottgCharacterFontUi__Options (bool hasAccess, const MethodInfo* method);
// 0x41cbd60

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *
Gisketch_Aottg2UI_Game_AottgCharacterFontUi__Options(bool_conflict hasAccess,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  ulong uVar4;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar5;
  System_String_o *pSVar6;
  long lVar7;
  byte bVar8;
  ulong uVar9;
  byte local_4c;
  
  if (DAT_05704e1d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchChoiceOptionDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchChoiceOptionDefinition);
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&"Normal");
    il2cpp_init_method_metadata(&"This feature is only available for supporters.");
    il2cpp_init_method_metadata(&"MainMenu.Profile.SupporterOnlyFeature");
    DAT_05704e1d = '\x01';
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) goto LAB_041cbe09;
LAB_041cbd8e:
    lVar1 = *(long *)(*(long *)(TypeInfo_NameFontCatalog + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) != 0) goto LAB_041cbd8e;
LAB_041cbe09:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_NameFontCatalog + 0xb8) + 8);
  }
  if (lVar1 != 0) {
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
             il2cpp_glue_02274930(TypeInfo_GisketchChoiceOptionDefinition,*(undefined4 *)(lVar1 + 0x18));
    if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
      local_4c = (byte)hasAccess;
      if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
        bVar2 = System_String__op_Equality
                          (*(System_String_o **)(lVar1 + 0x20),"Normal",(MethodInfo *)0x0);
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)
                 il2cpp_runtime_glue(TypeInfo_GisketchChoiceOptionDefinition);
        Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar5,(MethodInfo *)0x0);
        if (*(int *)(lVar1 + 0x18) != 0) {
          if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
          goto LAB_041cc008;
          (pGVar5->fields).value = *(System_String_o **)(lVar1 + 0x20);
          il2cpp_runtime_glue(&pGVar5->fields);
          if (*(int *)(lVar1 + 0x18) != 0) {
            pSVar6 = *(System_String_o **)(lVar1 + 0x20);
            if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar6 = PatreonEffects_NameFontCatalog__Label(pSVar6,(MethodInfo *)0x0);
            (pGVar5->fields).text = pSVar6;
            il2cpp_runtime_glue(&(pGVar5->fields).text,pSVar6);
            local_4c = (byte)bVar2 | local_4c;
            *(byte *)&(pGVar5->fields).enabled = local_4c;
            pSVar6 = (System_String_o *)0x0;
            if (local_4c == 0) {
              pSVar6 = "This feature is only available for supporters.";
            }
            (pGVar5->fields).tooltip = pSVar6;
            il2cpp_runtime_glue(&(pGVar5->fields).tooltip);
            pSVar6 = (System_String_o *)0x0;
            if (local_4c == 0) {
              pSVar6 = "MainMenu.Profile.SupporterOnlyFeature";
            }
            (pGVar5->fields).tooltipKey = pSVar6;
            il2cpp_runtime_glue(&(pGVar5->fields).tooltipKey,pSVar6);
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
LAB_041cc029:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar4 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
      lVar7 = 0;
      uVar9 = 0;
      do {
        if (uVar4 <= uVar9) goto LAB_041cc029;
        bVar2 = System_String__op_Equality
                          (*(System_String_o **)(lVar1 + 0x20 + uVar9 * 8),"Normal",
                           (MethodInfo *)0x0);
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)
                 il2cpp_runtime_glue(TypeInfo_GisketchChoiceOptionDefinition);
        Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar5,(MethodInfo *)0x0);
        if (*(uint *)(lVar1 + 0x18) <= uVar9) goto LAB_041cc029;
        if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
        goto LAB_041cc008;
        (pGVar5->fields).value = *(System_String_o **)(lVar1 + 0x20 + uVar9 * 8);
        il2cpp_runtime_glue(&pGVar5->fields);
        if (*(uint *)(lVar1 + 0x18) <= uVar9) goto LAB_041cc029;
        pSVar6 = *(System_String_o **)(lVar1 + 0x20 + uVar9 * 8);
        if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar6 = PatreonEffects_NameFontCatalog__Label(pSVar6,(MethodInfo *)0x0);
        (pGVar5->fields).text = pSVar6;
        il2cpp_runtime_glue(&(pGVar5->fields).text,pSVar6);
        bVar8 = (byte)bVar2 | local_4c;
        *(byte *)&(pGVar5->fields).enabled = bVar8;
        pSVar6 = (System_String_o *)0x0;
        if (bVar8 == 0) {
          pSVar6 = "This feature is only available for supporters.";
        }
        (pGVar5->fields).tooltip = pSVar6;
        il2cpp_runtime_glue(&(pGVar5->fields).tooltip);
        pSVar6 = (System_String_o *)0x0;
        if (bVar8 == 0) {
          pSVar6 = "MainMenu.Profile.SupporterOnlyFeature";
        }
        (pGVar5->fields).tooltipKey = pSVar6;
        il2cpp_runtime_glue(&(pGVar5->fields).tooltipKey);
        if ((uint)pGVar3->max_length <= uVar9) goto LAB_041cc029;
        pGVar3->m_Items[uVar9] = pGVar5;
        il2cpp_runtime_glue((long)pGVar3->m_Items + lVar7,pGVar5);
        uVar9 = uVar9 + 1;
        uVar4 = (ulong)*(uint *)(lVar1 + 0x18);
        lVar7 = lVar7 + 8;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar1 + 0x18));
    }
    return pGVar3;
  }
LAB_041cc008:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


