// Type: Gisketch.Aottg2UI.Code.AottgSearchableExtensions
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgSearchableExtensions.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgSearchableExtensions$$Searchable
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, System_String_o* title, System_String_o* keywords, System_String_o* icon, System_String_o* kind, System_String_o* sectionId, System_String_o* sectionTitle, bool autoAddKeywords, const MethodInfo* method);
// 0x1818c6b50

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,System_String_o *title,
          System_String_o *keywords,System_String_o *icon,System_String_o *kind,System_String_o *sectionId,
          System_String_o *sectionTitle,bool autoAddKeywords,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *value;
  
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    value = Gisketch_Aottg2UI_Code_AottgUi__Search
                      (title,keywords,false,icon,kind,sectionId,sectionTitle,autoAddKeywords,(MethodInfo *)0x0
                      );
    (node->fields).search = value;
    Il2CppCodeGenWriteBarrier(&(node->fields).search,value);
  }
  return node;
}


