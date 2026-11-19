// Type: CustomLogic.CustomLogicScrollElasticityEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicScrollElasticityEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicScrollElasticityEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicScrollElasticityEnum_o* CustomLogic_CustomLogicScrollElasticityEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5aa7f10

CustomLogic_CustomLogicScrollElasticityEnum_o *
CustomLogic_CustomLogicScrollElasticityEnum_Factory__CreateInstance
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
  
  if (Il2CppMethodInitialized_07546a2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum);
    Il2CppMethodInitialized_07546a2a = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicScrollElasticityEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum);
  if (Il2CppMethodInitialized_07546a28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546a28 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicScrollElasticityEnum_o *)__this;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicScrollElasticityEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5aa8030

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicScrollElasticityEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546a2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"Clamped");
    il2cpp_codegen_initialize_runtime_metadata(&"Unrestricted");
    il2cpp_codegen_initialize_runtime_metadata(&"Elastic");
    Il2CppMethodInitialized_07546a2b = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Clamped",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Clamped
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Clamped
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Elastic",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Elastic
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Elastic
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Unrestricted",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicScrollElasticityEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings;
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Unrestricted
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Unrestricted
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$__CreatePropertyBinding__Clamped
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o* CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Clamped (const MethodInfo* method);
// 0x5aa81c0

CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Clamped(MethodInfo *method)

{
  System_Func_CustomLogicScrollElasticityEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings___CreatePropertyBinding__Clamped_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScrollElasticityEnum_object);
    Il2CppMethodInitialized_07546a2c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollElasticityEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings___CreatePropertyBinding__Clamped_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$__CreatePropertyBinding__Elastic
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o* CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Elastic (const MethodInfo* method);
// 0x5aa8260

CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Elastic(MethodInfo *method)

{
  System_Func_CustomLogicScrollElasticityEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings___CreatePropertyBinding__Elastic_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScrollElasticityEnum_object);
    Il2CppMethodInitialized_07546a2d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollElasticityEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings___CreatePropertyBinding__Elastic_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$__CreatePropertyBinding__Unrestricted
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o* CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Unrestricted (const MethodInfo* method);
// 0x5aa8300

CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Unrestricted
          (MethodInfo *method)

{
  System_Func_CustomLogicScrollElasticityEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings___CreatePropertyBinding__Unrestricted_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScrollElasticityEnum_object);
    Il2CppMethodInitialized_07546a2e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollElasticityEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings___CreatePropertyBinding__Unrestricted_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicScrollElasticityEnum_Bindings___cctor (const MethodInfo* method);
// 0x5aa83a0

void CustomLogic_CustomLogicScrollElasticityEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546a2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Clamped");
    il2cpp_codegen_initialize_runtime_metadata(&"Unrestricted");
    il2cpp_codegen_initialize_runtime_metadata(&"Elastic");
    Il2CppMethodInitialized_07546a2f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Clamped",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Elastic",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Unrestricted",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$<__CreatePropertyBinding__Clamped>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollElasticityEnum_Bindings_____CreatePropertyBinding__Clamped_g____getter_2_0 (CustomLogic_CustomLogicScrollElasticityEnum_o* __i, const MethodInfo* method);
// 0x5aa84b0

Il2CppObject *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings_____CreatePropertyBinding__Clamped_g____getter_2_0
          (CustomLogic_CustomLogicScrollElasticityEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$<__CreatePropertyBinding__Elastic>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollElasticityEnum_Bindings_____CreatePropertyBinding__Elastic_g____getter_3_0 (CustomLogic_CustomLogicScrollElasticityEnum_o* __i, const MethodInfo* method);
// 0x5aa84d0

Il2CppObject *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings_____CreatePropertyBinding__Elastic_g____getter_3_0
          (CustomLogic_CustomLogicScrollElasticityEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$<__CreatePropertyBinding__Unrestricted>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollElasticityEnum_Bindings_____CreatePropertyBinding__Unrestricted_g____getter_4_0 (CustomLogic_CustomLogicScrollElasticityEnum_o* __i, const MethodInfo* method);
// 0x5aa84f0

Il2CppObject *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings_____CreatePropertyBinding__Unrestricted_g____getter_4_0
          (CustomLogic_CustomLogicScrollElasticityEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicScrollElasticityEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicScrollElasticityEnum___ctor (CustomLogic_CustomLogicScrollElasticityEnum_o* __this, const MethodInfo* method);
// 0x5aa7e10

void CustomLogic_CustomLogicScrollElasticityEnum___ctor
               (CustomLogic_CustomLogicScrollElasticityEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546a28 = '\x01';
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


// CustomLogic.CustomLogicScrollElasticityEnum$$get_Clamped
// il2cpp: int32_t CustomLogic_CustomLogicScrollElasticityEnum__get_Clamped (const MethodInfo* method);
// 0x5aa7e80

int32_t CustomLogic_CustomLogicScrollElasticityEnum__get_Clamped(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_Elastic
// il2cpp: int32_t CustomLogic_CustomLogicScrollElasticityEnum__get_Elastic (const MethodInfo* method);
// 0x5aa7e90

int32_t CustomLogic_CustomLogicScrollElasticityEnum__get_Elastic(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_Unrestricted
// il2cpp: int32_t CustomLogic_CustomLogicScrollElasticityEnum__get_Unrestricted (const MethodInfo* method);
// 0x5aa7ea0

int32_t CustomLogic_CustomLogicScrollElasticityEnum__get_Unrestricted(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicScrollElasticityEnum__get_ClassName (CustomLogic_CustomLogicScrollElasticityEnum_o* __this, const MethodInfo* method);
// 0x5aa7eb0

System_String_o *
CustomLogic_CustomLogicScrollElasticityEnum__get_ClassName
          (CustomLogic_CustomLogicScrollElasticityEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollElasticityEnum");
    Il2CppMethodInitialized_07546a29 = '\x01';
  }
  return "ScrollElasticityEnum";
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicScrollElasticityEnum__get_IsAbstract (CustomLogic_CustomLogicScrollElasticityEnum_o* __this, const MethodInfo* method);
// 0x5aa7ee0

bool CustomLogic_CustomLogicScrollElasticityEnum__get_IsAbstract
               (CustomLogic_CustomLogicScrollElasticityEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicScrollElasticityEnum__get_IsStatic (CustomLogic_CustomLogicScrollElasticityEnum_o* __this, const MethodInfo* method);
// 0x5aa7ef0

bool CustomLogic_CustomLogicScrollElasticityEnum__get_IsStatic
               (CustomLogic_CustomLogicScrollElasticityEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicScrollElasticityEnum__get_InheritBaseMembers (CustomLogic_CustomLogicScrollElasticityEnum_o* __this, const MethodInfo* method);
// 0x5aa7f00

bool CustomLogic_CustomLogicScrollElasticityEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicScrollElasticityEnum_o *__this,MethodInfo *method)

{
  return true;
}


