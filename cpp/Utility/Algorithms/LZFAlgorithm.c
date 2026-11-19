// Type: Utility.Algorithms.LZFAlgorithm
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Utility.Algorithms/LZFAlgorithm.cs
// Prior real C# source: none
// --------------------------------

// Utility.Algorithms.LZFAlgorithm$$Compress
// il2cpp: System_Byte_array* Utility_Algorithms_LZFAlgorithm__Compress (Utility_Algorithms_LZFAlgorithm_o* __this, System_Byte_array* data, int32_t level, const MethodInfo* method);
// 0x5df6140

System_Byte_array *
Utility_Algorithms_LZFAlgorithm__Compress
          (Utility_Algorithms_LZFAlgorithm_o *__this,System_Byte_array *data,int32_t level,MethodInfo *method)

{
  uint32_t uVar1;
  System_Byte_array *pSVar2;
  
  pSVar2 = data;
  if (Il2CppMethodInitialized_0754831e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CLZF2);
    Il2CppMethodInitialized_0754831e = '\x01';
    uVar1 = (TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
    pSVar2 = Utility_CLZF2__Compress(data,(MethodInfo *)pSVar2);
    return pSVar2;
  }
  pSVar2 = Utility_CLZF2__Compress(data,(MethodInfo *)pSVar2);
  return pSVar2;
}


// Utility.Algorithms.LZFAlgorithm$$Decompress
// il2cpp: System_Byte_array* Utility_Algorithms_LZFAlgorithm__Decompress (Utility_Algorithms_LZFAlgorithm_o* __this, System_Byte_array* data, int32_t bufferSize, int64_t maxSize, const MethodInfo* method);
// 0x5df61a0

System_Byte_array *
Utility_Algorithms_LZFAlgorithm__Decompress
          (Utility_Algorithms_LZFAlgorithm_o *__this,System_Byte_array *data,int32_t bufferSize,
          int64_t maxSize,MethodInfo *method)

{
  uint32_t uVar1;
  System_Byte_array *pSVar2;
  
  pSVar2 = data;
  if (Il2CppMethodInitialized_0754831f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CLZF2);
    Il2CppMethodInitialized_0754831f = '\x01';
    uVar1 = (TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Utility_CLZF2->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CLZF2);
    pSVar2 = Utility_CLZF2__Decompress(data,(MethodInfo *)pSVar2);
    return pSVar2;
  }
  pSVar2 = Utility_CLZF2__Decompress(data,(MethodInfo *)pSVar2);
  return pSVar2;
}


// Utility.Algorithms.LZFAlgorithm$$.ctor
// il2cpp: void Utility_Algorithms_LZFAlgorithm___ctor (Utility_Algorithms_LZFAlgorithm_o* __this, const MethodInfo* method);
// 0x5dea970

void Utility_Algorithms_LZFAlgorithm___ctor(Utility_Algorithms_LZFAlgorithm_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


