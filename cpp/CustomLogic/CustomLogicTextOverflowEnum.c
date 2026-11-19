// Type: CustomLogic.CustomLogicTextOverflowEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicTextOverflowEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTextOverflowEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTextOverflowEnum_o* CustomLogic_CustomLogicTextOverflowEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5ab0ad0

CustomLogic_CustomLogicTextOverflowEnum_o *
CustomLogic_CustomLogicTextOverflowEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546ad4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTextOverflowEnum);
    Il2CppMethodInitialized_07546ad4 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTextOverflowEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicTextOverflowEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextOverflowEnum);
  if (Il2CppMethodInitialized_07546ad2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546ad2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicTextOverflowEnum_o *)__this;
}


// CustomLogic.CustomLogicTextOverflowEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTextOverflowEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5ab0bf0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTextOverflowEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicTextOverflowEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546ad5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTextOverflowEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Ellipsis");
    il2cpp_codegen_initialize_runtime_metadata(&"Clip");
    Il2CppMethodInitialized_07546ad5 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Clip",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicTextOverflowEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicTextOverflowEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextOverflowEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicTextOverflowEnum_Bindings____CreatePropertyBinding__Clip
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicTextOverflowEnum_Bindings____CreatePropertyBinding__Clip
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTextOverflowEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Ellipsis",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTextOverflowEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicTextOverflowEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicTextOverflowEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicTextOverflowEnum_Bindings;
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextOverflowEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicTextOverflowEnum_Bindings____CreatePropertyBinding__Ellipsis
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicTextOverflowEnum_Bindings____CreatePropertyBinding__Ellipsis
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTextOverflowEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicTextOverflowEnum.Bindings$$__CreatePropertyBinding__Clip
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum__o* CustomLogic_CustomLogicTextOverflowEnum_Bindings____CreatePropertyBinding__Clip (const MethodInfo* method);
// 0x5ab0d30

CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum__o *
CustomLogic_CustomLogicTextOverflowEnum_Bindings____CreatePropertyBinding__Clip(MethodInfo *method)

{
  System_Func_CustomLogicTextOverflowEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ad6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextOverflowEnum_Bindings___CreatePropertyBinding__Clip_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextOverflowEnum_object);
    Il2CppMethodInitialized_07546ad6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextOverflowEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextOverflowEnum_Bindings___CreatePropertyBinding__Clip_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTextOverflowEnum.Bindings$$__CreatePropertyBinding__Ellipsis
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum__o* CustomLogic_CustomLogicTextOverflowEnum_Bindings____CreatePropertyBinding__Ellipsis (const MethodInfo* method);
// 0x5ab0dd0

CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum__o *
CustomLogic_CustomLogicTextOverflowEnum_Bindings____CreatePropertyBinding__Ellipsis(MethodInfo *method)

{
  System_Func_CustomLogicTextOverflowEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ad7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextOverflowEnum_Bindings___CreatePropertyBinding__Ellipsis_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextOverflowEnum_object);
    Il2CppMethodInitialized_07546ad7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextOverflowEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextOverflowEnum_Bindings___CreatePropertyBinding__Ellipsis_g____getter_3
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTextOverflowEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTextOverflowEnum_Bindings___cctor (const MethodInfo* method);
// 0x5ab0e70

void CustomLogic_CustomLogicTextOverflowEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546ad8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTextOverflowEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Ellipsis");
    il2cpp_codegen_initialize_runtime_metadata(&"Clip");
    Il2CppMethodInitialized_07546ad8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Clip",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Ellipsis",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicTextOverflowEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicTextOverflowEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicTextOverflowEnum.Bindings$$<__CreatePropertyBinding__Clip>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextOverflowEnum_Bindings_____CreatePropertyBinding__Clip_g____getter_2_0 (CustomLogic_CustomLogicTextOverflowEnum_o* __i, const MethodInfo* method);
// 0x5ab0f60

Il2CppObject *
CustomLogic_CustomLogicTextOverflowEnum_Bindings_____CreatePropertyBinding__Clip_g____getter_2_0
          (CustomLogic_CustomLogicTextOverflowEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicTextOverflowEnum.Bindings$$<__CreatePropertyBinding__Ellipsis>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextOverflowEnum_Bindings_____CreatePropertyBinding__Ellipsis_g____getter_3_0 (CustomLogic_CustomLogicTextOverflowEnum_o* __i, const MethodInfo* method);
// 0x5ab0f80

Il2CppObject *
CustomLogic_CustomLogicTextOverflowEnum_Bindings_____CreatePropertyBinding__Ellipsis_g____getter_3_0
          (CustomLogic_CustomLogicTextOverflowEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTextOverflowEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTextOverflowEnum___ctor (CustomLogic_CustomLogicTextOverflowEnum_o* __this, const MethodInfo* method);
// 0x5ab09e0

void CustomLogic_CustomLogicTextOverflowEnum___ctor
               (CustomLogic_CustomLogicTextOverflowEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ad2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546ad2 = '\x01';
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


// CustomLogic.CustomLogicTextOverflowEnum$$get_Clip
// il2cpp: int32_t CustomLogic_CustomLogicTextOverflowEnum__get_Clip (const MethodInfo* method);
// 0x5ab0a50

int32_t CustomLogic_CustomLogicTextOverflowEnum__get_Clip(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicTextOverflowEnum$$get_Ellipsis
// il2cpp: int32_t CustomLogic_CustomLogicTextOverflowEnum__get_Ellipsis (const MethodInfo* method);
// 0x5ab0a60

int32_t CustomLogic_CustomLogicTextOverflowEnum__get_Ellipsis(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicTextOverflowEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTextOverflowEnum__get_ClassName (CustomLogic_CustomLogicTextOverflowEnum_o* __this, const MethodInfo* method);
// 0x5ab0a70

System_String_o *
CustomLogic_CustomLogicTextOverflowEnum__get_ClassName
          (CustomLogic_CustomLogicTextOverflowEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ad3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TextOverflowEnum");
    Il2CppMethodInitialized_07546ad3 = '\x01';
  }
  return "TextOverflowEnum";
}


// CustomLogic.CustomLogicTextOverflowEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTextOverflowEnum__get_IsAbstract (CustomLogic_CustomLogicTextOverflowEnum_o* __this, const MethodInfo* method);
// 0x5ab0aa0

bool CustomLogic_CustomLogicTextOverflowEnum__get_IsAbstract
               (CustomLogic_CustomLogicTextOverflowEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicTextOverflowEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTextOverflowEnum__get_IsStatic (CustomLogic_CustomLogicTextOverflowEnum_o* __this, const MethodInfo* method);
// 0x5ab0ab0

bool CustomLogic_CustomLogicTextOverflowEnum__get_IsStatic
               (CustomLogic_CustomLogicTextOverflowEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicTextOverflowEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTextOverflowEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTextOverflowEnum_o* __this, const MethodInfo* method);
// 0x5ab0ac0

bool CustomLogic_CustomLogicTextOverflowEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicTextOverflowEnum_o *__this,MethodInfo *method)

{
  return true;
}


