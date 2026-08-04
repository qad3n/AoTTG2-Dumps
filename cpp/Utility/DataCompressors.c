// Type: Utility.DataCompressors
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/DataCompressors.cs
// Prior real C# source: none
// --------------------------------

// Utility.DataCompressors$$.cctor
// il2cpp: void Utility_DataCompressors___cctor (const MethodInfo* method);
// 0x448bb10

void Utility_DataCompressors___cctor(MethodInfo *method)

{
  long lVar1;
  Utility_Algorithms_BrotliAlgorithm_o *__this;
  Utility_Algorithms_GZipAlgorithm_o *__this_00;
  Utility_Algorithms_DeflateAlgorithm_o *__this_01;
  Utility_Algorithms_LZFAlgorithm_o *__this_02;
  
  if (g_data_057ae8e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BrotliAlgorithm);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeflateAlgorithm);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GZipAlgorithm);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LZFAlgorithm);
    g_data_057ae8e0 = '\x01';
  }
  __this = (Utility_Algorithms_BrotliAlgorithm_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BrotliAlgorithm);
  Utility_Algorithms_BrotliAlgorithm___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_DataCompressors + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_DataCompressors + 0xb8));
  __this_00 = (Utility_Algorithms_GZipAlgorithm_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GZipAlgorithm);
  Utility_Algorithms_GZipAlgorithm___ctor(__this_00,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_DataCompressors + 0xb8);
  *(Utility_Algorithms_GZipAlgorithm_o **)(lVar1 + 8) = __this_00;
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  __this_01 = (Utility_Algorithms_DeflateAlgorithm_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DeflateAlgorithm);
  Utility_Algorithms_DeflateAlgorithm___ctor(__this_01,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_DataCompressors + 0xb8);
  *(Utility_Algorithms_DeflateAlgorithm_o **)(lVar1 + 0x10) = __this_01;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  __this_02 = (Utility_Algorithms_LZFAlgorithm_o *)il2cpp_runtime_helper_023052d0(TypeInfo_LZFAlgorithm);
  Utility_Algorithms_LZFAlgorithm___ctor(__this_02,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_DataCompressors + 0xb8);
  *(Utility_Algorithms_LZFAlgorithm_o **)(lVar1 + 0x18) = __this_02;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18,__this_02);
  return;
}


