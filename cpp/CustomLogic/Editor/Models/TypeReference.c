// Type: CustomLogic.Editor.Models.TypeReference
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic.Editor.Models/TypeReference.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.Editor.Models.TypeReference$$.ctor
// il2cpp: void CustomLogic_Editor_Models_TypeReference___ctor (CustomLogic_Editor_Models_TypeReference_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3f7ab40

/* WARNING: Type propagation algorithm not settling */

void CustomLogic_Editor_Models_TypeReference___ctor
               (CustomLogic_Editor_Models_TypeReference_o *__this,System_String_o *name,
               MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (DAT_05703f43 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypeReference___Empty_TypeReference);
    DAT_05703f43 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Name = name;
  il2cpp_runtime_glue(&__this->fields,name);
  lVar3 = MethodInfo_TypeReference___Empty_TypeReference;
  if (*(long *)(MethodInfo_TypeReference___Empty_TypeReference + 0x38) == 0) {
    il2cpp_glue_022c2910(MethodInfo_TypeReference___Empty_TypeReference);
    lVar4 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  else {
    lVar4 = *(long *)(*(long *)(MethodInfo_TypeReference___Empty_TypeReference + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = il2cpp_glue_022c28b0();
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  else {
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar3 = il2cpp_glue_022c28b0(lVar3);
  }
  (__this->fields).Arguments =
       (CustomLogic_Editor_Models_TypeReference_array *)**(undefined8 **)(lVar3 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields).Arguments);
  return;
}


// CustomLogic.Editor.Models.TypeReference$$.ctor
// il2cpp: void CustomLogic_Editor_Models_TypeReference___ctor (CustomLogic_Editor_Models_TypeReference_o* __this, System_String_o* name, CustomLogic_Editor_Models_TypeReference_array* arguments, const MethodInfo* method);
// 0x3f7ac30

void CustomLogic_Editor_Models_TypeReference___ctor
               (CustomLogic_Editor_Models_TypeReference_o *__this,System_String_o *name,
               CustomLogic_Editor_Models_TypeReference_array *arguments,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Name = name;
  il2cpp_runtime_glue(&__this->fields,name);
  (__this->fields).Arguments = arguments;
  il2cpp_runtime_glue(&(__this->fields).Arguments,arguments);
  return;
}


