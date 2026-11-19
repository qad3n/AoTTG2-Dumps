// Type: Gisketch.Aottg2UI.Code.AottgSearchableExtensions
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgSearchableExtensions.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgSearchableExtensions$$Searchable
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, System_String_o* title, System_String_o* keywords, System_String_o* icon, System_String_o* kind, System_String_o* sectionId, System_String_o* sectionTitle, bool autoAddKeywords, const MethodInfo* method);
// 0x536af30

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,System_String_o *title,
          System_String_o *keywords,System_String_o *icon,System_String_o *kind,System_String_o *sectionId,
          System_String_o *sectionTitle,bool autoAddKeywords,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffe8;
  
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Search
                       (title,keywords,false,icon,kind,sectionId,sectionTitle,autoAddKeywords,
                        in_stack_ffffffffffffffe8);
    (node->fields).search = pGVar1;
    Il2CppCodeGenWriteBarrier(&(node->fields).search);
  }
  return node;
}


