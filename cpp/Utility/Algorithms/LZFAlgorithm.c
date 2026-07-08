// Type: Utility.Algorithms.LZFAlgorithm
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility.Algorithms/LZFAlgorithm.cs
// Prior source: NEW in this update
// --------------------------------

// Utility.Algorithms.LZFAlgorithm$$Compress
// il2cpp: System_Byte_array* Utility_Algorithms_LZFAlgorithm__Compress (Utility_Algorithms_LZFAlgorithm_o* __this, System_Byte_array* data, int32_t level, const MethodInfo* method);
// 0x4181650

System_Byte_array *
Utility_Algorithms_LZFAlgorithm__Compress
          (Utility_Algorithms_LZFAlgorithm_o *__this,System_Byte_array *data,int32_t level,
          MethodInfo *method)

{
  int iVar1;
  System_Byte_array *pSVar2;
  
  if (DAT_05704b77 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CLZF2);
    DAT_05704b77 = '\x01';
    iVar1 = *(int *)(TypeInfo_CLZF2 + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CLZF2 + 0xe4);
  }
  if (iVar1 != 0) {
    pSVar2 = Utility_CLZF2__Compress(data,(MethodInfo *)0x0);
    return pSVar2;
  }
  il2cpp_init_class();
  pSVar2 = Utility_CLZF2__Compress(data,(MethodInfo *)0x0);
  return pSVar2;
}


// Utility.Algorithms.LZFAlgorithm$$Decompress
// il2cpp: System_Byte_array* Utility_Algorithms_LZFAlgorithm__Decompress (Utility_Algorithms_LZFAlgorithm_o* __this, System_Byte_array* data, int32_t bufferSize, int64_t maxSize, const MethodInfo* method);
// 0x41816c0

System_Byte_array *
Utility_Algorithms_LZFAlgorithm__Decompress
          (Utility_Algorithms_LZFAlgorithm_o *__this,System_Byte_array *data,int32_t bufferSize,
          int64_t maxSize,MethodInfo *method)

{
  int iVar1;
  int count;
  System_Byte_array *dst;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined4 in_register_00000014;
  undefined8 uVar2;
  undefined8 extraout_RDX_01;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  System_Byte_array *apSStack_38 [2];
  System_Byte_array *src;
  
  uVar2 = CONCAT44(in_register_00000014,bufferSize);
  if (DAT_05704b78 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CLZF2,data,uVar2);
    DAT_05704b78 = '\x01';
    iVar1 = *(int *)(TypeInfo_CLZF2 + 0xe4);
    uVar2 = extraout_RDX_01;
  }
  else {
    iVar1 = *(int *)(TypeInfo_CLZF2 + 0xe4);
  }
  if (iVar1 == 0) {
    auVar5 = il2cpp_init_class();
  }
  else {
    auVar5._8_8_ = uVar2;
    auVar5._0_8_ = &TypeInfo_CLZF2;
  }
  apSStack_38[0] = auVar5._0_8_;
  if (DAT_05704a1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_byte,0,auVar5._8_8_);
    il2cpp_init_method_metadata(&TypeInfo_CLZF2);
    DAT_05704a1c = '\x01';
  }
  apSStack_38[0] = (System_Byte_array *)0x0;
  if (data == (System_Byte_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar1 = (int)data->max_length * 2;
  auVar3 = il2cpp_glue_02274930(TypeInfo_byte,iVar1);
  src = auVar3._0_8_;
  if (*(int *)(TypeInfo_CLZF2 + 0xe4) == 0) {
    apSStack_38[0] = src;
    il2cpp_init_class();
    auVar3._8_8_ = extraout_RDX;
    auVar3._0_8_ = apSStack_38[0];
  }
  apSStack_38[0] = auVar3._0_8_;
  count = Utility_CLZF2__lzf_decompress(data,apSStack_38,auVar3._8_8_);
  while (count == 0) {
    iVar1 = iVar1 * 2;
    auVar4 = il2cpp_glue_02274930(TypeInfo_byte,iVar1);
    src = auVar4._0_8_;
    if (*(int *)(TypeInfo_CLZF2 + 0xe4) == 0) {
      apSStack_38[0] = src;
      il2cpp_init_class();
      auVar4._8_8_ = extraout_RDX_00;
      auVar4._0_8_ = apSStack_38[0];
    }
    apSStack_38[0] = auVar4._0_8_;
    count = Utility_CLZF2__lzf_decompress(data,apSStack_38,auVar4._8_8_);
  }
  dst = (System_Byte_array *)il2cpp_glue_02274930(TypeInfo_byte);
  System_Buffer__BlockCopy((System_Array_o *)src,0,(System_Array_o *)dst,0,count,(MethodInfo *)0x0);
  return dst;
}


// Utility.Algorithms.LZFAlgorithm$$.ctor
// il2cpp: void Utility_Algorithms_LZFAlgorithm___ctor (Utility_Algorithms_LZFAlgorithm_o* __this, const MethodInfo* method);
// 0x4181730

void Utility_Algorithms_LZFAlgorithm___ctor
               (Utility_Algorithms_LZFAlgorithm_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


