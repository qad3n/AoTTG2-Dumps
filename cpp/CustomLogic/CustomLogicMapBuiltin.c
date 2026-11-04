// Type: CustomLogic.CustomLogicMapBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicMapBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicMapBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicMapBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicMapBuiltin_o* CustomLogic_CustomLogicMapBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x18203c720

CustomLogic_CustomLogicMapBuiltin_o *
CustomLogic_CustomLogicMapBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CustomLogicMapBuiltin_o *__this;
  Utility_RateLimit_o *pUVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434648c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_18434648c = '\x01';
  }
  local_res8[0] = 0;
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar3 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicMapBuiltin constructor found that takes ");
    pSVar3 = System_String__Concat_1969b70(str0,pSVar3,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicMapBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  if (Il2CppMethodInitialized_18434646f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_18434646f = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  if (Il2CppMethodInitialized_184346470 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_RateLimit);
    Il2CppMethodInitialized_184346470 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateCount = 0;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar1) {
    pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_RateLimit);
    Utility_RateLimit___ctor(pUVar2,0x14,1.0,(MethodInfo *)0x0);
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    }
    TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateLimit = pUVar2;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateLimit,pUVar2);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_allowedInstantiateCount = 300;
    return __this;
  }
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_RateLimit);
  Utility_RateLimit___ctor(pUVar2,0x28,1.0,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateLimit = pUVar2;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateLimit,pUVar2);
  TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_allowedInstantiateCount = 1000;
  return __this;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x182044ce0

void CustomLogic_CustomLogicMapBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843464a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843464a1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9,__this)
  ;
  return;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicMapBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindAllMapObjects>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindAllMapObjects_b__2_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203e980

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindAllMapObjects_b__2_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_1843464a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_1843464a2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindAllMapObjects((MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectByName>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectByName_b__3_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203ed70

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectByName_b__3_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *objectName;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_1843464a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_1843464a3 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      objectName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (obj,(MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
      }
      pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectByName(objectName,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectsByName>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByName_b__4_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203f110

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByName_b__4_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *objectName;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_1843464a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_1843464a4 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      objectName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (obj,(MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
      }
      pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByName(objectName,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectsByRegex>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByRegex_b__5_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203f270

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByRegex_b__5_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  bool sorted;
  System_String_o *pattern;
  CustomLogic_CustomLogicListBuiltin_o *pCVar3;
  
  if (Il2CppMethodInitialized_1843464a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_1843464a5 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pattern = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar2,(MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    sorted = false;
    uVar1 = (uint)__a->max_length;
    if (1 < (int)uVar1) {
      if (uVar1 < 2) goto label_18203f370;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      sorted = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                         (pIVar2,(MethodInfo_66E400 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    }
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    }
    pCVar3 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByRegex(pattern,sorted,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar3;
  }
label_18203f370:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectByComponent>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectByComponent_b__6_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203ea60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18203eb8d: jmp 0x18203eb92

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectByComponent_b__6_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  System_String_o *className;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_1843464a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_1843464a6 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar3 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    className = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar3,(MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    }
    if (Il2CppMethodInitialized_184346475 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
      Il2CppMethodInitialized_184346475 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    }
    __this_00 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByComponent(className,(MethodInfo *)0x0);
    if (__this_00 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      iVar2 = CustomLogic_CustomLogicListBuiltin__get_Count(__this_00,(MethodInfo *)0x0);
      if ((iVar2 < 1) ||
         (pIVar3 = CustomLogic_CustomLogicListBuiltin__Get(__this_00,0,(MethodInfo *)0x0),
         pIVar3 == (Il2CppObject *)0x0)) {
        pIVar3 = (Il2CppObject *)0x0;
      }
      else {
        bVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
        if (((pIVar3->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pIVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar3);
        }
      }
      return pIVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectsByComponent>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByComponent_b__7_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203f060

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByComponent_b__7_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *className;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_1843464a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_1843464a7 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      className = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (obj,(MethodInfo_66EB70 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
      }
      pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByComponent(className,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectByID>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectByID_b__8_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203ebb0

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectByID_b__8_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool bVar2;
  int32_t key;
  Map_MapObject_o *obj_00;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar3;
  
  if (Il2CppMethodInitialized_1843464a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_1843464a8 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    key = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (obj,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    }
    if (Il2CppMethodInitialized_184346477 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
      Il2CppMethodInitialized_184346477 = '\x01';
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if (pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
      bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                        (pSVar1,key,
                         (MethodInfo_1407110 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (!bVar2) {
        return (Il2CppObject *)0x0;
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
        obj_00 = (Map_MapObject_o *)
                 System_Collections_Generic_Dictionary_int__ulong___get_Item
                           (pSVar1,key,
                            (MethodInfo_14156F0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pCVar3 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                             (__this_00,obj_00,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar3;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectByTag>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectByTag_b__9_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203ee20

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectByTag_b__9_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__List_MapObject___o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  bool bVar2;
  System_String_o *key;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_object__o *__this_02;
  Map_MapObject_o *obj;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar4;
  
  if (Il2CppMethodInitialized_1843464a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_1843464a9 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar3 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    key = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (pIVar3,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    }
    if (Il2CppMethodInitialized_184346478 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_ContainsKey);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_get_Item);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_MapObject_get_Count);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_MapObject_get_Item);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
      Il2CppMethodInitialized_184346478 = '\x01';
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this_00 = TypeInfo_Map_MapLoader->static_fields->Tags;
    if (__this_00 != (System_Collections_Generic_Dictionary_string__List_MapObject___o *)0x0) {
      bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (Il2CppObject *)key,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_ContainsKey);
      if (!bVar2) {
        return (Il2CppObject *)0x0;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_MapLoader->static_fields->Tags;
      if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (pIVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar1,(Il2CppObject *)key,
                              (MethodInfo_147A5B0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_get_Item)
         , pIVar3 != (Il2CppObject *)0x0)) {
        if (*(int *)&pIVar3[1].monitor < 1) {
          return (Il2CppObject *)0x0;
        }
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->Tags;
        if (((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
            (__this_02 = (System_Collections_Generic_List_object__o *)
                         System_Collections_Generic_Dictionary_object__object___get_Item
                                   (pSVar1,(Il2CppObject *)key,
                                    (MethodInfo_147A5B0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_get_Item
                                   ), __this_02 != (System_Collections_Generic_List_object__o *)0x0)) &&
           (obj = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            (__this_02,0,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_MapObject_get_Item),
           __this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0)) {
          pCVar4 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                             (__this_01,obj,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar4;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectsByTag>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByTag_b__10_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203f380

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByTag_b__10_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *tag;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_1843464aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_1843464aa = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      tag = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
      }
      pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByTag(tag,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectsByPlayer>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByPlayer_b__11_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203f1c0

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByPlayer_b__11_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicPlayerBuiltin_o *player;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_1843464ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_1843464ab = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      player = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin);
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
      }
      pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByPlayer(player,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__CreateMapObject>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__CreateMapObject_b__12_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203e090

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__CreateMapObject_b__12_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  bool persistsOwnership;
  uint uVar1;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicPrefabBuiltin_o *pCVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  System_String_o *pSVar7;
  Map_MapScriptSceneObject_o *pMVar8;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar9;
  UnityEngine_Vector3_Fields local_28;
  
  if (Il2CppMethodInitialized_1843464ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_1843464ac = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_18203e35d:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPrefabBuiltin)
    ;
    pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    uVar1 = (uint)__a->max_length;
    if (1 < (int)uVar1) {
      if (uVar1 < 2) goto label_18203e35d;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (pIVar2,(MethodInfo_66EB70 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                         );
    }
    pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    uVar1 = (uint)__a->max_length;
    if (2 < (int)uVar1) {
      if (uVar1 < 3) goto label_18203e35d;
      pIVar2 = __a->m_Items[2];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (pIVar2,(MethodInfo_66EB70 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                         );
    }
    pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    uVar1 = (uint)__a->max_length;
    if (3 < (int)uVar1) {
      if (uVar1 < 4) goto label_18203e35d;
      pIVar2 = __a->m_Items[3];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (pIVar2,(MethodInfo_66EB70 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                         );
    }
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    }
    if (Il2CppMethodInitialized_18434647b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
      Il2CppMethodInitialized_18434647b = '\x01';
    }
    if ((pCVar3 != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
       (pMVar8 = (pCVar3->fields).Value, pMVar8 != (Map_MapScriptSceneObject_o *)0x0)) {
      pSVar7 = (*(pMVar8->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar8,(pMVar8->klass->vtable)._8_Serialize.method);
      pMVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
      Map_MapScriptSceneObject___ctor(pMVar8,(MethodInfo *)0x0);
      if (pMVar8 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar8->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar8,pSVar7,(pMVar8->klass->vtable)._9_Deserialize.method);
        if (pCVar4 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
          local_28.x = (pCVar4->fields).Value.fields.x;
          local_28.y = (pCVar4->fields).Value.fields.y;
          local_28.z = (pCVar4->fields).Value.fields.z;
          Map_MapScriptBaseObject__SetPosition
                    ((Map_MapScriptBaseObject_o *)pMVar8,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0)
          ;
        }
        if (pCVar5 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
          local_28.x = (pCVar5->fields).Value.fields.x;
          local_28.y = (pCVar5->fields).Value.fields.y;
          local_28.z = (pCVar5->fields).Value.fields.z;
          Map_MapScriptBaseObject__SetRotation
                    ((Map_MapScriptBaseObject_o *)pMVar8,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0)
          ;
        }
        if (pCVar6 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
          local_28.x = (pCVar6->fields).Value.fields.x;
          local_28.y = (pCVar6->fields).Value.fields.y;
          local_28.z = (pCVar6->fields).Value.fields.z;
          Map_MapScriptBaseObject__SetScale
                    ((Map_MapScriptBaseObject_o *)pMVar8,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0)
          ;
        }
        if ((pMVar8->fields).Networked == false) {
          if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
          }
          pCVar9 = CustomLogic_CustomLogicMapBuiltin__CreateRuntimeMapObject(pMVar8,(MethodInfo *)0x0);
        }
        else {
          persistsOwnership = (pCVar3->fields).PersistsOwnership;
          if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
          }
          pCVar9 = CustomLogic_CustomLogicMapBuiltin__CreateRuntimeNetworkedMapObject
                             (pMVar8,persistsOwnership,(MethodInfo *)0x0);
        }
        return (Il2CppObject *)pCVar9;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__CreateMapObjectRaw>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__CreateMapObjectRaw_b__13_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203df00

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__CreateMapObjectRaw_b__13_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  System_String_array *value;
  Map_MapScriptSceneObject_o *__this_00;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar2;
  
  if (Il2CppMethodInitialized_1843464ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_1843464ad = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    }
    if (Il2CppMethodInitialized_18434647c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_18434647c = '\x01';
    }
    if (pSVar1 != (System_String_o *)0x0) {
      value = System_String__Split(pSVar1,10,0,(MethodInfo *)0x0);
      pSVar1 = System_String__Join("",value,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
      Map_MapScriptSceneObject___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(__this_00->klass->vtable)._9_Deserialize.methodPtr)
                  (__this_00,pSVar1,(__this_00->klass->vtable)._9_Deserialize.method);
        if ((__this_00->fields).Networked == false) {
          if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
          }
          pCVar2 = CustomLogic_CustomLogicMapBuiltin__CreateRuntimeMapObject(__this_00,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar2;
        }
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
        }
        pCVar2 = CustomLogic_CustomLogicMapBuiltin__CreateRuntimeNetworkedMapObject
                           (__this_00,false,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__PrefabFromMapObject>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__PrefabFromMapObject_b__14_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182040880

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__PrefabFromMapObject_b__14_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  Map_MapObject_o *pMVar3;
  Map_MapScriptBaseObject_o *pMVar4;
  bool clearComponents;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar5;
  System_String_o *prefabCSV;
  CustomLogic_CustomLogicPrefabBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_1843464ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_1843464ae = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_1820409e0:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicMapObjectBuiltin
                       );
    clearComponents = false;
    uVar1 = (uint)__a->max_length;
    if (1 < (int)uVar1) {
      if (uVar1 < 2) goto label_1820409e0;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      clearComponents =
           CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     (pIVar2,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    }
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    }
    if (Il2CppMethodInitialized_18434647d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrefabBuiltin);
      Il2CppMethodInitialized_18434647d = '\x01';
    }
    if (((pCVar5 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
        (pMVar3 = (pCVar5->fields).Value, pMVar3 != (Map_MapObject_o *)0x0)) &&
       (pMVar4 = (pMVar3->fields).ScriptObject, pMVar4 != (Map_MapScriptBaseObject_o *)0x0)) {
      prefabCSV = (*(pMVar4->klass->vtable)._8_Serialize.methodPtr)
                            (pMVar4,(pMVar4->klass->vtable)._8_Serialize.method);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin);
      CustomLogic_CustomLogicPrefabBuiltin___ctor_1f79830
                (__this_00,prefabCSV,clearComponents,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__DestroyMapObject>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__DestroyMapObject_b__15_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203e3b0

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__DestroyMapObject_b__15_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool includeChildren;
  CustomLogic_CustomLogicMapObjectBuiltin_o *mapObject;
  
  if (Il2CppMethodInitialized_1843464af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_1843464af = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    mapObject = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicMapObjectBuiltin
                          );
    if (1 < (uint)__a->max_length) {
      includeChildren =
           CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     (__a->m_Items[1],
                      (MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
      }
      CustomLogic_CustomLogicMapBuiltin__DestroyMapObject(mapObject,includeChildren,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__CopyMapObject>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__CopyMapObject_b__16_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203dd50

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__CopyMapObject_b__16_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  int32_t parent;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool recursive;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar3;
  Map_MapObject_o *pMVar4;
  
  if (Il2CppMethodInitialized_1843464b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_1843464b0 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_18203def5:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicMapObjectBuiltin
                       );
    uVar1 = (uint)__a->max_length;
    recursive = true;
    if (1 < (int)uVar1) {
      if (uVar1 < 2) goto label_18203def5;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      recursive = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                            (pIVar2,(MethodInfo_66E400 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    }
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    }
    if (Il2CppMethodInitialized_18434647f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
      Il2CppMethodInitialized_18434647f = '\x01';
    }
    if ((pCVar3 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
       (pMVar4 = (pCVar3->fields).Value, pMVar4 != (Map_MapObject_o *)0x0)) {
      parent = (pMVar4->fields).Parent;
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
      }
      pMVar4 = CustomLogic_CustomLogicMapBuiltin__CopyMapObject_20333b0
                         (pMVar4,parent,recursive,(MethodInfo *)0x0);
      if (pMVar4 != (Map_MapObject_o *)0x0) {
        (pMVar4->fields).RuntimeCreated = true;
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pCVar3 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                             (__this_00,pMVar4,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar3;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__DestroyMapTargetable>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__DestroyMapTargetable_b__17_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203e490

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__DestroyMapTargetable_b__17_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Object_o *obj_00;
  System_Collections_Generic_List_MapTargetable__o *__this_00;
  CustomLogic_CustomLogicMapTargetableBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_1843464b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicMapTargetableBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_1843464b1 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicMapTargetableBuiltin
                       );
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    }
    if (Il2CppMethodInitialized_184346480 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_MapTargetable_Remove);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184346480 = '\x01';
    }
    if (pCVar1 != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) {
      obj_00 = (UnityEngine_Object_o *)(pCVar1->fields)._GameObject_k__BackingField;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(obj_00,(MethodInfo *)0x0);
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this_00 = TypeInfo_Map_MapLoader->static_fields->MapTargetables;
      if (__this_00 != (System_Collections_Generic_List_MapTargetable__o *)0x0) {
        System_Collections_Generic_List_object___Remove
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)(pCVar1->fields)._Value_k__BackingField,
                   (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_MapTargetable_Remove);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__UpdateNavMesh>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__UpdateNavMesh_b__18_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182044860

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__UpdateNavMesh_b__18_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  System_Threading_Tasks_Task_o *__this_00;
  
  if (Il2CppMethodInitialized_1843464b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_1843464b2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  if (Il2CppMethodInitialized_184346481 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184346481 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this_00 = Map_MapLoader__UpdateNavMesh((MethodInfo *)0x0);
  if (__this_00 != (System_Threading_Tasks_Task_o *)0x0) {
    System_Threading_Tasks_Task__Wait(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__UpdateNavMeshAsync>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__UpdateNavMeshAsync_b__19_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820447e0

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__UpdateNavMeshAsync_b__19_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843464b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_1843464b3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  if (Il2CppMethodInitialized_184346482 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184346482 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  Map_MapLoader__UpdateNavMesh((MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicMapBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x182021800

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicMapBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  System_String_o *pSVar4;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *lastManagedFrame;
  System_Func_CustomLogicMapBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_18434648d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"UpdateNavMeshAsync");
    il2cpp_codegen_initialize_runtime_metadata(&"FindAllMapObjects");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectByID");
    il2cpp_codegen_initialize_runtime_metadata(&"UpdateNavMesh");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectByComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"DestroyMapTargetable");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectsByComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectByName");
    il2cpp_codegen_initialize_runtime_metadata(&"DestroyMapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectsByTag");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateMapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectsByPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&"PrefabFromMapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectByTag");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectsByRegex");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateMapObjectRaw");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectsByName");
    il2cpp_codegen_initialize_runtime_metadata(&"CopyMapObject");
    Il2CppMethodInitialized_18434648d = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x6a75bbaf) {
    if (uVar3 < 0x3aa79d29) {
      if (uVar3 < 0x23f4b409) {
        if (uVar3 == 0x7042ece) {
          bVar2 = System_String__op_Equality(name,"FindMapObjectsByName",(MethodInfo *)0x0);
          if (!bVar2) goto label_182022df5;
          if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346490 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByName_b__4_0
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)
            ;
            Il2CppMethodInitialized_184346490 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__4_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182022dc6;
          if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByName_b__4_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__4_0 =
               (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__4_0;
        }
        else {
          if (uVar3 != 0x23f4b408) goto label_182022df5;
          bVar2 = System_String__op_Equality(name,"FindMapObjectsByComponent",(MethodInfo *)0x0);
          if (!bVar2) goto label_182022df5;
          if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346493 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByComponent_b
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)
            ;
            Il2CppMethodInitialized_184346493 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__7_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182022dc6;
          if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByComponent_b
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__7_0 =
               (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__7_0;
        }
      }
      else if (uVar3 == 0x34c16581) {
        bVar2 = System_String__op_Equality(name,"CopyMapObject",(MethodInfo *)0x0);
        if (!bVar2) goto label_182022df5;
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434649c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__CopyMapObject_b__16_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434649c = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__16_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182022dc6;
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__CopyMapObject_b__16_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__16_0 =
             (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__16_0;
      }
      else {
        if (uVar3 != 0x3aa79d28) goto label_182022df5;
        bVar2 = System_String__op_Equality(name,"UpdateNavMesh",(MethodInfo *)0x0);
        if (!bVar2) goto label_182022df5;
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434649e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__UpdateNavMesh_b__18_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434649e = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__18_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182022dc6;
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__UpdateNavMesh_b__18_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__18_0 =
             (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__18_0;
      }
    }
    else if (uVar3 < 0x4df313e9) {
      if (uVar3 == 0x472155dc) {
        bVar2 = System_String__op_Equality(name,"DestroyMapTargetable",(MethodInfo *)0x0);
        if (!bVar2) goto label_182022df5;
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434649d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__DestroyMapTargetable_b__17_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434649d = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__17_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182022dc6;
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__DestroyMapTargetable_b__17_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__17_0 =
             (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__17_0;
      }
      else {
        if (uVar3 != 0x4df313e8) goto label_182022df5;
        bVar2 = System_String__op_Equality(name,"FindMapObjectsByPlayer",(MethodInfo *)0x0);
        if (!bVar2) goto label_182022df5;
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346497 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByPlayer_b__11
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346497 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__11_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182022dc6;
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByPlayer_b__11
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__11_0 =
             (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__11_0;
      }
    }
    else if (uVar3 == 0x604b4ecd) {
      bVar2 = System_String__op_Equality(name,"FindMapObjectByName",(MethodInfo *)0x0);
      if (!bVar2) goto label_182022df5;
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434648f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByName_b__3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434648f = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__3_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182022dc6;
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByName_b__3_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__3_0 =
           (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__3_0;
    }
    else if (uVar3 == 0x6889a906) {
      bVar2 = System_String__op_Equality(name,"CreateMapObject",(MethodInfo *)0x0);
      if (!bVar2) goto label_182022df5;
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346498 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__CreateMapObject_b__12_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
        Il2CppMethodInitialized_184346498 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__12_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182022dc6;
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__CreateMapObject_b__12_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__12_0 =
           (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__12_0;
    }
    else {
      if (uVar3 != 0x6a75bbae) goto label_182022df5;
      bVar2 = System_String__op_Equality(name,"DestroyMapObject",(MethodInfo *)0x0);
      if (!bVar2) goto label_182022df5;
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434649b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__DestroyMapObject_b__15_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434649b = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__15_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182022dc6;
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__DestroyMapObject_b__15_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__15_0 =
           (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__15_0;
    }
  }
  else if (uVar3 < 0x9bea5774) {
    if (uVar3 < 0x926c3e54) {
      if (uVar3 == 0x7b196e7c) {
        bVar2 = System_String__op_Equality(name,"PrefabFromMapObject",(MethodInfo *)0x0);
        if (!bVar2) goto label_182022df5;
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434649a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__PrefabFromMapObject_b__14_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434649a = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__14_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182022dc6;
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__PrefabFromMapObject_b__14_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__14_0 =
             (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__14_0;
      }
      else {
        if (uVar3 != 0x926c3e53) goto label_182022df5;
        bVar2 = System_String__op_Equality(name,"FindMapObjectByID",(MethodInfo *)0x0);
        if (!bVar2) goto label_182022df5;
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346494 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByID_b__8_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346494 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__8_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182022dc6;
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByID_b__8_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__8_0 =
             (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__8_0;
      }
    }
    else if (uVar3 == 0x9947e69d) {
      bVar2 = System_String__op_Equality(name,"FindMapObjectByComponent",(MethodInfo *)0x0);
      if (!bVar2) goto label_182022df5;
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346492 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByComponent_b
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
        Il2CppMethodInitialized_184346492 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__6_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182022dc6;
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByComponent_b
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__6_0 =
           (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__6_0;
    }
    else {
      if (uVar3 != 0x9bea5773) goto label_182022df5;
      bVar2 = System_String__op_Equality(name,"FindAllMapObjects",(MethodInfo *)0x0);
      if (!bVar2) goto label_182022df5;
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434648e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindAllMapObjects_b__2_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434648e = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__2_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182022dc6;
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindAllMapObjects_b__2_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__2_0 =
           (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__2_0;
    }
  }
  else if (uVar3 < 0xc985509d) {
    if (uVar3 == 0xbf6edce0) {
      bVar2 = System_String__op_Equality(name,"FindMapObjectsByRegex",(MethodInfo *)0x0);
      if (!bVar2) goto label_182022df5;
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346491 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByRegex_b__5_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
        Il2CppMethodInitialized_184346491 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__5_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182022dc6;
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByRegex_b__5_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__5_0 =
           (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__5_0;
    }
    else {
      if (uVar3 != 0xc985509c) {
label_182022df5:
        pSVar4 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicMapBuiltin not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar4 = System_String__Concat_1969b70(str0,name,pSVar4,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_01,pSVar4,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_CreateMemberBinding);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
      }
      bVar2 = System_String__op_Equality(name,"UpdateNavMeshAsync",(MethodInfo *)0x0);
      if (!bVar2) goto label_182022df5;
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434649f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__UpdateNavMeshAsync_b__19_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434649f = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__19_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182022dc6;
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__UpdateNavMeshAsync_b__19_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__19_0 =
           (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__19_0;
    }
  }
  else if (uVar3 == 0xd805e00e) {
    bVar2 = System_String__op_Equality(name,"FindMapObjectByTag",(MethodInfo *)0x0);
    if (!bVar2) goto label_182022df5;
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184346495 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByTag_b__9_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      Il2CppMethodInitialized_184346495 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__9_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182022dc6;
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByTag_b__9_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__9_0;
  }
  else if (uVar3 == 0xea839630) {
    bVar2 = System_String__op_Equality(name,"CreateMapObjectRaw",(MethodInfo *)0x0);
    if (!bVar2) goto label_182022df5;
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184346499 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__CreateMapObjectRaw_b__13_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      Il2CppMethodInitialized_184346499 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__13_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182022dc6;
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__CreateMapObjectRaw_b__13_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__13_0 =
         (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__13_0;
  }
  else {
    if (uVar3 != 0xecb4a36b) goto label_182022df5;
    bVar2 = System_String__op_Equality(name,"FindMapObjectsByTag",(MethodInfo *)0x0);
    if (!bVar2) goto label_182022df5;
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184346496 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByTag_b__10_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      Il2CppMethodInitialized_184346496 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__10_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182022dc6;
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByTag_b__10_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__10_0 =
         (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__10_0;
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this);
label_182022dc6:
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindAllMapObjects
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindAllMapObjects (const MethodInfo* method);
// 0x182026900

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindAllMapObjects(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434648e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindAllMapObjects_b__2_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434648e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__2_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindAllMapObjects_b__2_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__2_0 =
         (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__2_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectByName
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByName (const MethodInfo* method);
// 0x182026d90

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByName(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434648f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByName_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434648f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__3_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByName_b__3_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__3_0 =
         (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__3_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectsByName
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByName (const MethodInfo* method);
// 0x1820270f0

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByName(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346490 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByName_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346490 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__4_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByName_b__4_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__4_0 =
         (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__4_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectsByRegex
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByRegex (const MethodInfo* method);
// 0x182027330

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByRegex(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346491 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByRegex_b__5_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346491 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__5_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByRegex_b__5_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__5_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectByComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByComponent (const MethodInfo* method);
// 0x182026b50

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByComponent
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByComponent_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346492 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByComponent_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__6_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectsByComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByComponent (const MethodInfo* method);
// 0x182026fd0

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByComponent
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346493 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByComponent_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346493 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByComponent_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__7_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectByID
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByID (const MethodInfo* method);
// 0x182026c70

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByID(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346494 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByID_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346494 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByID_b__8_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__8_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectByTag
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByTag (const MethodInfo* method);
// 0x182026eb0

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByTag(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346495 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByTag_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346495 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByTag_b__9_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__9_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectsByTag
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByTag (const MethodInfo* method);
// 0x182027450

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByTag(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346496 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByTag_b__10_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346496 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__10_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByTag_b__10_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__10_0 =
         (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__10_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectsByPlayer
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByPlayer (const MethodInfo* method);
// 0x182027210

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByPlayer(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346497 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByPlayer_b__11
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346497 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__11_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByPlayer_b__11
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__11_0 =
         (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__11_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__CreateMapObject
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__CreateMapObject (const MethodInfo* method);
// 0x182025fd0

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__CreateMapObject(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346498 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__CreateMapObject_b__12_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346498 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__12_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__CreateMapObject_b__12_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__12_0 =
         (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__12_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__CreateMapObjectRaw
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__CreateMapObjectRaw (const MethodInfo* method);
// 0x182025eb0

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__CreateMapObjectRaw(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346499 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__CreateMapObjectRaw_b__13_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346499 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__13_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__CreateMapObjectRaw_b__13_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__13_0 =
         (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__13_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__PrefabFromMapObject
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__PrefabFromMapObject (const MethodInfo* method);
// 0x182029620

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__PrefabFromMapObject(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434649a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__PrefabFromMapObject_b__14_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434649a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__14_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__PrefabFromMapObject_b__14_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__14_0 =
         (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__14_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__DestroyMapObject
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__DestroyMapObject (const MethodInfo* method);
// 0x182026330

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__DestroyMapObject(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434649b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__DestroyMapObject_b__15_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434649b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__15_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__DestroyMapObject_b__15_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__15_0 =
         (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__15_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__CopyMapObject
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__CopyMapObject (const MethodInfo* method);
// 0x182025d90

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__CopyMapObject(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434649c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__CopyMapObject_b__16_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434649c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__16_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__CopyMapObject_b__16_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__16_0 =
         (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__16_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__DestroyMapTargetable
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__DestroyMapTargetable (const MethodInfo* method);
// 0x182026450

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__DestroyMapTargetable(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434649d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__DestroyMapTargetable_b__17_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434649d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__17_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__DestroyMapTargetable_b__17_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__17_0 =
         (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__17_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__UpdateNavMesh
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__UpdateNavMesh (const MethodInfo* method);
// 0x18202da30

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__UpdateNavMesh(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434649e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__UpdateNavMesh_b__18_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434649e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__18_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__UpdateNavMesh_b__18_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__18_0 =
         (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__18_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__UpdateNavMeshAsync
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__UpdateNavMeshAsync (const MethodInfo* method);
// 0x18202d900

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__UpdateNavMeshAsync(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434649f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__UpdateNavMeshAsync_b__19_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434649f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__19_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__UpdateNavMeshAsync_b__19_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__19_0 =
         (System_Func_CustomLogicMapBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9__19_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x18202fd40

void CustomLogic_CustomLogicMapBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843464a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"UpdateNavMeshAsync");
    il2cpp_codegen_initialize_runtime_metadata(&"FindAllMapObjects");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectByID");
    il2cpp_codegen_initialize_runtime_metadata(&"UpdateNavMesh");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectByComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"DestroyMapTargetable");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectsByComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectByName");
    il2cpp_codegen_initialize_runtime_metadata(&"DestroyMapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectsByTag");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateMapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectsByPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&"PrefabFromMapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectByTag");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectsByRegex");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateMapObjectRaw");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectsByName");
    il2cpp_codegen_initialize_runtime_metadata(&"CopyMapObject");
    Il2CppMethodInitialized_1843464a0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindAllMapObjects",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindMapObjectByName",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindMapObjectsByName",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindMapObjectsByRegex",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindMapObjectByComponent",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindMapObjectsByComponent",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindMapObjectByID",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindMapObjectByTag",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindMapObjectsByTag",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindMapObjectsByPlayer",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CreateMapObject",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CreateMapObjectRaw",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PrefabFromMapObject",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DestroyMapObject",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CopyMapObject",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DestroyMapTargetable",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"UpdateNavMesh",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"UpdateNavMeshAsync",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapBuiltin___c___cctor (const MethodInfo* method);
// 0x182044ab0

void CustomLogic_CustomLogicMapBuiltin___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicMapBuiltin___c_o *__this;
  
  if (Il2CppMethodInitialized_1843464b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_c);
    Il2CppMethodInitialized_1843464b4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicMapBuiltin_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicMapBuiltin.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapBuiltin___c___ctor (CustomLogic_CustomLogicMapBuiltin___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicMapBuiltin___c___ctor(CustomLogic_CustomLogicMapBuiltin___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapBuiltin.<>c$$<FindMapObjectsByRegex>b__8_0
// il2cpp: int32_t CustomLogic_CustomLogicMapBuiltin___c___FindMapObjectsByRegex_b__8_0 (CustomLogic_CustomLogicMapBuiltin___c_o* __this, Il2CppObject* a, Il2CppObject* b, const MethodInfo* method);
// 0x18203cfb0

int32_t CustomLogic_CustomLogicMapBuiltin___c___FindMapObjectsByRegex_b__8_0
                  (CustomLogic_CustomLogicMapBuiltin___c_o *__this,Il2CppObject *a,Il2CppObject *b,
                  MethodInfo *method)

{
  byte bVar1;
  void *pvVar2;
  void *pvVar3;
  int32_t iVar4;
  
  if (Il2CppMethodInitialized_1843464b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    Il2CppMethodInitialized_1843464b5 = '\x01';
  }
  if (a != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
    if (((a->klass->_2).typeHierarchyDepth < bVar1) ||
       ((a->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
      il2cpp_codegen_raise_invalid_cast_exception(a,TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    }
    if (((a[3].klass != (Il2CppClass *)0x0) &&
        (pvVar2 = ((a[3].klass)->_1).byval_arg.data, pvVar2 != (void *)0x0)) && (b != (Il2CppObject *)0x0)) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
      if (((b->klass->_2).typeHierarchyDepth < bVar1) ||
         ((b->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
        il2cpp_codegen_raise_invalid_cast_exception(b,TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
      }
      if ((b[3].klass != (Il2CppClass *)0x0) &&
         (pvVar3 = ((b[3].klass)->_1).byval_arg.data, pvVar3 != (void *)0x0)) {
        iVar4 = System_String__CompareTo_1968960
                          (*(System_String_o **)((longlong)pvVar2 + 0x30),
                           *(System_String_o **)((longlong)pvVar3 + 0x30),(MethodInfo *)0x0);
        return iVar4;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapBuiltin___ctor (CustomLogic_CustomLogicMapBuiltin_o* __this, const MethodInfo* method);
// 0x1820365f0

void CustomLogic_CustomLogicMapBuiltin___ctor(CustomLogic_CustomLogicMapBuiltin_o *__this,MethodInfo *method)

{
  bool bVar1;
  Utility_RateLimit_o *pUVar2;
  
  if (Il2CppMethodInitialized_18434646f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_18434646f = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  if (Il2CppMethodInitialized_184346470 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_RateLimit);
    Il2CppMethodInitialized_184346470 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateCount = 0;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar1) {
    pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_RateLimit);
    Utility_RateLimit___ctor(pUVar2,0x14,1.0,(MethodInfo *)0x0);
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    }
    TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateLimit = pUVar2;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateLimit,pUVar2);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_allowedInstantiateCount = 300;
    return;
  }
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_RateLimit);
  Utility_RateLimit___ctor(pUVar2,0x28,1.0,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateLimit = pUVar2;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateLimit,pUVar2);
  TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_allowedInstantiateCount = 1000;
  return;
}


// CustomLogic.CustomLogicMapBuiltin$$ResetRuntimeNetworkedSpawnLimits
// il2cpp: void CustomLogic_CustomLogicMapBuiltin__ResetRuntimeNetworkedSpawnLimits (const MethodInfo* method);
// 0x1820361a0

void CustomLogic_CustomLogicMapBuiltin__ResetRuntimeNetworkedSpawnLimits(MethodInfo *method)

{
  bool bVar1;
  Utility_RateLimit_o *pUVar2;
  
  if (Il2CppMethodInitialized_184346470 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_RateLimit);
    Il2CppMethodInitialized_184346470 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateCount = 0;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar1) {
    pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_RateLimit);
    Utility_RateLimit___ctor(pUVar2,0x14,1.0,(MethodInfo *)0x0);
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    }
    TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateLimit = pUVar2;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateLimit,pUVar2);
    TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_allowedInstantiateCount = 300;
    return;
  }
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_RateLimit);
  Utility_RateLimit___ctor(pUVar2,0x28,1.0,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateLimit = pUVar2;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateLimit,pUVar2);
  TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_allowedInstantiateCount = 1000;
  return;
}


// CustomLogic.CustomLogicMapBuiltin$$FindAllMapObjects
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindAllMapObjects (const MethodInfo* method);
// 0x1820349d0
// eh: try 0x182034b10..0x182034c4b -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182034bfa: mov rdx, qword ptr [rip + 0x2077347]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
// asm:   0x182034c01: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182034c06: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182034c0b: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182034c10: test rcx, rcx
// asm:   0x182034c13: jne 0x182034c4b
// asm:   0x182034c15: mov rsi, qword ptr [rsp + 0x98]
// asm:   0x182034c4b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindAllMapObjects(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_GameObject__MapObject__o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  System_Object_array *pSVar3;
  MethodInfo *pMVar4;
  Il2CppObject *obj;
  bool bVar5;
  CustomLogic_CustomLogicListBuiltin_o *__this_02;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  CustomLogic_CustomLogicMapObjectBuiltin_o *item;
  undefined1 local_60 [16];
  Map_MapObject_o *local_50;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_184346471 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_get_Curren
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_GameObject_MapObject_GetEnumerator
              );
    Il2CppMethodInitialized_184346471 = '\x01';
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentValue = (Il2CppObject *)0x0;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_02,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
  if (__this != (System_Collections_Generic_Dictionary_GameObject__MapObject__o *)0x0) {
    __this_03 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                           (MethodInfo_13C65A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Values);
    if (__this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_60,
                 __this_03,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_GameObject_MapObject_GetEnumerator
                );
      local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._currentValue = (Il2CppObject *)local_50;
      local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_60._8_8_ = &local_48;
      while( true ) {
        bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                          (&local_48,
                           (MethodInfo_155CFB0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
                          );
        obj = local_48.fields._currentValue;
        if (!bVar5) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
                    );
          return __this_02;
        }
        if (__this_02 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_00 = (__this_02->fields).List;
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          ThrowNullReferenceException();
        }
        item = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                         (__this_01,(Map_MapObject_o *)obj,(MethodInfo *)0x0);
        pMVar4 = MethodInfo_System_Collections_Generic_List_object_Add;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_00->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) break;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          if ((uint)pSVar3->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)item;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,item);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_00,(Il2CppObject *)item,(MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method
                    );
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectByName
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectByName (System_String_o* objectName, const MethodInfo* method);
// 0x182034e60
// eh: try 0x182034f70..0x18203506b -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182035027: mov rdx, qword ptr [rip + 0x2076f1a]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
// asm:   0x18203502e: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182035033: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182035038: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18203503d: test rcx, rcx
// asm:   0x182035040: jne 0x18203506b
// asm:   0x18203506b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectByName(System_String_o *objectName,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_GameObject__MapObject__o *__this;
  Map_MapScriptBaseObject_o *pMVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppObject *obj;
  bool bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar3;
  undefined1 local_40 [16];
  Map_MapObject_o *local_30;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_28;
  
  if (Il2CppMethodInitialized_184346472 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_get_Curren
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_GameObject_MapObject_GetEnumerator
              );
    Il2CppMethodInitialized_184346472 = '\x01';
  }
  local_28.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._currentValue = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
  if (__this != (System_Collections_Generic_Dictionary_GameObject__MapObject__o *)0x0) {
    __this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                           (MethodInfo_13C65A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Values);
    if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_40,
                 __this_01,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_GameObject_MapObject_GetEnumerator
                );
      local_28.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_40._0_8_;
      local_28.fields._index = local_40._8_4_;
      local_28.fields._version = local_40._12_4_;
      local_28.fields._currentValue = (Il2CppObject *)local_30;
      local_40._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_40._8_8_ = &local_28;
      do {
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                          (&local_28,
                           (MethodInfo_155CFB0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
                          );
        obj = local_28.fields._currentValue;
        if (!bVar2) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
                    );
          return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
        }
        if ((Map_MapObject_o *)local_28.fields._currentValue == (Map_MapObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pMVar1 = ((Map_MapObject_Fields *)((longlong)local_28.fields._currentValue + 0x10))->ScriptObject;
        if (pMVar1 == (Map_MapScriptBaseObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar2 = System_String__op_Equality((pMVar1->fields).Name,objectName,(MethodInfo *)0x0);
      } while (!bVar2);
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pCVar3 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this_00,(Map_MapObject_o *)obj,(MethodInfo *)0x0);
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
                  );
        return pCVar3;
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectsByName
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByName (System_String_o* objectName, const MethodInfo* method);
// 0x1820355e0
// eh: try 0x182035730..0x18203584c -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820357ef: mov rdx, qword ptr [rip + 0x2076752]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
// asm:   0x1820357f6: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820357fb: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182035800: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182035805: test rcx, rcx
// asm:   0x182035808: jne 0x18203584c
// asm:   0x18203580a: mov r14, qword ptr [rsp + 0x90]
// asm:   0x18203584c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByName(System_String_o *objectName,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_GameObject__MapObject__o *__this;
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppObject *obj;
  bool bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar4;
  undefined1 local_50 [16];
  Map_MapObject_o *local_40;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_38;
  
  if (Il2CppMethodInitialized_184346473 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_get_Curren
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_GameObject_MapObject_GetEnumerator
              );
    Il2CppMethodInitialized_184346473 = '\x01';
  }
  local_38.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._currentValue = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
  if (__this != (System_Collections_Generic_Dictionary_GameObject__MapObject__o *)0x0) {
    __this_02 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                           (MethodInfo_13C65A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Values);
    if (__this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_50,
                 __this_02,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_GameObject_MapObject_GetEnumerator
                );
      local_38.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_50._0_8_;
      local_38.fields._index = local_50._8_4_;
      local_38.fields._version = local_50._12_4_;
      local_38.fields._currentValue = (Il2CppObject *)local_40;
      local_50._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_50._8_8_ = &local_38;
      while( true ) {
        do {
          bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                            (&local_38,
                             (MethodInfo_155CFB0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
                            );
          obj = local_38.fields._currentValue;
          if (!bVar3) {
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_38,
                       MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
                      );
            return __this_01;
          }
          if ((Map_MapObject_o *)local_38.fields._currentValue == (Map_MapObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pMVar1 = ((Map_MapObject_Fields *)((longlong)local_38.fields._currentValue + 0x10))->ScriptObject;
          if (pMVar1 == (Map_MapScriptBaseObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar3 = System_String__op_Equality((pMVar1->fields).Name,objectName,(MethodInfo *)0x0);
        } while (!bVar3);
        if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar2 = (__this_01->fields).List;
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) break;
        pCVar4 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this_00,(Map_MapObject_o *)obj,(MethodInfo *)0x0);
        if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(pSVar2,pCVar4);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectsByRegex
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByRegex (System_String_o* pattern, bool sorted, const MethodInfo* method);
// 0x182035a50
// eh: try 0x182035c00..0x182035e01 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182035ccc: mov rdx, qword ptr [rip + 0x2076275]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
// asm:   0x182035cd3: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182035cd8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182035cdd: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182035ce2: test rcx, rcx
// asm:   0x182035ce5: jne 0x182035e01
// asm:   0x182035ceb: movzx r12d, byte ptr [rsp + 0x98]
// asm:   0x182035cf4: mov rsi, qword ptr [rsp + 0x90]
// asm:   0x182035e01: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByRegex
          (System_String_o *pattern,bool sorted,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_GameObject__MapObject__o *__this;
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppObject *object;
  Map_MapObject_o *obj;
  bool bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  System_Text_RegularExpressions_Regex_o *__this_02;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar4;
  UnityEngine_Rendering_DynamicArray_SortComparer_T__o *__this_04;
  undefined1 local_60 [16];
  Map_MapObject_o *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Map_MapObject_o *local_38;
  
  if (Il2CppMethodInitialized_184346474 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Comparison_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_get_Curren
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_Sort_40c5748);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMapBuiltin_c_FindMapObjectsByRegex_b__8_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_c);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_GameObject_MapObject_GetEnumerator
              );
    Il2CppMethodInitialized_184346474 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Map_MapObject_o *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_285f6f0(__this_02,pattern,9,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
  if ((__this != (System_Collections_Generic_Dictionary_GameObject__MapObject__o *)0x0) &&
     (__this_03 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                             (MethodInfo_13C65A0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Values)
     , __this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_60,
               __this_03,
               (MethodInfo_F1E4D0 *)
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_GameObject_MapObject_GetEnumerator
              );
    local_48 = (undefined1  [8])local_60._0_8_;
    pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
    local_38 = local_50;
    local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
    while (bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                             ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                               *)local_48,
                              (MethodInfo_155CFB0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
                             ), obj = local_38, bVar3) {
      if (local_38 == (Map_MapObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pMVar1 = (local_38->fields).ScriptObject;
      if (pMVar1 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (__this_02 == (System_Text_RegularExpressions_Regex_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar3 = System_Text_RegularExpressions_Regex__IsMatch_285c9b0
                        (__this_02,(pMVar1->fields).Name,(MethodInfo *)0x0);
      if (bVar3) {
        if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar2 = (__this_01->fields).List;
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          ThrowNullReferenceException();
        }
        pCVar4 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this_00,obj,(MethodInfo *)0x0);
        if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(pSVar2,pCVar4);
      }
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
              );
    if (!sorted) {
      return __this_01;
    }
    if (__this_01 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      pSVar2 = (__this_01->fields).List;
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_c);
      }
      __this_04 = (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)
                  TypeInfo_CustomLogic_CustomLogicMapBuiltin_c->static_fields->__9__8_0;
      if (__this_04 == (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)0x0) {
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_c);
        }
        object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_c->static_fields->__9;
        __this_04 = (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Comparison_object);
        System_Comparison_object____ctor
                  (__this_04,object,
                   (intptr_t)MethodInfo_CustomLogic_CustomLogicMapBuiltin_c_FindMapObjectsByRegex_b__8_0,
                   (MethodInfo_C980B0 *)0x0);
        TypeInfo_CustomLogic_CustomLogicMapBuiltin_c->static_fields->__9__8_0 =
             (System_Comparison_object__o *)__this_04;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_CustomLogic_CustomLogicMapBuiltin_c->static_fields->__9__8_0,__this_04);
      }
      if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List_object___Sort_949260
                  (pSVar2,(System_Comparison_T__o *)__this_04,
                   (MethodInfo_949260 *)MethodInfo_System_Collections_Generic_List_object_Sort_40c5748);
        return __this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectByComponent
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectByComponent (System_String_o* className, const MethodInfo* method);
// 0x182034c60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182034d06: jmp 0x182034d0b

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectByComponent(System_String_o *className,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  CustomLogic_CustomLogicListBuiltin_o *__this;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar3;
  
  if (Il2CppMethodInitialized_184346475 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    Il2CppMethodInitialized_184346475 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  __this = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByComponent(className,(MethodInfo *)0x0);
  if (__this != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    iVar2 = CustomLogic_CustomLogicListBuiltin__get_Count(__this,(MethodInfo *)0x0);
    if ((iVar2 < 1) ||
       (pCVar3 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)
                 CustomLogic_CustomLogicListBuiltin__Get(__this,0,(MethodInfo *)0x0),
       pCVar3 == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0)) {
      pCVar3 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
      if (((((Il2CppClass *)pCVar3->klass)->_2).typeHierarchyDepth < bVar1) ||
         ((((Il2CppClass *)pCVar3->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
        il2cpp_codegen_raise_invalid_cast_exception(pCVar3);
      }
    }
    return pCVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectsByComponent
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByComponent (System_String_o* className, const MethodInfo* method);
// 0x182035240
// eh: try 0x1820353d0..0x1820355cc -> pad 0x183318130 (+4 call sites) catch Il2CppExceptionWrapper
// asm: 43 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820353cd: nop dword ptr [rax]
// asm:   0x182035513: jmp 0x1820353d0
// asm:   0x182035518: mov rdx, qword ptr [rip + 0x20453f1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x18203551f: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x182035524: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182035529: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18203552e: test rcx, rcx
// asm:   0x182035531: jne 0x1820355bc
// asm:   0x182035537: xor r12d, r12d
// asm:   0x18203553a: mov r14, qword ptr [rsp + 0xd0]
// asm:   0x182035542: mov r15, qword ptr [rsp + 0xe0]
// asm:   0x18203554a: jmp 0x1820353d0
// asm:   0x182035562: mov rdx, qword ptr [rip + 0x20769df]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
// asm:   0x182035569: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18203556e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182035573: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x182035578: test rcx, rcx
// asm:   0x18203557b: jne 0x1820355cc
// asm:   0x18203557d: mov r15, qword ptr [rsp + 0xe0]
// asm:   0x1820355bc: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820355cc: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318130: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318135: push rbp
// asm:   0x183318136: sub rsp, 0x20
// asm:   0x18331813a: mov rbp, rdx
// asm:   0x18331813d: mov rax, qword ptr [rbp + 0x80]
// asm:   0x183318144: mov rcx, qword ptr [rax]
// asm:   0x183318147: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18331814b: movabs rax, 0
// asm:   0x183318155: add rsp, 0x20
// asm:   0x183318159: pop rbp
// asm:   0x18331815a: ret 
// asm:   0x1833398d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833398d5: push rbp
// asm:   0x1833398d6: sub rsp, 0x20
// asm:   0x1833398da: mov rbp, rdx
// asm:   0x1833398dd: mov rax, qword ptr [rbp + 0x78]
// asm:   0x1833398e1: mov rcx, qword ptr [rax]
// asm:   0x1833398e4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x1833398e8: movabs rax, 0
// asm:   0x1833398f2: add rsp, 0x20
// asm:   0x1833398f6: pop rbp
// asm:   0x1833398f7: ret 

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByComponent(System_String_o *className,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_GameObject__MapObject__o *__this;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_object__o *pSVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  Map_MapObject_o *obj;
  bool bVar2;
  CustomLogic_CustomLogicListBuiltin_o *__this_02;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  System_String_o *a;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar3;
  undefined1 local_98 [16];
  Map_MapObject_o *local_88;
  undefined1 local_80 [8];
  uint64_t uStack_78;
  Map_MapObject_o *local_70;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_40;
  
  if (Il2CppMethodInitialized_184346476 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_get_Curren
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_GameObject_MapObject_GetEnumerator
              );
    Il2CppMethodInitialized_184346476 = '\x01';
  }
  local_80 = (undefined1  [8])0x0;
  uStack_78 = 0;
  local_70 = (Map_MapObject_o *)0x0;
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_02,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
  if ((__this == (System_Collections_Generic_Dictionary_GameObject__MapObject__o *)0x0) ||
     (__this_03 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                             (MethodInfo_13C65A0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Values)
     , __this_03 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_98,
             __this_03,
             (MethodInfo_F1E4D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_GameObject_MapObject_GetEnumerator
            );
  local_80 = (undefined1  [8])local_98._0_8_;
  uStack_78 = local_98._8_8_;
  local_70 = local_88;
label_1820353d0:
  do {
    bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                      ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                       local_80,(MethodInfo_155CFB0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
                      );
    obj = local_70;
    if (!bVar2) {
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80,
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
                );
      return __this_02;
    }
    if (local_70 == (Map_MapObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (local_70->fields).ComponentInstances;
    if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              (&local_40,(System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    local_68.fields._list = local_40.fields._list;
    local_68.fields._index = local_40.fields._index;
    local_68.fields._version = local_40.fields._version;
    local_68.fields._current = local_40.fields._current;
    local_98._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_98._8_8_ = &local_68;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_68,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                        );
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_68,
                   MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose)
        ;
        goto label_1820353d0;
      }
      if (local_68.fields._current == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      a = (System_String_o *)
          (*(local_68.fields._current)->klass->vtable[6].methodPtr)
                    (local_68.fields._current,(local_68.fields._current)->klass->vtable[6].method);
      bVar2 = System_String__op_Equality(a,className,(MethodInfo *)0x0);
    } while (!bVar2);
    if (__this_02 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar1 = (__this_02->fields).List;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      ThrowNullReferenceException();
    }
    pCVar3 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin(__this_01,obj,(MethodInfo *)0x0);
    if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
      ThrowNullReferenceException();
    }
    il2cpp_runtime_helper_180012890(pSVar1,pCVar3,MethodInfo_System_Collections_Generic_List_object_Add);
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_68,
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
  } while( true );
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectByID
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectByID (int32_t id, const MethodInfo* method);
// 0x182034d30

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectByID(int32_t id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  CustomLogic_CustomLogicEvaluator_o *__this;
  bool bVar2;
  Map_MapObject_o *obj;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar3;
  
  if (Il2CppMethodInitialized_184346477 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184346477 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
           TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (pSVar1,id,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    if (!bVar2) {
      return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
    }
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if (pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
      obj = (Map_MapObject_o *)
            System_Collections_Generic_Dictionary_int__ulong___get_Item
                      (pSVar1,id,
                       (MethodInfo_14156F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
      if (__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pCVar3 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin(__this,obj,(MethodInfo *)0x0);
        return pCVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectByTag
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectByTag (System_String_o* tag, const MethodInfo* method);
// 0x182035080

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectByTag(System_String_o *tag,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__List_MapObject___o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool bVar2;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_object__o *__this_01;
  Map_MapObject_o *obj;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar4;
  
  if (Il2CppMethodInitialized_184346478 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_get_Item)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184346478 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = TypeInfo_Map_MapLoader->static_fields->Tags;
  if (__this != (System_Collections_Generic_Dictionary_string__List_MapObject___o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)tag,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_ContainsKey);
    if (!bVar2) {
      return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->Tags;
    if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pIVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar1,(Il2CppObject *)tag,
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_get_Item),
       pIVar3 != (Il2CppObject *)0x0)) {
      if (*(int *)&pIVar3[1].monitor < 1) {
        return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_MapLoader->static_fields->Tags;
      if (((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
          (__this_01 = (System_Collections_Generic_List_object__o *)
                       System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar1,(Il2CppObject *)tag,
                                  (MethodInfo_147A5B0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_get_Item
                                 ), __this_01 != (System_Collections_Generic_List_object__o *)0x0)) &&
         (obj = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          (__this_01,0,
                           (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_MapObject_get_Item)
         , __this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0)) {
        pCVar4 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this_00,obj,(MethodInfo *)0x0);
        return pCVar4;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectsByTag
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByTag (System_String_o* tag, const MethodInfo* method);
// 0x182035e10
// eh: try 0x182035fb0..0x1820360eb -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18203609a: mov rdx, qword ptr [rip + 0x2055427]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x1820360a1: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820360a6: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820360ab: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820360b0: test rcx, rcx
// asm:   0x1820360b3: jne 0x1820360eb
// asm:   0x1820360b5: mov rsi, qword ptr [rsp + 0x90]
// asm:   0x1820360eb: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByTag(System_String_o *tag,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_string__List_MapObject___o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  CustomLogic_CustomLogicEvaluator_o *__this_02;
  System_Object_array *pSVar3;
  MethodInfo *pMVar4;
  Il2CppObject *obj;
  bool bVar5;
  CustomLogic_CustomLogicListBuiltin_o *__this_03;
  System_Collections_Generic_List_T__o *__this_04;
  CustomLogic_CustomLogicMapObjectBuiltin_o *item;
  undefined1 local_60 [16];
  Map_MapObject_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_184346479 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184346479 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_03,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = TypeInfo_Map_MapLoader->static_fields->Tags;
  if (__this != (System_Collections_Generic_Dictionary_string__List_MapObject___o *)0x0) {
    bVar5 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)tag,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_ContainsKey);
    if (!bVar5) {
      return __this_03;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_Map_MapLoader->static_fields->Tags;
    if ((__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_04 = (System_Collections_Generic_List_T__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (__this_00,(Il2CppObject *)tag,
                               (MethodInfo_147A5B0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_get_Item
                              ), __this_04 != (System_Collections_Generic_List_T__o *)0x0)) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,__this_04,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
      local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._current = (Il2CppObject *)local_50;
      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_60._8_8_ = &local_48;
      while( true ) {
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_48,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
        obj = local_48.fields._current;
        if (!bVar5) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                     MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
          return __this_03;
        }
        if (__this_03 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_01 = (__this_03->fields).List;
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        __this_02 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if (__this_02 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          ThrowNullReferenceException();
        }
        item = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                         (__this_02,(Map_MapObject_o *)obj,(MethodInfo *)0x0);
        pMVar4 = MethodInfo_System_Collections_Generic_List_object_Add;
        if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_01->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) break;
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          if ((uint)pSVar3->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)item;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,item);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_01,(Il2CppObject *)item,(MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method
                    );
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectsByPlayer
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByPlayer (CustomLogic_CustomLogicPlayerBuiltin_o* player, const MethodInfo* method);
// 0x182035860
// eh: try 0x182035993..0x182035a3c -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820359f5: mov rdx, qword ptr [rip + 0x2078a0c]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_CustomLogicNetworkViewBuilt
// asm:   0x1820359fc: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182035a01: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182035a06: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182035a0b: test rcx, rcx
// asm:   0x182035a0e: jne 0x182035a3c
// asm:   0x182035a10: mov rsi, qword ptr [rsp + 0xa0]
// asm:   0x182035a3c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByPlayer
          (CustomLogic_CustomLogicPlayerBuiltin_o *player,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  System_Collections_Generic_Dictionary_int__CustomLogicNetworkViewBuiltin__o *__this;
  CustomLogic_CustomLogicPhotonSync_o *pCVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCVar5;
  undefined1 local_60 [16];
  CustomLogic_CustomLogicNetworkViewBuiltin_o *local_50;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_18434647a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Values)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_CustomLogicNetworkViewBuilt
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_CustomLogicNetworkViewBuilt_40ae4e8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_CustomLogicNetworkViewBuilt_40ae5c8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_CustomLogicNetworkViewBuiltin_GetEnume
              );
    Il2CppMethodInitialized_18434647a = '\x01';
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentValue = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if ((pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
     (__this = (pCVar1->fields).IdToNetworkView,
     __this != (System_Collections_Generic_Dictionary_int__CustomLogicNetworkViewBuiltin__o *)0x0)) {
    __this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                           (MethodInfo_13C65A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Values
                          );
    if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_60,
                 __this_01,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_CustomLogicNetworkViewBuiltin_GetEnume
                );
      local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._currentValue = (Il2CppObject *)local_50;
      local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_60._8_8_ = &local_48;
      while( true ) {
        do {
          bVar4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                            (&local_48,
                             (MethodInfo_155CFB0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_CustomLogicNetworkViewBuilt_40ae4e8
                            );
          pIVar3 = local_48.fields._currentValue;
          if (!bVar4) {
            System_Configuration_ConfigurationCollectionAttribute___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                       MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_CustomLogicNetworkViewBuilt
                      );
            return __this_00;
          }
          if ((CustomLogic_CustomLogicNetworkViewBuiltin_o *)local_48.fields._currentValue ==
              (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
            ThrowNullReferenceException();
          }
          pCVar5 = CustomLogic_CustomLogicNetworkViewBuiltin__get_Owner
                             ((CustomLogic_CustomLogicNetworkViewBuiltin_o *)local_48.fields._currentValue,
                              (MethodInfo *)0x0);
        } while (pCVar5 != player);
        pCVar2 = ((CustomLogic_CustomLogicNetworkViewBuiltin_Fields *)((longlong)pIVar3 + 0x10))->Sync;
        if (pCVar2 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (__this_00 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) break;
        CustomLogic_CustomLogicListBuiltin__Add
                  (__this_00,(Il2CppObject *)(pCVar2->fields)._CustomLogicMapObjectBuiltin_k__BackingField,
                   (MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$CreateMapObject
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__CreateMapObject (CustomLogic_CustomLogicPrefabBuiltin_o* prefab, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicVector3Builtin_o* rotation, CustomLogic_CustomLogicVector3Builtin_o* scale, const MethodInfo* method);
// 0x1820338c0

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__CreateMapObject
          (CustomLogic_CustomLogicPrefabBuiltin_o *prefab,CustomLogic_CustomLogicVector3Builtin_o *position,
          CustomLogic_CustomLogicVector3Builtin_o *rotation,CustomLogic_CustomLogicVector3Builtin_o *scale,
          MethodInfo *method)

{
  bool persistsOwnership;
  System_String_o *pSVar1;
  Map_MapScriptSceneObject_o *pMVar2;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar3;
  UnityEngine_Vector3_Fields local_28;
  
  if (Il2CppMethodInitialized_18434647b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    Il2CppMethodInitialized_18434647b = '\x01';
  }
  if ((prefab != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar2 = (prefab->fields).Value, pMVar2 != (Map_MapScriptSceneObject_o *)0x0)) {
    pSVar1 = (*(pMVar2->klass->vtable)._8_Serialize.methodPtr)
                       (pMVar2,(pMVar2->klass->vtable)._8_Serialize.method);
    pMVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
    Map_MapScriptSceneObject___ctor(pMVar2,(MethodInfo *)0x0);
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      (*(pMVar2->klass->vtable)._9_Deserialize.methodPtr)
                (pMVar2,pSVar1,(pMVar2->klass->vtable)._9_Deserialize.method);
      if (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        local_28.x = (position->fields).Value.fields.x;
        local_28.y = (position->fields).Value.fields.y;
        local_28.z = (position->fields).Value.fields.z;
        Map_MapScriptBaseObject__SetPosition
                  ((Map_MapScriptBaseObject_o *)pMVar2,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      }
      if (rotation != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        local_28.x = (rotation->fields).Value.fields.x;
        local_28.y = (rotation->fields).Value.fields.y;
        local_28.z = (rotation->fields).Value.fields.z;
        Map_MapScriptBaseObject__SetRotation
                  ((Map_MapScriptBaseObject_o *)pMVar2,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      }
      if (scale != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        local_28.x = (scale->fields).Value.fields.x;
        local_28.y = (scale->fields).Value.fields.y;
        local_28.z = (scale->fields).Value.fields.z;
        Map_MapScriptBaseObject__SetScale
                  ((Map_MapScriptBaseObject_o *)pMVar2,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      }
      if ((pMVar2->fields).Networked == false) {
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
        }
        pCVar3 = CustomLogic_CustomLogicMapBuiltin__CreateRuntimeMapObject(pMVar2,(MethodInfo *)0x0);
      }
      else {
        persistsOwnership = (prefab->fields).PersistsOwnership;
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
        }
        pCVar3 = CustomLogic_CustomLogicMapBuiltin__CreateRuntimeNetworkedMapObject
                           (pMVar2,persistsOwnership,(MethodInfo *)0x0);
      }
      return pCVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$CreateMapObjectRaw
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__CreateMapObjectRaw (System_String_o* prefab, const MethodInfo* method);
// 0x1820337b0

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__CreateMapObjectRaw(System_String_o *prefab,MethodInfo *method)

{
  System_String_array *value;
  System_String_o *pSVar1;
  Map_MapScriptSceneObject_o *__this;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar2;
  
  if (Il2CppMethodInitialized_18434647c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434647c = '\x01';
  }
  if (prefab != (System_String_o *)0x0) {
    value = System_String__Split(prefab,10,0,(MethodInfo *)0x0);
    pSVar1 = System_String__Join("",value,(MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
    Map_MapScriptSceneObject___ctor(__this,(MethodInfo *)0x0);
    if (__this != (Map_MapScriptSceneObject_o *)0x0) {
      (*(__this->klass->vtable)._9_Deserialize.methodPtr)
                (__this,pSVar1,(__this->klass->vtable)._9_Deserialize.method);
      if ((__this->fields).Networked == false) {
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
        }
        pCVar2 = CustomLogic_CustomLogicMapBuiltin__CreateRuntimeMapObject(__this,(MethodInfo *)0x0);
        return pCVar2;
      }
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
      }
      pCVar2 = CustomLogic_CustomLogicMapBuiltin__CreateRuntimeNetworkedMapObject
                         (__this,false,(MethodInfo *)0x0);
      return pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$PrefabFromMapObject
// il2cpp: CustomLogic_CustomLogicPrefabBuiltin_o* CustomLogic_CustomLogicMapBuiltin__PrefabFromMapObject (CustomLogic_CustomLogicMapObjectBuiltin_o* mapObject, bool clearComponents, const MethodInfo* method);
// 0x182036100

CustomLogic_CustomLogicPrefabBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__PrefabFromMapObject
          (CustomLogic_CustomLogicMapObjectBuiltin_o *mapObject,bool clearComponents,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *prefabCSV;
  CustomLogic_CustomLogicPrefabBuiltin_o *__this;
  
  if (Il2CppMethodInitialized_18434647d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrefabBuiltin);
    Il2CppMethodInitialized_18434647d = '\x01';
  }
  if (((mapObject != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (mapObject->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    prefabCSV = (*(pMVar2->klass->vtable)._8_Serialize.methodPtr)
                          (pMVar2,(pMVar2->klass->vtable)._8_Serialize.method);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin);
    CustomLogic_CustomLogicPrefabBuiltin___ctor_1f79830(__this,prefabCSV,clearComponents,(MethodInfo *)0x0);
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$DestroyMapObject
// il2cpp: void CustomLogic_CustomLogicMapBuiltin__DestroyMapObject (CustomLogic_CustomLogicMapObjectBuiltin_o* mapObject, bool includeChildren, const MethodInfo* method);
// 0x182034710

void CustomLogic_CustomLogicMapBuiltin__DestroyMapObject
               (CustomLogic_CustomLogicMapObjectBuiltin_o *mapObject,bool includeChildren,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  CustomLogic_CustomLogicEvaluator_o *pCVar3;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar4;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  bool bVar5;
  uint64_t uVar6;
  
  if (Il2CppMethodInitialized_18434647e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item);
    Il2CppMethodInitialized_18434647e = '\x01';
  }
  if (((mapObject != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (mapObject->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    if ((pMVar2->fields).Networked == false) {
label_1820348d6:
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
      }
      CustomLogic_CustomLogicMapBuiltin__DestroyMapObjectBuiltin
                ((Il2CppObject *)mapObject,includeChildren,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (((pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
        (pMVar1 = (mapObject->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
       ((pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0 &&
        (pSVar4 = (System_Collections_Generic_Dictionary_int__ulong__o *)(pCVar3->fields).IdToNetworkView,
        pSVar4 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)))) {
      bVar5 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                        (pSVar4,(pMVar2->fields).Id,
                         (MethodInfo_1407110 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
                        );
      if (!bVar5) goto label_1820348d6;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (((pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
          (pMVar1 = (mapObject->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
         ((pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0 &&
          (pSVar4 = (System_Collections_Generic_Dictionary_int__ulong__o *)(pCVar3->fields).IdToNetworkView,
          pSVar4 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)))) {
        uVar6 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                          (pSVar4,(pMVar2->fields).Id,
                           (MethodInfo_14156F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item
                          );
        pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if ((((pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
             (pMVar1 = (mapObject->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
            (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) &&
           (__this = (System_Collections_Generic_Dictionary_int__object__o *)(pCVar3->fields).IdToNetworkView,
           __this != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
          System_Collections_Generic_Dictionary_int__object___Remove
                    (__this,(pMVar2->fields).Id,
                     (MethodInfo_1419B90 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_Remove
                    );
          if ((uVar6 != 0) &&
             (*(CustomLogic_CustomLogicPhotonSync_o **)(uVar6 + 0x38) !=
              (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
            CustomLogic_CustomLogicPhotonSync__DestroyMe
                      (*(CustomLogic_CustomLogicPhotonSync_o **)(uVar6 + 0x38),(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$CopyMapObject
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__CopyMapObject (CustomLogic_CustomLogicMapObjectBuiltin_o* mapObject, bool includeChildren, const MethodInfo* method);
// 0x1820332d0

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__CopyMapObject
          (CustomLogic_CustomLogicMapObjectBuiltin_o *mapObject,bool includeChildren,MethodInfo *method)

{
  int32_t parent;
  CustomLogic_CustomLogicEvaluator_o *__this;
  Map_MapObject_o *pMVar1;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar2;
  
  if (Il2CppMethodInitialized_18434647f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_18434647f = '\x01';
  }
  if ((mapObject != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pMVar1 = (mapObject->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) {
    parent = (pMVar1->fields).Parent;
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    }
    pMVar1 = CustomLogic_CustomLogicMapBuiltin__CopyMapObject_20333b0
                       (pMVar1,parent,includeChildren,(MethodInfo *)0x0);
    if (pMVar1 != (Map_MapObject_o *)0x0) {
      (pMVar1->fields).RuntimeCreated = true;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pCVar2 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this,pMVar1,(MethodInfo *)0x0);
        return pCVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$DestroyMapTargetable
// il2cpp: void CustomLogic_CustomLogicMapBuiltin__DestroyMapTargetable (CustomLogic_CustomLogicMapTargetableBuiltin_o* targetable, const MethodInfo* method);
// 0x182034910

void CustomLogic_CustomLogicMapBuiltin__DestroyMapTargetable
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *targetable,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  System_Collections_Generic_List_MapTargetable__o *__this;
  
  if (Il2CppMethodInitialized_184346480 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapTargetable_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346480 = '\x01';
  }
  if (targetable != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) {
    obj = (UnityEngine_Object_o *)(targetable->fields)._GameObject_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this = TypeInfo_Map_MapLoader->static_fields->MapTargetables;
    if (__this != (System_Collections_Generic_List_MapTargetable__o *)0x0) {
      System_Collections_Generic_List_object___Remove
                ((System_Collections_Generic_List_object__o *)__this,
                 (Il2CppObject *)(targetable->fields)._Value_k__BackingField,
                 (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_MapTargetable_Remove);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$UpdateNavMesh
// il2cpp: void CustomLogic_CustomLogicMapBuiltin__UpdateNavMesh (const MethodInfo* method);
// 0x182036510

void CustomLogic_CustomLogicMapBuiltin__UpdateNavMesh(MethodInfo *method)

{
  System_Threading_Tasks_Task_o *__this;
  
  if (Il2CppMethodInitialized_184346481 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184346481 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = Map_MapLoader__UpdateNavMesh((MethodInfo *)0x0);
  if (__this != (System_Threading_Tasks_Task_o *)0x0) {
    System_Threading_Tasks_Task__Wait(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$UpdateNavMeshAsync
// il2cpp: void CustomLogic_CustomLogicMapBuiltin__UpdateNavMeshAsync (const MethodInfo* method);
// 0x1820364d0

void CustomLogic_CustomLogicMapBuiltin__UpdateNavMeshAsync(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346482 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184346482 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  Map_MapLoader__UpdateNavMesh((MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapBuiltin$$CreateRuntimeNetworkedMapObject
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__CreateRuntimeNetworkedMapObject (Map_MapScriptSceneObject_o* script, bool persistsOwnership, const MethodInfo* method);
// 0x182033b50

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__CreateRuntimeNetworkedMapObject
          (Map_MapScriptSceneObject_o *script,bool persistsOwnership,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Utility_RateLimit_o *__this;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Quaternion_StaticFields *pUVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  System_Object_array *data;
  Il2CppObject *pIVar8;
  Il2CppObject *pIVar9;
  UnityEngine_GameObject_o *__this_00;
  CustomLogic_CustomLogicPhotonSync_o *__this_01;
  System_String_o *pSVar10;
  Il2CppClass *pIVar11;
  System_Exception_o *pSVar12;
  MethodInfo *pMVar13;
  undefined4 local_res20 [2];
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_Fields local_38 [3];
  
  if (Il2CppMethodInitialized_184346483 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicPhotonSync);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Game/CustomLogicPhotonSyncDynamicPrefab");
    Il2CppMethodInitialized_184346483 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  if (Il2CppMethodInitialized_184346489 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_184346489 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  if (Il2CppMethodInitialized_184346487 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_184346487 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  if (TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_allowedInstantiateCount <=
      TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateCount) {
    pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    pSVar12 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar11);
    pSVar10 = il2cpp_codegen_get_runtime_metadata(&"Out of instantiations, please clean up networked objects to spawn more.");
    System_Exception___ctor_1b6abf0(pSVar12,pSVar10,(MethodInfo *)0x0);
    pMVar13 = il2cpp_codegen_get_runtime_metadata
                        (&MethodInfo_CustomLogic_CustomLogicMapBuiltin_TrySpawningRuntimeNetworkedObject);
    il2cpp_codegen_raise_exception((Il2CppObject *)pSVar12,pMVar13);
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  __this = TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateLimit;
  if (__this != (Utility_RateLimit_o *)0x0) {
    bVar7 = Utility_RateLimit__Use(__this,1,(MethodInfo *)0x0);
    if (!bVar7) {
      pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      pSVar12 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar11);
      pSVar10 = il2cpp_codegen_get_runtime_metadata(&"Spawning networked runtime map objects too fast, please slow down.");
      System_Exception___ctor_1b6abf0(pSVar12,pSVar10,(MethodInfo *)0x0);
      pMVar13 = il2cpp_codegen_get_runtime_metadata
                          (&MethodInfo_CustomLogic_CustomLogicMapBuiltin_TrySpawningRuntimeNetworkedObject);
      il2cpp_codegen_raise_exception((Il2CppObject *)pSVar12,pMVar13);
    }
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    }
    TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateCount =
         TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateCount + 1;
    if (script != (Map_MapScriptSceneObject_o *)0x0) {
      (script->fields).Id = -1;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      (script->fields).Parent = TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID;
      (script->fields).Networked = true;
      data = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_res20[0] = 2;
      pIVar8 = il2cpp_value_box(g_data_184354e08,local_res20);
      if (data != (System_Object_array *)0x0) {
        if (pIVar8 != (Il2CppObject *)0x0) {
          pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((data->obj).klass)->_1).element_class);
          if (pIVar9 == (Il2CppObject *)0x0) {
            pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
          }
        }
        if ((int)data->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        data->m_Items[0] = pIVar8;
        Il2CppCodeGenWriteBarrier(data->m_Items,pIVar8);
        if (Il2CppMethodInitialized_18433dbea == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433dbea = '\x01';
        }
        pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar1._0_4_ = (pUVar3->zeroVector).fields.x;
        uVar1._4_4_ = (pUVar3->zeroVector).fields.y;
        fVar2 = (pUVar3->zeroVector).fields.z;
        if (Il2CppMethodInitialized_18433de5b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
          Il2CppMethodInitialized_18433de5b = '\x01';
        }
        pUVar4 = TypeInfo_UnityEngine_Quaternion->static_fields;
        uVar5._0_4_ = (pUVar4->identityQuaternion).fields.x;
        uVar5._4_4_ = (pUVar4->identityQuaternion).fields.y;
        uVar6._0_4_ = (pUVar4->identityQuaternion).fields.z;
        uVar6._4_4_ = (pUVar4->identityQuaternion).fields.w;
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        local_48._0_8_ = uVar1;
        local_48.z = fVar2;
        local_38[0]._0_8_ = uVar5;
        local_38[0]._8_8_ = uVar6;
        __this_00 = Photon_Pun_PhotonNetwork__Instantiate
                              ("Game/CustomLogicPhotonSyncDynamicPrefab",(UnityEngine_Vector3_o *)&local_48,
                               (UnityEngine_Quaternion_o *)local_38,'\0',data,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = UnityEngine_GameObject__GetComponent_object_
                                (__this_00,
                                 (MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicPhotonSync);
          pSVar10 = (*(script->klass->vtable)._8_Serialize.methodPtr)
                              (script,(script->klass->vtable)._8_Serialize.method);
          if (__this_01 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
            CustomLogic_CustomLogicPhotonSync__InitDynamic
                      (__this_01,persistsOwnership,pSVar10,(MethodInfo *)0x0);
            return (__this_01->fields)._CustomLogicMapObjectBuiltin_k__BackingField;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$CreateRuntimeMapObject
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__CreateRuntimeMapObject (Map_MapScriptSceneObject_o* script, const MethodInfo* method);
// 0x182033a50

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__CreateRuntimeMapObject
          (Map_MapScriptSceneObject_o *script,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  int32_t iVar2;
  Map_MapObject_o *mapObject;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar3;
  
  if (Il2CppMethodInitialized_184346484 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184346484 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  iVar2 = Map_MapLoader__GetNextObjectId((MethodInfo *)0x0);
  if (script != (Map_MapScriptSceneObject_o *)0x0) {
    (script->fields).Id = iVar2;
    (script->fields).Parent = TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID;
    (script->fields).Networked = false;
    mapObject = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)script,false,(MethodInfo *)0x0);
    Map_MapLoader__SetParent_1eb01f0(mapObject,(MethodInfo *)0x0);
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      CustomLogic_CustomLogicEvaluator__LoadMapObjectComponents(pCVar1,mapObject,true,(MethodInfo *)0x0);
      if (mapObject != (Map_MapObject_o *)0x0) {
        (mapObject->fields).RuntimeCreated = true;
        pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pCVar3 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                             (pCVar1,mapObject,(MethodInfo *)0x0);
          return pCVar3;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$CopyMapObject
// il2cpp: Map_MapObject_o* CustomLogic_CustomLogicMapBuiltin__CopyMapObject (Map_MapObject_o* obj, int32_t parent, bool recursive, const MethodInfo* method);
// 0x1820333b0
// eh: try 0x182033670..0x1820337a1 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18203366e: nop 
// asm:   0x182033753: mov rdx, qword ptr [rip + 0x20548ee]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x18203375a: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18203375f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182033764: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182033769: test rcx, rcx
// asm:   0x18203376c: jne 0x1820337a1
// asm:   0x18203376e: mov r15, qword ptr [rsp + 0x80]
// asm:   0x1820337a1: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

Map_MapObject_o *
CustomLogic_CustomLogicMapBuiltin__CopyMapObject_20333b0
          (Map_MapObject_o *obj,int32_t parent,bool recursive,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  CustomLogic_CustomLogicEvaluator_o *__this;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar2;
  bool bVar3;
  int32_t iVar4;
  Map_MapScriptSceneObject_o *__this_00;
  System_String_o *pSVar5;
  Map_MapObject_o *mapObject;
  System_Collections_Generic_HashSet_uint__o *__this_01;
  Map_MapObject_o *obj_00;
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  System_Collections_Generic_HashSet_Enumerator_T__o local_38;
  
  if (Il2CppMethodInitialized_184346485 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    Il2CppMethodInitialized_184346485 = '\x01';
  }
  local_38.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(__this_00,(MethodInfo *)0x0);
  if (((obj != (Map_MapObject_o *)0x0) &&
      (pMVar1 = (obj->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) &&
     (pSVar5 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method),
     __this_00 != (Map_MapScriptSceneObject_o *)0x0)) {
    (*(__this_00->klass->vtable)._9_Deserialize.methodPtr)
              (__this_00,pSVar5,(__this_00->klass->vtable)._9_Deserialize.method);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    iVar4 = Map_MapLoader__GetNextObjectId((MethodInfo *)0x0);
    (__this_00->fields).Id = iVar4;
    (__this_00->fields).Parent = parent;
    (__this_00->fields).Networked = false;
    mapObject = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)__this_00,false,(MethodInfo *)0x0);
    Map_MapLoader__SetParent_1eb01f0(mapObject,(MethodInfo *)0x0);
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if ((__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
       (CustomLogic_CustomLogicEvaluator__LoadMapObjectComponents(__this,mapObject,true,(MethodInfo *)0x0),
       mapObject != (Map_MapObject_o *)0x0)) {
      (mapObject->fields).RuntimeCreated = true;
      if (!recursive) {
        return mapObject;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pMVar1 = (obj->fields).ScriptObject;
      if ((pMVar1 != (Map_MapScriptBaseObject_o *)0x0) &&
         (pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToChildren,
         pSVar2 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) {
        bVar3 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                          (pSVar2,(pMVar1->fields).Id,
                           (MethodInfo_1407110 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
        if (!bVar3) {
          return mapObject;
        }
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pMVar1 = (obj->fields).ScriptObject;
        if (((pMVar1 != (Map_MapScriptBaseObject_o *)0x0) &&
            (pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                      TypeInfo_Map_MapLoader->static_fields->IdToChildren,
            pSVar2 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) &&
           (__this_01 = (System_Collections_Generic_HashSet_uint__o *)
                        System_Collections_Generic_Dictionary_int__ulong___get_Item
                                  (pSVar2,(pMVar1->fields).Id,
                                   (MethodInfo_14156F0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item),
           __this_01 != (System_Collections_Generic_HashSet_uint__o *)0x0)) {
          System_Collections_Generic_HashSet_uint___GetEnumerator
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_50,__this_01,
                     (MethodInfo_175C240 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
          local_38.fields._set = (System_Collections_Generic_HashSet_T__o *)local_50._0_8_;
          local_38.fields._index = local_50._8_4_;
          local_38.fields._version = local_50._12_4_;
          local_38.fields._current = local_40;
          local_50._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
          local_50._8_8_ = &local_38;
          while( true ) {
            bVar3 = System_Collections_Generic_HashSet_Enumerator_uint___MoveNext
                              (&local_38,
                               (MethodInfo_1537E90 *)
                               MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
            if (!bVar3) {
              System_Collections_Generic_HashSet_Enumerator_int___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_38,
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
              return mapObject;
            }
            iVar4 = (int32_t)local_38.fields._current;
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) break;
            bVar3 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                              (pSVar2,iVar4,
                               (MethodInfo_1407110 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
            if (bVar3) {
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              }
              pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                       TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
              if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
                ThrowNullReferenceException();
              }
              obj_00 = (Map_MapObject_o *)
                       System_Collections_Generic_Dictionary_int__ulong___get_Item
                                 (pSVar2,iVar4,
                                  (MethodInfo_14156F0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
              iVar4 = (__this_00->fields).Id;
              if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
              }
              CustomLogic_CustomLogicMapBuiltin__CopyMapObject_20333b0(obj_00,iVar4,true,(MethodInfo *)0x0);
            }
          }
          ThrowNullReferenceException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$DestroyMapObjectBuiltin
// il2cpp: void CustomLogic_CustomLogicMapBuiltin__DestroyMapObjectBuiltin (Il2CppObject* obj, bool recursive, const MethodInfo* method);
// 0x182033f70
// eh: try 0x182034400..0x1820346fe -> pad 0x183331b00 (+5 call sites) catch Il2CppExceptionWrapper
// asm: 63 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820340ff: mov r9, rdx
// asm:   0x182034102: mov rdx, qword ptr [rip + 0x208c19f]  ; TypeInfo_Map_MapObject
// asm:   0x182034109: jmp 0x18203414f
// asm:   0x1820341bb: mov qword ptr [rsp + 0xa0], rdi
// asm:   0x182034444: mov rdx, qword ptr [rip + 0x2053bfd]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x18203444b: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182034450: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182034455: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x18203445a: test rcx, rcx
// asm:   0x18203445d: jne 0x1820346e1
// asm:   0x182034463: mov rdi, qword ptr [rsp + 0xa0]
// asm:   0x18203446b: mov rsi, qword ptr [rsp + 0xb8]
// asm:   0x18203452b: mov rdx, qword ptr [rip + 0x20463de]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x182034532: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182034537: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18203453c: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x182034541: test rcx, rcx
// asm:   0x182034544: jne 0x1820346ed
// asm:   0x18203454a: mov rdi, qword ptr [rsp + 0xa0]
// asm:   0x182034552: mov rsi, qword ptr [rsp + 0xb8]
// asm:   0x1820345cd: nop dword ptr [rax]
// asm:   0x1820346ac: mov rdx, qword ptr [rip + 0x2053995]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x1820346b3: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820346b8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820346bd: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1820346c2: test rcx, rcx
// asm:   0x1820346c5: jne 0x1820346fe
// asm:   0x1820346e1: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820346ed: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820346fe: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318100: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318105: push rbp
// asm:   0x183318106: sub rsp, 0x20
// asm:   0x18331810a: mov rbp, rdx
// asm:   0x18331810d: mov rax, qword ptr [rbp + 0x78]
// asm:   0x183318111: mov rcx, qword ptr [rax]
// asm:   0x183318114: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183318118: movabs rax, 0
// asm:   0x183318122: add rsp, 0x20
// asm:   0x183318126: pop rbp
// asm:   0x183318127: ret 
// asm:   0x183331b00: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331b05: push rbp
// asm:   0x183331b06: sub rsp, 0x20
// asm:   0x183331b0a: mov rbp, rdx
// asm:   0x183331b0d: mov rax, qword ptr [rbp + 0x68]
// asm:   0x183331b11: mov rcx, qword ptr [rax]
// asm:   0x183331b14: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183331b18: movabs rax, 0
// asm:   0x183331b22: add rsp, 0x20
// asm:   0x183331b26: pop rbp
// asm:   0x183331b27: ret 
// asm:   0x183331d60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331d65: push rbp
// asm:   0x183331d66: sub rsp, 0x20
// asm:   0x183331d6a: mov rbp, rdx
// asm:   0x183331d6d: mov rax, qword ptr [rbp + 0x70]
// asm:   0x183331d71: mov rcx, qword ptr [rax]
// asm:   0x183331d74: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183331d78: movabs rax, 0
// asm:   0x183331d82: add rsp, 0x20
// asm:   0x183331d86: pop rbp
// asm:   0x183331d87: ret 

void CustomLogic_CustomLogicMapBuiltin__DestroyMapObjectBuiltin
               (Il2CppObject *obj,bool recursive,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  void *pvVar3;
  CustomLogic_CustomLogicEvaluator_o *pCVar4;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar5;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  System_Collections_Generic_List_T__o *__this_00;
  CustomLogic_CustomLogicComponentInstance_o *instance;
  bool bVar6;
  System_Collections_Generic_HashSet_int__o *__this_01;
  System_Collections_Generic_HashSet_uint__o *__this_02;
  Il2CppObject *obj_00;
  Il2CppClass *pIVar7;
  undefined1 local_78 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_68;
  undefined1 local_60 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_58;
  CustomLogic_CustomLogicComponentInstance_o *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  CustomLogic_CustomLogicComponentInstance_o *local_38;
  
  if (Il2CppMethodInitialized_184346486 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObject);
    Il2CppMethodInitialized_184346486 = '\x01';
  }
  local_60 = (undefined1  [8])0x0;
  pUStack_58 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_50 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  if (obj == (Il2CppObject *)0x0) {
    return;
  }
  pIVar7 = obj->klass;
  bVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
  if (((pIVar7->_2).typeHierarchyDepth < bVar1) ||
     ((pIVar7->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
    bVar1 = (TypeInfo_Map_MapObject->_2).typeHierarchyDepth;
    if ((pIVar7->_2).typeHierarchyDepth < bVar1) {
      return;
    }
    if ((pIVar7->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Map_MapObject) {
      return;
    }
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth <=
        (pIVar7->_2).typeHierarchyDepth) goto label_18203414f;
label_182034186:
    bVar1 = (TypeInfo_Map_MapObject->_2).typeHierarchyDepth;
    if (((obj->klass->_2).typeHierarchyDepth < bVar1) ||
       ((obj->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Map_MapObject)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pIVar7 = (Il2CppClass *)0x0;
    if (bVar6) {
      pIVar7 = (Il2CppClass *)obj;
    }
  }
  else {
label_18203414f:
    if ((pIVar7->_2).typeHierarchy
        [(ulonglong)(TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin) goto label_182034186;
    pIVar7 = obj[3].klass;
    obj[3].klass = (Il2CppClass *)0x0;
    Il2CppCodeGenWriteBarrier(&obj[3].klass,(void *)0x0);
  }
  if ((pIVar7 != (Il2CppClass *)0x0) && (pvVar3 = (pIVar7->_1).byval_arg.data, pvVar3 != (void *)0x0)) {
    iVar2 = *(int32_t *)((longlong)pvVar3 + 0x20);
    if ((*(char *)&(pIVar7->_1).declaringType != '\0') &&
       (*(char *)((longlong)(pIVar7->_1).byval_arg.data + 0x2b) != '\0')) {
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
      }
      TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateCount =
           TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateCount + -1;
    }
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar4 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if ((pCVar4 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
       (pSVar5 = (System_Collections_Generic_Dictionary_int__ulong__o *)(pCVar4->fields).IdToNetworkView,
       pSVar5 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) {
      bVar6 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                        (pSVar5,iVar2,
                         (MethodInfo_1407110 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
                        );
      if (bVar6) {
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        pCVar4 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if ((pCVar4 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
           (pSVar5 = (System_Collections_Generic_Dictionary_int__ulong__o *)(pCVar4->fields).IdToNetworkView,
           pSVar5 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) goto label_182034704;
        System_Collections_Generic_Dictionary_int__ulong___get_Item
                  (pSVar5,iVar2,
                   (MethodInfo_14156F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item
                  );
        pCVar4 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if ((pCVar4 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
           (__this = (System_Collections_Generic_Dictionary_int__object__o *)(pCVar4->fields).IdToNetworkView,
           __this == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) goto label_182034704;
        System_Collections_Generic_Dictionary_int__object___Remove
                  (__this,iVar2,
                   (MethodInfo_1419B90 *)
                   MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_Remove);
      }
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
      System_Collections_Generic_HashSet_int____ctor
                (__this_01,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar5 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToChildren;
      if (pSVar5 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
        bVar6 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                          (pSVar5,iVar2,
                           (MethodInfo_1407110 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
        if (bVar6) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pvVar3 = (pIVar7->_1).byval_arg.data;
          if (((pvVar3 == (void *)0x0) ||
              (pSVar5 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                        TypeInfo_Map_MapLoader->static_fields->IdToChildren,
              pSVar5 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) ||
             (__this_02 = (System_Collections_Generic_HashSet_uint__o *)
                          System_Collections_Generic_Dictionary_int__ulong___get_Item
                                    (pSVar5,*(int32_t *)((longlong)pvVar3 + 0x20),
                                     (MethodInfo_14156F0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item
                                    ), __this_02 == (System_Collections_Generic_HashSet_uint__o *)0x0))
          goto label_182034704;
          System_Collections_Generic_HashSet_uint___GetEnumerator
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_78,__this_02,
                     (MethodInfo_175C240 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
          local_60 = (undefined1  [8])local_78._0_8_;
          pUStack_58 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78._8_8_;
          local_50 = local_68;
          local_78._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
          local_78._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60;
          while (bVar6 = System_Collections_Generic_HashSet_Enumerator_uint___MoveNext
                                   ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,
                                    (MethodInfo_1537E90 *)
                                    MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext),
                bVar6) {
            if (__this_01 == (System_Collections_Generic_HashSet_int__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_HashSet_int___Add
                      (__this_01,(int32_t)local_50,
                       (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
          }
          System_Collections_Generic_HashSet_Enumerator_int___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60,
                     MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
        }
        __this_00 = *(System_Collections_Generic_List_T__o **)&(pIVar7->_1).this_arg.bits;
        if (__this_00 != (System_Collections_Generic_List_T__o *)0x0) {
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_78,__this_00,
                     (MethodInfo_91F180 *)
                     MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
          local_48 = (undefined1  [8])local_78._0_8_;
          pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78._8_8_;
          local_38 = local_68;
          local_78._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
          local_78._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
          while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                                    (MethodInfo_153A2A0 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                                   ), instance = local_38, bVar6) {
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
            }
            pCVar4 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
            if (pCVar4 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
              ThrowNullReferenceException();
            }
            CustomLogic_CustomLogicEvaluator__RemoveComponent(pCVar4,instance,(MethodInfo *)0x0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
                     MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
                    );
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          Map_MapLoader__DeleteObject((Map_MapObject_o *)pIVar7,(MethodInfo *)0x0);
          if (recursive) {
            if (__this_01 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_182034704;
            System_Collections_Generic_HashSet_uint___GetEnumerator
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_78,
                       (System_Collections_Generic_HashSet_uint__o *)__this_01,
                       (MethodInfo_175C240 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
            local_60 = (undefined1  [8])local_78._0_8_;
            pUStack_58 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78._8_8_;
            local_50 = local_68;
            local_78._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
            local_78._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60;
            while (bVar6 = System_Collections_Generic_HashSet_Enumerator_uint___MoveNext
                                     ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,
                                      (MethodInfo_1537E90 *)
                                      MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext),
                  bVar6) {
              iVar2 = (int32_t)local_50;
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              }
              pSVar5 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                       TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
              if (pSVar5 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar6 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                                (pSVar5,iVar2,
                                 (MethodInfo_1407110 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
              if (bVar6) {
                if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                }
                pSVar5 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                         TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                if (pSVar5 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
                  ThrowNullReferenceException();
                }
                obj_00 = (Il2CppObject *)
                         System_Collections_Generic_Dictionary_int__ulong___get_Item
                                   (pSVar5,iVar2,
                                    (MethodInfo_14156F0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
                if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin)
                  ;
                }
                CustomLogic_CustomLogicMapBuiltin__DestroyMapObjectBuiltin(obj_00,true,(MethodInfo *)0x0);
              }
            }
            System_Collections_Generic_HashSet_Enumerator_int___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60,
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
          }
          return;
        }
      }
    }
  }
label_182034704:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$get_HasInstantiateAvailable
// il2cpp: bool CustomLogic_CustomLogicMapBuiltin__get_HasInstantiateAvailable (const MethodInfo* method);
// 0x182036800

bool CustomLogic_CustomLogicMapBuiltin__get_HasInstantiateAvailable(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346487 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_184346487 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  return TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateCount <
         TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_allowedInstantiateCount;
}


// CustomLogic.CustomLogicMapBuiltin$$CanSpawnRuntimeNetworkedMapObject
// il2cpp: bool CustomLogic_CustomLogicMapBuiltin__CanSpawnRuntimeNetworkedMapObject (const MethodInfo* method);
// 0x1820331f0

bool CustomLogic_CustomLogicMapBuiltin__CanSpawnRuntimeNetworkedMapObject(MethodInfo *method)

{
  Utility_RateLimit_o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346488 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_184346488 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  if (Il2CppMethodInitialized_184346487 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_184346487 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  if (TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_allowedInstantiateCount <=
      TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateCount) {
    return false;
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  __this = TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateLimit;
  if (__this != (Utility_RateLimit_o *)0x0) {
    bVar1 = Utility_RateLimit__Peek(__this,1,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$TrySpawningRuntimeNetworkedObject
// il2cpp: void CustomLogic_CustomLogicMapBuiltin__TrySpawningRuntimeNetworkedObject (const MethodInfo* method);
// 0x182036330

void CustomLogic_CustomLogicMapBuiltin__TrySpawningRuntimeNetworkedObject(MethodInfo *method)

{
  Utility_RateLimit_o *__this;
  bool bVar1;
  Il2CppClass *pIVar2;
  System_Exception_o *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  
  if (Il2CppMethodInitialized_184346489 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_184346489 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  if (Il2CppMethodInitialized_184346487 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_184346487 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  if (TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateCount <
      TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_allowedInstantiateCount) {
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    }
    __this = TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateLimit;
    if (__this != (Utility_RateLimit_o *)0x0) {
      bVar1 = Utility_RateLimit__Use(__this,1,(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
        }
        TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateCount =
             TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateCount + 1;
        return;
      }
      pIVar2 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      pSVar3 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar2);
      pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Spawning networked runtime map objects too fast, please slow down.");
      System_Exception___ctor_1b6abf0(pSVar3,pSVar4,(MethodInfo *)0x0);
      pMVar5 = il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicMapBuiltin_TrySpawningRuntimeNetworkedObject);
      il2cpp_codegen_raise_exception((Il2CppObject *)pSVar3,pMVar5);
    }
    ThrowNullReferenceException();
  }
  pIVar2 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  pSVar3 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar2);
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Out of instantiations, please clean up networked objects to spawn more.");
  System_Exception___ctor_1b6abf0(pSVar3,pSVar4,(MethodInfo *)0x0);
  pMVar5 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicMapBuiltin_TrySpawningRuntimeNetworkedObject);
  il2cpp_codegen_raise_exception((Il2CppObject *)pSVar3,pMVar5);
}


// CustomLogic.CustomLogicMapBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicMapBuiltin__get_ClassName (CustomLogic_CustomLogicMapBuiltin_o* __this, const MethodInfo* method);
// 0x1820367d0

System_String_o *
CustomLogic_CustomLogicMapBuiltin__get_ClassName
          (CustomLogic_CustomLogicMapBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434648a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Map");
    Il2CppMethodInitialized_18434648a = '\x01';
  }
  return "Map";
}


// CustomLogic.CustomLogicMapBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicMapBuiltin__get_IsAbstract (CustomLogic_CustomLogicMapBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicMapBuiltin__get_IsAbstract(CustomLogic_CustomLogicMapBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicMapBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicMapBuiltin__get_IsStatic (CustomLogic_CustomLogicMapBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicMapBuiltin__get_IsStatic(CustomLogic_CustomLogicMapBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicMapBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicMapBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicMapBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicMapBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicMapBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicMapBuiltin$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapBuiltin___cctor (const MethodInfo* method);
// 0x182036570

void CustomLogic_CustomLogicMapBuiltin___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434648b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_18434648b = '\x01';
  }
  TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateLimit = (Utility_RateLimit_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateLimit,(void *)0x0);
  TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateCount = 0;
  TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_allowedInstantiateCount = 100;
  return;
}


