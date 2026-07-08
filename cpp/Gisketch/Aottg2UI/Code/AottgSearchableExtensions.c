// Type: Gisketch.Aottg2UI.Code.AottgSearchableExtensions
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgSearchableExtensions.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgSearchableExtensions$$Searchable
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, System_String_o* title, System_String_o* keywords, System_String_o* icon, System_String_o* kind, System_String_o* sectionId, System_String_o* sectionTitle, bool autoAddKeywords, const MethodInfo* method);
// 0x3af8ce0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,System_String_o *title,
          System_String_o *keywords,System_String_o *icon,System_String_o *kind,
          System_String_o *sectionId,System_String_o *sectionTitle,bool_conflict autoAddKeywords,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffe8;
  
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Search
                       (title,keywords,0,icon,kind,sectionId,sectionTitle,autoAddKeywords & 0xff,
                        in_stack_ffffffffffffffe8);
    (node->fields).popover = (System_String_o *)pGVar1;
    il2cpp_runtime_glue(&(node->fields).popover,pGVar1);
  }
  return node;
}


