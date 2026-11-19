// Type: Utility.DataCompressors
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/DataCompressors.cs
// Prior real C# source: none
// --------------------------------

// Utility.DataCompressors$$.cctor
// il2cpp: void Utility_DataCompressors___cctor (const MethodInfo* method);
// 0x5dea800

void Utility_DataCompressors___cctor(MethodInfo *method)

{
  Utility_DataCompressors_StaticFields *pUVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_075482be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Algorithms_BrotliAlgorithm);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Algorithms_DeflateAlgorithm);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Algorithms_GZipAlgorithm);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Algorithms_LZFAlgorithm);
    Il2CppMethodInitialized_075482be = '\x01';
  }
  pIVar2 = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Algorithms_BrotliAlgorithm);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  TypeInfo_Utility_DataCompressors->static_fields->Brotli = (Utility_Algorithms_BrotliAlgorithm_o *)pIVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_DataCompressors->static_fields->Brotli);
  pIVar2 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Algorithms_GZipAlgorithm)
  ;
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  pUVar1 = TypeInfo_Utility_DataCompressors->static_fields;
  pUVar1->GZip = (Utility_Algorithms_GZipAlgorithm_o *)pIVar2;
  Il2CppCodeGenWriteBarrier(&pUVar1->GZip);
  pIVar2 = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Algorithms_DeflateAlgorithm);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  pUVar1 = TypeInfo_Utility_DataCompressors->static_fields;
  pUVar1->ZLib = (Utility_Algorithms_DeflateAlgorithm_o *)pIVar2;
  Il2CppCodeGenWriteBarrier(&pUVar1->ZLib);
  pIVar2 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Algorithms_LZFAlgorithm);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  pUVar1 = TypeInfo_Utility_DataCompressors->static_fields;
  pUVar1->LZF = (Utility_Algorithms_LZFAlgorithm_o *)pIVar2;
  Il2CppCodeGenWriteBarrier(&pUVar1->LZF);
  return;
}


