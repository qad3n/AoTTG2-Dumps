// Type: CustomLogic.CustomLogicUnityComponentEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicUnityComponentEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicUnityComponentEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicUnityComponentEnum_o* CustomLogic_CustomLogicUnityComponentEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5ac1ed0

CustomLogic_CustomLogicUnityComponentEnum_o *
CustomLogic_CustomLogicUnityComponentEnum_Factory__CreateInstance
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
  
  if (Il2CppMethodInitialized_07546c29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUnityComponentEnum);
    Il2CppMethodInitialized_07546c29 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicUnityComponentEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicUnityComponentEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUnityComponentEnum);
  if (Il2CppMethodInitialized_07546c26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546c26 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicUnityComponentEnum_o *)__this;
}


// CustomLogic.CustomLogicUnityComponentEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicUnityComponentEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5ac1ff0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicUnityComponentEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicUnityComponentEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicUnityComponentEnum_Bindings_c *method_00;
  
  if (Il2CppMethodInitialized_07546c2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUnityComponentEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"VideoPlayer");
    Il2CppMethodInitialized_07546c2a = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"VideoPlayer",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicUnityComponentEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      method_00 = TypeInfo_CustomLogic_CustomLogicUnityComponentEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUnityComponentEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicUnityComponentEnum_Bindings____CreatePropertyBinding__VideoPlayer
                         ((MethodInfo *)method_00);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicUnityComponentEnum_Bindings____CreatePropertyBinding__VideoPlayer
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicUnityComponentEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicUnityComponentEnum not found");
  pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicUnityComponentEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicUnityComponentEnum.Bindings$$__CreatePropertyBinding__VideoPlayer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUnityComponentEnum__o* CustomLogic_CustomLogicUnityComponentEnum_Bindings____CreatePropertyBinding__VideoPlayer (const MethodInfo* method);
// 0x5ac20d0

CustomLogic_CLPropertyBinding_CustomLogicUnityComponentEnum__o *
CustomLogic_CustomLogicUnityComponentEnum_Bindings____CreatePropertyBinding__VideoPlayer(MethodInfo *method)

{
  System_Func_CustomLogicUnityComponentEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicUnityComponentEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicUnityComponentEnum_Bindings___CreatePropertyBinding__VideoPlayer_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUnityComponentEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUnityComponentEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicUnityComponentEnum_object);
    Il2CppMethodInitialized_07546c2b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicUnityComponentEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicUnityComponentEnum_Bindings___CreatePropertyBinding__VideoPlayer_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicUnityComponentEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicUnityComponentEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicUnityComponentEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicUnityComponentEnum_Bindings___cctor (const MethodInfo* method);
// 0x5ac2170

void CustomLogic_CustomLogicUnityComponentEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546c2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUnityComponentEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"VideoPlayer");
    Il2CppMethodInitialized_07546c2c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"VideoPlayer",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicUnityComponentEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicUnityComponentEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicUnityComponentEnum.Bindings$$<__CreatePropertyBinding__VideoPlayer>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUnityComponentEnum_Bindings_____CreatePropertyBinding__VideoPlayer_g____getter_2_0 (CustomLogic_CustomLogicUnityComponentEnum_o* __i, const MethodInfo* method);
// 0x5ac2230

Il2CppObject *
CustomLogic_CustomLogicUnityComponentEnum_Bindings_____CreatePropertyBinding__VideoPlayer_g____getter_2_0
          (CustomLogic_CustomLogicUnityComponentEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"VideoPlayer");
    Il2CppMethodInitialized_07546c27 = '\x01';
  }
  return (Il2CppObject *)"VideoPlayer";
}


// CustomLogic.CustomLogicUnityComponentEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicUnityComponentEnum___ctor (CustomLogic_CustomLogicUnityComponentEnum_o* __this, const MethodInfo* method);
// 0x5ac1dd0

void CustomLogic_CustomLogicUnityComponentEnum___ctor
               (CustomLogic_CustomLogicUnityComponentEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546c26 = '\x01';
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


// CustomLogic.CustomLogicUnityComponentEnum$$get_VideoPlayer
// il2cpp: System_String_o* CustomLogic_CustomLogicUnityComponentEnum__get_VideoPlayer (const MethodInfo* method);
// 0x5ac1e40

System_String_o * CustomLogic_CustomLogicUnityComponentEnum__get_VideoPlayer(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"VideoPlayer");
    Il2CppMethodInitialized_07546c27 = '\x01';
  }
  return "VideoPlayer";
}


// CustomLogic.CustomLogicUnityComponentEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicUnityComponentEnum__get_ClassName (CustomLogic_CustomLogicUnityComponentEnum_o* __this, const MethodInfo* method);
// 0x5ac1e70

System_String_o *
CustomLogic_CustomLogicUnityComponentEnum__get_ClassName
          (CustomLogic_CustomLogicUnityComponentEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"UnityComponentEnum");
    Il2CppMethodInitialized_07546c28 = '\x01';
  }
  return "UnityComponentEnum";
}


// CustomLogic.CustomLogicUnityComponentEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicUnityComponentEnum__get_IsAbstract (CustomLogic_CustomLogicUnityComponentEnum_o* __this, const MethodInfo* method);
// 0x5ac1ea0

bool CustomLogic_CustomLogicUnityComponentEnum__get_IsAbstract
               (CustomLogic_CustomLogicUnityComponentEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicUnityComponentEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicUnityComponentEnum__get_IsStatic (CustomLogic_CustomLogicUnityComponentEnum_o* __this, const MethodInfo* method);
// 0x5ac1eb0

bool CustomLogic_CustomLogicUnityComponentEnum__get_IsStatic
               (CustomLogic_CustomLogicUnityComponentEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicUnityComponentEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicUnityComponentEnum__get_InheritBaseMembers (CustomLogic_CustomLogicUnityComponentEnum_o* __this, const MethodInfo* method);
// 0x5ac1ec0

bool CustomLogic_CustomLogicUnityComponentEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicUnityComponentEnum_o *__this,MethodInfo *method)

{
  return true;
}


