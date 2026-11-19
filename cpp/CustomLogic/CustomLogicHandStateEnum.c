// Type: CustomLogic.CustomLogicHandStateEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHandStateEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicHandStateEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHandStateEnum_o* CustomLogic_CustomLogicHandStateEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a65a00

CustomLogic_CustomLogicHandStateEnum_o *
CustomLogic_CustomLogicHandStateEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_075463c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHandStateEnum);
    Il2CppMethodInitialized_075463c7 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHandStateEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicHandStateEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHandStateEnum);
  if (Il2CppMethodInitialized_075463c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075463c5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicHandStateEnum_o *)__this;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHandStateEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a65b20

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHandStateEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicHandStateEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_075463c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Severed");
    il2cpp_codegen_initialize_runtime_metadata(&"Damaged");
    il2cpp_codegen_initialize_runtime_metadata(&"Recovering");
    il2cpp_codegen_initialize_runtime_metadata(&"Healthy");
    Il2CppMethodInitialized_075463c8 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Healthy",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings)
      ;
      pCVar2 = CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Healthy
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Healthy
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Damaged",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings)
      ;
      pCVar2 = CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Damaged
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Damaged
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Severed",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings)
      ;
      pCVar2 = CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Severed
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Severed
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Recovering",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHandStateEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Recovering
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Recovering
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$__CreatePropertyBinding__Healthy
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o* CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Healthy (const MethodInfo* method);
// 0x5a65d00

CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *
CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Healthy(MethodInfo *method)

{
  System_Func_CustomLogicHandStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Healthy_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHandStateEnum_object);
    Il2CppMethodInitialized_075463c9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHandStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Healthy_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$__CreatePropertyBinding__Damaged
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o* CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Damaged (const MethodInfo* method);
// 0x5a65da0

CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *
CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Damaged(MethodInfo *method)

{
  System_Func_CustomLogicHandStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Damaged_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHandStateEnum_object);
    Il2CppMethodInitialized_075463ca = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHandStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Damaged_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$__CreatePropertyBinding__Severed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o* CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Severed (const MethodInfo* method);
// 0x5a65e40

CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *
CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Severed(MethodInfo *method)

{
  System_Func_CustomLogicHandStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Severed_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHandStateEnum_object);
    Il2CppMethodInitialized_075463cb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHandStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Severed_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$__CreatePropertyBinding__Recovering
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o* CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Recovering (const MethodInfo* method);
// 0x5a65ee0

CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *
CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Recovering(MethodInfo *method)

{
  System_Func_CustomLogicHandStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Recovering_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHandStateEnum_object);
    Il2CppMethodInitialized_075463cc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHandStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Recovering_g____getter_5
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHandStateEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a65f80

void CustomLogic_CustomLogicHandStateEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_075463cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Severed");
    il2cpp_codegen_initialize_runtime_metadata(&"Damaged");
    il2cpp_codegen_initialize_runtime_metadata(&"Recovering");
    il2cpp_codegen_initialize_runtime_metadata(&"Healthy");
    Il2CppMethodInitialized_075463cd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Healthy",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Damaged",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Severed",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Recovering",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$<__CreatePropertyBinding__Healthy>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Healthy_g____getter_2_0 (CustomLogic_CustomLogicHandStateEnum_o* __i, const MethodInfo* method);
// 0x5a660b0

Il2CppObject *
CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Healthy_g____getter_2_0
          (CustomLogic_CustomLogicHandStateEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$<__CreatePropertyBinding__Damaged>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Damaged_g____getter_3_0 (CustomLogic_CustomLogicHandStateEnum_o* __i, const MethodInfo* method);
// 0x5a660d0

Il2CppObject *
CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Damaged_g____getter_3_0
          (CustomLogic_CustomLogicHandStateEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$<__CreatePropertyBinding__Severed>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Severed_g____getter_4_0 (CustomLogic_CustomLogicHandStateEnum_o* __i, const MethodInfo* method);
// 0x5a660f0

Il2CppObject *
CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Severed_g____getter_4_0
          (CustomLogic_CustomLogicHandStateEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$<__CreatePropertyBinding__Recovering>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Recovering_g____getter_5_0 (CustomLogic_CustomLogicHandStateEnum_o* __i, const MethodInfo* method);
// 0x5a66110

Il2CppObject *
CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Recovering_g____getter_5_0
          (CustomLogic_CustomLogicHandStateEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHandStateEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHandStateEnum___ctor (CustomLogic_CustomLogicHandStateEnum_o* __this, const MethodInfo* method);
// 0x5a658f0

void CustomLogic_CustomLogicHandStateEnum___ctor
               (CustomLogic_CustomLogicHandStateEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075463c5 = '\x01';
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


// CustomLogic.CustomLogicHandStateEnum$$get_Healthy
// il2cpp: int32_t CustomLogic_CustomLogicHandStateEnum__get_Healthy (const MethodInfo* method);
// 0x5a65960

int32_t CustomLogic_CustomLogicHandStateEnum__get_Healthy(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicHandStateEnum$$get_Damaged
// il2cpp: int32_t CustomLogic_CustomLogicHandStateEnum__get_Damaged (const MethodInfo* method);
// 0x5a65970

int32_t CustomLogic_CustomLogicHandStateEnum__get_Damaged(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicHandStateEnum$$get_Severed
// il2cpp: int32_t CustomLogic_CustomLogicHandStateEnum__get_Severed (const MethodInfo* method);
// 0x5a65980

int32_t CustomLogic_CustomLogicHandStateEnum__get_Severed(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicHandStateEnum$$get_Recovering
// il2cpp: int32_t CustomLogic_CustomLogicHandStateEnum__get_Recovering (const MethodInfo* method);
// 0x5a65990

int32_t CustomLogic_CustomLogicHandStateEnum__get_Recovering(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicHandStateEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHandStateEnum__get_ClassName (CustomLogic_CustomLogicHandStateEnum_o* __this, const MethodInfo* method);
// 0x5a659a0

System_String_o *
CustomLogic_CustomLogicHandStateEnum__get_ClassName
          (CustomLogic_CustomLogicHandStateEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075463c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"HandStateEnum");
    Il2CppMethodInitialized_075463c6 = '\x01';
  }
  return "HandStateEnum";
}


// CustomLogic.CustomLogicHandStateEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHandStateEnum__get_IsAbstract (CustomLogic_CustomLogicHandStateEnum_o* __this, const MethodInfo* method);
// 0x5a659d0

bool CustomLogic_CustomLogicHandStateEnum__get_IsAbstract
               (CustomLogic_CustomLogicHandStateEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicHandStateEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHandStateEnum__get_IsStatic (CustomLogic_CustomLogicHandStateEnum_o* __this, const MethodInfo* method);
// 0x5a659e0

bool CustomLogic_CustomLogicHandStateEnum__get_IsStatic
               (CustomLogic_CustomLogicHandStateEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicHandStateEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHandStateEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHandStateEnum_o* __this, const MethodInfo* method);
// 0x5a659f0

bool CustomLogic_CustomLogicHandStateEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicHandStateEnum_o *__this,MethodInfo *method)

{
  return true;
}


