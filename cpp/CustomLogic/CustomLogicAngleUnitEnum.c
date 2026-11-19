// Type: CustomLogic.CustomLogicAngleUnitEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicAngleUnitEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicAngleUnitEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAngleUnitEnum_o* CustomLogic_CustomLogicAngleUnitEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a54f20

CustomLogic_CustomLogicAngleUnitEnum_o *
CustomLogic_CustomLogicAngleUnitEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546288 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAngleUnitEnum);
    Il2CppMethodInitialized_07546288 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicAngleUnitEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAngleUnitEnum);
  if (Il2CppMethodInitialized_07546286 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546286 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicAngleUnitEnum_o *)__this;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAngleUnitEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a55040

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAngleUnitEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicAngleUnitEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546289 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Radian");
    il2cpp_codegen_initialize_runtime_metadata(&"Turn");
    il2cpp_codegen_initialize_runtime_metadata(&"Degree");
    il2cpp_codegen_initialize_runtime_metadata(&"Gradian");
    Il2CppMethodInitialized_07546289 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Degree",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings)
      ;
      pCVar2 = CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Degree
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Degree
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Gradian",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings)
      ;
      pCVar2 = CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Gradian
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Gradian
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Radian",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings)
      ;
      pCVar2 = CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Radian
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Radian
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Turn",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicAngleUnitEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Turn
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Turn
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$__CreatePropertyBinding__Degree
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o* CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Degree (const MethodInfo* method);
// 0x5a55220

CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *
CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Degree(MethodInfo *method)

{
  System_Func_CustomLogicAngleUnitEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754628a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Degree_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
    Il2CppMethodInitialized_0754628a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Degree_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$__CreatePropertyBinding__Gradian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o* CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Gradian (const MethodInfo* method);
// 0x5a552c0

CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *
CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Gradian(MethodInfo *method)

{
  System_Func_CustomLogicAngleUnitEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754628b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Gradian_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
    Il2CppMethodInitialized_0754628b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Gradian_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$__CreatePropertyBinding__Radian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o* CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Radian (const MethodInfo* method);
// 0x5a55360

CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *
CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Radian(MethodInfo *method)

{
  System_Func_CustomLogicAngleUnitEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754628c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Radian_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
    Il2CppMethodInitialized_0754628c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Radian_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$__CreatePropertyBinding__Turn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o* CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Turn (const MethodInfo* method);
// 0x5a55400

CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *
CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Turn(MethodInfo *method)

{
  System_Func_CustomLogicAngleUnitEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754628d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Turn_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
    Il2CppMethodInitialized_0754628d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Turn_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAngleUnitEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a554a0

void CustomLogic_CustomLogicAngleUnitEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_0754628e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Radian");
    il2cpp_codegen_initialize_runtime_metadata(&"Turn");
    il2cpp_codegen_initialize_runtime_metadata(&"Degree");
    il2cpp_codegen_initialize_runtime_metadata(&"Gradian");
    Il2CppMethodInitialized_0754628e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Degree",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Gradian",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Radian",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Turn",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$<__CreatePropertyBinding__Degree>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Degree_g____getter_2_0 (CustomLogic_CustomLogicAngleUnitEnum_o* __i, const MethodInfo* method);
// 0x5a555d0

Il2CppObject *
CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Degree_g____getter_2_0
          (CustomLogic_CustomLogicAngleUnitEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$<__CreatePropertyBinding__Gradian>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Gradian_g____getter_3_0 (CustomLogic_CustomLogicAngleUnitEnum_o* __i, const MethodInfo* method);
// 0x5a555f0

Il2CppObject *
CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Gradian_g____getter_3_0
          (CustomLogic_CustomLogicAngleUnitEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$<__CreatePropertyBinding__Radian>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Radian_g____getter_4_0 (CustomLogic_CustomLogicAngleUnitEnum_o* __i, const MethodInfo* method);
// 0x5a55610

Il2CppObject *
CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Radian_g____getter_4_0
          (CustomLogic_CustomLogicAngleUnitEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$<__CreatePropertyBinding__Turn>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Turn_g____getter_5_0 (CustomLogic_CustomLogicAngleUnitEnum_o* __i, const MethodInfo* method);
// 0x5a55630

Il2CppObject *
CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Turn_g____getter_5_0
          (CustomLogic_CustomLogicAngleUnitEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAngleUnitEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicAngleUnitEnum___ctor (CustomLogic_CustomLogicAngleUnitEnum_o* __this, const MethodInfo* method);
// 0x5a54e10

void CustomLogic_CustomLogicAngleUnitEnum___ctor
               (CustomLogic_CustomLogicAngleUnitEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546286 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546286 = '\x01';
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


// CustomLogic.CustomLogicAngleUnitEnum$$get_Degree
// il2cpp: int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Degree (const MethodInfo* method);
// 0x5a54e80

int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Degree(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_Gradian
// il2cpp: int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Gradian (const MethodInfo* method);
// 0x5a54e90

int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Gradian(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_Radian
// il2cpp: int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Radian (const MethodInfo* method);
// 0x5a54ea0

int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Radian(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_Turn
// il2cpp: int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Turn (const MethodInfo* method);
// 0x5a54eb0

int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Turn(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAngleUnitEnum__get_ClassName (CustomLogic_CustomLogicAngleUnitEnum_o* __this, const MethodInfo* method);
// 0x5a54ec0

System_String_o *
CustomLogic_CustomLogicAngleUnitEnum__get_ClassName
          (CustomLogic_CustomLogicAngleUnitEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546287 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AngleUnitEnum");
    Il2CppMethodInitialized_07546287 = '\x01';
  }
  return "AngleUnitEnum";
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAngleUnitEnum__get_IsAbstract (CustomLogic_CustomLogicAngleUnitEnum_o* __this, const MethodInfo* method);
// 0x5a54ef0

bool CustomLogic_CustomLogicAngleUnitEnum__get_IsAbstract
               (CustomLogic_CustomLogicAngleUnitEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAngleUnitEnum__get_IsStatic (CustomLogic_CustomLogicAngleUnitEnum_o* __this, const MethodInfo* method);
// 0x5a54f00

bool CustomLogic_CustomLogicAngleUnitEnum__get_IsStatic
               (CustomLogic_CustomLogicAngleUnitEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAngleUnitEnum__get_InheritBaseMembers (CustomLogic_CustomLogicAngleUnitEnum_o* __this, const MethodInfo* method);
// 0x5a54f10

bool CustomLogic_CustomLogicAngleUnitEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicAngleUnitEnum_o *__this,MethodInfo *method)

{
  return true;
}


