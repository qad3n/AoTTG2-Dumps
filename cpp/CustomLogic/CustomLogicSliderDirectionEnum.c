// Type: CustomLogic.CustomLogicSliderDirectionEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicSliderDirectionEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicSliderDirectionEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicSliderDirectionEnum_o* CustomLogic_CustomLogicSliderDirectionEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5aaa610

CustomLogic_CustomLogicSliderDirectionEnum_o *
CustomLogic_CustomLogicSliderDirectionEnum_Factory__CreateInstance
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
  
  if (Il2CppMethodInitialized_07546a59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum);
    Il2CppMethodInitialized_07546a59 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicSliderDirectionEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicSliderDirectionEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum);
  if (Il2CppMethodInitialized_07546a57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546a57 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicSliderDirectionEnum_o *)__this;
}


// CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicSliderDirectionEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5aaa730

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicSliderDirectionEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicSliderDirectionEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546a5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Vertical");
    il2cpp_codegen_initialize_runtime_metadata(&"Horizontal");
    Il2CppMethodInitialized_07546a5a = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Horizontal",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicSliderDirectionEnum_Bindings____CreatePropertyBinding__Horizontal
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicSliderDirectionEnum_Bindings____CreatePropertyBinding__Horizontal
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Vertical",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicSliderDirectionEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings;
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicSliderDirectionEnum_Bindings____CreatePropertyBinding__Vertical
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicSliderDirectionEnum_Bindings____CreatePropertyBinding__Vertical
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$__CreatePropertyBinding__Horizontal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum__o* CustomLogic_CustomLogicSliderDirectionEnum_Bindings____CreatePropertyBinding__Horizontal (const MethodInfo* method);
// 0x5aaa870

CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum__o *
CustomLogic_CustomLogicSliderDirectionEnum_Bindings____CreatePropertyBinding__Horizontal(MethodInfo *method)

{
  System_Func_CustomLogicSliderDirectionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings___CreatePropertyBinding__Horizontal_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderDirectionEnum_object);
    Il2CppMethodInitialized_07546a5b = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderDirectionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings___CreatePropertyBinding__Horizontal_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$__CreatePropertyBinding__Vertical
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum__o* CustomLogic_CustomLogicSliderDirectionEnum_Bindings____CreatePropertyBinding__Vertical (const MethodInfo* method);
// 0x5aaa910

CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum__o *
CustomLogic_CustomLogicSliderDirectionEnum_Bindings____CreatePropertyBinding__Vertical(MethodInfo *method)

{
  System_Func_CustomLogicSliderDirectionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings___CreatePropertyBinding__Vertical_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderDirectionEnum_object);
    Il2CppMethodInitialized_07546a5c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderDirectionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings___CreatePropertyBinding__Vertical_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicSliderDirectionEnum_Bindings___cctor (const MethodInfo* method);
// 0x5aaa9b0

void CustomLogic_CustomLogicSliderDirectionEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546a5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Vertical");
    il2cpp_codegen_initialize_runtime_metadata(&"Horizontal");
    Il2CppMethodInitialized_07546a5d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Horizontal",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Vertical",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$<__CreatePropertyBinding__Horizontal>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderDirectionEnum_Bindings_____CreatePropertyBinding__Horizontal_g____getter_2_0 (CustomLogic_CustomLogicSliderDirectionEnum_o* __i, const MethodInfo* method);
// 0x5aaaaa0

Il2CppObject *
CustomLogic_CustomLogicSliderDirectionEnum_Bindings_____CreatePropertyBinding__Horizontal_g____getter_2_0
          (CustomLogic_CustomLogicSliderDirectionEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$<__CreatePropertyBinding__Vertical>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderDirectionEnum_Bindings_____CreatePropertyBinding__Vertical_g____getter_3_0 (CustomLogic_CustomLogicSliderDirectionEnum_o* __i, const MethodInfo* method);
// 0x5aaaac0

Il2CppObject *
CustomLogic_CustomLogicSliderDirectionEnum_Bindings_____CreatePropertyBinding__Vertical_g____getter_3_0
          (CustomLogic_CustomLogicSliderDirectionEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicSliderDirectionEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicSliderDirectionEnum___ctor (CustomLogic_CustomLogicSliderDirectionEnum_o* __this, const MethodInfo* method);
// 0x5aaa520

void CustomLogic_CustomLogicSliderDirectionEnum___ctor
               (CustomLogic_CustomLogicSliderDirectionEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546a57 = '\x01';
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


// CustomLogic.CustomLogicSliderDirectionEnum$$get_Horizontal
// il2cpp: int32_t CustomLogic_CustomLogicSliderDirectionEnum__get_Horizontal (const MethodInfo* method);
// 0x5aaa590

int32_t CustomLogic_CustomLogicSliderDirectionEnum__get_Horizontal(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicSliderDirectionEnum$$get_Vertical
// il2cpp: int32_t CustomLogic_CustomLogicSliderDirectionEnum__get_Vertical (const MethodInfo* method);
// 0x5aaa5a0

int32_t CustomLogic_CustomLogicSliderDirectionEnum__get_Vertical(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicSliderDirectionEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicSliderDirectionEnum__get_ClassName (CustomLogic_CustomLogicSliderDirectionEnum_o* __this, const MethodInfo* method);
// 0x5aaa5b0

System_String_o *
CustomLogic_CustomLogicSliderDirectionEnum__get_ClassName
          (CustomLogic_CustomLogicSliderDirectionEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SliderDirectionEnum");
    Il2CppMethodInitialized_07546a58 = '\x01';
  }
  return "SliderDirectionEnum";
}


// CustomLogic.CustomLogicSliderDirectionEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicSliderDirectionEnum__get_IsAbstract (CustomLogic_CustomLogicSliderDirectionEnum_o* __this, const MethodInfo* method);
// 0x5aaa5e0

bool CustomLogic_CustomLogicSliderDirectionEnum__get_IsAbstract
               (CustomLogic_CustomLogicSliderDirectionEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicSliderDirectionEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicSliderDirectionEnum__get_IsStatic (CustomLogic_CustomLogicSliderDirectionEnum_o* __this, const MethodInfo* method);
// 0x5aaa5f0

bool CustomLogic_CustomLogicSliderDirectionEnum__get_IsStatic
               (CustomLogic_CustomLogicSliderDirectionEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicSliderDirectionEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicSliderDirectionEnum__get_InheritBaseMembers (CustomLogic_CustomLogicSliderDirectionEnum_o* __this, const MethodInfo* method);
// 0x5aaa600

bool CustomLogic_CustomLogicSliderDirectionEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicSliderDirectionEnum_o *__this,MethodInfo *method)

{
  return true;
}


