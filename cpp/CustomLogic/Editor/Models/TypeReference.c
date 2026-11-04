// Type: CustomLogic.Editor.Models.TypeReference
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic.Editor.Models/TypeReference.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.Editor.Models.TypeReference$$.ctor
// il2cpp: void CustomLogic_Editor_Models_TypeReference___ctor (CustomLogic_Editor_Models_TypeReference_o* __this, System_String_o* name, const MethodInfo* method);
// 0x182101b30

void CustomLogic_Editor_Models_TypeReference___ctor
               (CustomLogic_Editor_Models_TypeReference_o *__this,System_String_o *name,MethodInfo *method)

{
  CustomLogic_Editor_Models_TypeReference_array *value;
  MethodInfo *pMVar1;
  Il2CppClass *pIVar2;
  
  if (Il2CppMethodInitialized_184346a6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_TypeReference);
    Il2CppMethodInitialized_184346a6c = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Name = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Name,name);
  pMVar1 = MethodInfo_System_Array_Empty_TypeReference;
  if ((MethodInfo_System_Array_Empty_TypeReference->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_TypeReference);
  }
  pIVar2 = (pMVar1->field7_0x38).rgctx_data[2].klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  if ((pIVar2->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(pIVar2);
  }
  pIVar2 = (pMVar1->field7_0x38).rgctx_data[2].klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  value = *(CustomLogic_Editor_Models_TypeReference_array **)pIVar2->static_fields;
  (__this->fields).Arguments = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Arguments,value);
  return;
}


// CustomLogic.Editor.Models.TypeReference$$.ctor
// il2cpp: void CustomLogic_Editor_Models_TypeReference___ctor (CustomLogic_Editor_Models_TypeReference_o* __this, System_String_o* name, CustomLogic_Editor_Models_TypeReference_array* arguments, const MethodInfo* method);
// 0x180c8dad0

void
CustomLogic_Editor_Models_TypeReference___ctor(CustomLogic_Editor_Models_TypeReference_o* __this, System_String_o* name, CustomLogic_Editor_Models_TypeReference_array* arguments, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Name = _country;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Name,_country);
  (__this->fields).Arguments = _language;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Arguments,_language);
  return;
}


