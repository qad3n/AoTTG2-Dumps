// Type: Utility.DataCompressors
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/DataCompressors.cs
// Prior real C# source: none
// --------------------------------

// Utility.DataCompressors$$.cctor
// il2cpp: void Utility_DataCompressors___cctor (const MethodInfo* method);
// 0x182334e30

void Utility_DataCompressors___cctor(MethodInfo *method)

{
  Utility_Algorithms_BrotliAlgorithm_o *__this;
  Utility_Algorithms_GZipAlgorithm_o *__this_00;
  Utility_Algorithms_DeflateAlgorithm_o *__this_01;
  Utility_Algorithms_LZFAlgorithm_o *__this_02;
  
  if (Il2CppMethodInitialized_184347812 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Algorithms_BrotliAlgorithm);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Algorithms_DeflateAlgorithm);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Algorithms_GZipAlgorithm);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Algorithms_LZFAlgorithm);
    Il2CppMethodInitialized_184347812 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Algorithms_BrotliAlgorithm);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Utility_DataCompressors->static_fields->Brotli = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_DataCompressors->static_fields->Brotli,__this);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Algorithms_GZipAlgorithm);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  TypeInfo_Utility_DataCompressors->static_fields->GZip = __this_00;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_DataCompressors->static_fields->GZip,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Algorithms_DeflateAlgorithm);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,(MethodInfo *)0x0);
  TypeInfo_Utility_DataCompressors->static_fields->ZLib = __this_01;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_DataCompressors->static_fields->ZLib,__this_01);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Algorithms_LZFAlgorithm);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_02,(MethodInfo *)0x0);
  TypeInfo_Utility_DataCompressors->static_fields->LZF = __this_02;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_DataCompressors->static_fields->LZF,__this_02);
  return;
}


