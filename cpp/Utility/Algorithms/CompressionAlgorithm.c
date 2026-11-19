// Type: Utility.Algorithms.CompressionAlgorithm
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Utility.Algorithms/CompressionAlgorithm.cs
// Prior real C# source: none
// --------------------------------

// Utility.Algorithms.CompressionAlgorithm$$CompressString
// il2cpp: System_Byte_array* Utility_Algorithms_CompressionAlgorithm__CompressString (Utility_Algorithms_CompressionAlgorithm_o* __this, System_String_o* str, int32_t level, const MethodInfo* method);
// 0x5de90e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de9207: jmp 0x5de9165

System_Byte_array *
Utility_Algorithms_CompressionAlgorithm__CompressString
          (Utility_Algorithms_CompressionAlgorithm_o *__this,System_String_o *str,int32_t level,
          MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  MethodInfo *pMVar3;
  bool bVar4;
  Il2CppClass *pIVar5;
  System_Text_Encoding_o *pSVar6;
  System_Byte_array *pSVar7;
  
  if (Il2CppMethodInitialized_07548319 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_byte);
    Il2CppMethodInitialized_07548319 = '\x01';
  }
  bVar4 = System_String__IsNullOrEmpty(str,(MethodInfo *)0x0);
  pMVar3 = MethodInfo_System_Array_Empty_byte;
  if (bVar4) {
    if ((MethodInfo_System_Array_Empty_byte->field7_0x38).methodMetadataHandle == (void *)0x0) {
      il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_byte);
      pIVar5 = *(Il2CppClass **)((long)(pMVar3->field7_0x38).methodMetadataHandle + 0x10);
      bVar1 = (pIVar5->_2).bitflags1;
    }
    else {
      pIVar5 = *(Il2CppClass **)
                ((long)(MethodInfo_System_Array_Empty_byte->field7_0x38).methodMetadataHandle + 0x10);
      bVar1 = (pIVar5->_2).bitflags1;
    }
    if ((bVar1 & 1) == 0) {
      pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
      uVar2 = (pIVar5->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar2 = (pIVar5->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init(pIVar5);
      pIVar5 = (pMVar3->field7_0x38).rgctx_data[2].klass;
      bVar1 = (pIVar5->_2).bitflags1;
    }
    else {
      pIVar5 = (pMVar3->field7_0x38).rgctx_data[2].klass;
      bVar1 = (pIVar5->_2).bitflags1;
    }
    if ((bVar1 & 1) == 0) {
      pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    }
    return *(System_Byte_array **)pIVar5->static_fields;
  }
  pSVar6 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  if (pSVar6 == (System_Text_Encoding_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar7 = (*(pSVar6->klass->vtable)._18_GetBytes.methodPtr)
                     (pSVar6,str,(pSVar6->klass->vtable)._18_GetBytes.method);
  pSVar7 = (*(__this->klass->vtable)._4_Compress.methodPtr)
                     (__this,pSVar7,level,(__this->klass->vtable)._4_Compress.method);
  return pSVar7;
}


// Utility.Algorithms.CompressionAlgorithm$$DecompressString
// il2cpp: System_String_o* Utility_Algorithms_CompressionAlgorithm__DecompressString (Utility_Algorithms_CompressionAlgorithm_o* __this, System_Byte_array* data, int32_t bufferSize, int64_t maxSize, const MethodInfo* method);
// 0x5de96b0

System_String_o *
Utility_Algorithms_CompressionAlgorithm__DecompressString
          (Utility_Algorithms_CompressionAlgorithm_o *__this,System_Byte_array *data,int32_t bufferSize,
          int64_t maxSize,MethodInfo *method)

{
  System_Text_Encoding_o *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  
  if ((data == (System_Byte_array *)0x0) || (data->max_length == 0)) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  pSVar1 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  pSVar2 = (*(__this->klass->vtable)._5_Decompress.methodPtr)
                     (__this,data,bufferSize,maxSize,(__this->klass->vtable)._5_Decompress.method);
  if (pSVar1 == (System_Text_Encoding_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar3 = (*(pSVar1->klass->vtable)._35_GetString.methodPtr)
                     (pSVar1,pSVar2,(pSVar1->klass->vtable)._35_GetString.method);
  return pSVar3;
}


// Utility.Algorithms.CompressionAlgorithm$$.ctor
// il2cpp: void Utility_Algorithms_CompressionAlgorithm___ctor (Utility_Algorithms_CompressionAlgorithm_o* __this, const MethodInfo* method);
// 0x5df4f70

void Utility_Algorithms_CompressionAlgorithm___ctor
               (Utility_Algorithms_CompressionAlgorithm_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


