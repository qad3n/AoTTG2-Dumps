// Type: CustomLogic.CustomLogicProjectileNameEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicProjectileNameEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicProjectileNameEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicProjectileNameEnum_o* CustomLogic_CustomLogicProjectileNameEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181ff0870

CustomLogic_CustomLogicProjectileNameEnum_o *
CustomLogic_CustomLogicProjectileNameEnum_Factory__CreateInstance
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
  
  if (Il2CppMethodInitialized_184346023 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProjectileNameEnum);
    Il2CppMethodInitialized_184346023 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum);
      if (Il2CppMethodInitialized_18434601a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_18434601a = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicProjectileNameEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicProjectileNameEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicProjectileNameEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fd7880

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_184346024 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"BladeThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"Flare");
    il2cpp_codegen_initialize_runtime_metadata(&"Rock2");
    il2cpp_codegen_initialize_runtime_metadata(&"CannonBall");
    il2cpp_codegen_initialize_runtime_metadata(&"SmokeBomb");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    il2cpp_codegen_initialize_runtime_metadata(&"Rock1");
    Il2CppMethodInitialized_184346024 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x3c3eb8d8) {
    if (uVar2 == 0x23b28a7f) {
      bVar1 = System_String__op_Equality(name,"Rock1",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434602a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Rock1_g____getter_7
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
          Il2CppMethodInitialized_18434602a = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Rock1_g____getter_7
        ;
label_181fd7d17:
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                   (System_Action_T__object__o *)0x0,
                   (MethodInfo_12B8EE0 *)
                   MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor);
        return (CustomLogic_ICLMemberBinding_o *)__this_00;
      }
    }
    else if (uVar2 == 0x24b28c12) {
      bVar1 = System_String__op_Equality(name,"Rock2",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434602b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Rock2_g____getter_8
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
          Il2CppMethodInitialized_18434602b = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Rock2_g____getter_8
        ;
        goto label_181fd7d17;
      }
    }
    else if (uVar2 == 0x3c3eb8d7) {
      bVar1 = System_String__op_Equality(name,"Flare",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346027 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Flare_g____getter_4
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
          Il2CppMethodInitialized_184346027 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Flare_g____getter_4
        ;
        goto label_181fd7d17;
      }
    }
  }
  else if (uVar2 < 0x99d03dfb) {
    if (uVar2 == 0x8d87a40b) {
      bVar1 = System_String__op_Equality(name,"BladeThrow",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346028 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__BladeThrow_g____gett
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
          Il2CppMethodInitialized_184346028 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__BladeThrow_g____gett
        ;
        goto label_181fd7d17;
      }
    }
    else if (uVar2 == 0x99d03dfa) {
      bVar1 = System_String__op_Equality(name,"Thunderspear",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346025 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Thunderspear_g____ge
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
          Il2CppMethodInitialized_184346025 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Thunderspear_g____ge
        ;
        goto label_181fd7d17;
      }
    }
  }
  else if (uVar2 == 0x9fc581fa) {
    bVar1 = System_String__op_Equality(name,"SmokeBomb",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184346029 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__SmokeBomb_g____gette
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProjectileNameEnum_object)
        ;
        Il2CppMethodInitialized_184346029 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__SmokeBomb_g____gette
      ;
      goto label_181fd7d17;
    }
  }
  else if (uVar2 == 0xcd667d01) {
    bVar1 = System_String__op_Equality(name,"CannonBall",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184346026 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__CannonBall_g____gett
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProjectileNameEnum_object)
        ;
        Il2CppMethodInitialized_184346026 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__CannonBall_g____gett
      ;
      goto label_181fd7d17;
    }
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicProjectileNameEnum not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__Thunderspear
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Thunderspear (const MethodInfo* method);
// 0x181fe7e40

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Thunderspear(MethodInfo *method)

{
  System_Func_CustomLogicProjectileNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346025 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Thunderspear_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
    Il2CppMethodInitialized_184346025 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProjectileNameEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Thunderspear_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__CannonBall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__CannonBall (const MethodInfo* method);
// 0x181fe08c0

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__CannonBall(MethodInfo *method)

{
  System_Func_CustomLogicProjectileNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346026 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__CannonBall_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
    Il2CppMethodInitialized_184346026 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProjectileNameEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__CannonBall_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__Flare
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Flare (const MethodInfo* method);
// 0x181fe2d00

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Flare(MethodInfo *method)

{
  System_Func_CustomLogicProjectileNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346027 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Flare_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
    Il2CppMethodInitialized_184346027 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProjectileNameEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Flare_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__BladeThrow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__BladeThrow (const MethodInfo* method);
// 0x181fe0780

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__BladeThrow(MethodInfo *method)

{
  System_Func_CustomLogicProjectileNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346028 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__BladeThrow_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
    Il2CppMethodInitialized_184346028 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProjectileNameEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__BladeThrow_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__SmokeBomb
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__SmokeBomb (const MethodInfo* method);
// 0x181fe7440

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__SmokeBomb(MethodInfo *method)

{
  System_Func_CustomLogicProjectileNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346029 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__SmokeBomb_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
    Il2CppMethodInitialized_184346029 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProjectileNameEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__SmokeBomb_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__Rock1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Rock1 (const MethodInfo* method);
// 0x181fe6b80

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Rock1(MethodInfo *method)

{
  System_Func_CustomLogicProjectileNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434602a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Rock1_g____getter_7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
    Il2CppMethodInitialized_18434602a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProjectileNameEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Rock1_g____getter_7
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__Rock2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Rock2 (const MethodInfo* method);
// 0x181fe6c20

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Rock2(MethodInfo *method)

{
  System_Func_CustomLogicProjectileNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434602b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Rock2_g____getter_8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
    Il2CppMethodInitialized_18434602b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProjectileNameEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Rock2_g____getter_8
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicProjectileNameEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fe9c90

void CustomLogic_CustomLogicProjectileNameEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_18434602c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"BladeThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"Flare");
    il2cpp_codegen_initialize_runtime_metadata(&"Rock2");
    il2cpp_codegen_initialize_runtime_metadata(&"CannonBall");
    il2cpp_codegen_initialize_runtime_metadata(&"SmokeBomb");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    il2cpp_codegen_initialize_runtime_metadata(&"Rock1");
    Il2CppMethodInitialized_18434602c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Thunderspear",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CannonBall",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Flare",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeThrow",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SmokeBomb",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rock1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rock2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings->static_fields->MemberNames,__this
              );
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__Thunderspear>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Thunderspear_g____getter_2_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x181fde460

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Thunderspear_g____getter_2_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_1843460d0 = '\x01';
  }
  if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
  }
  return (Il2CppObject *)TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Thunderspear;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__CannonBall>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__CannonBall_g____getter_3_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x181fdbe70

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__CannonBall_g____getter_3_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_1843460d1 = '\x01';
  }
  if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
  }
  return (Il2CppObject *)TypeInfo_Projectiles_ProjectilePrefabs->static_fields->CannonBall;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__Flare>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Flare_g____getter_4_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x181fdc960

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Flare_g____getter_4_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_1843460d2 = '\x01';
  }
  if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
  }
  return (Il2CppObject *)TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Flare;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__BladeThrow>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__BladeThrow_g____getter_5_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x181fdbdf0

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__BladeThrow_g____getter_5_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_1843460d3 = '\x01';
  }
  if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
  }
  return (Il2CppObject *)TypeInfo_Projectiles_ProjectilePrefabs->static_fields->BladeThrow;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__SmokeBomb>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__SmokeBomb_g____getter_6_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x181fde160

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__SmokeBomb_g____getter_6_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_1843460d4 = '\x01';
  }
  if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
  }
  return (Il2CppObject *)TypeInfo_Projectiles_ProjectilePrefabs->static_fields->SmokeBomb;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__Rock1>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Rock1_g____getter_7_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x181fdde80

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Rock1_g____getter_7_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_1843460d5 = '\x01';
  }
  if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
  }
  return (Il2CppObject *)TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Rock1;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__Rock2>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Rock2_g____getter_8_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x181fdded0

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Rock2_g____getter_8_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_1843460d6 = '\x01';
  }
  if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
  }
  return (Il2CppObject *)TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Rock2;
}


// CustomLogic.CustomLogicProjectileNameEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicProjectileNameEnum___ctor (CustomLogic_CustomLogicProjectileNameEnum_o* __this, const MethodInfo* method);
// 0x181feece0

void CustomLogic_CustomLogicProjectileNameEnum___ctor
               (CustomLogic_CustomLogicProjectileNameEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434601a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_18434601a = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_Thunderspear
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_Thunderspear (const MethodInfo* method);
// 0x181feef40

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_Thunderspear(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434601b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_18434601b = '\x01';
  }
  if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
  }
  return TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Thunderspear;
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_CannonBall
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_CannonBall (const MethodInfo* method);
// 0x181feed80

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_CannonBall(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434601c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_18434601c = '\x01';
  }
  if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
  }
  return TypeInfo_Projectiles_ProjectilePrefabs->static_fields->CannonBall;
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_Flare
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_Flare (const MethodInfo* method);
// 0x181feee00

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_Flare(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434601d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_18434601d = '\x01';
  }
  if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
  }
  return TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Flare;
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_BladeThrow
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_BladeThrow (const MethodInfo* method);
// 0x181feed30

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_BladeThrow(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434601e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_18434601e = '\x01';
  }
  if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
  }
  return TypeInfo_Projectiles_ProjectilePrefabs->static_fields->BladeThrow;
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_SmokeBomb
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_SmokeBomb (const MethodInfo* method);
// 0x181feeef0

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_SmokeBomb(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434601f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_18434601f = '\x01';
  }
  if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
  }
  return TypeInfo_Projectiles_ProjectilePrefabs->static_fields->SmokeBomb;
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_Rock1
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_Rock1 (const MethodInfo* method);
// 0x181feee50

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_Rock1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346020 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_184346020 = '\x01';
  }
  if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
  }
  return TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Rock1;
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_Rock2
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_Rock2 (const MethodInfo* method);
// 0x181feeea0

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_Rock2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346021 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_184346021 = '\x01';
  }
  if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
  }
  return TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Rock2;
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_ClassName (CustomLogic_CustomLogicProjectileNameEnum_o* __this, const MethodInfo* method);
// 0x181feedd0

System_String_o *
CustomLogic_CustomLogicProjectileNameEnum__get_ClassName
          (CustomLogic_CustomLogicProjectileNameEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346022 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ProjectileNameEnum");
    Il2CppMethodInitialized_184346022 = '\x01';
  }
  return "ProjectileNameEnum";
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicProjectileNameEnum__get_IsAbstract (CustomLogic_CustomLogicProjectileNameEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicProjectileNameEnum__get_IsAbstract(CustomLogic_CustomLogicProjectileNameEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicProjectileNameEnum__get_IsStatic (CustomLogic_CustomLogicProjectileNameEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicProjectileNameEnum__get_IsStatic(CustomLogic_CustomLogicProjectileNameEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicProjectileNameEnum__get_InheritBaseMembers (CustomLogic_CustomLogicProjectileNameEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicProjectileNameEnum__get_InheritBaseMembers(CustomLogic_CustomLogicProjectileNameEnum_o* __this, MethodInfo* method)

{
  return true;
}


