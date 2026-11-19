// Type: CustomLogic.Editor.Models.TypeReference
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic.Editor.Models/TypeReference.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.Editor.Models.TypeReference$$.ctor
// il2cpp: void CustomLogic_Editor_Models_TypeReference___ctor (CustomLogic_Editor_Models_TypeReference_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5b97e70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b97f53: jmp 0x5b97ef2

void CustomLogic_Editor_Models_TypeReference___ctor
               (CustomLogic_Editor_Models_TypeReference_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  MethodInfo *pMVar3;
  Il2CppClass *pIVar4;
  
  if (Il2CppMethodInitialized_07547438 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_TypeReference);
    Il2CppMethodInitialized_07547438 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Name = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Name);
  pMVar3 = MethodInfo_System_Array_Empty_TypeReference;
  if ((MethodInfo_System_Array_Empty_TypeReference->field7_0x38).methodMetadataHandle == (void *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_TypeReference);
    pIVar4 = *(Il2CppClass **)((long)(pMVar3->field7_0x38).methodMetadataHandle + 0x10);
    bVar1 = (pIVar4->_2).bitflags1;
  }
  else {
    pIVar4 = *(Il2CppClass **)
              ((long)(MethodInfo_System_Array_Empty_TypeReference->field7_0x38).methodMetadataHandle + 0x10);
    bVar1 = (pIVar4->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
    uVar2 = (pIVar4->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (pIVar4->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar4);
    pIVar4 = (pMVar3->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar4->_2).bitflags1;
  }
  else {
    pIVar4 = (pMVar3->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar4->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
  }
  (__this->fields).Arguments = *(CustomLogic_Editor_Models_TypeReference_array **)pIVar4->static_fields;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Arguments);
  return;
}


// CustomLogic.Editor.Models.TypeReference$$.ctor
// il2cpp: void CustomLogic_Editor_Models_TypeReference___ctor (CustomLogic_Editor_Models_TypeReference_o* __this, System_String_o* name, CustomLogic_Editor_Models_TypeReference_array* arguments, const MethodInfo* method);
// 0x5b97f60

void CustomLogic_Editor_Models_TypeReference___ctor_5a97f60
               (CustomLogic_Editor_Models_TypeReference_o *__this,System_String_o *name,
               CustomLogic_Editor_Models_TypeReference_array *arguments,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Name = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Name);
  (__this->fields).Arguments = arguments;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Arguments);
  return;
}


