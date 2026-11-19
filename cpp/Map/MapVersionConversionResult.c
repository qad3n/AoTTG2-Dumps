// Type: Map.MapVersionConversionResult
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapVersionConversionResult.cs
// Prior real C# source: none
// --------------------------------

// Map.MapVersionConversionResult.<>c$$.cctor
// il2cpp: void Map_MapVersionConversionResult___c___cctor (const MethodInfo* method);
// 0x59a4fb0

void Map_MapVersionConversionResult___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545aa8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConversionResult_c);
    Il2CppMethodInitialized_07545aa8 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapVersionConversionResult_c)
  ;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Map_MapVersionConversionResult_c->static_fields->__9 =
       (Map_MapVersionConversionResult___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapVersionConversionResult_c->static_fields->__9);
  return;
}


// Map.MapVersionConversionResult.<>c$$.ctor
// il2cpp: void Map_MapVersionConversionResult___c___ctor (Map_MapVersionConversionResult___c_o* __this, const MethodInfo* method);
// 0x59a5020

void Map_MapVersionConversionResult___c___ctor
               (Map_MapVersionConversionResult___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapVersionConversionResult.<>c$$<get_IsReversible>b__15_0
// il2cpp: bool Map_MapVersionConversionResult___c___get_IsReversible_b__15_0 (Map_MapVersionConversionResult___c_o* __this, Map_IMapVersionConverter_o* converter, const MethodInfo* method);
// 0x59a5030

bool Map_MapVersionConversionResult___c___get_IsReversible_b__15_0
               (Map_MapVersionConversionResult___c_o *__this,Map_IMapVersionConverter_o *converter,
               MethodInfo *method)

{
  Map_IMapVersionConverter_c *pMVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  VirtualInvokeData *pVVar4;
  ulong uVar5;
  long lVar6;
  
  if (Il2CppMethodInitialized_07545aa9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_IMapVersionConverter);
    Il2CppMethodInitialized_07545aa9 = '\x01';
  }
  if (converter == (Map_IMapVersionConverter_o *)0x0) {
    ThrowNullReferenceException();
  }
  pMVar1 = converter->klass;
  uVar5 = (ulong)(pMVar1->_2).interface_offsets_count;
  if (uVar5 != 0) {
    pIVar2 = (pMVar1->_1).interfaceOffsets;
    lVar6 = 0;
    do {
      if (*(Map_IMapVersionConverter_c **)((long)&pIVar2->interfaceType + lVar6) ==
          TypeInfo_Map_IMapVersionConverter) {
        pVVar4 = pMVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar6) + 2);
        goto label_059a50b5;
      }
      lVar6 = lVar6 + 0x10;
    } while (uVar5 * 0x10 != lVar6);
  }
  pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)converter,(Il2CppClass *)TypeInfo_Map_IMapVersionConverter,2);
label_059a50b5:
  bVar3 = (*pVVar4->methodPtr)((Il2CppObject *)converter,pVVar4->method);
  return bVar3;
}


// Map.MapVersionConversionResult$$get_OriginalVersion
// il2cpp: System_String_o* Map_MapVersionConversionResult__get_OriginalVersion (Map_MapVersionConversionResult_o* __this, const MethodInfo* method);
// 0x59a4da0

System_String_o *
Map_MapVersionConversionResult__get_OriginalVersion
          (Map_MapVersionConversionResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._OriginalVersion_k__BackingField;
}


// Map.MapVersionConversionResult$$set_OriginalVersion
// il2cpp: void Map_MapVersionConversionResult__set_OriginalVersion (Map_MapVersionConversionResult_o* __this, System_String_o* value, const MethodInfo* method);
// 0x59a4db0

void Map_MapVersionConversionResult__set_OriginalVersion
               (Map_MapVersionConversionResult_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._OriginalVersion_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._OriginalVersion_k__BackingField);
  return;
}


// Map.MapVersionConversionResult$$get_FinalVersion
// il2cpp: System_String_o* Map_MapVersionConversionResult__get_FinalVersion (Map_MapVersionConversionResult_o* __this, const MethodInfo* method);
// 0x59a4dc0

System_String_o *
Map_MapVersionConversionResult__get_FinalVersion(Map_MapVersionConversionResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._FinalVersion_k__BackingField;
}


// Map.MapVersionConversionResult$$set_FinalVersion
// il2cpp: void Map_MapVersionConversionResult__set_FinalVersion (Map_MapVersionConversionResult_o* __this, System_String_o* value, const MethodInfo* method);
// 0x59a4dd0

void Map_MapVersionConversionResult__set_FinalVersion
               (Map_MapVersionConversionResult_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._FinalVersion_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._FinalVersion_k__BackingField);
  return;
}


// Map.MapVersionConversionResult$$get_Converters
// il2cpp: System_Collections_Generic_IReadOnlyList_IMapVersionConverter__o* Map_MapVersionConversionResult__get_Converters (Map_MapVersionConversionResult_o* __this, const MethodInfo* method);
// 0x59a4de0

System_Collections_Generic_IReadOnlyList_IMapVersionConverter__o *
Map_MapVersionConversionResult__get_Converters(Map_MapVersionConversionResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._Converters_k__BackingField;
}


// Map.MapVersionConversionResult$$set_Converters
// il2cpp: void Map_MapVersionConversionResult__set_Converters (Map_MapVersionConversionResult_o* __this, System_Collections_Generic_IReadOnlyList_IMapVersionConverter__o* value, const MethodInfo* method);
// 0x59a4df0

void Map_MapVersionConversionResult__set_Converters
               (Map_MapVersionConversionResult_o *__this,
               System_Collections_Generic_IReadOnlyList_IMapVersionConverter__o *value,MethodInfo *method)

{
  (__this->fields)._Converters_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Converters_k__BackingField);
  return;
}


// Map.MapVersionConversionResult$$get_VersionCount
// il2cpp: int32_t Map_MapVersionConversionResult__get_VersionCount (Map_MapVersionConversionResult_o* __this, const MethodInfo* method);
// 0x59a4e00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a4e4f: nop 

int32_t Map_MapVersionConversionResult__get_VersionCount
                  (Map_MapVersionConversionResult_o *__this,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  int32_t iVar3;
  VirtualInvokeData *pVVar4;
  ulong uVar5;
  long lVar6;
  
  if (Il2CppMethodInitialized_07545aa6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_IMapVersionConverter);
    Il2CppMethodInitialized_07545aa6 = '\x01';
  }
  obj = (Il2CppObject *)(__this->fields)._Converters_k__BackingField;
  if (obj == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = obj->klass;
  uVar5 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar5 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar6 = 0;
    do {
      if (*(System_Collections_Generic_IReadOnlyCollection_IMapVersionConverter__c **)
           ((long)&pIVar2->interfaceType + lVar6) ==
          TypeInfo_System_Collections_Generic_IReadOnlyCollection_IMapVersionConverter) {
        pVVar4 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar6);
        goto label_059a4e7d;
      }
      lVar6 = lVar6 + 0x10;
    } while (uVar5 * 0x10 != lVar6);
  }
  pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                     (obj,(Il2CppClass *)
                          TypeInfo_System_Collections_Generic_IReadOnlyCollection_IMapVersionConverter,0);
label_059a4e7d:
  iVar3 = (*pVVar4->methodPtr)(obj,pVVar4->method);
  return iVar3;
}


// Map.MapVersionConversionResult$$get_IsReversible
// il2cpp: bool Map_MapVersionConversionResult__get_IsReversible (Map_MapVersionConversionResult_o* __this, const MethodInfo* method);
// 0x59a4e90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a4f03: jmp 0x59a4f1e

bool Map_MapVersionConversionResult__get_IsReversible
               (Map_MapVersionConversionResult_o *__this,MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_TSource__o *source;
  Il2CppObject *object;
  bool bVar1;
  Map_MapVersionConversionResult___c_StaticFields *pMVar2;
  System_Func_IMapVersionConverter__bool__o *__this_00;
  
  if (Il2CppMethodInitialized_07545aa7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_All_IMapVersionConverter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_IMapVersionConverter_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_MapVersionConversionResult_c_get_IsReversible_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConversionResult_c);
    Il2CppMethodInitialized_07545aa7 = '\x01';
  }
  source = (System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields)._Converters_k__BackingField;
  if ((TypeInfo_Map_MapVersionConversionResult_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapVersionConversionResult_c);
    pMVar2 = TypeInfo_Map_MapVersionConversionResult_c->static_fields;
    __this_00 = pMVar2->__9__15_0;
  }
  else {
    pMVar2 = TypeInfo_Map_MapVersionConversionResult_c->static_fields;
    __this_00 = pMVar2->__9__15_0;
  }
  if (__this_00 == (System_Func_IMapVersionConverter__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Map_MapVersionConversionResult_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapVersionConversionResult_c);
      pMVar2 = TypeInfo_Map_MapVersionConversionResult_c->static_fields;
    }
    object = (Il2CppObject *)pMVar2->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_IMapVersionConverter_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_00,object,
               (intptr_t)MethodInfo_Map_MapVersionConversionResult_c_get_IsReversible_b__15_0,
               (MethodInfo_4F19300 *)0x0);
    pMVar2 = TypeInfo_Map_MapVersionConversionResult_c->static_fields;
    pMVar2->__9__15_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pMVar2->__9__15_0);
  }
  bVar1 = System_Linq_Enumerable__All_object_
                    (source,(System_Func_TSource__bool__o *)__this_00,
                     (MethodInfo_34DEBD0 *)MethodInfo_System_Linq_Enumerable_All_IMapVersionConverter);
  return bVar1;
}


// Map.MapVersionConversionResult$$.ctor
// il2cpp: void Map_MapVersionConversionResult___ctor (Map_MapVersionConversionResult_o* __this, const MethodInfo* method);
// 0x59a4fa0

void Map_MapVersionConversionResult___ctor(Map_MapVersionConversionResult_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


