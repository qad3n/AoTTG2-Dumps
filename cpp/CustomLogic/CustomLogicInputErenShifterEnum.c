// Type: CustomLogic.CustomLogicInputErenShifterEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputErenShifterEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicInputErenShifterEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputErenShifterEnum_o* CustomLogic_CustomLogicInputErenShifterEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fce260

CustomLogic_CustomLogicInputErenShifterEnum_o *
CustomLogic_CustomLogicInputErenShifterEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicInputErenShifterEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345c27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_184345c27 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
      if (Il2CppMethodInitialized_184345c20 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345c20 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return __this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputErenShifterEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputErenShifterEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fa6350

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_184345c28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AttackCombo");
    il2cpp_codegen_initialize_runtime_metadata(&"Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    Il2CppMethodInitialized_184345c28 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Kick",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings);
    }
    if (Il2CppMethodInitialized_184345c29 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__Kick_g____getter_2
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object)
      ;
      Il2CppMethodInitialized_184345c29 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__Kick_g____getter_2
    ;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345c2a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__Jump_g____getter_3
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
        Il2CppMethodInitialized_184345c2a = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__Jump_g____getter_3
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345c2b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__Walk_g____getter_4
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
          Il2CppMethodInitialized_184345c2b = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__Walk_g____getter_4
        ;
      }
      else {
        bVar1 = System_String__op_Equality(name,"AttackCombo",(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputErenShifterEnum not found");
          str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
          pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
          pMVar3 = il2cpp_codegen_get_runtime_metadata
                             (&
                              MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings_CreateMemberBinding
                             );
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
        }
        if ((TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345c2c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__AttackCombo_g____g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
          Il2CppMethodInitialized_184345c2c = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__AttackCombo_g____g
        ;
      }
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$__CreatePropertyBinding__Kick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o* CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Kick (const MethodInfo* method);
// 0x181fbfe30

CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Kick(MethodInfo *method)

{
  System_Func_CustomLogicInputErenShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__Kick_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
    Il2CppMethodInitialized_184345c29 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__Kick_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o* CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x181fbfb10

CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_CustomLogicInputErenShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__Jump_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
    Il2CppMethodInitialized_184345c2a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__Jump_g____getter_3
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o* CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x181fc3170

CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_CustomLogicInputErenShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__Walk_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
    Il2CppMethodInitialized_184345c2b = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__Walk_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$__CreatePropertyBinding__AttackCombo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o* CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__AttackCombo (const MethodInfo* method);
// 0x181fbae30

CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__AttackCombo(MethodInfo *method)

{
  System_Func_CustomLogicInputErenShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__AttackCombo_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
    Il2CppMethodInitialized_184345c2c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__AttackCombo_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputErenShifterEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fc6040

void CustomLogic_CustomLogicInputErenShifterEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345c2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackCombo");
    il2cpp_codegen_initialize_runtime_metadata(&"Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    Il2CppMethodInitialized_184345c2d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Kick",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Jump",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Walk",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackCombo",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings->static_fields->MemberNames,
               __this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$<__CreatePropertyBinding__Kick>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__Kick_g____getter_2_0 (CustomLogic_CustomLogicInputErenShifterEnum_o* __i, const MethodInfo* method);
// 0x181fb63f0

Il2CppObject *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__Kick_g____getter_2_0
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_184345c2e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
  }
  if (Il2CppMethodInitialized_184345dc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_184345dc2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->KickValue;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_3_0 (CustomLogic_CustomLogicInputErenShifterEnum_o* __i, const MethodInfo* method);
// 0x181fb62d0

Il2CppObject *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_3_0
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_184345c2f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
  }
  if (Il2CppMethodInitialized_184345dc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_184345dc3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->JumpValue;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0 (CustomLogic_CustomLogicInputErenShifterEnum_o* __i, const MethodInfo* method);
// 0x181fb89c0

Il2CppObject *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_184345c30 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
  }
  if (Il2CppMethodInitialized_184345dc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_184345dc4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->WalkValue;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$<__CreatePropertyBinding__AttackCombo>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_5_0 (CustomLogic_CustomLogicInputErenShifterEnum_o* __i, const MethodInfo* method);
// 0x181fb2ec0

Il2CppObject *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_5_0
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_184345c31 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
  }
  if (Il2CppMethodInitialized_184345dc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_184345dc5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->AttackComboValue
  ;
}


// CustomLogic.CustomLogicInputErenShifterEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputErenShifterEnum___ctor (CustomLogic_CustomLogicInputErenShifterEnum_o* __this, const MethodInfo* method);
// 0x181fcb6d0

void CustomLogic_CustomLogicInputErenShifterEnum___ctor
               (CustomLogic_CustomLogicInputErenShifterEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345c20 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_Kick
// il2cpp: System_String_o* CustomLogic_CustomLogicInputErenShifterEnum__get_Kick (const MethodInfo* method);
// 0x181fcb7f0

System_String_o * CustomLogic_CustomLogicInputErenShifterEnum__get_Kick(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_184345c21 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->KickValue;
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicInputErenShifterEnum__get_Jump (const MethodInfo* method);
// 0x181fcb7a0

System_String_o * CustomLogic_CustomLogicInputErenShifterEnum__get_Jump(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_184345c22 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->JumpValue;
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicInputErenShifterEnum__get_Walk (const MethodInfo* method);
// 0x181fcb840

System_String_o * CustomLogic_CustomLogicInputErenShifterEnum__get_Walk(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_184345c23 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->WalkValue;
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_AttackCombo
// il2cpp: System_String_o* CustomLogic_CustomLogicInputErenShifterEnum__get_AttackCombo (const MethodInfo* method);
// 0x181fcb720

System_String_o * CustomLogic_CustomLogicInputErenShifterEnum__get_AttackCombo(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_184345c24 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->AttackComboValue;
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputErenShifterEnum__get_ClassName (CustomLogic_CustomLogicInputErenShifterEnum_o* __this, const MethodInfo* method);
// 0x181fcb770

System_String_o *
CustomLogic_CustomLogicInputErenShifterEnum__get_ClassName
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"InputErenShifterEnum");
    Il2CppMethodInitialized_184345c25 = '\x01';
  }
  return "InputErenShifterEnum";
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputErenShifterEnum__get_IsAbstract (CustomLogic_CustomLogicInputErenShifterEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputErenShifterEnum__get_IsAbstract(CustomLogic_CustomLogicInputErenShifterEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputErenShifterEnum__get_IsStatic (CustomLogic_CustomLogicInputErenShifterEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputErenShifterEnum__get_IsStatic(CustomLogic_CustomLogicInputErenShifterEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputErenShifterEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputErenShifterEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputErenShifterEnum__get_InheritBaseMembers(CustomLogic_CustomLogicInputErenShifterEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicInputErenShifterEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputErenShifterEnum___cctor (const MethodInfo* method);
// 0x181fcb5a0

void CustomLogic_CustomLogicInputErenShifterEnum___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&"ErenShifter/Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenShifter/Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenShifter/AttackCombo");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenShifter/Jump");
    Il2CppMethodInitialized_184345c26 = '\x01';
  }
  TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->KickValue = "ErenShifter/Kick";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->KickValue,
             "ErenShifter/Kick");
  TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->JumpValue = "ErenShifter/Jump";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->JumpValue,
             "ErenShifter/Jump");
  TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->WalkValue = "ErenShifter/Walk";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->WalkValue,
             "ErenShifter/Walk");
  TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->AttackComboValue =
       "ErenShifter/AttackCombo";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->AttackComboValue,
             "ErenShifter/AttackCombo");
  return;
}


