// Type: Utility.Algorithms.CompressionAlgorithm
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility.Algorithms/CompressionAlgorithm.cs
// Prior source: NEW in this update
// --------------------------------

// Utility.Algorithms.CompressionAlgorithm$$CompressString
// il2cpp: System_Byte_array* Utility_Algorithms_CompressionAlgorithm__CompressString (Utility_Algorithms_CompressionAlgorithm_o* __this, System_String_o* str, int32_t level, const MethodInfo* method);
// 0x417fe10

/* WARNING: Type propagation algorithm not settling */

System_Byte_array *
Utility_Algorithms_CompressionAlgorithm__CompressString
          (Utility_Algorithms_CompressionAlgorithm_o *__this,System_String_o *str,int32_t level,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  code *vtable_dispatch;
  bool_conflict bVar3;
  long lVar4;
  System_Text_Encoding_o *pSVar5;
  undefined8 uVar6;
  System_Byte_array *pSVar7;
  long lVar8;
  
  if (DAT_05704b72 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Byte___Empty_Byte);
    DAT_05704b72 = '\x01';
  }
  bVar3 = System_String__IsNullOrEmpty(str,(MethodInfo *)0x0);
  lVar4 = MethodInfo_Byte___Empty_Byte;
  if ((char)bVar3 != '\0') {
    if (*(long *)(MethodInfo_Byte___Empty_Byte + 0x38) == 0) {
      il2cpp_glue_022c2910(MethodInfo_Byte___Empty_Byte);
      lVar8 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      bVar1 = *(byte *)(lVar8 + 0x135);
    }
    else {
      lVar8 = *(long *)(*(long *)(MethodInfo_Byte___Empty_Byte + 0x38) + 0x10);
      bVar1 = *(byte *)(lVar8 + 0x135);
    }
    if ((bVar1 & 1) == 0) {
      lVar8 = il2cpp_glue_022c28b0();
      iVar2 = *(int *)(lVar8 + 0xe4);
    }
    else {
      iVar2 = *(int *)(lVar8 + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_init_class();
      lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      bVar1 = *(byte *)(lVar4 + 0x135);
    }
    else {
      lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      bVar1 = *(byte *)(lVar4 + 0x135);
    }
    if ((bVar1 & 1) == 0) {
      lVar4 = il2cpp_glue_022c28b0(lVar4);
    }
    return (System_Byte_array *)**(undefined8 **)(lVar4 + 0xb8);
  }
  pSVar5 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  if (pSVar5 != (System_Text_Encoding_o *)0x0) {
    uVar6 = (*(pSVar5->klass->vtable)._18_GetBytes.methodPtr)
                      (pSVar5,str,(pSVar5->klass->vtable)._18_GetBytes.method);
    vtable_dispatch = __this->klass[1]._1.image;
    pSVar7 = (System_Byte_array *)
             (*vtable_dispatch)
                       (__this,uVar6,level,__this->klass[1]._1.gc_desc,vtable_dispatch);
    return pSVar7;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Algorithms.CompressionAlgorithm$$DecompressString
// il2cpp: System_String_o* Utility_Algorithms_CompressionAlgorithm__DecompressString (Utility_Algorithms_CompressionAlgorithm_o* __this, System_Byte_array* data, int32_t bufferSize, int64_t maxSize, const MethodInfo* method);
// 0x417ff50

System_String_o *
Utility_Algorithms_CompressionAlgorithm__DecompressString
          (Utility_Algorithms_CompressionAlgorithm_o *__this,System_Byte_array *data,
          int32_t bufferSize,int64_t maxSize,MethodInfo *method)

{
  System_Text_Encoding_c *pSVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_Text_Encoding_o *pSVar2;
  undefined8 uVar3;
  System_String_o *pSVar4;
  
  if ((data != (System_Byte_array *)0x0) && (data->max_length != 0)) {
    pSVar2 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    uVar3 = (*(code *)__this->klass[1]._1.name)
                      (__this,data,bufferSize,maxSize,__this->klass[1]._1.namespaze);
    if (pSVar2 != (System_Text_Encoding_o *)0x0) {
      pSVar1 = pSVar2->klass;
      vtable_dispatch = (pSVar1->vtable)._35_GetString.methodPtr;
      pSVar4 = (System_String_o *)
               (*vtable_dispatch)
                         (pSVar2,uVar3,(pSVar1->vtable)._35_GetString.method,pSVar1,
                          vtable_dispatch);
      return pSVar4;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Utility.Algorithms.CompressionAlgorithm$$.ctor
// il2cpp: void Utility_Algorithms_CompressionAlgorithm___ctor (Utility_Algorithms_CompressionAlgorithm_o* __this, const MethodInfo* method);
// 0x417fe00

void Utility_Algorithms_CompressionAlgorithm___ctor
               (Utility_Algorithms_CompressionAlgorithm_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


