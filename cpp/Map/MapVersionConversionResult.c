// Type: Map.MapVersionConversionResult
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Map/MapVersionConversionResult.cs
// Prior real C# source: none
// --------------------------------

// Map.MapVersionConversionResult.<>c$$.cctor
// il2cpp: void Map_MapVersionConversionResult___c___cctor (const MethodInfo* method);
// 0x181ee3e80

void Map_MapVersionConversionResult___c___cctor(MethodInfo *method)

{
  Map_MapVersionConversionResult___c_o *__this;
  
  if (Il2CppMethodInitialized_18434510f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConversionResult_c);
    Il2CppMethodInitialized_18434510f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapVersionConversionResult_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Map_MapVersionConversionResult_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapVersionConversionResult_c->static_fields->__9,__this);
  return;
}


// Map.MapVersionConversionResult.<>c$$.ctor
// il2cpp: void Map_MapVersionConversionResult___c___ctor (Map_MapVersionConversionResult___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_MapVersionConversionResult___c___ctor(Map_MapVersionConversionResult___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapVersionConversionResult.<>c$$<get_IsReversible>b__15_0
// il2cpp: bool Map_MapVersionConversionResult___c___get_IsReversible_b__15_0 (Map_MapVersionConversionResult___c_o* __this, Map_IMapVersionConverter_o* converter, const MethodInfo* method);
// 0x181ee3420

bool Map_MapVersionConversionResult___c___get_IsReversible_b__15_0
               (Map_MapVersionConversionResult___c_o *__this,Map_IMapVersionConverter_o *converter,
               MethodInfo *method)

{
  void *pvVar1;
  
  if (Il2CppMethodInitialized_184345110 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_IMapVersionConverter);
    Il2CppMethodInitialized_184345110 = '\x01';
  }
  if (converter != (Map_IMapVersionConverter_o *)0x0) {
    pvVar1 = InterfaceInvoker0_Invoke
                       (2,(Il2CppClass *)TypeInfo_Map_IMapVersionConverter,(Il2CppObject *)converter);
    return SUB81(pvVar1,0);
  }
  ThrowNullReferenceException();
}


// Map.MapVersionConversionResult$$get_OriginalVersion
// il2cpp: System_String_o* Map_MapVersionConversionResult__get_OriginalVersion (Map_MapVersionConversionResult_o* __this, const MethodInfo* method);
// 0x1808fb3a0

System_String_o*
Map_MapVersionConversionResult__get_OriginalVersion(Map_MapVersionConversionResult_o* __this, MethodInfo* method)

{
  return (__this->fields)._OriginalVersion_k__BackingField;
}


// Map.MapVersionConversionResult$$set_OriginalVersion
// il2cpp: void Map_MapVersionConversionResult__set_OriginalVersion (Map_MapVersionConversionResult_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180b8ac00

void
Map_MapVersionConversionResult__set_OriginalVersion(Map_MapVersionConversionResult_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._OriginalVersion_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._OriginalVersion_k__BackingField,value);
  return;
}


// Map.MapVersionConversionResult$$get_FinalVersion
// il2cpp: System_String_o* Map_MapVersionConversionResult__get_FinalVersion (Map_MapVersionConversionResult_o* __this, const MethodInfo* method);
// 0x180573e90

System_String_o*
Map_MapVersionConversionResult__get_FinalVersion(Map_MapVersionConversionResult_o* __this, MethodInfo* method)

{
  return (__this->fields)._FinalVersion_k__BackingField;
}


// Map.MapVersionConversionResult$$set_FinalVersion
// il2cpp: void Map_MapVersionConversionResult__set_FinalVersion (Map_MapVersionConversionResult_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180c8de30

void
Map_MapVersionConversionResult__set_FinalVersion(Map_MapVersionConversionResult_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._FinalVersion_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._FinalVersion_k__BackingField,value);
  return;
}


// Map.MapVersionConversionResult$$get_Converters
// il2cpp: System_Collections_Generic_IReadOnlyList_IMapVersionConverter__o* Map_MapVersionConversionResult__get_Converters (Map_MapVersionConversionResult_o* __this, const MethodInfo* method);
// 0x1805852b0

System_Collections_Generic_IReadOnlyList_IMapVersionConverter__o*
Map_MapVersionConversionResult__get_Converters(Map_MapVersionConversionResult_o* __this, MethodInfo* method)

{
  return (__this->fields)._Converters_k__BackingField;
}


// Map.MapVersionConversionResult$$set_Converters
// il2cpp: void Map_MapVersionConversionResult__set_Converters (Map_MapVersionConversionResult_o* __this, System_Collections_Generic_IReadOnlyList_IMapVersionConverter__o* value, const MethodInfo* method);
// 0x180ace2f0

void
Map_MapVersionConversionResult__set_Converters(Map_MapVersionConversionResult_o* __this, System_Collections_Generic_IReadOnlyList_IMapVersionConverter__o* value, MethodInfo* method)

{
  (__this->fields)._Converters_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Converters_k__BackingField,value);
  return;
}


// Map.MapVersionConversionResult$$get_VersionCount
// il2cpp: int32_t Map_MapVersionConversionResult__get_VersionCount (Map_MapVersionConversionResult_o* __this, const MethodInfo* method);
// 0x181edd0b0

int32_t Map_MapVersionConversionResult__get_VersionCount
                  (Map_MapVersionConversionResult_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  int32_t iVar4;
  VirtualInvokeData *pVVar5;
  ushort uVar6;
  
  if (Il2CppMethodInitialized_18434510d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_IMapVersionConverter);
    Il2CppMethodInitialized_18434510d = '\x01';
  }
  obj = (Il2CppObject *)(__this->fields)._Converters_k__BackingField;
  if (obj != (Il2CppObject *)0x0) {
    pIVar2 = obj->klass;
    uVar1 = (pIVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      uVar6 = 0;
      do {
        if (pIVar3[uVar6].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyCollection_IMapVersionConverter) {
          iVar4 = (*pIVar2->vtable[pIVar3[uVar6].offset].methodPtr)
                            (obj,pIVar2->vtable[pIVar3[uVar6].offset].method);
          return iVar4;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)
                            TypeInfo_System_Collections_Generic_IReadOnlyCollection_IMapVersionConverter,0);
    iVar4 = (*pVVar5->methodPtr)(obj,pVVar5->method);
    return iVar4;
  }
  ThrowNullReferenceException();
}


// Map.MapVersionConversionResult$$get_IsReversible
// il2cpp: bool Map_MapVersionConversionResult__get_IsReversible (Map_MapVersionConversionResult_o* __this, const MethodInfo* method);
// 0x181edcf90

bool Map_MapVersionConversionResult__get_IsReversible
               (Map_MapVersionConversionResult_o *__this,MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_TSource__o *source;
  Il2CppObject *object;
  bool bVar1;
  System_Func_IMapVersionConverter__bool__o *__this_00;
  
  if (Il2CppMethodInitialized_18434510e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_All_IMapVersionConverter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_IMapVersionConverter_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_MapVersionConversionResult_c_get_IsReversible_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConversionResult_c);
    Il2CppMethodInitialized_18434510e = '\x01';
  }
  source = (System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields)._Converters_k__BackingField;
  if ((TypeInfo_Map_MapVersionConversionResult_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapVersionConversionResult_c);
  }
  __this_00 = TypeInfo_Map_MapVersionConversionResult_c->static_fields->__9__15_0;
  if (__this_00 == (System_Func_IMapVersionConverter__bool__o *)0x0) {
    if ((TypeInfo_Map_MapVersionConversionResult_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapVersionConversionResult_c);
    }
    object = (Il2CppObject *)TypeInfo_Map_MapVersionConversionResult_c->static_fields->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_IMapVersionConverter_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this_00,object,
               (intptr_t)MethodInfo_Map_MapVersionConversionResult_c_get_IsReversible_b__15_0,
               (MethodInfo_B61EB0 *)0x0);
    TypeInfo_Map_MapVersionConversionResult_c->static_fields->__9__15_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapVersionConversionResult_c->static_fields->__9__15_0,__this_00);
  }
  bVar1 = System_Linq_Enumerable__All_object_
                    (source,(System_Func_TSource__bool__o *)__this_00,
                     (MethodInfo_6B5F20 *)MethodInfo_System_Linq_Enumerable_All_IMapVersionConverter);
  return bVar1;
}


// Map.MapVersionConversionResult$$.ctor
// il2cpp: void Map_MapVersionConversionResult___ctor (Map_MapVersionConversionResult_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_MapVersionConversionResult___ctor(Map_MapVersionConversionResult_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


