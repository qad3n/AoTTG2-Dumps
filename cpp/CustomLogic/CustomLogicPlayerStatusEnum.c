// Type: CustomLogic.CustomLogicPlayerStatusEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPlayerStatusEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicPlayerStatusEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPlayerStatusEnum_o* CustomLogic_CustomLogicPlayerStatusEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fef570

CustomLogic_CustomLogicPlayerStatusEnum_o *
CustomLogic_CustomLogicPlayerStatusEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345efd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum);
    Il2CppMethodInitialized_184345efd = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum);
      if (Il2CppMethodInitialized_184345ef8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345ef8 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicPlayerStatusEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicPlayerStatusEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPlayerStatusEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fd8210

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_184345efe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Dead");
    il2cpp_codegen_initialize_runtime_metadata(&"Alive");
    il2cpp_codegen_initialize_runtime_metadata(&"Spectating");
    Il2CppMethodInitialized_184345efe = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Alive",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings);
    }
    if (Il2CppMethodInitialized_184345eff == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings___CreatePropertyBinding__Alive_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerStatusEnum_object);
      Il2CppMethodInitialized_184345eff = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerStatusEnum_object)
    ;
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings___CreatePropertyBinding__Alive_g____getter_2_0
    ;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Dead",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345f00 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings___CreatePropertyBinding__Dead_g____getter_3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerStatusEnum_object);
        Il2CppMethodInitialized_184345f00 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerStatusEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings___CreatePropertyBinding__Dead_g____getter_3_0
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"Spectating",(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicPlayerStatusEnum not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
        pMVar3 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings_CreateMemberBinding);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
      }
      if ((TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345f01 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings___CreatePropertyBinding__Spectating_g____getter
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerStatusEnum_object);
        Il2CppMethodInitialized_184345f01 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerStatusEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings___CreatePropertyBinding__Spectating_g____getter
      ;
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$__CreatePropertyBinding__Alive
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o* CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Alive (const MethodInfo* method);
// 0x181fded40

CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Alive(MethodInfo *method)

{
  System_Func_CustomLogicPlayerStatusEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345eff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings___CreatePropertyBinding__Alive_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerStatusEnum_object);
    Il2CppMethodInitialized_184345eff = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerStatusEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings___CreatePropertyBinding__Alive_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$__CreatePropertyBinding__Dead
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o* CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Dead (const MethodInfo* method);
// 0x181fe12c0

CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Dead(MethodInfo *method)

{
  System_Func_CustomLogicPlayerStatusEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345f00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings___CreatePropertyBinding__Dead_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerStatusEnum_object);
    Il2CppMethodInitialized_184345f00 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerStatusEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings___CreatePropertyBinding__Dead_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$__CreatePropertyBinding__Spectating
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o* CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Spectating (const MethodInfo* method);
// 0x181fe7760

CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Spectating(MethodInfo *method)

{
  System_Func_CustomLogicPlayerStatusEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345f01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings___CreatePropertyBinding__Spectating_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerStatusEnum_object);
    Il2CppMethodInitialized_184345f01 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerStatusEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings___CreatePropertyBinding__Spectating_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPlayerStatusEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fea090

void CustomLogic_CustomLogicPlayerStatusEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345f02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Dead");
    il2cpp_codegen_initialize_runtime_metadata(&"Alive");
    il2cpp_codegen_initialize_runtime_metadata(&"Spectating");
    Il2CppMethodInitialized_184345f02 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Alive",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dead",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Spectating",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$<__CreatePropertyBinding__Alive>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerStatusEnum_Bindings_____CreatePropertyBinding__Alive_g____getter_2_0 (CustomLogic_CustomLogicPlayerStatusEnum_o* __i, const MethodInfo* method);
// 0x181fdac80

Il2CppObject *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings_____CreatePropertyBinding__Alive_g____getter_2_0
          (CustomLogic_CustomLogicPlayerStatusEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    Il2CppMethodInitialized_1843460cd = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_PlayerStatus->static_fields->Alive;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$<__CreatePropertyBinding__Dead>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerStatusEnum_Bindings_____CreatePropertyBinding__Dead_g____getter_3_0 (CustomLogic_CustomLogicPlayerStatusEnum_o* __i, const MethodInfo* method);
// 0x181fdc1a0

Il2CppObject *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings_____CreatePropertyBinding__Dead_g____getter_3_0
          (CustomLogic_CustomLogicPlayerStatusEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    Il2CppMethodInitialized_1843460ce = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_PlayerStatus->static_fields->Dead;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$<__CreatePropertyBinding__Spectating>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerStatusEnum_Bindings_____CreatePropertyBinding__Spectating_g____getter_4_0 (CustomLogic_CustomLogicPlayerStatusEnum_o* __i, const MethodInfo* method);
// 0x181fde210

Il2CppObject *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings_____CreatePropertyBinding__Spectating_g____getter_4_0
          (CustomLogic_CustomLogicPlayerStatusEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    Il2CppMethodInitialized_1843460cf = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_PlayerStatus->static_fields->Spectating;
}


// CustomLogic.CustomLogicPlayerStatusEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicPlayerStatusEnum___ctor (CustomLogic_CustomLogicPlayerStatusEnum_o* __this, const MethodInfo* method);
// 0x181feeaf0

void CustomLogic_CustomLogicPlayerStatusEnum___ctor
               (CustomLogic_CustomLogicPlayerStatusEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ef8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345ef8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_Alive
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerStatusEnum__get_Alive (const MethodInfo* method);
// 0x181feeb40

System_String_o * CustomLogic_CustomLogicPlayerStatusEnum__get_Alive(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ef9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    Il2CppMethodInitialized_184345ef9 = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
  }
  return TypeInfo_GameManagers_PlayerStatus->static_fields->Alive;
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_Dead
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerStatusEnum__get_Dead (const MethodInfo* method);
// 0x181feebc0

System_String_o * CustomLogic_CustomLogicPlayerStatusEnum__get_Dead(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345efa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    Il2CppMethodInitialized_184345efa = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
  }
  return TypeInfo_GameManagers_PlayerStatus->static_fields->Dead;
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_Spectating
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerStatusEnum__get_Spectating (const MethodInfo* method);
// 0x181feec10

System_String_o * CustomLogic_CustomLogicPlayerStatusEnum__get_Spectating(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345efb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    Il2CppMethodInitialized_184345efb = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
  }
  return TypeInfo_GameManagers_PlayerStatus->static_fields->Spectating;
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerStatusEnum__get_ClassName (CustomLogic_CustomLogicPlayerStatusEnum_o* __this, const MethodInfo* method);
// 0x181feeb90

System_String_o *
CustomLogic_CustomLogicPlayerStatusEnum__get_ClassName
          (CustomLogic_CustomLogicPlayerStatusEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345efc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"PlayerStatusEnum");
    Il2CppMethodInitialized_184345efc = '\x01';
  }
  return "PlayerStatusEnum";
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPlayerStatusEnum__get_IsAbstract (CustomLogic_CustomLogicPlayerStatusEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicPlayerStatusEnum__get_IsAbstract(CustomLogic_CustomLogicPlayerStatusEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPlayerStatusEnum__get_IsStatic (CustomLogic_CustomLogicPlayerStatusEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicPlayerStatusEnum__get_IsStatic(CustomLogic_CustomLogicPlayerStatusEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPlayerStatusEnum__get_InheritBaseMembers (CustomLogic_CustomLogicPlayerStatusEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicPlayerStatusEnum__get_InheritBaseMembers(CustomLogic_CustomLogicPlayerStatusEnum_o* __this, MethodInfo* method)

{
  return true;
}


