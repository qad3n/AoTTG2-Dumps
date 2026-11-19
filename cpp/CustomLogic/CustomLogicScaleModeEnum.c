// Type: CustomLogic.CustomLogicScaleModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicScaleModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicScaleModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicScaleModeEnum_o* CustomLogic_CustomLogicScaleModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5aa7810

CustomLogic_CustomLogicScaleModeEnum_o *
CustomLogic_CustomLogicScaleModeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546a22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScaleModeEnum);
    Il2CppMethodInitialized_07546a22 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicScaleModeEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScaleModeEnum);
  if (Il2CppMethodInitialized_07546a20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546a20 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicScaleModeEnum_o *)__this;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicScaleModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5aa7930

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicScaleModeEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicScaleModeEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546a23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"StretchToFill");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleToFit");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleAndCrop");
    Il2CppMethodInitialized_07546a23 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"StretchToFill",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings)
      ;
      pCVar2 = CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__StretchToFill
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__StretchToFill
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"ScaleAndCrop",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings)
      ;
      pCVar2 = CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__ScaleAndCrop
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__ScaleAndCrop
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"ScaleToFit",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicScaleModeEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__ScaleToFit
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__ScaleToFit
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$__CreatePropertyBinding__StretchToFill
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o* CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__StretchToFill (const MethodInfo* method);
// 0x5aa7ac0

CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *
CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__StretchToFill(MethodInfo *method)

{
  System_Func_CustomLogicScaleModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings___CreatePropertyBinding__StretchToFill_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScaleModeEnum_object);
    Il2CppMethodInitialized_07546a24 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicScaleModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings___CreatePropertyBinding__StretchToFill_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$__CreatePropertyBinding__ScaleAndCrop
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o* CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__ScaleAndCrop (const MethodInfo* method);
// 0x5aa7b60

CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *
CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__ScaleAndCrop(MethodInfo *method)

{
  System_Func_CustomLogicScaleModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings___CreatePropertyBinding__ScaleAndCrop_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScaleModeEnum_object);
    Il2CppMethodInitialized_07546a25 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicScaleModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings___CreatePropertyBinding__ScaleAndCrop_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$__CreatePropertyBinding__ScaleToFit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o* CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__ScaleToFit (const MethodInfo* method);
// 0x5aa7c00

CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *
CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__ScaleToFit(MethodInfo *method)

{
  System_Func_CustomLogicScaleModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings___CreatePropertyBinding__ScaleToFit_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScaleModeEnum_object);
    Il2CppMethodInitialized_07546a26 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicScaleModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings___CreatePropertyBinding__ScaleToFit_g____getter_4
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicScaleModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x5aa7ca0

void CustomLogic_CustomLogicScaleModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546a27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"StretchToFill");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleToFit");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleAndCrop");
    Il2CppMethodInitialized_07546a27 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StretchToFill",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ScaleAndCrop",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ScaleToFit",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$<__CreatePropertyBinding__StretchToFill>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScaleModeEnum_Bindings_____CreatePropertyBinding__StretchToFill_g____getter_2_0 (CustomLogic_CustomLogicScaleModeEnum_o* __i, const MethodInfo* method);
// 0x5aa7db0

Il2CppObject *
CustomLogic_CustomLogicScaleModeEnum_Bindings_____CreatePropertyBinding__StretchToFill_g____getter_2_0
          (CustomLogic_CustomLogicScaleModeEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$<__CreatePropertyBinding__ScaleAndCrop>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScaleModeEnum_Bindings_____CreatePropertyBinding__ScaleAndCrop_g____getter_3_0 (CustomLogic_CustomLogicScaleModeEnum_o* __i, const MethodInfo* method);
// 0x5aa7dd0

Il2CppObject *
CustomLogic_CustomLogicScaleModeEnum_Bindings_____CreatePropertyBinding__ScaleAndCrop_g____getter_3_0
          (CustomLogic_CustomLogicScaleModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$<__CreatePropertyBinding__ScaleToFit>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScaleModeEnum_Bindings_____CreatePropertyBinding__ScaleToFit_g____getter_4_0 (CustomLogic_CustomLogicScaleModeEnum_o* __i, const MethodInfo* method);
// 0x5aa7df0

Il2CppObject *
CustomLogic_CustomLogicScaleModeEnum_Bindings_____CreatePropertyBinding__ScaleToFit_g____getter_4_0
          (CustomLogic_CustomLogicScaleModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicScaleModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicScaleModeEnum___ctor (CustomLogic_CustomLogicScaleModeEnum_o* __this, const MethodInfo* method);
// 0x5aa7710

void CustomLogic_CustomLogicScaleModeEnum___ctor
               (CustomLogic_CustomLogicScaleModeEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546a20 = '\x01';
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


// CustomLogic.CustomLogicScaleModeEnum$$get_StretchToFill
// il2cpp: int32_t CustomLogic_CustomLogicScaleModeEnum__get_StretchToFill (const MethodInfo* method);
// 0x5aa7780

int32_t CustomLogic_CustomLogicScaleModeEnum__get_StretchToFill(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicScaleModeEnum$$get_ScaleAndCrop
// il2cpp: int32_t CustomLogic_CustomLogicScaleModeEnum__get_ScaleAndCrop (const MethodInfo* method);
// 0x5aa7790

int32_t CustomLogic_CustomLogicScaleModeEnum__get_ScaleAndCrop(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicScaleModeEnum$$get_ScaleToFit
// il2cpp: int32_t CustomLogic_CustomLogicScaleModeEnum__get_ScaleToFit (const MethodInfo* method);
// 0x5aa77a0

int32_t CustomLogic_CustomLogicScaleModeEnum__get_ScaleToFit(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicScaleModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicScaleModeEnum__get_ClassName (CustomLogic_CustomLogicScaleModeEnum_o* __this, const MethodInfo* method);
// 0x5aa77b0

System_String_o *
CustomLogic_CustomLogicScaleModeEnum__get_ClassName
          (CustomLogic_CustomLogicScaleModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleModeEnum");
    Il2CppMethodInitialized_07546a21 = '\x01';
  }
  return "ScaleModeEnum";
}


// CustomLogic.CustomLogicScaleModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicScaleModeEnum__get_IsAbstract (CustomLogic_CustomLogicScaleModeEnum_o* __this, const MethodInfo* method);
// 0x5aa77e0

bool CustomLogic_CustomLogicScaleModeEnum__get_IsAbstract
               (CustomLogic_CustomLogicScaleModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicScaleModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicScaleModeEnum__get_IsStatic (CustomLogic_CustomLogicScaleModeEnum_o* __this, const MethodInfo* method);
// 0x5aa77f0

bool CustomLogic_CustomLogicScaleModeEnum__get_IsStatic
               (CustomLogic_CustomLogicScaleModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicScaleModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicScaleModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicScaleModeEnum_o* __this, const MethodInfo* method);
// 0x5aa7800

bool CustomLogic_CustomLogicScaleModeEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicScaleModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


