// Type: Utility.Algorithms.LZFAlgorithm
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility.Algorithms/LZFAlgorithm.cs
// Prior real C# source: none
// --------------------------------

// Utility.Algorithms.LZFAlgorithm$$Compress
// il2cpp: System_Byte_array* Utility_Algorithms_LZFAlgorithm__Compress (Utility_Algorithms_LZFAlgorithm_o* __this, System_Byte_array* data, int32_t level, const MethodInfo* method);
// 0x18233a2d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18233a388: nop dword ptr [rax + rax]

System_Byte_array *
Utility_Algorithms_LZFAlgorithm__Compress
          (Utility_Algorithms_LZFAlgorithm_o *__this,System_Byte_array *data,int32_t level,MethodInfo *method)

{
  uint32_t length;
  uint32_t length_00;
  System_Byte_array *dst;
  System_Byte_array *local_res10;
  
  if (Il2CppMethodInitialized_18434786e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CLZF2);
    Il2CppMethodInitialized_18434786e = '\x01';
  }
  if ((TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
  }
  if (Il2CppMethodInitialized_184347804 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CLZF2);
    Il2CppMethodInitialized_184347804 = '\x01';
  }
  if (data != (System_Byte_array *)0x0) {
    length = (int)data->max_length * 2;
    local_res10 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,length);
    if ((TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
    }
    length_00 = Utility_CLZF2__lzf_compress(data,&local_res10,(MethodInfo *)0x0);
    while (length_00 == 0) {
      length = length * 2;
      local_res10 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,length);
      if ((TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
      }
      length_00 = Utility_CLZF2__lzf_compress(data,&local_res10,(MethodInfo *)0x0);
    }
    dst = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,length_00);
    System_Buffer__BlockCopy
              ((System_Array_o *)local_res10,0,(System_Array_o *)dst,0,length_00,(MethodInfo *)0x0);
    return dst;
  }
  ThrowNullReferenceException();
}


// Utility.Algorithms.LZFAlgorithm$$Decompress
// il2cpp: System_Byte_array* Utility_Algorithms_LZFAlgorithm__Decompress (Utility_Algorithms_LZFAlgorithm_o* __this, System_Byte_array* data, int32_t bufferSize, int64_t maxSize, const MethodInfo* method);
// 0x18233a420
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18233a4d8: nop dword ptr [rax + rax]

System_Byte_array *
Utility_Algorithms_LZFAlgorithm__Decompress
          (Utility_Algorithms_LZFAlgorithm_o *__this,System_Byte_array *data,int32_t bufferSize,
          int64_t maxSize,MethodInfo *method)

{
  uint32_t length;
  uint32_t length_00;
  System_Byte_array *dst;
  System_Byte_array *local_res10;
  
  if (Il2CppMethodInitialized_18434786f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CLZF2);
    Il2CppMethodInitialized_18434786f = '\x01';
  }
  if ((TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
  }
  if (Il2CppMethodInitialized_184347805 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CLZF2);
    Il2CppMethodInitialized_184347805 = '\x01';
  }
  if (data != (System_Byte_array *)0x0) {
    length = (int)data->max_length * 2;
    local_res10 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,length);
    if ((TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
    }
    length_00 = Utility_CLZF2__lzf_decompress(data,&local_res10,(MethodInfo *)0x0);
    while (length_00 == 0) {
      length = length * 2;
      local_res10 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,length);
      if ((TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
      }
      length_00 = Utility_CLZF2__lzf_decompress(data,&local_res10,(MethodInfo *)0x0);
    }
    dst = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,length_00);
    System_Buffer__BlockCopy
              ((System_Array_o *)local_res10,0,(System_Array_o *)dst,0,length_00,(MethodInfo *)0x0);
    return dst;
  }
  ThrowNullReferenceException();
}


// Utility.Algorithms.LZFAlgorithm$$.ctor
// il2cpp: void Utility_Algorithms_LZFAlgorithm___ctor (Utility_Algorithms_LZFAlgorithm_o* __this, const MethodInfo* method);
// 0x18054c890

void
Utility_Algorithms_LZFAlgorithm___ctor(Utility_Algorithms_LZFAlgorithm_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


