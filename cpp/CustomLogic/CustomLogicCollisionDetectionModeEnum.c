// Type: CustomLogic.CustomLogicCollisionDetectionModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicCollisionDetectionModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicCollisionDetectionModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCollisionDetectionModeEnum_o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a5c810

CustomLogic_CustomLogicCollisionDetectionModeEnum_o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum);
    Il2CppMethodInitialized_07546320 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCollisionDetectionModeEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum);
  if (Il2CppMethodInitialized_0754631e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754631e = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *)__this;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a5c930

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546321 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Discrete");
    il2cpp_codegen_initialize_runtime_metadata(&"ContinuousSpeculative");
    il2cpp_codegen_initialize_runtime_metadata(&"Continuous");
    il2cpp_codegen_initialize_runtime_metadata(&"ContinuousDynamic");
    Il2CppMethodInitialized_07546321 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Discrete",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings->_2).cctor_finished_or_no_cctor
        == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__Discrete
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__Discrete
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Continuous",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings->_2).cctor_finished_or_no_cctor
        == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__Continuous
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__Continuous
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"ContinuousDynamic",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings->_2).cctor_finished_or_no_cctor
        == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__ContinuousDynamic
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__ContinuousDynamic
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"ContinuousSpeculative",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCollisionDetectionModeEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_CreateMemberBinding
                   );
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings->_2).cctor_finished_or_no_cctor ==
      0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings;
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__ContinuousSpeculative
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__ContinuousSpeculative
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$__CreatePropertyBinding__Discrete
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__Discrete (const MethodInfo* method);
// 0x5a5cb10

CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__Discrete
          (MethodInfo *method)

{
  System_Func_CustomLogicCollisionDetectionModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546322 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__Discrete_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
    Il2CppMethodInitialized_07546322 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__Discrete_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$__CreatePropertyBinding__Continuous
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__Continuous (const MethodInfo* method);
// 0x5a5cbb0

CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__Continuous
          (MethodInfo *method)

{
  System_Func_CustomLogicCollisionDetectionModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546323 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__Continuous_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
    Il2CppMethodInitialized_07546323 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__Continuous_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$__CreatePropertyBinding__ContinuousDynamic
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__ContinuousDynamic (const MethodInfo* method);
// 0x5a5cc50

CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__ContinuousDynamic
          (MethodInfo *method)

{
  System_Func_CustomLogicCollisionDetectionModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546324 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__ContinuousDy
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
    Il2CppMethodInitialized_07546324 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__ContinuousDy
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$__CreatePropertyBinding__ContinuousSpeculative
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__ContinuousSpeculative (const MethodInfo* method);
// 0x5a5ccf0

CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__ContinuousSpeculative
          (MethodInfo *method)

{
  System_Func_CustomLogicCollisionDetectionModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546325 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__ContinuousSp
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
    Il2CppMethodInitialized_07546325 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__ContinuousSp
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a5cd90

void CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546326 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Discrete");
    il2cpp_codegen_initialize_runtime_metadata(&"ContinuousSpeculative");
    il2cpp_codegen_initialize_runtime_metadata(&"Continuous");
    il2cpp_codegen_initialize_runtime_metadata(&"ContinuousDynamic");
    Il2CppMethodInitialized_07546326 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Discrete",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Continuous",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ContinuousDynamic",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ContinuousSpeculative",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings->static_fields->MemberNames)
  ;
  return;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$<__CreatePropertyBinding__Discrete>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__Discrete_g____getter_2_0 (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __i, const MethodInfo* method);
// 0x5a5cec0

Il2CppObject *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__Discrete_g____getter_2_0
          (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$<__CreatePropertyBinding__Continuous>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__Continuous_g____getter_3_0 (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __i, const MethodInfo* method);
// 0x5a5cee0

Il2CppObject *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__Continuous_g____getter_3_0
          (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$<__CreatePropertyBinding__ContinuousDynamic>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__ContinuousDynamic_g____getter_4_0 (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __i, const MethodInfo* method);
// 0x5a5cf00

Il2CppObject *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__ContinuousDynamic_g____getter_4_0
          (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$<__CreatePropertyBinding__ContinuousSpeculative>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__ContinuousSpeculative_g____getter_5_0 (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __i, const MethodInfo* method);
// 0x5a5cf20

Il2CppObject *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__ContinuousSpeculative_g____getter_5_0
          (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollisionDetectionModeEnum___ctor (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, const MethodInfo* method);
// 0x5a5c700

void CustomLogic_CustomLogicCollisionDetectionModeEnum___ctor
               (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754631e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754631e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_Discrete
// il2cpp: int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_Discrete (const MethodInfo* method);
// 0x5a5c770

int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_Discrete(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_Continuous
// il2cpp: int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_Continuous (const MethodInfo* method);
// 0x5a5c780

int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_Continuous(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_ContinuousDynamic
// il2cpp: int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ContinuousDynamic (const MethodInfo* method);
// 0x5a5c790

int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ContinuousDynamic(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_ContinuousSpeculative
// il2cpp: int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ContinuousSpeculative (const MethodInfo* method);
// 0x5a5c7a0

int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ContinuousSpeculative(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ClassName (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, const MethodInfo* method);
// 0x5a5c7b0

System_String_o *
CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ClassName
          (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754631f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"CollisionDetectionModeEnum");
    Il2CppMethodInitialized_0754631f = '\x01';
  }
  return "CollisionDetectionModeEnum";
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCollisionDetectionModeEnum__get_IsAbstract (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, const MethodInfo* method);
// 0x5a5c7e0

bool CustomLogic_CustomLogicCollisionDetectionModeEnum__get_IsAbstract
               (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCollisionDetectionModeEnum__get_IsStatic (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, const MethodInfo* method);
// 0x5a5c7f0

bool CustomLogic_CustomLogicCollisionDetectionModeEnum__get_IsStatic
               (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCollisionDetectionModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, const MethodInfo* method);
// 0x5a5c800

bool CustomLogic_CustomLogicCollisionDetectionModeEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


