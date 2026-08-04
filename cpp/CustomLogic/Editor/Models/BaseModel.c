// Type: CustomLogic.Editor.Models.BaseModel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic.Editor.Models/BaseModel.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.Editor.Models.BaseModel$$get_ObsoleteMessage
// il2cpp: System_String_o* CustomLogic_Editor_Models_BaseModel__get_ObsoleteMessage (CustomLogic_Editor_Models_BaseModel_o* __this, const MethodInfo* method);
// 0x4286b10

System_String_o *
CustomLogic_Editor_Models_BaseModel__get_ObsoleteMessage
          (CustomLogic_Editor_Models_BaseModel_o *__this,MethodInfo *method)

{
  return (__this->fields)._ObsoleteMessage_k__BackingField;
}


// CustomLogic.Editor.Models.BaseModel$$set_ObsoleteMessage
// il2cpp: void CustomLogic_Editor_Models_BaseModel__set_ObsoleteMessage (CustomLogic_Editor_Models_BaseModel_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4286b20

void CustomLogic_Editor_Models_BaseModel__set_ObsoleteMessage
               (CustomLogic_Editor_Models_BaseModel_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._ObsoleteMessage_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


// CustomLogic.Editor.Models.BaseModel$$get_IsObsolete
// il2cpp: bool CustomLogic_Editor_Models_BaseModel__get_IsObsolete (CustomLogic_Editor_Models_BaseModel_o* __this, const MethodInfo* method);
// 0x4286b30

bool_conflict
CustomLogic_Editor_Models_BaseModel__get_IsObsolete
          (CustomLogic_Editor_Models_BaseModel_o *__this,MethodInfo *method)

{
  uint uVar1;
  
  uVar1 = System_String__IsNullOrEmpty((__this->fields)._ObsoleteMessage_k__BackingField,(MethodInfo *)0x0);
  return uVar1 ^ 1;
}


// CustomLogic.Editor.Models.BaseModel$$.ctor
// il2cpp: void CustomLogic_Editor_Models_BaseModel___ctor (CustomLogic_Editor_Models_BaseModel_o* __this, const MethodInfo* method);
// 0x4286b40

void CustomLogic_Editor_Models_BaseModel___ctor
               (CustomLogic_Editor_Models_BaseModel_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


