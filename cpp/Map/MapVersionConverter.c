// Type: Map.MapVersionConverter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Map/MapVersionConverter.cs
// Prior real C# source: none
// --------------------------------

// Map.MapVersionConverter.<>c$$.cctor
// il2cpp: void Map_MapVersionConverter___c___cctor (const MethodInfo* method);
// 0x59a5b00

void Map_MapVersionConverter___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545aae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConverter_c);
    Il2CppMethodInitialized_07545aae = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapVersionConverter_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Map_MapVersionConverter_c->static_fields->__9 = (Map_MapVersionConverter___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapVersionConverter_c->static_fields->__9);
  return;
}


// Map.MapVersionConverter.<>c$$.ctor
// il2cpp: void Map_MapVersionConverter___c___ctor (Map_MapVersionConverter___c_o* __this, const MethodInfo* method);
// 0x59a5b70

void Map_MapVersionConverter___c___ctor(Map_MapVersionConverter___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapVersionConverter.<>c$$<get_SupportedVersions>b__3_0
// il2cpp: System_String_o* Map_MapVersionConverter___c___get_SupportedVersions_b__3_0 (Map_MapVersionConverter___c_o* __this, Map_IMapVersionConverter_o* converter, const MethodInfo* method);
// 0x59a5b80

System_String_o *
Map_MapVersionConverter___c___get_SupportedVersions_b__3_0
          (Map_MapVersionConverter___c_o *__this,Map_IMapVersionConverter_o *converter,MethodInfo *method)

{
  Map_IMapVersionConverter_c *pMVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  VirtualInvokeData *pVVar3;
  System_String_o *pSVar4;
  ulong uVar5;
  long lVar6;
  
  if (Il2CppMethodInitialized_07545aaf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_IMapVersionConverter);
    Il2CppMethodInitialized_07545aaf = '\x01';
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
        pVVar3 = pMVar1->vtable + *(int *)((long)&pIVar2->offset + lVar6);
        goto label_059a5bfd;
      }
      lVar6 = lVar6 + 0x10;
    } while (uVar5 * 0x10 != lVar6);
  }
  pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)converter,(Il2CppClass *)TypeInfo_Map_IMapVersionConverter,0);
label_059a5bfd:
  pSVar4 = (*pVVar3->methodPtr)((Il2CppObject *)converter,pVVar3->method);
  return pSVar4;
}


// Map.MapVersionConverter.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Map_MapVersionConverter___c__DisplayClass4_0___ctor (Map_MapVersionConverter___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x59a52d0

void Map_MapVersionConverter___c__DisplayClass4_0___ctor
               (Map_MapVersionConverter___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapVersionConverter.<>c__DisplayClass4_0$$<UpgradeToCurrent>b__0
// il2cpp: bool Map_MapVersionConverter___c__DisplayClass4_0___UpgradeToCurrent_b__0 (Map_MapVersionConverter___c__DisplayClass4_0_o* __this, Map_IMapVersionConverter_o* candidate, const MethodInfo* method);
// 0x59a5c10

bool Map_MapVersionConverter___c__DisplayClass4_0___UpgradeToCurrent_b__0
               (Map_MapVersionConverter___c__DisplayClass4_0_o *__this,Map_IMapVersionConverter_o *candidate,
               MethodInfo *method)

{
  Map_IMapVersionConverter_c *pMVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Map_MapScript_o *pMVar3;
  Map_MapScriptOptions_o *pMVar4;
  bool bVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *a;
  ulong uVar7;
  long lVar8;
  
  if (Il2CppMethodInitialized_07545ab0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_IMapVersionConverter);
    Il2CppMethodInitialized_07545ab0 = '\x01';
  }
  if (candidate != (Map_IMapVersionConverter_o *)0x0) {
    pMVar1 = candidate->klass;
    uVar7 = (ulong)(pMVar1->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar2 = (pMVar1->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(Map_IMapVersionConverter_c **)((long)&pIVar2->interfaceType + lVar8) ==
            TypeInfo_Map_IMapVersionConverter) {
          pVVar6 = pMVar1->vtable + *(int *)((long)&pIVar2->offset + lVar8);
          goto label_059a5ca1;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)candidate,(Il2CppClass *)TypeInfo_Map_IMapVersionConverter,0);
label_059a5ca1:
    a = (*pVVar6->methodPtr)((Il2CppObject *)candidate,pVVar6->method);
    pMVar3 = (__this->fields).mapScript;
    if ((pMVar3 != (Map_MapScript_o *)0x0) &&
       (pMVar4 = (pMVar3->fields).Options, pMVar4 != (Map_MapScriptOptions_o *)0x0)) {
      bVar5 = System_String__op_Equality(a,(pMVar4->fields).EditorVersion,(MethodInfo *)0x0);
      return bVar5;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapVersionConverter.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Map_MapVersionConverter___c__DisplayClass5_0___ctor (Map_MapVersionConverter___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x59a59b0

void Map_MapVersionConverter___c__DisplayClass5_0___ctor
               (Map_MapVersionConverter___c__DisplayClass5_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapVersionConverter.<>c__DisplayClass5_0$$<Downgrade>b__0
// il2cpp: bool Map_MapVersionConverter___c__DisplayClass5_0___Downgrade_b__0 (Map_MapVersionConverter___c__DisplayClass5_0_o* __this, Map_IMapVersionConverter_o* candidate, const MethodInfo* method);
// 0x59a5ce0

bool Map_MapVersionConverter___c__DisplayClass5_0___Downgrade_b__0
               (Map_MapVersionConverter___c__DisplayClass5_0_o *__this,Map_IMapVersionConverter_o *candidate,
               MethodInfo *method)

{
  Map_IMapVersionConverter_c *pMVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Map_MapScript_o *pMVar3;
  Map_MapScriptOptions_o *pMVar4;
  bool bVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *a;
  ulong uVar7;
  long lVar8;
  
  if (Il2CppMethodInitialized_07545ab1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_IMapVersionConverter);
    Il2CppMethodInitialized_07545ab1 = '\x01';
  }
  if (candidate != (Map_IMapVersionConverter_o *)0x0) {
    pMVar1 = candidate->klass;
    uVar7 = (ulong)(pMVar1->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar2 = (pMVar1->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(Map_IMapVersionConverter_c **)((long)&pIVar2->interfaceType + lVar8) ==
            TypeInfo_Map_IMapVersionConverter) {
          pVVar6 = pMVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar8) + 1);
          goto label_059a5d78;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)candidate,(Il2CppClass *)TypeInfo_Map_IMapVersionConverter,1);
label_059a5d78:
    a = (*pVVar6->methodPtr)((Il2CppObject *)candidate,pVVar6->method);
    pMVar3 = (__this->fields).mapScript;
    if ((pMVar3 != (Map_MapScript_o *)0x0) &&
       (pMVar4 = (pMVar3->fields).Options, pMVar4 != (Map_MapScriptOptions_o *)0x0)) {
      bVar5 = System_String__op_Equality(a,(pMVar4->fields).EditorVersion,(MethodInfo *)0x0);
      return bVar5;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapVersionConverter$$get_SupportedVersions
// il2cpp: System_String_array* Map_MapVersionConverter__get_SupportedVersions (const MethodInfo* method);
// 0x59a50d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a51a9: jmp 0x59a51c4

System_String_array * Map_MapVersionConverter__get_SupportedVersions(MethodInfo *method)

{
  System_Collections_Generic_List_IMapVersionConverter__o *source;
  Map_MapVersionConverter___c_StaticFields *pMVar1;
  System_Func_IMapVersionConverter__string__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *first;
  Il2CppObject *pIVar2;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar3;
  System_String_array *pSVar4;
  
  if (Il2CppMethodInitialized_07545aaa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Concat_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Distinct_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_IMapVersionConverter_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_IMapVersionConverter_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConverter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_MapVersionConverter_c_get_SupportedVersions_b__3_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConverter_c);
    il2cpp_codegen_initialize_runtime_metadata(&"1.1");
    Il2CppMethodInitialized_07545aaa = '\x01';
  }
  if ((TypeInfo_Map_MapVersionConverter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapVersionConverter);
  }
  source = TypeInfo_Map_MapVersionConverter->static_fields->Converters;
  if ((TypeInfo_Map_MapVersionConverter_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapVersionConverter_c);
    pMVar1 = TypeInfo_Map_MapVersionConverter_c->static_fields;
    __this = pMVar1->__9__3_0;
  }
  else {
    pMVar1 = TypeInfo_Map_MapVersionConverter_c->static_fields;
    __this = pMVar1->__9__3_0;
  }
  if (__this == (System_Func_IMapVersionConverter__string__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Map_MapVersionConverter_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapVersionConverter_c);
      pMVar1 = TypeInfo_Map_MapVersionConverter_c->static_fields;
    }
    pIVar2 = (Il2CppObject *)pMVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_IMapVersionConverter_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this,pIVar2,
               (intptr_t)MethodInfo_Map_MapVersionConverter_c_get_SupportedVersions_b__3_0,
               (MethodInfo_4F19B50 *)0x0);
    pMVar1 = TypeInfo_Map_MapVersionConverter_c->static_fields;
    pMVar1->__9__3_0 = __this;
    Il2CppCodeGenWriteBarrier(&pMVar1->__9__3_0);
  }
  first = System_Linq_Enumerable__Select_object__object_
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                     (System_Func_TSource__TResult__o *)__this,
                     (MethodInfo_34F60F0 *)
                     MethodInfo_System_Linq_Enumerable_Select_IMapVersionConverter_string);
  pIVar2 = SZArrayNew(TypeInfo_string_array,1);
  if (pIVar2 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if (*(int *)&pIVar2[1].monitor == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar2[2].klass = (Il2CppClass *)"1.1";
  Il2CppCodeGenWriteBarrier(&pIVar2[2].klass);
  pSVar3 = System_Linq_Enumerable__Concat_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)first,
                      (System_Collections_Generic_IEnumerable_TSource__o *)pIVar2,
                      (MethodInfo_34E5C10 *)MethodInfo_System_Linq_Enumerable_Concat_string);
  pSVar3 = System_Linq_Enumerable__Distinct_object_
                     (pSVar3,(MethodInfo_34E8B20 *)MethodInfo_System_Linq_Enumerable_Distinct_string);
  pSVar4 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     (pSVar3,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar4;
}


// Map.MapVersionConverter$$UpgradeToCurrent
// il2cpp: Map_MapVersionConversionResult_o* Map_MapVersionConverter__UpgradeToCurrent (Map_MapScript_o* mapScript, const MethodInfo* method);
// 0x59a3000
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a317d: jmp 0x59a3431
// asm:   0x59a323f: nop 

Map_MapVersionConversionResult_o *
Map_MapVersionConverter__UpgradeToCurrent(Map_MapScript_o *mapScript,MethodInfo *method)

{
  Map_MapVersionConverter___c__DisplayClass4_0_Fields *targetAddress;
  int32_t *piVar1;
  uint uVar2;
  Map_MapScriptOptions_o *pMVar3;
  System_Collections_Generic_List_IMapVersionConverter__o *source;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_Object_array *pSVar5;
  bool bVar6;
  Map_MapVersionConverter___c__DisplayClass4_0_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_Func_IMapVersionConverter__bool__o *__this_01;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  Map_MapScript_o *pMVar9;
  Map_MapVersionConversionResult_o *__this_02;
  System_String_o *str2;
  System_String_o *pSVar10;
  Il2CppClass *pIVar11;
  System_InvalidOperationException_o *__this_03;
  MethodInfo *pMVar12;
  System_ArgumentNullException_o *__this_04;
  ulong uVar13;
  long lVar14;
  System_Func_IMapVersionConverter__bool__o **targetAddress_00;
  
  if (Il2CppMethodInitialized_07545aab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_IMapVersionConverter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_IMapVersionConverter_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_IMapVersionConverter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_IMapVersionConverter_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_IMapVersionConverter_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_IMapVersionConverter)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConversionResult);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConverter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_MapVersionConverter_c__DisplayClass4_0_UpgradeToCurrent_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConverter_c__DisplayClass4_0);
    il2cpp_codegen_initialize_runtime_metadata(&"1.1");
    Il2CppMethodInitialized_07545aab = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapVersionConverter_c__DisplayClass4_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Map_MapVersionConverter___c__DisplayClass4_0_o *)0x0) {
    targetAddress = &__this->fields;
    (__this->fields).mapScript = mapScript;
    Il2CppCodeGenWriteBarrier(&targetAddress->mapScript);
    pMVar9 = (__this->fields).mapScript;
    if (pMVar9 == (Map_MapScript_o *)0x0) {
      pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentNullException);
      __this_04 = (System_ArgumentNullException_o *)il2cpp_codegen_object_new(pIVar11);
      pSVar10 = il2cpp_codegen_get_runtime_metadata(&"mapScript");
      System_ArgumentNullException___ctor_5410f50(__this_04,pSVar10,(MethodInfo *)0x0);
      pMVar12 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_MapVersionConverter_UpgradeToCurrent);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,pMVar12);
    }
    pMVar3 = (pMVar9->fields).Options;
    if (pMVar3 != (Map_MapScriptOptions_o *)0x0) {
      pSVar10 = (pMVar3->fields).EditorVersion;
      __this_00 = (System_Collections_Generic_List_object__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_IMapVersionConverter);
      System_Collections_Generic_List_object____ctor
                (__this_00,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_IMapVersionConverter_ctor);
      pMVar9 = targetAddress->mapScript;
      if (pMVar9 != (Map_MapScript_o *)0x0) {
        targetAddress_00 = &(__this->fields).__9__0;
label_059a338d:
        do {
          pMVar3 = (pMVar9->fields).Options;
          if (pMVar3 == (Map_MapScriptOptions_o *)0x0) break;
          bVar6 = System_String__op_Inequality
                            ((pMVar3->fields).EditorVersion,"1.1",(MethodInfo *)0x0);
          if (!bVar6) {
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapVersionConversionResult);
            System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
            if (__this_02 != (Map_MapVersionConversionResult_o *)0x0) {
              (__this_02->fields)._OriginalVersion_k__BackingField = pSVar10;
              Il2CppCodeGenWriteBarrier(&(__this_02->fields)._OriginalVersion_k__BackingField);
              if ((targetAddress->mapScript != (Map_MapScript_o *)0x0) &&
                 (pMVar3 = (targetAddress->mapScript->fields).Options, pMVar3 != (Map_MapScriptOptions_o *)0x0
                 )) {
                (__this_02->fields)._FinalVersion_k__BackingField = (pMVar3->fields).EditorVersion;
                Il2CppCodeGenWriteBarrier(&(__this_02->fields)._FinalVersion_k__BackingField);
                (__this_02->fields)._Converters_k__BackingField =
                     (System_Collections_Generic_IReadOnlyList_IMapVersionConverter__o *)__this_00;
                Il2CppCodeGenWriteBarrier(&(__this_02->fields)._Converters_k__BackingField);
                return __this_02;
              }
            }
            break;
          }
          if ((TypeInfo_Map_MapVersionConverter->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapVersionConverter);
          }
          source = TypeInfo_Map_MapVersionConverter->static_fields->Converters;
          __this_01 = *targetAddress_00;
          if (__this_01 == (System_Func_IMapVersionConverter__bool__o *)0x0) {
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_IMapVersionConverter_bool);
            System_Func_object__bool____ctor
                      ((System_Func_object__bool__o *)__this_01,(Il2CppObject *)__this,
                       (intptr_t)MethodInfo_Map_MapVersionConverter_c__DisplayClass4_0_UpgradeToCurrent_b__0,
                       (MethodInfo_4F19300 *)0x0);
            (__this->fields).__9__0 = __this_01;
            Il2CppCodeGenWriteBarrier(targetAddress_00);
          }
          obj = (Il2CppObject *)
                System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__bool__o *)__this_01,
                           (MethodInfo_34ED9E0 *)
                           MethodInfo_System_Linq_Enumerable_FirstOrDefault_IMapVersionConverter);
          if (obj == (Il2CppObject *)0x0) {
            NullCheck(__this);
            pMVar9 = (__this->fields).mapScript;
            NullCheck(pMVar9);
            pMVar3 = (pMVar9->fields).Options;
            NullCheck(pMVar3);
            pSVar10 = (pMVar3->fields).EditorVersion;
            pSVar8 = il2cpp_codegen_get_runtime_metadata(&"No map converter is registered from editor version ");
            str2 = il2cpp_codegen_get_runtime_metadata(&" to 1.1.");
            pSVar10 = System_String__Concat_5301f10(pSVar8,pSVar10,str2,(MethodInfo *)0x0);
            pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
            __this_03 = (System_InvalidOperationException_o *)il2cpp_codegen_object_new(pIVar11);
            System_InvalidOperationException___ctor_54b9a80(__this_03,pSVar10,(MethodInfo *)0x0);
            pMVar12 = il2cpp_codegen_get_runtime_metadata
                                (&MethodInfo_Map_MapVersionConverter_UpgradeToCurrent);
            il2cpp_codegen_raise_exception((Il2CppObject *)__this_03,pMVar12);
          }
          pMVar9 = targetAddress->mapScript;
          pIVar11 = obj->klass;
          uVar13 = (ulong)(pIVar11->_2).interface_offsets_count;
          if (uVar13 != 0) {
            pIVar4 = (pIVar11->_1).interfaceOffsets;
            lVar14 = 0;
            do {
              if (*(Map_IMapVersionConverter_c **)((long)&pIVar4->interfaceType + lVar14) ==
                  TypeInfo_Map_IMapVersionConverter) {
                pVVar7 = pIVar11->vtable + (*(int *)((long)&pIVar4->offset + lVar14) + 4);
                goto label_059a3277;
              }
              lVar14 = lVar14 + 0x10;
            } while (uVar13 * 0x10 != lVar14);
          }
          pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                             (obj,(Il2CppClass *)TypeInfo_Map_IMapVersionConverter,4);
label_059a3277:
          (*pVVar7->methodPtr)(obj,pMVar9,pVVar7->method);
          if (targetAddress->mapScript == (Map_MapScript_o *)0x0) break;
          pMVar3 = (targetAddress->mapScript->fields).Options;
          pIVar11 = obj->klass;
          uVar13 = (ulong)(pIVar11->_2).interface_offsets_count;
          if (uVar13 != 0) {
            pIVar4 = (pIVar11->_1).interfaceOffsets;
            lVar14 = 0;
            do {
              if (*(Map_IMapVersionConverter_c **)((long)&pIVar4->interfaceType + lVar14) ==
                  TypeInfo_Map_IMapVersionConverter) {
                pVVar7 = pIVar11->vtable + (*(int *)((long)&pIVar4->offset + lVar14) + 1);
                goto label_059a3307;
              }
              lVar14 = lVar14 + 0x10;
            } while (uVar13 * 0x10 != lVar14);
          }
          pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                             (obj,(Il2CppClass *)TypeInfo_Map_IMapVersionConverter,1);
label_059a3307:
          pSVar8 = (*pVVar7->methodPtr)(obj,pVVar7->method);
          if (pMVar3 == (Map_MapScriptOptions_o *)0x0) break;
          (pMVar3->fields).EditorVersion = pSVar8;
          Il2CppCodeGenWriteBarrier(&(pMVar3->fields).EditorVersion);
          pMVar12 = MethodInfo_System_Collections_Generic_List_IMapVersionConverter_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) break;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_00->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) break;
          uVar2 = (__this_00->fields)._size;
          if ((uint)pSVar5->max_length <= uVar2) {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,obj,(MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
            pMVar9 = targetAddress->mapScript;
            if (pMVar9 == (Map_MapScript_o *)0x0) break;
            goto label_059a338d;
          }
          (__this_00->fields)._size = uVar2 + 1;
          pSVar5->m_Items[(int)uVar2] = obj;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
          pMVar9 = targetAddress->mapScript;
        } while (pMVar9 != (Map_MapScript_o *)0x0);
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapVersionConverter$$Downgrade
// il2cpp: Map_MapVersionConversionResult_o* Map_MapVersionConverter__Downgrade (Map_MapScript_o* mapScript, System_String_o* targetVersion, const MethodInfo* method);
// 0x59a52e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a545e: jmp 0x59a5789
// asm:   0x59a55ad: nop dword ptr [rax]

Map_MapVersionConversionResult_o *
Map_MapVersionConverter__Downgrade
          (Map_MapScript_o *mapScript,System_String_o *targetVersion,MethodInfo *method)

{
  Map_MapVersionConverter___c__DisplayClass5_0_Fields *targetAddress;
  int32_t *piVar1;
  uint uVar2;
  Map_MapScriptOptions_o *pMVar3;
  System_Collections_Generic_List_IMapVersionConverter__o *source;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_Object_array *pSVar5;
  bool bVar6;
  Map_MapVersionConverter___c__DisplayClass5_0_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_Func_IMapVersionConverter__bool__o *__this_01;
  Il2CppObject *pIVar7;
  VirtualInvokeData *pVVar8;
  System_String_o *pSVar9;
  Map_MapScript_o *pMVar10;
  Map_MapVersionConversionResult_o *__this_02;
  Il2CppClass *pIVar11;
  System_String_array *values;
  Il2CppObject *pIVar12;
  void *pvVar13;
  System_String_o *pSVar14;
  System_InvalidOperationException_o *__this_03;
  MethodInfo *pMVar15;
  System_ArgumentNullException_o *__this_04;
  System_Func_IMapVersionConverter__bool__o **targetAddress_00;
  ulong uVar16;
  long lVar17;
  System_String_o **metadataPointer;
  
  if (Il2CppMethodInitialized_07545aac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_IMapVersionConverter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_IMapVersionConverter_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_IMapVersionConverter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_IMapVersionConverter_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_IMapVersionConverter_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_IMapVersionConverter)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConversionResult);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConverter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_MapVersionConverter_c__DisplayClass5_0_Downgrade_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConverter_c__DisplayClass5_0);
    Il2CppMethodInitialized_07545aac = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapVersionConverter_c__DisplayClass5_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Map_MapVersionConverter___c__DisplayClass5_0_o *)0x0) {
    targetAddress = &__this->fields;
    (__this->fields).mapScript = mapScript;
    Il2CppCodeGenWriteBarrier(&targetAddress->mapScript);
    pMVar10 = (__this->fields).mapScript;
    if (pMVar10 == (Map_MapScript_o *)0x0) {
      pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentNullException);
      __this_04 = (System_ArgumentNullException_o *)il2cpp_codegen_object_new(pIVar11);
      pSVar14 = il2cpp_codegen_get_runtime_metadata(&"mapScript");
      System_ArgumentNullException___ctor_5410f50(__this_04,pSVar14,(MethodInfo *)0x0);
      pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_MapVersionConverter_Downgrade);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,pMVar15);
    }
    pMVar3 = (pMVar10->fields).Options;
    if (pMVar3 != (Map_MapScriptOptions_o *)0x0) {
      pSVar14 = (pMVar3->fields).EditorVersion;
      __this_00 = (System_Collections_Generic_List_object__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_IMapVersionConverter);
      System_Collections_Generic_List_object____ctor
                (__this_00,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_IMapVersionConverter_ctor);
      pMVar10 = targetAddress->mapScript;
      if (pMVar10 != (Map_MapScript_o *)0x0) {
        targetAddress_00 = &(__this->fields).__9__0;
label_059a56e9:
        do {
          pMVar3 = (pMVar10->fields).Options;
          if (pMVar3 == (Map_MapScriptOptions_o *)0x0) break;
          bVar6 = System_String__op_Inequality((pMVar3->fields).EditorVersion,targetVersion,(MethodInfo *)0x0)
          ;
          if (!bVar6) {
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapVersionConversionResult);
            System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
            if (__this_02 != (Map_MapVersionConversionResult_o *)0x0) {
              (__this_02->fields)._OriginalVersion_k__BackingField = pSVar14;
              Il2CppCodeGenWriteBarrier(&(__this_02->fields)._OriginalVersion_k__BackingField);
              if ((targetAddress->mapScript != (Map_MapScript_o *)0x0) &&
                 (pMVar3 = (targetAddress->mapScript->fields).Options, pMVar3 != (Map_MapScriptOptions_o *)0x0
                 )) {
                (__this_02->fields)._FinalVersion_k__BackingField = (pMVar3->fields).EditorVersion;
                Il2CppCodeGenWriteBarrier(&(__this_02->fields)._FinalVersion_k__BackingField);
                (__this_02->fields)._Converters_k__BackingField =
                     (System_Collections_Generic_IReadOnlyList_IMapVersionConverter__o *)__this_00;
                Il2CppCodeGenWriteBarrier(&(__this_02->fields)._Converters_k__BackingField);
                return __this_02;
              }
            }
            break;
          }
          if ((TypeInfo_Map_MapVersionConverter->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapVersionConverter);
          }
          source = TypeInfo_Map_MapVersionConverter->static_fields->Converters;
          __this_01 = *targetAddress_00;
          if (__this_01 == (System_Func_IMapVersionConverter__bool__o *)0x0) {
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_IMapVersionConverter_bool);
            System_Func_object__bool____ctor
                      ((System_Func_object__bool__o *)__this_01,(Il2CppObject *)__this,
                       (intptr_t)MethodInfo_Map_MapVersionConverter_c__DisplayClass5_0_Downgrade_b__0,
                       (MethodInfo_4F19300 *)0x0);
            (__this->fields).__9__0 = __this_01;
            Il2CppCodeGenWriteBarrier(targetAddress_00);
          }
          pIVar7 = (Il2CppObject *)
                   System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                             ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                              (System_Func_TSource__bool__o *)__this_01,
                              (MethodInfo_34ED9E0 *)
                              MethodInfo_System_Linq_Enumerable_FirstOrDefault_IMapVersionConverter);
          if (pIVar7 == (Il2CppObject *)0x0) {
            pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_string_array);
            values = (System_String_array *)SZArrayNew(pIVar11,5);
            NullCheck(values);
            pIVar7 = il2cpp_codegen_get_runtime_metadata(&"No map converter is registered from editor version ");
            il2cpp_codegen_array_set_ref((System_Array_o *)values,0,pIVar7);
            NullCheck(__this);
            pMVar10 = (__this->fields).mapScript;
            NullCheck(pMVar10);
            pMVar3 = (pMVar10->fields).Options;
            NullCheck(pMVar3);
            il2cpp_codegen_array_set_ref
                      ((System_Array_o *)values,1,(Il2CppObject *)(pMVar3->fields).EditorVersion);
            pIVar7 = il2cpp_codegen_get_runtime_metadata(&" to ");
            il2cpp_codegen_array_set_ref((System_Array_o *)values,2,pIVar7);
            il2cpp_codegen_array_set_ref((System_Array_o *)values,3,(Il2CppObject *)targetVersion);
            metadataPointer = &".";
label_059a58ff:
            pIVar7 = il2cpp_codegen_get_runtime_metadata(metadataPointer);
            il2cpp_codegen_array_set_ref((System_Array_o *)values,4,pIVar7);
            pSVar14 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
            pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
            __this_03 = (System_InvalidOperationException_o *)il2cpp_codegen_object_new(pIVar11);
            System_InvalidOperationException___ctor_54b9a80(__this_03,pSVar14,(MethodInfo *)0x0);
            pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_MapVersionConverter_Downgrade);
            il2cpp_codegen_raise_exception((Il2CppObject *)__this_03,pMVar15);
          }
          pIVar11 = pIVar7->klass;
          uVar16 = (ulong)(pIVar11->_2).interface_offsets_count;
          if (uVar16 != 0) {
            pIVar4 = (pIVar11->_1).interfaceOffsets;
            lVar17 = 0;
            do {
              if (*(Map_IMapVersionConverter_c **)((long)&pIVar4->interfaceType + lVar17) ==
                  TypeInfo_Map_IMapVersionConverter) {
                pVVar8 = pIVar11->vtable + (*(int *)((long)&pIVar4->offset + lVar17) + 2);
                goto label_059a5578;
              }
              lVar17 = lVar17 + 0x10;
            } while (uVar16 * 0x10 != lVar17);
          }
          pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                             (pIVar7,(Il2CppClass *)TypeInfo_Map_IMapVersionConverter,2);
label_059a5578:
          bVar6 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
          if (!bVar6) {
            pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_string_array);
            values = (System_String_array *)SZArrayNew(pIVar11,5);
            NullCheck(values);
            pIVar12 = il2cpp_codegen_get_runtime_metadata(&"Map conversion from ");
            il2cpp_codegen_array_set_ref((System_Array_o *)values,0,pIVar12);
            NullCheck(pIVar7);
            pvVar13 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_Map_IMapVersionConverter);
            pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02c13830(0,pvVar13,pIVar7);
            il2cpp_codegen_array_set_ref((System_Array_o *)values,1,pIVar12);
            pIVar12 = il2cpp_codegen_get_runtime_metadata(&" to ");
            il2cpp_codegen_array_set_ref((System_Array_o *)values,2,pIVar12);
            NullCheck(pIVar7);
            pvVar13 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_Map_IMapVersionConverter);
            pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02c13830(1,pvVar13,pIVar7);
            il2cpp_codegen_array_set_ref((System_Array_o *)values,3,pIVar7);
            metadataPointer = &" is not reversible.";
            goto label_059a58ff;
          }
          pMVar10 = targetAddress->mapScript;
          pIVar11 = pIVar7->klass;
          uVar16 = (ulong)(pIVar11->_2).interface_offsets_count;
          if (uVar16 != 0) {
            pIVar4 = (pIVar11->_1).interfaceOffsets;
            lVar17 = 0;
            do {
              if (*(Map_IMapVersionConverter_c **)((long)&pIVar4->interfaceType + lVar17) ==
                  TypeInfo_Map_IMapVersionConverter) {
                pVVar8 = pIVar11->vtable + (*(int *)((long)&pIVar4->offset + lVar17) + 5);
                goto label_059a55e7;
              }
              lVar17 = lVar17 + 0x10;
            } while (uVar16 * 0x10 != lVar17);
          }
          pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                             (pIVar7,(Il2CppClass *)TypeInfo_Map_IMapVersionConverter,5);
label_059a55e7:
          (*pVVar8->methodPtr)(pIVar7,pMVar10,pVVar8->method);
          if (targetAddress->mapScript == (Map_MapScript_o *)0x0) break;
          pMVar3 = (targetAddress->mapScript->fields).Options;
          pIVar11 = pIVar7->klass;
          uVar16 = (ulong)(pIVar11->_2).interface_offsets_count;
          if (uVar16 != 0) {
            pIVar4 = (pIVar11->_1).interfaceOffsets;
            lVar17 = 0;
            do {
              if (*(Map_IMapVersionConverter_c **)((long)&pIVar4->interfaceType + lVar17) ==
                  TypeInfo_Map_IMapVersionConverter) {
                pVVar8 = pIVar11->vtable + *(int *)((long)&pIVar4->offset + lVar17);
                goto label_059a5663;
              }
              lVar17 = lVar17 + 0x10;
            } while (uVar16 * 0x10 != lVar17);
          }
          pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                             (pIVar7,(Il2CppClass *)TypeInfo_Map_IMapVersionConverter,0);
label_059a5663:
          pSVar9 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
          if (pMVar3 == (Map_MapScriptOptions_o *)0x0) break;
          (pMVar3->fields).EditorVersion = pSVar9;
          Il2CppCodeGenWriteBarrier(&(pMVar3->fields).EditorVersion);
          pMVar15 = MethodInfo_System_Collections_Generic_List_IMapVersionConverter_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) break;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_00->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) break;
          uVar2 = (__this_00->fields)._size;
          if ((uint)pSVar5->max_length <= uVar2) {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,pIVar7,(MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
            pMVar10 = targetAddress->mapScript;
            if (pMVar10 == (Map_MapScript_o *)0x0) break;
            goto label_059a56e9;
          }
          (__this_00->fields)._size = uVar2 + 1;
          pSVar5->m_Items[(int)uVar2] = pIVar7;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
          pMVar10 = targetAddress->mapScript;
        } while (pMVar10 != (Map_MapScript_o *)0x0);
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapVersionConverter$$.cctor
// il2cpp: void Map_MapVersionConverter___cctor (const MethodInfo* method);
// 0x59a59c0

void Map_MapVersionConverter___cctor(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_object__o *__this;
  Il2CppObject *__this_00;
  
  if (Il2CppMethodInitialized_07545aad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_IMapVersionConverter_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_IMapVersionConverter_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_IMapVersionConverter)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConverter1_0To1_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConverter);
    Il2CppMethodInitialized_07545aad = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_IMapVersionConverter);
  System_Collections_Generic_List_object____ctor
            (__this,(MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_IMapVersionConverter_ctor
            );
  __this_00 = (Il2CppObject *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapVersionConverter1_0To1_1);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  pMVar4 = MethodInfo_System_Collections_Generic_List_IMapVersionConverter_Add;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = __this_00;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this,__this_00,(MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      TypeInfo_Map_MapVersionConverter->static_fields->Converters =
           (System_Collections_Generic_List_IMapVersionConverter__o *)__this;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapVersionConverter->static_fields->Converters);
      return;
    }
  }
  ThrowNullReferenceException();
}


