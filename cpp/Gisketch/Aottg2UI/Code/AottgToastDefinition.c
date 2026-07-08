// Type: Gisketch.Aottg2UI.Code.AottgToastDefinition
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgToastDefinition.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgToastDefinition$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor (Gisketch_Aottg2UI_Code_AottgToastDefinition_o* __this, int32_t variant, System_String_o* icon, System_String_o* title, System_String_o* content, System_String_o* updateKey, const MethodInfo* method);
// 0x3af6540

void Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor
               (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *__this,int32_t variant,
               System_String_o *icon,System_String_o *title,System_String_o *content,
               System_String_o *updateKey,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Variant = variant;
  (__this->fields).Icon = icon;
  il2cpp_runtime_glue(&(__this->fields).Icon,icon);
  (__this->fields).Title = title;
  il2cpp_runtime_glue(&(__this->fields).Title,title);
  (__this->fields).Content = content;
  il2cpp_runtime_glue(&(__this->fields).Content,content);
  (__this->fields).UpdateKey = updateKey;
  il2cpp_runtime_glue(&(__this->fields).UpdateKey,updateKey);
  return;
}


