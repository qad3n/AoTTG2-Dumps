// Type: CustomLogic.CustomLogicDummyAnimationEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicDummyAnimationEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicDummyAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicDummyAnimationEnum_o* CustomLogic_CustomLogicDummyAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fa49e0

CustomLogic_CustomLogicDummyAnimationEnum_o *
CustomLogic_CustomLogicDummyAnimationEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345973 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDummyAnimationEnum);
    Il2CppMethodInitialized_184345973 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDummyAnimationEnum);
      if (Il2CppMethodInitialized_18434596e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_18434596e = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicDummyAnimationEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicDummyAnimationEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicDummyAnimationEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicDummyAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f8ac20

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicDummyAnimationEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_184345974 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Fall");
    il2cpp_codegen_initialize_runtime_metadata(&"Rise");
    Il2CppMethodInitialized_184345974 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings);
    }
    if (Il2CppMethodInitialized_184345975 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicDummyAnimationEnum_object);
      Il2CppMethodInitialized_184345975 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDummyAnimationEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
    ;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Fall",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345976 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicDummyAnimationEnum_object)
        ;
        Il2CppMethodInitialized_184345976 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDummyAnimationEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_3_0
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"Rise",(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicDummyAnimationEnum not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
        pMVar3 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings_CreateMemberBinding
                           );
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
      }
      if ((TypeInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345977 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings___CreatePropertyBinding__Rise_g____getter_4_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicDummyAnimationEnum_object)
        ;
        Il2CppMethodInitialized_184345977 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDummyAnimationEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings___CreatePropertyBinding__Rise_g____getter_4_0
      ;
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum_ctor
            );
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$__CreatePropertyBinding__Idle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o* CustomLogic_CustomLogicDummyAnimationEnum_Bindings____CreatePropertyBinding__Idle (const MethodInfo* method);
// 0x181f97f20

CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *
CustomLogic_CustomLogicDummyAnimationEnum_Bindings____CreatePropertyBinding__Idle(MethodInfo *method)

{
  System_Func_CustomLogicDummyAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345975 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicDummyAnimationEnum_object);
    Il2CppMethodInitialized_184345975 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicDummyAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$__CreatePropertyBinding__Fall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o* CustomLogic_CustomLogicDummyAnimationEnum_Bindings____CreatePropertyBinding__Fall (const MethodInfo* method);
// 0x181f96d50

CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *
CustomLogic_CustomLogicDummyAnimationEnum_Bindings____CreatePropertyBinding__Fall(MethodInfo *method)

{
  System_Func_CustomLogicDummyAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345976 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicDummyAnimationEnum_object);
    Il2CppMethodInitialized_184345976 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicDummyAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$__CreatePropertyBinding__Rise
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o* CustomLogic_CustomLogicDummyAnimationEnum_Bindings____CreatePropertyBinding__Rise (const MethodInfo* method);
// 0x181f9a220

CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *
CustomLogic_CustomLogicDummyAnimationEnum_Bindings____CreatePropertyBinding__Rise(MethodInfo *method)

{
  System_Func_CustomLogicDummyAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345977 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings___CreatePropertyBinding__Rise_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicDummyAnimationEnum_object);
    Il2CppMethodInitialized_184345977 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicDummyAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings___CreatePropertyBinding__Rise_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicDummyAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x181f9f4c0

void CustomLogic_CustomLogicDummyAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345978 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Fall");
    il2cpp_codegen_initialize_runtime_metadata(&"Rise");
    Il2CppMethodInitialized_184345978 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Idle",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Fall",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rise",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings->static_fields->MemberNames,__this
              );
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDummyAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0 (CustomLogic_CustomLogicDummyAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8ea30

Il2CppObject*
CustomLogic_CustomLogicDummyAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0(CustomLogic_CustomLogicDummyAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434596f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature|dummy_idle");
    Il2CppMethodInitialized_18434596f = '\x01';
  }
  return "Armature|dummy_idle";
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$<__CreatePropertyBinding__Fall>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDummyAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_3_0 (CustomLogic_CustomLogicDummyAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8e180

Il2CppObject*
CustomLogic_CustomLogicDummyAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_3_0(CustomLogic_CustomLogicDummyAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345970 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature|dummy_fall");
    Il2CppMethodInitialized_184345970 = '\x01';
  }
  return "Armature|dummy_fall";
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$<__CreatePropertyBinding__Rise>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDummyAnimationEnum_Bindings_____CreatePropertyBinding__Rise_g____getter_4_0 (CustomLogic_CustomLogicDummyAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f90420

Il2CppObject*
CustomLogic_CustomLogicDummyAnimationEnum_Bindings_____CreatePropertyBinding__Rise_g____getter_4_0(CustomLogic_CustomLogicDummyAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345971 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature|dummy_rise");
    Il2CppMethodInitialized_184345971 = '\x01';
  }
  return "Armature|dummy_rise";
}


// CustomLogic.CustomLogicDummyAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicDummyAnimationEnum___ctor (CustomLogic_CustomLogicDummyAnimationEnum_o* __this, const MethodInfo* method);
// 0x181fa01d0

void CustomLogic_CustomLogicDummyAnimationEnum___ctor
               (CustomLogic_CustomLogicDummyAnimationEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434596e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_18434596e = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicDummyAnimationEnum$$get_Idle
// il2cpp: System_String_o* CustomLogic_CustomLogicDummyAnimationEnum__get_Idle (const MethodInfo* method);
// 0x181f8ea30

System_String_o * CustomLogic_CustomLogicDummyAnimationEnum__get_Idle(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434596f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature|dummy_idle");
    Il2CppMethodInitialized_18434596f = '\x01';
  }
  return "Armature|dummy_idle";
}


// CustomLogic.CustomLogicDummyAnimationEnum$$get_Fall
// il2cpp: System_String_o* CustomLogic_CustomLogicDummyAnimationEnum__get_Fall (const MethodInfo* method);
// 0x181f8e180

System_String_o * CustomLogic_CustomLogicDummyAnimationEnum__get_Fall(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345970 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature|dummy_fall");
    Il2CppMethodInitialized_184345970 = '\x01';
  }
  return "Armature|dummy_fall";
}


// CustomLogic.CustomLogicDummyAnimationEnum$$get_Rise
// il2cpp: System_String_o* CustomLogic_CustomLogicDummyAnimationEnum__get_Rise (const MethodInfo* method);
// 0x181f90420

System_String_o * CustomLogic_CustomLogicDummyAnimationEnum__get_Rise(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345971 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature|dummy_rise");
    Il2CppMethodInitialized_184345971 = '\x01';
  }
  return "Armature|dummy_rise";
}


// CustomLogic.CustomLogicDummyAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicDummyAnimationEnum__get_ClassName (CustomLogic_CustomLogicDummyAnimationEnum_o* __this, const MethodInfo* method);
// 0x181fa0220

System_String_o *
CustomLogic_CustomLogicDummyAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicDummyAnimationEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345972 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"DummyAnimationEnum");
    Il2CppMethodInitialized_184345972 = '\x01';
  }
  return "DummyAnimationEnum";
}


// CustomLogic.CustomLogicDummyAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicDummyAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicDummyAnimationEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicDummyAnimationEnum__get_IsAbstract(CustomLogic_CustomLogicDummyAnimationEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicDummyAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicDummyAnimationEnum__get_IsStatic (CustomLogic_CustomLogicDummyAnimationEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicDummyAnimationEnum__get_IsStatic(CustomLogic_CustomLogicDummyAnimationEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicDummyAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicDummyAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicDummyAnimationEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicDummyAnimationEnum__get_InheritBaseMembers(CustomLogic_CustomLogicDummyAnimationEnum_o* __this, MethodInfo* method)

{
  return true;
}


