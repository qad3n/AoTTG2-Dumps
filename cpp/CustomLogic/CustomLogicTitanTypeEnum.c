// Type: CustomLogic.CustomLogicTitanTypeEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTitanTypeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTitanTypeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTitanTypeEnum_o* CustomLogic_CustomLogicTitanTypeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x1820170f0

CustomLogic_CustomLogicTitanTypeEnum_o *
CustomLogic_CustomLogicTitanTypeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434624c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanTypeEnum);
    Il2CppMethodInitialized_18434624c = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum);
      if (Il2CppMethodInitialized_184346242 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184346242 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicTitanTypeEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTitanTypeEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTitanTypeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ff1c70

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_18434624d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Punk");
    il2cpp_codegen_initialize_runtime_metadata(&"Thrower");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Jumper");
    il2cpp_codegen_initialize_runtime_metadata(&"Crawler");
    il2cpp_codegen_initialize_runtime_metadata(&"Abnormal");
    Il2CppMethodInitialized_18434624d = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x4b058385) {
    if (uVar2 < 0x2f9f45fa) {
      if (uVar2 == 0x19dc307e) {
        bVar1 = System_String__op_Equality(name,"Default",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346254 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Default_g____getter_8_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
            Il2CppMethodInitialized_184346254 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Default_g____getter_8_0
          ;
          goto label_181ff21b0;
        }
      }
      else if (uVar2 == 0x2f9f45f9) {
        bVar1 = System_String__op_Equality(name,"Abnormal",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
          }
          if (Il2CppMethodInitialized_18434624f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Abnormal_g____getter_3_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
            Il2CppMethodInitialized_18434624f = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Abnormal_g____getter_3_0
          ;
          goto label_181ff21b0;
        }
      }
    }
    else if (uVar2 == 0x4115d182) {
      bVar1 = System_String__op_Equality(name,"Random",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346255 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Random_g____getter_9_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
          Il2CppMethodInitialized_184346255 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Random_g____getter_9_0
        ;
        goto label_181ff21b0;
      }
    }
    else if (uVar2 == 0x4b058384) {
      bVar1 = System_String__op_Equality(name,"Thrower",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346252 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Thrower_g____getter_6_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
          Il2CppMethodInitialized_184346252 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Thrower_g____getter_6_0
        ;
        goto label_181ff21b0;
      }
    }
  }
  else if (uVar2 < 0x8f418f18) {
    if (uVar2 == 0x58de2772) {
      bVar1 = System_String__op_Equality(name,"Normal",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434624e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Normal_g____getter_2_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
          Il2CppMethodInitialized_18434624e = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Normal_g____getter_2_0
        ;
        goto label_181ff21b0;
      }
    }
    else if (uVar2 == 0x8f418f17) {
      bVar1 = System_String__op_Equality(name,"Crawler",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346251 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Crawler_g____getter_5_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
          Il2CppMethodInitialized_184346251 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Crawler_g____getter_5_0
        ;
        goto label_181ff21b0;
      }
    }
  }
  else if (uVar2 == 0xe5828b91) {
    bVar1 = System_String__op_Equality(name,"Punk",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184346253 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Punk_g____getter_7_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
        Il2CppMethodInitialized_184346253 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Punk_g____getter_7_0;
label_181ff21b0:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)0x0,
                 (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor)
      ;
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
  }
  else if (uVar2 == 0xf331d01e) {
    bVar1 = System_String__op_Equality(name,"Jumper",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184346250 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Jumper_g____getter_4_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
        Il2CppMethodInitialized_184346250 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Jumper_g____getter_4_0
      ;
      goto label_181ff21b0;
    }
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTitanTypeEnum not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Normal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Normal (const MethodInfo* method);
// 0x182006890

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Normal(MethodInfo *method)

{
  System_Func_CustomLogicTitanTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434624e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Normal_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
    Il2CppMethodInitialized_18434624e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Normal_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Abnormal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Abnormal (const MethodInfo* method);
// 0x182000710

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Abnormal(MethodInfo *method)

{
  System_Func_CustomLogicTitanTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434624f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Abnormal_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
    Il2CppMethodInitialized_18434624f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Abnormal_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Jumper
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Jumper (const MethodInfo* method);
// 0x182005b70

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Jumper(MethodInfo *method)

{
  System_Func_CustomLogicTitanTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346250 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Jumper_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
    Il2CppMethodInitialized_184346250 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Jumper_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Crawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Crawler (const MethodInfo* method);
// 0x1820034b0

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Crawler(MethodInfo *method)

{
  System_Func_CustomLogicTitanTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346251 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Crawler_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
    Il2CppMethodInitialized_184346251 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Crawler_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Thrower
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Thrower (const MethodInfo* method);
// 0x182007ec0

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Thrower(MethodInfo *method)

{
  System_Func_CustomLogicTitanTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346252 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Thrower_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
    Il2CppMethodInitialized_184346252 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Thrower_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Punk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Punk (const MethodInfo* method);
// 0x182006a70

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Punk(MethodInfo *method)

{
  System_Func_CustomLogicTitanTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346253 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Punk_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
    Il2CppMethodInitialized_184346253 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Punk_g____getter_7_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Default
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Default (const MethodInfo* method);
// 0x1820037d0

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Default(MethodInfo *method)

{
  System_Func_CustomLogicTitanTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346254 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Default_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
    Il2CppMethodInitialized_184346254 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Default_g____getter_8_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Random
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Random (const MethodInfo* method);
// 0x182006b10

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Random(MethodInfo *method)

{
  System_Func_CustomLogicTitanTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346255 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Random_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
    Il2CppMethodInitialized_184346255 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Random_g____getter_9_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTitanTypeEnum_Bindings___cctor (const MethodInfo* method);
// 0x18200a010

void CustomLogic_CustomLogicTitanTypeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184346256 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Punk");
    il2cpp_codegen_initialize_runtime_metadata(&"Thrower");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Jumper");
    il2cpp_codegen_initialize_runtime_metadata(&"Crawler");
    il2cpp_codegen_initialize_runtime_metadata(&"Abnormal");
    Il2CppMethodInitialized_184346256 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Normal",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Abnormal",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Jumper",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Crawler",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Thrower",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Punk",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Default",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Random",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Normal>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Normal_g____getter_2_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x181ffe120

Il2CppObject*
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Normal_g____getter_2_0(CustomLogic_CustomLogicTitanTypeEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346243 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_184346243 = '\x01';
  }
  return "Normal";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Abnormal>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Abnormal_g____getter_3_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x181ffb990

Il2CppObject*
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Abnormal_g____getter_3_0(CustomLogic_CustomLogicTitanTypeEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346244 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Abnormal");
    Il2CppMethodInitialized_184346244 = '\x01';
  }
  return "Abnormal";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Jumper>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Jumper_g____getter_4_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x181ffdd40

Il2CppObject*
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Jumper_g____getter_4_0(CustomLogic_CustomLogicTitanTypeEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346245 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Jumper");
    Il2CppMethodInitialized_184346245 = '\x01';
  }
  return "Jumper";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Crawler>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Crawler_g____getter_5_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x181ffc9e0

Il2CppObject*
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Crawler_g____getter_5_0(CustomLogic_CustomLogicTitanTypeEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346246 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Crawler");
    Il2CppMethodInitialized_184346246 = '\x01';
  }
  return "Crawler";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Thrower>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Thrower_g____getter_6_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x181ffec50

Il2CppObject*
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Thrower_g____getter_6_0(CustomLogic_CustomLogicTitanTypeEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346247 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Thrower");
    Il2CppMethodInitialized_184346247 = '\x01';
  }
  return "Thrower";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Punk>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Punk_g____getter_7_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x181ffe200

Il2CppObject*
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Punk_g____getter_7_0(CustomLogic_CustomLogicTitanTypeEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346248 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Punk");
    Il2CppMethodInitialized_184346248 = '\x01';
  }
  return "Punk";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Default>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Default_g____getter_8_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x181ffcb30

Il2CppObject*
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Default_g____getter_8_0(CustomLogic_CustomLogicTitanTypeEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346249 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_184346249 = '\x01';
  }
  return "Default";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Random>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Random_g____getter_9_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x181ffe230

Il2CppObject*
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Random_g____getter_9_0(CustomLogic_CustomLogicTitanTypeEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434624a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    Il2CppMethodInitialized_18434624a = '\x01';
  }
  return "Random";
}


// CustomLogic.CustomLogicTitanTypeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTitanTypeEnum___ctor (CustomLogic_CustomLogicTitanTypeEnum_o* __this, const MethodInfo* method);
// 0x182016320

void CustomLogic_CustomLogicTitanTypeEnum___ctor
               (CustomLogic_CustomLogicTitanTypeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346242 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184346242 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Normal
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Normal (const MethodInfo* method);
// 0x181ffe120

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Normal(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346243 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_184346243 = '\x01';
  }
  return "Normal";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Abnormal
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Abnormal (const MethodInfo* method);
// 0x181ffb990

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Abnormal(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346244 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Abnormal");
    Il2CppMethodInitialized_184346244 = '\x01';
  }
  return "Abnormal";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Jumper
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Jumper (const MethodInfo* method);
// 0x181ffdd40

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Jumper(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346245 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Jumper");
    Il2CppMethodInitialized_184346245 = '\x01';
  }
  return "Jumper";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Crawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Crawler (const MethodInfo* method);
// 0x181ffc9e0

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Crawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346246 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Crawler");
    Il2CppMethodInitialized_184346246 = '\x01';
  }
  return "Crawler";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Thrower
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Thrower (const MethodInfo* method);
// 0x181ffec50

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Thrower(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346247 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Thrower");
    Il2CppMethodInitialized_184346247 = '\x01';
  }
  return "Thrower";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Punk
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Punk (const MethodInfo* method);
// 0x181ffe200

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Punk(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346248 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Punk");
    Il2CppMethodInitialized_184346248 = '\x01';
  }
  return "Punk";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Default
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Default (const MethodInfo* method);
// 0x181ffcb30

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Default(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346249 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_184346249 = '\x01';
  }
  return "Default";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Random
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Random (const MethodInfo* method);
// 0x181ffe230

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Random(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434624a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    Il2CppMethodInitialized_18434624a = '\x01';
  }
  return "Random";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_ClassName (CustomLogic_CustomLogicTitanTypeEnum_o* __this, const MethodInfo* method);
// 0x182016370

System_String_o *
CustomLogic_CustomLogicTitanTypeEnum__get_ClassName
          (CustomLogic_CustomLogicTitanTypeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434624b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TitanTypeEnum");
    Il2CppMethodInitialized_18434624b = '\x01';
  }
  return "TitanTypeEnum";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTitanTypeEnum__get_IsAbstract (CustomLogic_CustomLogicTitanTypeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTitanTypeEnum__get_IsAbstract(CustomLogic_CustomLogicTitanTypeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTitanTypeEnum__get_IsStatic (CustomLogic_CustomLogicTitanTypeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTitanTypeEnum__get_IsStatic(CustomLogic_CustomLogicTitanTypeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTitanTypeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTitanTypeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTitanTypeEnum__get_InheritBaseMembers(CustomLogic_CustomLogicTitanTypeEnum_o* __this, MethodInfo* method)

{
  return true;
}


