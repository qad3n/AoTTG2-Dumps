// Type: Utility.DataCompressors
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility/DataCompressors.cs
// Prior source: NEW in this update
// --------------------------------

// Utility.DataCompressors$$.cctor
// il2cpp: void Utility_DataCompressors___cctor (const MethodInfo* method);
// 0x415b1b0

void Utility_DataCompressors___cctor(MethodInfo *method)

{
  long lVar1;
  Utility_Algorithms_BrotliAlgorithm_o *__this;
  Utility_Algorithms_GZipAlgorithm_o *__this_00;
  Utility_Algorithms_DeflateAlgorithm_o *__this_01;
  Utility_Algorithms_LZFAlgorithm_o *__this_02;
  
  if (DAT_05704a29 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BrotliAlgorithm);
    il2cpp_init_method_metadata(&TypeInfo_DataCompressors);
    il2cpp_init_method_metadata(&TypeInfo_DeflateAlgorithm);
    il2cpp_init_method_metadata(&TypeInfo_GZipAlgorithm);
    il2cpp_init_method_metadata(&TypeInfo_LZFAlgorithm);
    DAT_05704a29 = '\x01';
  }
  __this = (Utility_Algorithms_BrotliAlgorithm_o *)il2cpp_runtime_glue(TypeInfo_BrotliAlgorithm);
  Utility_Algorithms_BrotliAlgorithm___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_DataCompressors + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_DataCompressors + 0xb8));
  __this_00 = (Utility_Algorithms_GZipAlgorithm_o *)il2cpp_runtime_glue(TypeInfo_GZipAlgorithm);
  Utility_Algorithms_GZipAlgorithm___ctor(__this_00,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_DataCompressors + 0xb8);
  *(Utility_Algorithms_GZipAlgorithm_o **)(lVar1 + 8) = __this_00;
  il2cpp_runtime_glue(lVar1 + 8);
  __this_01 = (Utility_Algorithms_DeflateAlgorithm_o *)il2cpp_runtime_glue(TypeInfo_DeflateAlgorithm);
  Utility_Algorithms_DeflateAlgorithm___ctor(__this_01,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_DataCompressors + 0xb8);
  *(Utility_Algorithms_DeflateAlgorithm_o **)(lVar1 + 0x10) = __this_01;
  il2cpp_runtime_glue(lVar1 + 0x10);
  __this_02 = (Utility_Algorithms_LZFAlgorithm_o *)il2cpp_runtime_glue(TypeInfo_LZFAlgorithm);
  Utility_Algorithms_LZFAlgorithm___ctor(__this_02,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_DataCompressors + 0xb8);
  *(Utility_Algorithms_LZFAlgorithm_o **)(lVar1 + 0x18) = __this_02;
  il2cpp_runtime_glue(lVar1 + 0x18,__this_02);
  return;
}


