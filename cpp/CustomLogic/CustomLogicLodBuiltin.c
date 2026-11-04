// Type: CustomLogic.CustomLogicLodBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLodBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLodBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLodBuiltin_o* CustomLogic_CustomLogicLodBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181f07a50

CustomLogic_CustomLogicLodBuiltin_o *
CustomLogic_CustomLogicLodBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicLodBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843453ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLodBuiltin);
    Il2CppMethodInitialized_1843453ee = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLodBuiltin);
      (__this->fields)._detailPriority = 1.0;
      CustomLogic_BuiltinComponentInstance___ctor
                ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
                 (MethodInfo *)0x0);
      return __this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLodBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicLodBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLodBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181eec640

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLodBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Func_CustomLogicLodBuiltin__object__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o *__this_01;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_1843453ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLodBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"DetailPriority");
    il2cpp_codegen_initialize_runtime_metadata(&"DistanceThreshold");
    Il2CppMethodInitialized_1843453ef = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"DistanceThreshold",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicLodBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLodBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843453f0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLodBuiltin_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DistanceThreshold_g____gette
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DistanceThreshold_g____sette
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLodBuiltin_object);
      Il2CppMethodInitialized_1843453f0 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLodBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DistanceThreshold_g____gette
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLodBuiltin_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DistanceThreshold_g____sette
    ;
  }
  else {
    bVar1 = System_String__op_Equality(name,"DetailPriority",(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLodBuiltin not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_02,pSVar2,(MethodInfo *)0x0);
      pMVar3 = il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar3);
    }
    if ((TypeInfo_CustomLogic_CustomLogicLodBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLodBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843453f1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLodBuiltin_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DetailPriority_g____getter_3
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DetailPriority_g____setter_3
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLodBuiltin_object);
      Il2CppMethodInitialized_1843453f1 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLodBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DetailPriority_g____getter_3
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLodBuiltin_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DetailPriority_g____setter_3
    ;
  }
  System_Action_object__object____ctor
            (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_01;
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$__CreatePropertyBinding__DistanceThreshold
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o* CustomLogic_CustomLogicLodBuiltin_Bindings____CreatePropertyBinding__DistanceThreshold (const MethodInfo* method);
// 0x181efb750

CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o *
CustomLogic_CustomLogicLodBuiltin_Bindings____CreatePropertyBinding__DistanceThreshold(MethodInfo *method)

{
  System_Func_CustomLogicLodBuiltin__object__o *__this;
  System_Action_CustomLogicLodBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843453f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLodBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DistanceThreshold_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DistanceThreshold_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLodBuiltin_object);
    Il2CppMethodInitialized_1843453f0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLodBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DistanceThreshold_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLodBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DistanceThreshold_g____sette
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$__CreatePropertyBinding__DetailPriority
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o* CustomLogic_CustomLogicLodBuiltin_Bindings____CreatePropertyBinding__DetailPriority (const MethodInfo* method);
// 0x181efb660

CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o *
CustomLogic_CustomLogicLodBuiltin_Bindings____CreatePropertyBinding__DetailPriority(MethodInfo *method)

{
  System_Func_CustomLogicLodBuiltin__object__o *__this;
  System_Action_CustomLogicLodBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843453f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLodBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DetailPriority_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DetailPriority_g____setter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLodBuiltin_object);
    Il2CppMethodInitialized_1843453f1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLodBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DetailPriority_g____getter_3
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLodBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DetailPriority_g____setter_3
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLodBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181eff170

void CustomLogic_CustomLogicLodBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843453f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLodBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"DetailPriority");
    il2cpp_codegen_initialize_runtime_metadata(&"DistanceThreshold");
    Il2CppMethodInitialized_1843453f2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DistanceThreshold",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DetailPriority",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicLodBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLodBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$<__CreatePropertyBinding__DistanceThreshold>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DistanceThreshold_g____getter_2_0 (CustomLogic_CustomLogicLodBuiltin_o* __i, const MethodInfo* method);
// 0x181ef15d0

Il2CppObject *
CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DistanceThreshold_g____getter_2_0
          (CustomLogic_CustomLogicLodBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LODGroup_o *__this;
  UnityEngine_LOD_array *pUVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicLodBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LODGroup_o *)0x0)) {
    pUVar1 = UnityEngine_LODGroup__GetLODs(__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_LOD_array *)0x0) {
      if ((int)pUVar1->max_length != 0) {
        local_res8[0] = pUVar1->m_Items[0].fields.screenRelativeTransitionHeight;
        pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
        return pIVar2;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$<__CreatePropertyBinding__DistanceThreshold>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DistanceThreshold_g____setter_2_1 (CustomLogic_CustomLogicLodBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef1630

void CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DistanceThreshold_g____setter_2_1
               (CustomLogic_CustomLogicLodBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_LODGroup_o *pUVar1;
  UnityEngine_LOD_array *lods;
  float fVar2;
  
  if (Il2CppMethodInitialized_1843453f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453f3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (((__i != (CustomLogic_CustomLogicLodBuiltin_o *)0x0) &&
      (pUVar1 = (__i->fields).Value, pUVar1 != (UnityEngine_LODGroup_o *)0x0)) &&
     (lods = UnityEngine_LODGroup__GetLODs(pUVar1,(MethodInfo *)0x0), lods != (UnityEngine_LOD_array *)0x0)) {
    if (lods->max_length == 0) {
      return;
    }
    if ((int)lods->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    lods->m_Items[0].fields.screenRelativeTransitionHeight = fVar2;
    pUVar1 = (__i->fields).Value;
    if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
      UnityEngine_LODGroup__SetLODs(pUVar1,lods,(MethodInfo *)0x0);
      pUVar1 = (__i->fields).Value;
      if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
        UnityEngine_LODGroup__RecalculateBounds(pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$<__CreatePropertyBinding__DetailPriority>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DetailPriority_g____getter_3_0 (CustomLogic_CustomLogicLodBuiltin_o* __i, const MethodInfo* method);
// 0x181ef13d0

Il2CppObject *
CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DetailPriority_g____getter_3_0
          (CustomLogic_CustomLogicLodBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicLodBuiltin_o *)0x0) {
    local_res8[0] = (__i->fields)._detailPriority;
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$<__CreatePropertyBinding__DetailPriority>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DetailPriority_g____setter_3_1 (CustomLogic_CustomLogicLodBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef1400
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ef157d: nop dword ptr [rax]

void CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DetailPriority_g____setter_3_1
               (CustomLogic_CustomLogicLodBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int iVar1;
  Settings_GraphicsSettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  UnityEngine_GameObject_o *__this;
  int32_t iVar4;
  System_Object_array *pSVar5;
  uint uVar6;
  bool bVar7;
  float fVar8;
  
  if (Il2CppMethodInitialized_1843453f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453f4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicLodBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843453ea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
      Il2CppMethodInitialized_1843453ea = '\x01';
    }
    if (fVar8 < 0.0) {
      fVar8 = 0.0;
    }
    else if (1.0 < fVar8) {
      fVar8 = 1.0;
    }
    bVar7 = Il2CppMethodInitialized_1843453eb == '\0';
    (__i->fields)._detailPriority = fVar8;
    if (bVar7) {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumMaxValue_PresetQualityLevel);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
      Il2CppMethodInitialized_1843453eb = '\x01';
    }
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    iVar4 = Utility_Util__EnumMaxValue___Il2CppFullySharedGenericType_
                      ((MethodInfo_8693C0 *)MethodInfo_Utility_Util_EnumMaxValue_PresetQualityLevel);
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
    if ((pSVar2 != (Settings_GraphicsSettings_o *)0x0) &&
       (pSVar3 = (pSVar2->fields).PresetQuality, pSVar3 != (Settings_IntSetting_o *)0x0)) {
      iVar1 = (pSVar3->fields)._value;
      __this = (__i->fields).Owner;
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                           (__this,(MethodInfo_6F5810 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
        if (pSVar5 != (System_Object_array *)0x0) {
          uVar6 = 0;
          while( true ) {
            if ((int)pSVar5->max_length <= (int)uVar6) {
              return;
            }
            if ((uint)pSVar5->max_length <= uVar6) {
              ThrowIndexOutOfRangeException();
            }
            if ((UnityEngine_Renderer_o *)pSVar5->m_Items[(int)uVar6] == (UnityEngine_Renderer_o *)0x0) break;
            UnityEngine_Renderer__set_enabled
                      ((UnityEngine_Renderer_o *)pSVar5->m_Items[(int)uVar6],
                       1.0 - (float)iVar1 / (float)iVar4 <= fVar8,(MethodInfo *)0x0);
            uVar6 = uVar6 + 1;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLodBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLodBuiltin___ctor (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x181f06090

void CustomLogic_CustomLogicLodBuiltin___ctor(CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  (__this->fields)._detailPriority = 1.0;
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicLodBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLodBuiltin___ctor (CustomLogic_CustomLogicLodBuiltin_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* owner, const MethodInfo* method);
// 0x181f060b0

void CustomLogic_CustomLogicLodBuiltin___ctor_1f060b0
               (CustomLogic_CustomLogicLodBuiltin_o *__this,CustomLogic_CustomLogicMapObjectBuiltin_o *owner,
               MethodInfo *method)

{
  byte bVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Component_o *value;
  UnityEngine_Object_o *x;
  bool bVar4;
  UnityEngine_LODGroup_o *pUVar5;
  UnityEngine_Renderer_array *renderers;
  UnityEngine_LOD_array *lods;
  UnityEngine_LOD_Fields local_18;
  
  if (Il2CppMethodInitialized_1843453e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_BuiltinComponentInstance_GetOrAddComponent_LODGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_LODGroup);
    Il2CppMethodInitialized_1843453e9 = '\x01';
  }
  (__this->fields)._detailPriority = 1.0;
  if ((owner != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pMVar2 = (owner->fields).Value, pMVar2 != (Map_MapObject_o *)0x0)) {
    pUVar5 = CustomLogic_BuiltinComponentInstance__GetOrAddComponent_object_
                       ((pMVar2->fields).GameObject,
                        (MethodInfo_659F10 *)
                        MethodInfo_CustomLogic_BuiltinComponentInstance_GetOrAddComponent_LODGroup);
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)pUVar5,
               (MethodInfo *)0x0);
    (__this->fields).OwnerMapObject = owner;
    Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerMapObject,owner);
    pMVar2 = (owner->fields).Value;
    if (pMVar2 != (Map_MapObject_o *)0x0) {
      pUVar3 = (pMVar2->fields).GameObject;
      (__this->fields).Owner = pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Owner,pUVar3);
      value = (__this->fields).Component;
      if (value == (UnityEngine_Component_o *)0x0) {
        (__this->fields).Value = (UnityEngine_LODGroup_o *)0x0;
      }
      else {
        bVar1 = (TypeInfo_UnityEngine_LODGroup->_2).typeHierarchyDepth;
        if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
           ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_LODGroup)) {
          il2cpp_codegen_raise_invalid_cast_exception(value);
        }
        (__this->fields).Value = (UnityEngine_LODGroup_o *)value;
        bVar1 = (TypeInfo_UnityEngine_LODGroup->_2).typeHierarchyDepth;
        if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
           ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_LODGroup)) {
          il2cpp_codegen_raise_invalid_cast_exception(value);
        }
      }
      Il2CppCodeGenWriteBarrier(&(__this->fields).Value,value);
      if (Il2CppMethodInitialized_1843453ec == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_LOD_array);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_1843453ec = '\x01';
      }
      x = (UnityEngine_Object_o *)(__this->fields).Value;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        return;
      }
      pUVar3 = (__this->fields).Owner;
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        renderers = (UnityEngine_Renderer_array *)
                    UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                              (pUVar3,(MethodInfo_6F5810 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
        lods = (UnityEngine_LOD_array *)SZArrayNew(TypeInfo_UnityEngine_LOD_array,1);
        local_18.screenRelativeTransitionHeight = 0.0;
        local_18.fadeTransitionWidth = 0.0;
        local_18.renderers = (UnityEngine_Renderer_array *)0x0;
        UnityEngine_LOD___ctor((UnityEngine_LOD_o *)&local_18,1.0,renderers,(MethodInfo *)0x0);
        if (lods != (UnityEngine_LOD_array *)0x0) {
          if ((int)lods->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          lods->m_Items[0].fields.screenRelativeTransitionHeight = local_18.screenRelativeTransitionHeight;
          lods->m_Items[0].fields.fadeTransitionWidth = local_18.fadeTransitionWidth;
          lods->m_Items[0].fields.renderers = local_18.renderers;
          Il2CppCodeGenWriteBarrier(&lods->m_Items[0].fields.renderers,(void *)0x0);
          pUVar5 = (__this->fields).Value;
          if (pUVar5 != (UnityEngine_LODGroup_o *)0x0) {
            UnityEngine_LODGroup__SetLODs(pUVar5,lods,(MethodInfo *)0x0);
            pUVar5 = (__this->fields).Value;
            if (pUVar5 != (UnityEngine_LODGroup_o *)0x0) {
              UnityEngine_LODGroup__set_fadeMode(pUVar5,0,(MethodInfo *)0x0);
              pUVar5 = (__this->fields).Value;
              if (pUVar5 != (UnityEngine_LODGroup_o *)0x0) {
                UnityEngine_LODGroup__set_animateCrossFading(pUVar5,false,(MethodInfo *)0x0);
                pUVar5 = (__this->fields).Value;
                if (pUVar5 != (UnityEngine_LODGroup_o *)0x0) {
                  UnityEngine_LODGroup__RecalculateBounds(pUVar5,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLodBuiltin$$get_DistanceThreshold
// il2cpp: float CustomLogic_CustomLogicLodBuiltin__get_DistanceThreshold (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x181f06360

float CustomLogic_CustomLogicLodBuiltin__get_DistanceThreshold
                (CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LODGroup_o *__this_00;
  UnityEngine_LOD_array *pUVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LODGroup_o *)0x0) {
    pUVar1 = UnityEngine_LODGroup__GetLODs(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_LOD_array *)0x0) {
      if ((int)pUVar1->max_length != 0) {
        return pUVar1->m_Items[0].fields.screenRelativeTransitionHeight;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLodBuiltin$$set_DistanceThreshold
// il2cpp: void CustomLogic_CustomLogicLodBuiltin__set_DistanceThreshold (CustomLogic_CustomLogicLodBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f06520

void CustomLogic_CustomLogicLodBuiltin__set_DistanceThreshold
               (CustomLogic_CustomLogicLodBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_LODGroup_o *pUVar1;
  UnityEngine_LOD_array *lods;
  
  pUVar1 = (__this->fields).Value;
  if ((pUVar1 != (UnityEngine_LODGroup_o *)0x0) &&
     (lods = UnityEngine_LODGroup__GetLODs(pUVar1,(MethodInfo *)0x0), lods != (UnityEngine_LOD_array *)0x0)) {
    if (lods->max_length == 0) {
      return;
    }
    if ((int)lods->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    lods->m_Items[0].fields.screenRelativeTransitionHeight = value;
    pUVar1 = (__this->fields).Value;
    if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
      UnityEngine_LODGroup__SetLODs(pUVar1,lods,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).Value;
      if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
        UnityEngine_LODGroup__RecalculateBounds(pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLodBuiltin$$get_DetailPriority
// il2cpp: float CustomLogic_CustomLogicLodBuiltin__get_DetailPriority (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x180da5ac0

float
CustomLogic_CustomLogicLodBuiltin__get_DetailPriority(CustomLogic_CustomLogicLodBuiltin_o* __this, MethodInfo* method)

{
  return (__this->fields)._detailPriority;
}


// CustomLogic.CustomLogicLodBuiltin$$set_DetailPriority
// il2cpp: void CustomLogic_CustomLogicLodBuiltin__set_DetailPriority (CustomLogic_CustomLogicLodBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f063a0

void CustomLogic_CustomLogicLodBuiltin__set_DetailPriority
               (CustomLogic_CustomLogicLodBuiltin_o *__this,float value,MethodInfo *method)

{
  int iVar1;
  Settings_GraphicsSettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  UnityEngine_GameObject_o *__this_00;
  int32_t iVar4;
  System_Object_array *pSVar5;
  uint uVar6;
  bool bVar7;
  
  if (Il2CppMethodInitialized_1843453ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    Il2CppMethodInitialized_1843453ea = '\x01';
  }
  if (value < 0.0) {
    value = 0.0;
  }
  else if (1.0 < value) {
    value = 1.0;
  }
  bVar7 = Il2CppMethodInitialized_1843453eb == '\0';
  (__this->fields)._detailPriority = value;
  if (bVar7) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumMaxValue_PresetQualityLevel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_1843453eb = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  iVar4 = Utility_Util__EnumMaxValue___Il2CppFullySharedGenericType_
                    ((MethodInfo_8693C0 *)MethodInfo_Utility_Util_EnumMaxValue_PresetQualityLevel);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if ((pSVar2 != (Settings_GraphicsSettings_o *)0x0) &&
     (pSVar3 = (pSVar2->fields).PresetQuality, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    iVar1 = (pSVar3->fields)._value;
    __this_00 = (__this->fields).Owner;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                         (__this_00,
                          (MethodInfo_6F5810 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar6 = 0;
        while( true ) {
          if ((int)pSVar5->max_length <= (int)uVar6) {
            return;
          }
          if ((uint)pSVar5->max_length <= uVar6) {
            ThrowIndexOutOfRangeException();
          }
          if ((UnityEngine_Renderer_o *)pSVar5->m_Items[(int)uVar6] == (UnityEngine_Renderer_o *)0x0) break;
          UnityEngine_Renderer__set_enabled
                    ((UnityEngine_Renderer_o *)pSVar5->m_Items[(int)uVar6],
                     1.0 - (float)iVar1 / (float)iVar4 <= value,(MethodInfo *)0x0);
          uVar6 = uVar6 + 1;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLodBuiltin$$GetDetailThreshold
// il2cpp: float CustomLogic_CustomLogicLodBuiltin__GetDetailThreshold (const MethodInfo* method);
// 0x181f05e80

float CustomLogic_CustomLogicLodBuiltin__GetDetailThreshold(MethodInfo *method)

{
  Settings_GraphicsSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_1843453eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumMaxValue_PresetQualityLevel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_1843453eb = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  iVar3 = Utility_Util__EnumMaxValue___Il2CppFullySharedGenericType_
                    ((MethodInfo_8693C0 *)MethodInfo_Utility_Util_EnumMaxValue_PresetQualityLevel);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if ((pSVar1 != (Settings_GraphicsSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).PresetQuality, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    return 1.0 - (float)(pSVar2->fields)._value / (float)iVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLodBuiltin$$SetupSingleLod
// il2cpp: void CustomLogic_CustomLogicLodBuiltin__SetupSingleLod (CustomLogic_CustomLogicLodBuiltin_o* __this, float threshold, const MethodInfo* method);
// 0x181f05f30

void CustomLogic_CustomLogicLodBuiltin__SetupSingleLod
               (CustomLogic_CustomLogicLodBuiltin_o *__this,float threshold,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_LODGroup_o *pUVar1;
  bool bVar2;
  UnityEngine_Renderer_array *renderers;
  UnityEngine_LOD_array *lods;
  UnityEngine_LOD_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843453ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_LOD_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843453ec = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).Value;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  __this_00 = (__this->fields).Owner;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    renderers = (UnityEngine_Renderer_array *)
                UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                          (__this_00,
                           (MethodInfo_6F5810 *)
                           MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    lods = (UnityEngine_LOD_array *)SZArrayNew(TypeInfo_UnityEngine_LOD_array,1);
    local_28[0].screenRelativeTransitionHeight = 0.0;
    local_28[0].fadeTransitionWidth = 0.0;
    local_28[0].renderers = (UnityEngine_Renderer_array *)0x0;
    UnityEngine_LOD___ctor((UnityEngine_LOD_o *)local_28,threshold,renderers,(MethodInfo *)0x0);
    if (lods != (UnityEngine_LOD_array *)0x0) {
      if ((int)lods->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      lods->m_Items[0].fields.screenRelativeTransitionHeight = local_28[0].screenRelativeTransitionHeight;
      lods->m_Items[0].fields.fadeTransitionWidth = local_28[0].fadeTransitionWidth;
      lods->m_Items[0].fields.renderers = local_28[0].renderers;
      Il2CppCodeGenWriteBarrier(&lods->m_Items[0].fields.renderers,(void *)0x0);
      pUVar1 = (__this->fields).Value;
      if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
        UnityEngine_LODGroup__SetLODs(pUVar1,lods,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).Value;
        if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
          UnityEngine_LODGroup__set_fadeMode(pUVar1,0,(MethodInfo *)0x0);
          pUVar1 = (__this->fields).Value;
          if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
            UnityEngine_LODGroup__set_animateCrossFading(pUVar1,false,(MethodInfo *)0x0);
            pUVar1 = (__this->fields).Value;
            if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
              UnityEngine_LODGroup__RecalculateBounds(pUVar1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLodBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLodBuiltin__get_ClassName (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x181f06330

System_String_o *
CustomLogic_CustomLogicLodBuiltin__get_ClassName
          (CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843453ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LodBuiltin");
    Il2CppMethodInitialized_1843453ed = '\x01';
  }
  return "LodBuiltin";
}


// CustomLogic.CustomLogicLodBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLodBuiltin__get_IsAbstract (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLodBuiltin__get_IsAbstract(CustomLogic_CustomLogicLodBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicLodBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLodBuiltin__get_IsStatic (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLodBuiltin__get_IsStatic(CustomLogic_CustomLogicLodBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicLodBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLodBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLodBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicLodBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


