// Type: Utility.Algorithms.CompressionAlgorithm
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility.Algorithms/CompressionAlgorithm.cs
// Prior real C# source: none
// --------------------------------

// Utility.Algorithms.CompressionAlgorithm$$CompressString
// il2cpp: System_Byte_array* Utility_Algorithms_CompressionAlgorithm__CompressString (Utility_Algorithms_CompressionAlgorithm_o* __this, System_String_o* str, int32_t level, const MethodInfo* method);
// 0x182332810

System_Byte_array *
Utility_Algorithms_CompressionAlgorithm__CompressString
          (Utility_Algorithms_CompressionAlgorithm_o *__this,System_String_o *str,int32_t level,
          MethodInfo *method)

{
  bool bVar1;
  System_Text_Encoding_o *pSVar2;
  System_Byte_array *pSVar3;
  
  if (Il2CppMethodInitialized_184347869 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_byte);
    Il2CppMethodInitialized_184347869 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(str,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    if (pSVar2 != (System_Text_Encoding_o *)0x0) {
      pSVar3 = (*(pSVar2->klass->vtable)._18_GetBytes.methodPtr)
                         (pSVar2,str,(pSVar2->klass->vtable)._18_GetBytes.method);
      pSVar3 = (*(__this->klass->vtable)._4_Compress.methodPtr)
                         (__this,pSVar3,level,(__this->klass->vtable)._4_Compress.method);
      return pSVar3;
    }
    ThrowNullReferenceException();
  }
  pSVar3 = (System_Byte_array *)il2cpp_runtime_helper_18001b1e0(MethodInfo_System_Array_Empty_byte);
  return pSVar3;
}


// Utility.Algorithms.CompressionAlgorithm$$DecompressString
// il2cpp: System_String_o* Utility_Algorithms_CompressionAlgorithm__DecompressString (Utility_Algorithms_CompressionAlgorithm_o* __this, System_Byte_array* data, int32_t bufferSize, int64_t maxSize, const MethodInfo* method);
// 0x1823328c0

System_String_o *
Utility_Algorithms_CompressionAlgorithm__DecompressString
          (Utility_Algorithms_CompressionAlgorithm_o *__this,System_Byte_array *data,int32_t bufferSize,
          int64_t maxSize,MethodInfo *method)

{
  System_Text_Encoding_o *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  
  if ((data != (System_Byte_array *)0x0) && (data->max_length != 0)) {
    pSVar1 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    pSVar2 = (*(__this->klass->vtable)._5_Decompress.methodPtr)
                       (__this,data,bufferSize,maxSize,(__this->klass->vtable)._5_Decompress.method);
    if (pSVar1 != (System_Text_Encoding_o *)0x0) {
      pSVar3 = (*(pSVar1->klass->vtable)._34_GetString.methodPtr)
                         (pSVar1,pSVar2,(pSVar1->klass->vtable)._34_GetString.method);
      return pSVar3;
    }
    ThrowNullReferenceException();
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Utility.Algorithms.CompressionAlgorithm$$.ctor
// il2cpp: void Utility_Algorithms_CompressionAlgorithm___ctor (Utility_Algorithms_CompressionAlgorithm_o* __this, const MethodInfo* method);
// 0x18054c890

void
Utility_Algorithms_CompressionAlgorithm___ctor(Utility_Algorithms_CompressionAlgorithm_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


