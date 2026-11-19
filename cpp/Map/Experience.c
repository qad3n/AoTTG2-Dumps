// Type: Map.Experience
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Map/Experience.cs
// Prior real C# source: none
// --------------------------------

// Map.Experience$$.ctor
// il2cpp: void Map_Experience___ctor (Map_Experience_o* __this, System_String_o* category, System_String_o* subCategory, System_String_o* name, System_String_o* preview, bool hasScoring, System_String_o* templateName, const MethodInfo* method);
// 0x5979840

void Map_Experience___ctor
               (Map_Experience_o *__this,System_String_o *category,System_String_o *subCategory,
               System_String_o *name,System_String_o *preview,bool hasScoring,System_String_o *templateName,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Category = category;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Category);
  (__this->fields).SubCategory = subCategory;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SubCategory);
  (__this->fields).Name = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Name);
  if (templateName == (System_String_o *)0x0) {
    templateName = name;
  }
  (__this->fields).TemplateName = templateName;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TemplateName);
  (__this->fields).Preview = preview;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Preview);
  (__this->fields).HasScoring = hasScoring;
  return;
}


