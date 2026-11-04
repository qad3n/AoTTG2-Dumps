// Type: Map.MapVersionConverter
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Map/MapVersionConverter.cs
// Prior real C# source: none
// --------------------------------

// Map.MapVersionConverter.<>c$$.cctor
// il2cpp: void Map_MapVersionConverter___c___cctor (const MethodInfo* method);
// 0x181ee3cc0

void Map_MapVersionConverter___c___cctor(MethodInfo *method)

{
  Map_MapVersionConverter___c_o *__this;
  
  if (Il2CppMethodInitialized_184345115 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConverter_c);
    Il2CppMethodInitialized_184345115 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapVersionConverter_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Map_MapVersionConverter_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapVersionConverter_c->static_fields->__9,__this);
  return;
}


// Map.MapVersionConverter.<>c$$.ctor
// il2cpp: void Map_MapVersionConverter___c___ctor (Map_MapVersionConverter___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_MapVersionConverter___c___ctor(Map_MapVersionConverter___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapVersionConverter.<>c$$<get_SupportedVersions>b__3_0
// il2cpp: System_String_o* Map_MapVersionConverter___c___get_SupportedVersions_b__3_0 (Map_MapVersionConverter___c_o* __this, Map_IMapVersionConverter_o* converter, const MethodInfo* method);
// 0x181ee3470

System_String_o *
Map_MapVersionConverter___c___get_SupportedVersions_b__3_0
          (Map_MapVersionConverter___c_o *__this,Map_IMapVersionConverter_o *converter,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184345116 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_IMapVersionConverter);
    Il2CppMethodInitialized_184345116 = '\x01';
  }
  if (converter != (Map_IMapVersionConverter_o *)0x0) {
    pSVar1 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)TypeInfo_Map_IMapVersionConverter,(Il2CppObject *)converter);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// Map.MapVersionConverter.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Map_MapVersionConverter___c__DisplayClass4_0___ctor (Map_MapVersionConverter___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_MapVersionConverter___c__DisplayClass4_0___ctor(Map_MapVersionConverter___c__DisplayClass4_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapVersionConverter.<>c__DisplayClass4_0$$<UpgradeToCurrent>b__0
// il2cpp: bool Map_MapVersionConverter___c__DisplayClass4_0___UpgradeToCurrent_b__0 (Map_MapVersionConverter___c__DisplayClass4_0_o* __this, Map_IMapVersionConverter_o* candidate, const MethodInfo* method);
// 0x181ee3a70

bool Map_MapVersionConverter___c__DisplayClass4_0___UpgradeToCurrent_b__0
               (Map_MapVersionConverter___c__DisplayClass4_0_o *__this,Map_IMapVersionConverter_o *candidate,
               MethodInfo *method)

{
  Map_MapScript_o *pMVar1;
  Map_MapScriptOptions_o *pMVar2;
  bool bVar3;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_184345117 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_IMapVersionConverter);
    Il2CppMethodInitialized_184345117 = '\x01';
  }
  if (candidate != (Map_IMapVersionConverter_o *)0x0) {
    a = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_Map_IMapVersionConverter,(Il2CppObject *)candidate)
    ;
    pMVar1 = (__this->fields).mapScript;
    if ((pMVar1 != (Map_MapScript_o *)0x0) &&
       (pMVar2 = (pMVar1->fields).Options, pMVar2 != (Map_MapScriptOptions_o *)0x0)) {
      bVar3 = System_String__op_Equality(a,(pMVar2->fields).EditorVersion,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapVersionConverter.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Map_MapVersionConverter___c__DisplayClass5_0___ctor (Map_MapVersionConverter___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_MapVersionConverter___c__DisplayClass5_0___ctor(Map_MapVersionConverter___c__DisplayClass5_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapVersionConverter.<>c__DisplayClass5_0$$<Downgrade>b__0
// il2cpp: bool Map_MapVersionConverter___c__DisplayClass5_0___Downgrade_b__0 (Map_MapVersionConverter___c__DisplayClass5_0_o* __this, Map_IMapVersionConverter_o* candidate, const MethodInfo* method);
// 0x181ee3af0

bool Map_MapVersionConverter___c__DisplayClass5_0___Downgrade_b__0
               (Map_MapVersionConverter___c__DisplayClass5_0_o *__this,Map_IMapVersionConverter_o *candidate,
               MethodInfo *method)

{
  Map_MapScript_o *pMVar1;
  Map_MapScriptOptions_o *pMVar2;
  bool bVar3;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_184345118 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_IMapVersionConverter);
    Il2CppMethodInitialized_184345118 = '\x01';
  }
  if (candidate != (Map_IMapVersionConverter_o *)0x0) {
    a = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_Map_IMapVersionConverter,(Il2CppObject *)candidate)
    ;
    pMVar1 = (__this->fields).mapScript;
    if ((pMVar1 != (Map_MapScript_o *)0x0) &&
       (pMVar2 = (pMVar1->fields).Options, pMVar2 != (Map_MapScriptOptions_o *)0x0)) {
      bVar3 = System_String__op_Equality(a,(pMVar2->fields).EditorVersion,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapVersionConverter$$get_SupportedVersions
// il2cpp: System_String_array* Map_MapVersionConverter__get_SupportedVersions (const MethodInfo* method);
// 0x181ede130

System_String_array * Map_MapVersionConverter__get_SupportedVersions(MethodInfo *method)

{
  System_Collections_Generic_List_IMapVersionConverter__o *source;
  System_String_o *value;
  System_Func_IMapVersionConverter__string__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *first;
  Il2CppObject *pIVar1;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar2;
  System_String_array *pSVar3;
  
  if (Il2CppMethodInitialized_184345111 == '\0') {
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
    Il2CppMethodInitialized_184345111 = '\x01';
  }
  if ((TypeInfo_Map_MapVersionConverter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapVersionConverter);
  }
  source = TypeInfo_Map_MapVersionConverter->static_fields->Converters;
  if ((TypeInfo_Map_MapVersionConverter_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapVersionConverter_c);
  }
  __this = TypeInfo_Map_MapVersionConverter_c->static_fields->__9__3_0;
  if (__this == (System_Func_IMapVersionConverter__string__o *)0x0) {
    if ((TypeInfo_Map_MapVersionConverter_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapVersionConverter_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_Map_MapVersionConverter_c->static_fields->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_IMapVersionConverter_string);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,pIVar1,
               (intptr_t)MethodInfo_Map_MapVersionConverter_c_get_SupportedVersions_b__3_0,
               (MethodInfo_16E67D0 *)0x0);
    TypeInfo_Map_MapVersionConverter_c->static_fields->__9__3_0 = __this;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapVersionConverter_c->static_fields->__9__3_0,__this);
  }
  first = System_Linq_Enumerable__Select_Vector3__object_
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                     (System_Func_TSource__TResult__o *)__this,
                     (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_IMapVersionConverter_string
                    );
  pIVar1 = SZArrayNew(TypeInfo_string_array,1);
  value = "1.1";
  if (pIVar1 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar1[1].monitor != 0) {
      pIVar1[2].klass = (Il2CppClass *)"1.1";
      Il2CppCodeGenWriteBarrier(&pIVar1[2].klass,value);
      pSVar2 = System_Linq_Enumerable__Concat_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)first,
                          (System_Collections_Generic_IEnumerable_TSource__o *)pIVar1,
                          (MethodInfo_6B9850 *)MethodInfo_System_Linq_Enumerable_Concat_string);
      pSVar2 = System_Linq_Enumerable__Distinct_object_
                         (pSVar2,(MethodInfo_6BB280 *)MethodInfo_System_Linq_Enumerable_Distinct_string);
      pSVar3 = (System_String_array *)
               System_Linq_Enumerable__ToArray_object_
                         (pSVar2,(MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
      return pSVar3;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Map.MapVersionConverter$$UpgradeToCurrent
// il2cpp: Map_MapVersionConversionResult_o* Map_MapVersionConverter__UpgradeToCurrent (Map_MapScript_o* mapScript, const MethodInfo* method);
// 0x181eddc40

Map_MapVersionConversionResult_o *
Map_MapVersionConverter__UpgradeToCurrent(Map_MapScript_o *mapScript,MethodInfo *method)

{
  Map_MapScriptOptions_o *pMVar1;
  Map_MapScript_o *pMVar2;
  System_Collections_Generic_List_IMapVersionConverter__o *source;
  bool bVar3;
  Map_MapVersionConverter___c__DisplayClass4_0_o *object;
  System_Collections_Generic_List_IMapVersionConverter__o *__this;
  System_Func_IMapVersionConverter__bool__o *__this_00;
  Il2CppObject *obj;
  System_String_o *pSVar4;
  Map_MapVersionConversionResult_o *__this_01;
  System_String_o *str0;
  System_String_o *pSVar5;
  Il2CppClass *pIVar6;
  System_InvalidOperationException_o *__this_02;
  MethodInfo *pMVar7;
  System_ArgumentNullException_o *__this_03;
  
  if (Il2CppMethodInitialized_184345112 == '\0') {
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
    Il2CppMethodInitialized_184345112 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapVersionConverter_c__DisplayClass4_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Map_MapVersionConverter___c__DisplayClass4_0_o *)0x0) {
    (object->fields).mapScript = mapScript;
    Il2CppCodeGenWriteBarrier(&(object->fields).mapScript,mapScript);
    if ((object->fields).mapScript == (Map_MapScript_o *)0x0) {
      pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentNullException);
      __this_03 = (System_ArgumentNullException_o *)il2cpp_codegen_object_new(pIVar6);
      pSVar5 = il2cpp_codegen_get_runtime_metadata(&"mapScript");
      System_ArgumentNullException___ctor_1a77f20(__this_03,pSVar5,(MethodInfo *)0x0);
      pMVar7 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_MapVersionConverter_UpgradeToCurrent);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_03,pMVar7);
    }
    pMVar1 = (((object->fields).mapScript)->fields).Options;
    if (pMVar1 != (Map_MapScriptOptions_o *)0x0) {
      pSVar5 = (pMVar1->fields).EditorVersion;
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_IMapVersionConverter);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_IMapVersionConverter_ctor);
      while( true ) {
        pMVar2 = (object->fields).mapScript;
        if ((pMVar2 == (Map_MapScript_o *)0x0) ||
           (pMVar1 = (pMVar2->fields).Options, pMVar1 == (Map_MapScriptOptions_o *)0x0)) goto label_181eddf1e;
        bVar3 = System_String__op_Inequality
                          ((pMVar1->fields).EditorVersion,"1.1",(MethodInfo *)0x0);
        if (!bVar3) break;
        if ((TypeInfo_Map_MapVersionConverter->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapVersionConverter);
        }
        __this_00 = (object->fields).__9__0;
        source = TypeInfo_Map_MapVersionConverter->static_fields->Converters;
        if (__this_00 == (System_Func_IMapVersionConverter__bool__o *)0x0) {
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_IMapVersionConverter_bool)
          ;
          System_Predicate_object____ctor
                    ((System_Predicate_object__o *)__this_00,(Il2CppObject *)object,
                     (intptr_t)MethodInfo_Map_MapVersionConverter_c__DisplayClass4_0_UpgradeToCurrent_b__0,
                     (MethodInfo_B61EB0 *)0x0);
          (object->fields).__9__0 = __this_00;
          Il2CppCodeGenWriteBarrier(&(object->fields).__9__0,__this_00);
        }
        obj = (Il2CppObject *)
              System_Linq_Enumerable__FirstOrDefault_object__6bd2c0
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this_00,
                         (MethodInfo_6BD2C0 *)
                         MethodInfo_System_Linq_Enumerable_FirstOrDefault_IMapVersionConverter);
        if (obj == (Il2CppObject *)0x0) {
          NullCheck(object);
          pMVar2 = (object->fields).mapScript;
          NullCheck(pMVar2);
          pMVar1 = (pMVar2->fields).Options;
          NullCheck(pMVar1);
          pSVar5 = (pMVar1->fields).EditorVersion;
          pSVar4 = il2cpp_codegen_get_runtime_metadata(&" to 1.1.");
          str0 = il2cpp_codegen_get_runtime_metadata(&"No map converter is registered from editor version ");
          pSVar5 = System_String__Concat_1969b70(str0,pSVar5,pSVar4,(MethodInfo *)0x0);
          pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
          __this_02 = (System_InvalidOperationException_o *)il2cpp_codegen_object_new(pIVar6);
          System_InvalidOperationException___ctor_1b2aec0(__this_02,pSVar5,(MethodInfo *)0x0);
          pMVar7 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_MapVersionConverter_UpgradeToCurrent);
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar7);
        }
        il2cpp_runtime_helper_180014780(4,TypeInfo_Map_IMapVersionConverter,obj);
        pMVar2 = (object->fields).mapScript;
        if (pMVar2 == (Map_MapScript_o *)0x0) goto label_181eddf1e;
        pMVar1 = (pMVar2->fields).Options;
        pSVar4 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_Map_IMapVersionConverter,obj);
        if (pMVar1 == (Map_MapScriptOptions_o *)0x0) goto label_181eddf1e;
        (pMVar1->fields).EditorVersion = pSVar4;
        Il2CppCodeGenWriteBarrier(&(pMVar1->fields).EditorVersion,pSVar4);
        if (__this == (System_Collections_Generic_List_IMapVersionConverter__o *)0x0) goto label_181eddf1e;
        il2cpp_runtime_helper_180012890(__this,obj);
      }
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapVersionConversionResult);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,(MethodInfo *)0x0);
      if (__this_01 != (Map_MapVersionConversionResult_o *)0x0) {
        (__this_01->fields)._OriginalVersion_k__BackingField = pSVar5;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields)._OriginalVersion_k__BackingField,pSVar5);
        pMVar2 = (object->fields).mapScript;
        if ((pMVar2 != (Map_MapScript_o *)0x0) &&
           (pMVar1 = (pMVar2->fields).Options, pMVar1 != (Map_MapScriptOptions_o *)0x0)) {
          pSVar5 = (pMVar1->fields).EditorVersion;
          (__this_01->fields)._FinalVersion_k__BackingField = pSVar5;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields)._FinalVersion_k__BackingField,pSVar5);
          (__this_01->fields)._Converters_k__BackingField =
               (System_Collections_Generic_IReadOnlyList_IMapVersionConverter__o *)__this;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Converters_k__BackingField,__this);
          return __this_01;
        }
      }
    }
  }
label_181eddf1e:
  ThrowNullReferenceException();
}


// Map.MapVersionConverter$$Downgrade
// il2cpp: Map_MapVersionConversionResult_o* Map_MapVersionConverter__Downgrade (Map_MapScript_o* mapScript, System_String_o* targetVersion, const MethodInfo* method);
// 0x181edd690

Map_MapVersionConversionResult_o *
Map_MapVersionConverter__Downgrade
          (Map_MapScript_o *mapScript,System_String_o *targetVersion,MethodInfo *method)

{
  Map_MapScriptOptions_o *pMVar1;
  Map_MapScript_o *pMVar2;
  System_Collections_Generic_List_IMapVersionConverter__o *source;
  bool bVar3;
  Map_MapVersionConverter___c__DisplayClass5_0_o *object;
  System_Collections_Generic_List_IMapVersionConverter__o *__this;
  System_Func_IMapVersionConverter__bool__o *__this_00;
  Il2CppObject *pIVar4;
  void *pvVar5;
  System_String_o *value;
  Map_MapVersionConversionResult_o *__this_01;
  Il2CppClass *pIVar6;
  System_String_array *pSVar7;
  Il2CppObject *pIVar8;
  System_String_o *pSVar9;
  System_InvalidOperationException_o *pSVar10;
  MethodInfo *pMVar11;
  System_ArgumentNullException_o *__this_02;
  
  if (Il2CppMethodInitialized_184345113 == '\0') {
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
    Il2CppMethodInitialized_184345113 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapVersionConverter_c__DisplayClass5_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Map_MapVersionConverter___c__DisplayClass5_0_o *)0x0) {
    (object->fields).mapScript = mapScript;
    Il2CppCodeGenWriteBarrier(&(object->fields).mapScript,mapScript);
    if ((object->fields).mapScript == (Map_MapScript_o *)0x0) {
      pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentNullException);
      __this_02 = (System_ArgumentNullException_o *)il2cpp_codegen_object_new(pIVar6);
      pSVar9 = il2cpp_codegen_get_runtime_metadata(&"mapScript");
      System_ArgumentNullException___ctor_1a77f20(__this_02,pSVar9,(MethodInfo *)0x0);
      pMVar11 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_MapVersionConverter_Downgrade);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar11);
    }
    pMVar1 = (((object->fields).mapScript)->fields).Options;
    if (pMVar1 != (Map_MapScriptOptions_o *)0x0) {
      pSVar9 = (pMVar1->fields).EditorVersion;
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_IMapVersionConverter);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_IMapVersionConverter_ctor);
      while( true ) {
        pMVar2 = (object->fields).mapScript;
        if ((pMVar2 == (Map_MapScript_o *)0x0) ||
           (pMVar1 = (pMVar2->fields).Options, pMVar1 == (Map_MapScriptOptions_o *)0x0)) goto label_181edd975;
        bVar3 = System_String__op_Inequality((pMVar1->fields).EditorVersion,targetVersion,(MethodInfo *)0x0);
        if (!bVar3) break;
        if ((TypeInfo_Map_MapVersionConverter->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapVersionConverter);
        }
        __this_00 = (object->fields).__9__0;
        source = TypeInfo_Map_MapVersionConverter->static_fields->Converters;
        if (__this_00 == (System_Func_IMapVersionConverter__bool__o *)0x0) {
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_IMapVersionConverter_bool)
          ;
          System_Predicate_object____ctor
                    ((System_Predicate_object__o *)__this_00,(Il2CppObject *)object,
                     (intptr_t)MethodInfo_Map_MapVersionConverter_c__DisplayClass5_0_Downgrade_b__0,
                     (MethodInfo_B61EB0 *)0x0);
          (object->fields).__9__0 = __this_00;
          Il2CppCodeGenWriteBarrier(&(object->fields).__9__0,__this_00);
        }
        pIVar4 = (Il2CppObject *)
                 System_Linq_Enumerable__FirstOrDefault_object__6bd2c0
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                            (System_Func_TSource__bool__o *)__this_00,
                            (MethodInfo_6BD2C0 *)
                            MethodInfo_System_Linq_Enumerable_FirstOrDefault_IMapVersionConverter);
        if (pIVar4 == (Il2CppObject *)0x0) {
          pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_string_array);
          pSVar7 = (System_String_array *)SZArrayNew(pIVar6,5);
          NullCheck(pSVar7);
          pIVar4 = il2cpp_codegen_get_runtime_metadata(&"No map converter is registered from editor version ");
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar7,0,pIVar4);
          NullCheck(object);
          pMVar2 = (object->fields).mapScript;
          NullCheck(pMVar2);
          pMVar1 = (pMVar2->fields).Options;
          NullCheck(pMVar1);
          pSVar9 = (pMVar1->fields).EditorVersion;
          NullCheck(pSVar7);
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar7,1,(Il2CppObject *)pSVar9);
          NullCheck(pSVar7);
          pIVar4 = il2cpp_codegen_get_runtime_metadata(&" to ");
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar7,2,pIVar4);
          NullCheck(pSVar7);
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar7,3,(Il2CppObject *)targetVersion);
          NullCheck(pSVar7);
          pIVar4 = il2cpp_codegen_get_runtime_metadata(&".");
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar7,4,pIVar4);
          pSVar9 = System_String__Concat_1969830(pSVar7,(MethodInfo *)0x0);
          pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
          pSVar10 = (System_InvalidOperationException_o *)il2cpp_codegen_object_new(pIVar6);
          System_InvalidOperationException___ctor_1b2aec0(pSVar10,pSVar9,(MethodInfo *)0x0);
          pMVar11 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_MapVersionConverter_Downgrade);
          il2cpp_codegen_raise_exception((Il2CppObject *)pSVar10,pMVar11);
        }
        pvVar5 = InterfaceInvoker0_Invoke(2,(Il2CppClass *)TypeInfo_Map_IMapVersionConverter,pIVar4);
        if ((char)pvVar5 == '\0') {
          pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_string_array);
          pSVar7 = (System_String_array *)SZArrayNew(pIVar6,5);
          NullCheck(pSVar7);
          pIVar8 = il2cpp_codegen_get_runtime_metadata(&"Map conversion from ");
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar7,0,pIVar8);
          NullCheck(pIVar4);
          pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_Map_IMapVersionConverter);
          pIVar8 = InterfaceInvoker0_Invoke(0,pIVar6,pIVar4);
          NullCheck(pSVar7);
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar7,1,pIVar8);
          NullCheck(pSVar7);
          pIVar8 = il2cpp_codegen_get_runtime_metadata(&" to ");
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar7,2,pIVar8);
          NullCheck(pIVar4);
          pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_Map_IMapVersionConverter);
          pIVar4 = InterfaceInvoker0_Invoke(1,pIVar6,pIVar4);
          NullCheck(pSVar7);
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar7,3,pIVar4);
          NullCheck(pSVar7);
          pIVar4 = il2cpp_codegen_get_runtime_metadata(&" is not reversible.");
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar7,4,pIVar4);
          pSVar9 = System_String__Concat_1969830(pSVar7,(MethodInfo *)0x0);
          pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
          pSVar10 = (System_InvalidOperationException_o *)il2cpp_codegen_object_new(pIVar6);
          System_InvalidOperationException___ctor_1b2aec0(pSVar10,pSVar9,(MethodInfo *)0x0);
          pMVar11 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_MapVersionConverter_Downgrade);
          il2cpp_codegen_raise_exception((Il2CppObject *)pSVar10,pMVar11);
        }
        il2cpp_runtime_helper_180014780(5,TypeInfo_Map_IMapVersionConverter,pIVar4);
        pMVar2 = (object->fields).mapScript;
        if (pMVar2 == (Map_MapScript_o *)0x0) goto label_181edd975;
        pMVar1 = (pMVar2->fields).Options;
        value = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_Map_IMapVersionConverter,pIVar4);
        if (pMVar1 == (Map_MapScriptOptions_o *)0x0) goto label_181edd975;
        (pMVar1->fields).EditorVersion = value;
        Il2CppCodeGenWriteBarrier(&(pMVar1->fields).EditorVersion,value);
        if (__this == (System_Collections_Generic_List_IMapVersionConverter__o *)0x0) goto label_181edd975;
        il2cpp_runtime_helper_180012890(__this,pIVar4);
      }
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapVersionConversionResult);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,(MethodInfo *)0x0);
      if (__this_01 != (Map_MapVersionConversionResult_o *)0x0) {
        (__this_01->fields)._OriginalVersion_k__BackingField = pSVar9;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields)._OriginalVersion_k__BackingField,pSVar9);
        pMVar2 = (object->fields).mapScript;
        if ((pMVar2 != (Map_MapScript_o *)0x0) &&
           (pMVar1 = (pMVar2->fields).Options, pMVar1 != (Map_MapScriptOptions_o *)0x0)) {
          pSVar9 = (pMVar1->fields).EditorVersion;
          (__this_01->fields)._FinalVersion_k__BackingField = pSVar9;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields)._FinalVersion_k__BackingField,pSVar9);
          (__this_01->fields)._Converters_k__BackingField =
               (System_Collections_Generic_IReadOnlyList_IMapVersionConverter__o *)__this;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Converters_k__BackingField,__this);
          return __this_01;
        }
      }
    }
  }
label_181edd975:
  ThrowNullReferenceException();
}


// Map.MapVersionConverter$$.cctor
// il2cpp: void Map_MapVersionConverter___cctor (const MethodInfo* method);
// 0x181ede000

void Map_MapVersionConverter___cctor(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_object__o *__this;
  Il2CppObject *item;
  
  if (Il2CppMethodInitialized_184345114 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_IMapVersionConverter_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_IMapVersionConverter_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_IMapVersionConverter)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConverter1_0To1_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConverter);
    Il2CppMethodInitialized_184345114 = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_IMapVersionConverter);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_IMapVersionConverter_ctor);
  item = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapVersionConverter1_0To1_1);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)item,(MethodInfo *)0x0);
  pMVar4 = MethodInfo_System_Collections_Generic_List_IMapVersionConverter_Add;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar2] = item;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,item);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this,item,(MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      TypeInfo_Map_MapVersionConverter->static_fields->Converters =
           (System_Collections_Generic_List_IMapVersionConverter__o *)__this;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapVersionConverter->static_fields->Converters,__this);
      return;
    }
  }
  ThrowNullReferenceException();
}


