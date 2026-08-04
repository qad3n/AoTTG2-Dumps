// Type: CustomLogic.Editor.Models.TypeReference
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic.Editor.Models/TypeReference.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.Editor.Models.TypeReference$$.ctor
// il2cpp: void CustomLogic_Editor_Models_TypeReference___ctor (CustomLogic_Editor_Models_TypeReference_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4287020

void CustomLogic_Editor_Models_TypeReference___ctor
               (CustomLogic_Editor_Models_TypeReference_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (g_data_057adcb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypeReference_Empty_TypeReference);
    g_data_057adcb1 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Name = name;
  il2cpp_runtime_helper_022b4080(&__this->fields,name);
  lVar3 = MethodInfo_TypeReference_Empty_TypeReference;
  if (*(long *)(MethodInfo_TypeReference_Empty_TypeReference + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_TypeReference_Empty_TypeReference);
    lVar4 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  else {
    lVar4 = *(long *)(*(long *)(MethodInfo_TypeReference_Empty_TypeReference + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = il2cpp_runtime_helper_023009c0();
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  else {
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar3 = il2cpp_runtime_helper_023009c0(lVar3);
  }
  (__this->fields).Arguments =
       (CustomLogic_Editor_Models_TypeReference_array *)**(undefined8 **)(lVar3 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields).Arguments);
  return;
}


// CustomLogic.Editor.Models.TypeReference$$.ctor
// il2cpp: void CustomLogic_Editor_Models_TypeReference___ctor (CustomLogic_Editor_Models_TypeReference_o* __this, System_String_o* name, CustomLogic_Editor_Models_TypeReference_array* arguments, const MethodInfo* method);
// 0x4287110

void CustomLogic_Editor_Models_TypeReference___ctor_4187110
               (CustomLogic_Editor_Models_TypeReference_o *__this,System_String_o *name,
               CustomLogic_Editor_Models_TypeReference_array *arguments,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Name = name;
  il2cpp_runtime_helper_022b4080(&__this->fields,name);
  (__this->fields).Arguments = arguments;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Arguments,arguments);
  return;
}


