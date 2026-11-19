// Type: CustomLogic.CustomLogicForceModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicForceModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicForceModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicForceModeEnum_o* CustomLogic_CustomLogicForceModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a64c00

CustomLogic_CustomLogicForceModeEnum_o *
CustomLogic_CustomLogicForceModeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_075463b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicForceModeEnum);
    Il2CppMethodInitialized_075463b7 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicForceModeEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicForceModeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicForceModeEnum);
  if (Il2CppMethodInitialized_075463b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075463b5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicForceModeEnum_o *)__this;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicForceModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a64d20

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicForceModeEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicForceModeEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_075463b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Acceleration");
    il2cpp_codegen_initialize_runtime_metadata(&"VelocityChange");
    il2cpp_codegen_initialize_runtime_metadata(&"Impulse");
    il2cpp_codegen_initialize_runtime_metadata(&"Force");
    Il2CppMethodInitialized_075463b8 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Force",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings)
      ;
      pCVar2 = CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Force
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Force
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Acceleration",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings)
      ;
      pCVar2 = CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Acceleration
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Acceleration
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Impulse",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings)
      ;
      pCVar2 = CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Impulse
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Impulse
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"VelocityChange",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicForceModeEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__VelocityChange
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__VelocityChange
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$__CreatePropertyBinding__Force
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o* CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Force (const MethodInfo* method);
// 0x5a64f00

CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *
CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Force(MethodInfo *method)

{
  System_Func_CustomLogicForceModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__Force_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicForceModeEnum_object);
    Il2CppMethodInitialized_075463b9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicForceModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__Force_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$__CreatePropertyBinding__Acceleration
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o* CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Acceleration (const MethodInfo* method);
// 0x5a64fa0

CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *
CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Acceleration(MethodInfo *method)

{
  System_Func_CustomLogicForceModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__Acceleration_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicForceModeEnum_object);
    Il2CppMethodInitialized_075463ba = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicForceModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__Acceleration_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$__CreatePropertyBinding__Impulse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o* CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Impulse (const MethodInfo* method);
// 0x5a65040

CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *
CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Impulse(MethodInfo *method)

{
  System_Func_CustomLogicForceModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__Impulse_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicForceModeEnum_object);
    Il2CppMethodInitialized_075463bb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicForceModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__Impulse_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$__CreatePropertyBinding__VelocityChange
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o* CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__VelocityChange (const MethodInfo* method);
// 0x5a650e0

CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *
CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__VelocityChange(MethodInfo *method)

{
  System_Func_CustomLogicForceModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__VelocityChange_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicForceModeEnum_object);
    Il2CppMethodInitialized_075463bc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicForceModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__VelocityChange_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicForceModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a65180

void CustomLogic_CustomLogicForceModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_075463bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Acceleration");
    il2cpp_codegen_initialize_runtime_metadata(&"VelocityChange");
    il2cpp_codegen_initialize_runtime_metadata(&"Impulse");
    il2cpp_codegen_initialize_runtime_metadata(&"Force");
    Il2CppMethodInitialized_075463bd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Force",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Acceleration",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Impulse",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"VelocityChange",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$<__CreatePropertyBinding__Force>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__Force_g____getter_2_0 (CustomLogic_CustomLogicForceModeEnum_o* __i, const MethodInfo* method);
// 0x5a652b0

Il2CppObject *
CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__Force_g____getter_2_0
          (CustomLogic_CustomLogicForceModeEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$<__CreatePropertyBinding__Acceleration>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__Acceleration_g____getter_3_0 (CustomLogic_CustomLogicForceModeEnum_o* __i, const MethodInfo* method);
// 0x5a652d0

Il2CppObject *
CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__Acceleration_g____getter_3_0
          (CustomLogic_CustomLogicForceModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$<__CreatePropertyBinding__Impulse>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__Impulse_g____getter_4_0 (CustomLogic_CustomLogicForceModeEnum_o* __i, const MethodInfo* method);
// 0x5a652f0

Il2CppObject *
CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__Impulse_g____getter_4_0
          (CustomLogic_CustomLogicForceModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$<__CreatePropertyBinding__VelocityChange>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__VelocityChange_g____getter_5_0 (CustomLogic_CustomLogicForceModeEnum_o* __i, const MethodInfo* method);
// 0x5a65310

Il2CppObject *
CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__VelocityChange_g____getter_5_0
          (CustomLogic_CustomLogicForceModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicForceModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicForceModeEnum___ctor (CustomLogic_CustomLogicForceModeEnum_o* __this, const MethodInfo* method);
// 0x5a64af0

void CustomLogic_CustomLogicForceModeEnum___ctor
               (CustomLogic_CustomLogicForceModeEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075463b5 = '\x01';
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


// CustomLogic.CustomLogicForceModeEnum$$get_Force
// il2cpp: int32_t CustomLogic_CustomLogicForceModeEnum__get_Force (const MethodInfo* method);
// 0x5a64b60

int32_t CustomLogic_CustomLogicForceModeEnum__get_Force(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicForceModeEnum$$get_Acceleration
// il2cpp: int32_t CustomLogic_CustomLogicForceModeEnum__get_Acceleration (const MethodInfo* method);
// 0x5a64b70

int32_t CustomLogic_CustomLogicForceModeEnum__get_Acceleration(MethodInfo *method)

{
  return 5;
}


// CustomLogic.CustomLogicForceModeEnum$$get_Impulse
// il2cpp: int32_t CustomLogic_CustomLogicForceModeEnum__get_Impulse (const MethodInfo* method);
// 0x5a64b80

int32_t CustomLogic_CustomLogicForceModeEnum__get_Impulse(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicForceModeEnum$$get_VelocityChange
// il2cpp: int32_t CustomLogic_CustomLogicForceModeEnum__get_VelocityChange (const MethodInfo* method);
// 0x5a64b90

int32_t CustomLogic_CustomLogicForceModeEnum__get_VelocityChange(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicForceModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicForceModeEnum__get_ClassName (CustomLogic_CustomLogicForceModeEnum_o* __this, const MethodInfo* method);
// 0x5a64ba0

System_String_o *
CustomLogic_CustomLogicForceModeEnum__get_ClassName
          (CustomLogic_CustomLogicForceModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075463b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ForceModeEnum");
    Il2CppMethodInitialized_075463b6 = '\x01';
  }
  return "ForceModeEnum";
}


// CustomLogic.CustomLogicForceModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicForceModeEnum__get_IsAbstract (CustomLogic_CustomLogicForceModeEnum_o* __this, const MethodInfo* method);
// 0x5a64bd0

bool CustomLogic_CustomLogicForceModeEnum__get_IsAbstract
               (CustomLogic_CustomLogicForceModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicForceModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicForceModeEnum__get_IsStatic (CustomLogic_CustomLogicForceModeEnum_o* __this, const MethodInfo* method);
// 0x5a64be0

bool CustomLogic_CustomLogicForceModeEnum__get_IsStatic
               (CustomLogic_CustomLogicForceModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicForceModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicForceModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicForceModeEnum_o* __this, const MethodInfo* method);
// 0x5a64bf0

bool CustomLogic_CustomLogicForceModeEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicForceModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


