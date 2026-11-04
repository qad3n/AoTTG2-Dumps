// Type: CustomLogic.CustomLogicLanguageEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLanguageEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLanguageEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLanguageEnum_o* CustomLogic_CustomLogicLanguageEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181ff04e0

CustomLogic_CustomLogicLanguageEnum_o *
CustomLogic_CustomLogicLanguageEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345e88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLanguageEnum);
    Il2CppMethodInitialized_184345e88 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLanguageEnum);
      if (Il2CppMethodInitialized_184345e73 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345e73 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicLanguageEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLanguageEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicLanguageEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLanguageEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fcee40

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLanguageEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_184345e89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Czech");
    il2cpp_codegen_initialize_runtime_metadata(&"Turkish");
    il2cpp_codegen_initialize_runtime_metadata(&"Russian");
    il2cpp_codegen_initialize_runtime_metadata(&"Spanish");
    il2cpp_codegen_initialize_runtime_metadata(&"TraditionalChinese");
    il2cpp_codegen_initialize_runtime_metadata(&"Italian");
    il2cpp_codegen_initialize_runtime_metadata(&"Japanese");
    il2cpp_codegen_initialize_runtime_metadata(&"German");
    il2cpp_codegen_initialize_runtime_metadata(&"BrazilianPortuguese");
    il2cpp_codegen_initialize_runtime_metadata(&"Indonesian");
    il2cpp_codegen_initialize_runtime_metadata(&"Dutch");
    il2cpp_codegen_initialize_runtime_metadata(&"Chinese");
    il2cpp_codegen_initialize_runtime_metadata(&"Polish");
    il2cpp_codegen_initialize_runtime_metadata(&"Arabic");
    il2cpp_codegen_initialize_runtime_metadata(&"Ukrainian");
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    il2cpp_codegen_initialize_runtime_metadata(&"Korean");
    il2cpp_codegen_initialize_runtime_metadata(&"Greek");
    il2cpp_codegen_initialize_runtime_metadata(&"French");
    Il2CppMethodInitialized_184345e89 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0xa4f06666) {
    if (uVar2 < 0x47592387) {
      if (uVar2 < 0x1b9ae0bc) {
        if (uVar2 == 0x11100833) {
          bVar1 = System_String__op_Equality(name,"German",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345e91 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__German_g____getter_9_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object)
              ;
              Il2CppMethodInitialized_184345e91 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__German_g____getter_9_0
            ;
            goto label_181fcfa7a;
          }
        }
        else if (uVar2 == 0x1b9ae0bb) {
          bVar1 = System_String__op_Equality(name,"English",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345e8f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__English_g____getter_7_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object)
              ;
              Il2CppMethodInitialized_184345e8f = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__English_g____getter_7_0
            ;
            goto label_181fcfa7a;
          }
        }
      }
      else if (uVar2 == 0x3342300c) {
        bVar1 = System_String__op_Equality(name,"Czech",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345e8d == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Czech_g____getter_5_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
            Il2CppMethodInitialized_184345e8d = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Czech_g____getter_5_0
          ;
          goto label_181fcfa7a;
        }
      }
      else if (uVar2 == 0x47592386) {
        bVar1 = System_String__op_Equality(name,"Russian",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345e98 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Russian_g____getter_16_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
            Il2CppMethodInitialized_184345e98 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Russian_g____getter_16_0
          ;
          goto label_181fcfa7a;
        }
      }
    }
    else if (uVar2 < 0x7cbd6ca6) {
      if (uVar2 == 0x4fbe5a5d) {
        bVar1 = System_String__op_Equality(name,"Ukrainian",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345e9c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Ukrainian_g____getter_20_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
            Il2CppMethodInitialized_184345e9c = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Ukrainian_g____getter_20_0
          ;
          goto label_181fcfa7a;
        }
      }
      else if (uVar2 == 0x7cbd6ca5) {
        bVar1 = System_String__op_Equality(name,"French",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345e90 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__French_g____getter_8_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
            Il2CppMethodInitialized_184345e90 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__French_g____getter_8_0
          ;
          goto label_181fcfa7a;
        }
      }
    }
    else if (uVar2 == 0x7e11ec68) {
      bVar1 = System_String__op_Equality(name,"Chinese",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345e8c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Chinese_g____getter_4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
          Il2CppMethodInitialized_184345e8c = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object)
        ;
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Chinese_g____getter_4_0
        ;
        goto label_181fcfa7a;
      }
    }
    else if (uVar2 == 0x940c2e0a) {
      bVar1 = System_String__op_Equality(name,"Japanese",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345e95 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Japanese_g____getter_13_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
          Il2CppMethodInitialized_184345e95 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object)
        ;
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Japanese_g____getter_13_0
        ;
        goto label_181fcfa7a;
      }
    }
    else if (uVar2 == 0xa4f06665) {
      bVar1 = System_String__op_Equality(name,"TraditionalChinese",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345e9a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__TraditionalChinese_g____ge
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
          Il2CppMethodInitialized_184345e9a = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object)
        ;
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__TraditionalChinese_g____ge
        ;
        goto label_181fcfa7a;
      }
    }
    goto label_181fcfabc;
  }
  if (uVar2 < 0xb819825c) {
    if (uVar2 < 0xaaf50d6d) {
      if (uVar2 == 0xa653c2a3) {
        bVar1 = System_String__op_Equality(name,"Greek",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345e92 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Greek_g____getter_10_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
            Il2CppMethodInitialized_184345e92 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Greek_g____getter_10_0
          ;
          goto label_181fcfa7a;
        }
      }
      else if (uVar2 == 0xaaf50d6c) {
        bVar1 = System_String__op_Equality(name,"Polish",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345e97 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Polish_g____getter_15_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
            Il2CppMethodInitialized_184345e97 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Polish_g____getter_15_0
          ;
          goto label_181fcfa7a;
        }
      }
    }
    else if (uVar2 == 0xad70bf21) {
      bVar1 = System_String__op_Equality(name,"Korean",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345e96 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Korean_g____getter_14_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
          Il2CppMethodInitialized_184345e96 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object)
        ;
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Korean_g____getter_14_0
        ;
        goto label_181fcfa7a;
      }
    }
    else if (uVar2 == 0xb297e9d1) {
      bVar1 = System_String__op_Equality(name,"Dutch",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345e8e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Dutch_g____getter_6_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
          Il2CppMethodInitialized_184345e8e = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object)
        ;
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Dutch_g____getter_6_0
        ;
        goto label_181fcfa7a;
      }
    }
    else if (uVar2 == 0xb819825b) {
      bVar1 = System_String__op_Equality(name,"Spanish",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345e99 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Spanish_g____getter_17_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
          Il2CppMethodInitialized_184345e99 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object)
        ;
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Spanish_g____getter_17_0
        ;
        goto label_181fcfa7a;
      }
    }
  }
  else if (uVar2 < 0xc1122286) {
    if (uVar2 == 0xb94e7b5b) {
      bVar1 = System_String__op_Equality(name,"Turkish",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345e9b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Turkish_g____getter_19_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
          Il2CppMethodInitialized_184345e9b = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object)
        ;
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Turkish_g____getter_19_0
        ;
        goto label_181fcfa7a;
      }
    }
    else if (uVar2 == 0xc1122285) {
      bVar1 = System_String__op_Equality(name,"Indonesian",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345e93 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Indonesian_g____getter_11
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
          Il2CppMethodInitialized_184345e93 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object)
        ;
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Indonesian_g____getter_11
        ;
        goto label_181fcfa7a;
      }
    }
  }
  else if (uVar2 == 0xd5499884) {
    bVar1 = System_String__op_Equality(name,"BrazilianPortuguese",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345e8b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__BrazilianPortuguese_g____g
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
        Il2CppMethodInitialized_184345e8b = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__BrazilianPortuguese_g____g
      ;
label_181fcfa7a:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)0x0,
                 (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
  }
  else if (uVar2 == 0xd7e15c29) {
    bVar1 = System_String__op_Equality(name,"Arabic",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345e8a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Arabic_g____getter_2_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
        Il2CppMethodInitialized_184345e8a = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Arabic_g____getter_2_0;
      goto label_181fcfa7a;
    }
  }
  else if (uVar2 == 0xf039952b) {
    bVar1 = System_String__op_Equality(name,"Italian",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345e94 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Italian_g____getter_12_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
        Il2CppMethodInitialized_184345e94 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Italian_g____getter_12_0
      ;
      goto label_181fcfa7a;
    }
  }
label_181fcfabc:
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLanguageEnum not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Arabic
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Arabic (const MethodInfo* method);
// 0x181fdf380

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Arabic(MethodInfo *method)

{
  System_Func_CustomLogicLanguageEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Arabic_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
    Il2CppMethodInitialized_184345e8a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Arabic_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__BrazilianPortuguese
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__BrazilianPortuguese (const MethodInfo* method);
// 0x181fe0820

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__BrazilianPortuguese(MethodInfo *method)

{
  System_Func_CustomLogicLanguageEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__BrazilianPortuguese_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
    Il2CppMethodInitialized_184345e8b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__BrazilianPortuguese_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Chinese
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Chinese (const MethodInfo* method);
// 0x181fe0b40

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Chinese(MethodInfo *method)

{
  System_Func_CustomLogicLanguageEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Chinese_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
    Il2CppMethodInitialized_184345e8c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Chinese_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Czech
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Czech (const MethodInfo* method);
// 0x181fe1040

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Czech(MethodInfo *method)

{
  System_Func_CustomLogicLanguageEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Czech_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
    Il2CppMethodInitialized_184345e8d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Czech_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Dutch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Dutch (const MethodInfo* method);
// 0x181fe1540

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Dutch(MethodInfo *method)

{
  System_Func_CustomLogicLanguageEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Dutch_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
    Il2CppMethodInitialized_184345e8e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Dutch_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__English
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__English (const MethodInfo* method);
// 0x181fe1b80

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__English(MethodInfo *method)

{
  System_Func_CustomLogicLanguageEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__English_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
    Il2CppMethodInitialized_184345e8f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__English_g____getter_7_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__French
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__French (const MethodInfo* method);
// 0x181fe2f80

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__French(MethodInfo *method)

{
  System_Func_CustomLogicLanguageEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__French_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
    Il2CppMethodInitialized_184345e90 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__French_g____getter_8_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__German
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__German (const MethodInfo* method);
// 0x181fe3200

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__German(MethodInfo *method)

{
  System_Func_CustomLogicLanguageEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__German_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
    Il2CppMethodInitialized_184345e91 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__German_g____getter_9_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Greek
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Greek (const MethodInfo* method);
// 0x181fe3340

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Greek(MethodInfo *method)

{
  System_Func_CustomLogicLanguageEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Greek_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
    Il2CppMethodInitialized_184345e92 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Greek_g____getter_10_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Indonesian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Indonesian (const MethodInfo* method);
// 0x181fe4240

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Indonesian(MethodInfo *method)

{
  System_Func_CustomLogicLanguageEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Indonesian_g____getter_11
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
    Il2CppMethodInitialized_184345e93 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Indonesian_g____getter_11
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Italian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Italian (const MethodInfo* method);
// 0x181fe4380

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Italian(MethodInfo *method)

{
  System_Func_CustomLogicLanguageEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Italian_g____getter_12_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
    Il2CppMethodInitialized_184345e94 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Italian_g____getter_12_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Japanese
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Japanese (const MethodInfo* method);
// 0x181fe4420

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Japanese(MethodInfo *method)

{
  System_Func_CustomLogicLanguageEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Japanese_g____getter_13_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
    Il2CppMethodInitialized_184345e95 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Japanese_g____getter_13_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Korean
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Korean (const MethodInfo* method);
// 0x181fe49c0

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Korean(MethodInfo *method)

{
  System_Func_CustomLogicLanguageEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Korean_g____getter_14_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
    Il2CppMethodInitialized_184345e96 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Korean_g____getter_14_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Polish
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Polish (const MethodInfo* method);
// 0x181fe6680

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Polish(MethodInfo *method)

{
  System_Func_CustomLogicLanguageEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Polish_g____getter_15_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
    Il2CppMethodInitialized_184345e97 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Polish_g____getter_15_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Russian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Russian (const MethodInfo* method);
// 0x181fe6cc0

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Russian(MethodInfo *method)

{
  System_Func_CustomLogicLanguageEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Russian_g____getter_16_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
    Il2CppMethodInitialized_184345e98 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Russian_g____getter_16_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Spanish
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Spanish (const MethodInfo* method);
// 0x181fe76c0

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Spanish(MethodInfo *method)

{
  System_Func_CustomLogicLanguageEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Spanish_g____getter_17_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
    Il2CppMethodInitialized_184345e99 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Spanish_g____getter_17_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__TraditionalChinese
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__TraditionalChinese (const MethodInfo* method);
// 0x181fe8c00

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__TraditionalChinese(MethodInfo *method)

{
  System_Func_CustomLogicLanguageEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__TraditionalChinese_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
    Il2CppMethodInitialized_184345e9a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__TraditionalChinese_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Turkish
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Turkish (const MethodInfo* method);
// 0x181fe8d40

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Turkish(MethodInfo *method)

{
  System_Func_CustomLogicLanguageEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Turkish_g____getter_19_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
    Il2CppMethodInitialized_184345e9b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Turkish_g____getter_19_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Ukrainian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Ukrainian (const MethodInfo* method);
// 0x181fe8e80

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Ukrainian(MethodInfo *method)

{
  System_Func_CustomLogicLanguageEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Ukrainian_g____getter_20_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLanguageEnum_object);
    Il2CppMethodInitialized_184345e9c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Ukrainian_g____getter_20_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLanguageEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fec860

void CustomLogic_CustomLogicLanguageEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345e9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Czech");
    il2cpp_codegen_initialize_runtime_metadata(&"Turkish");
    il2cpp_codegen_initialize_runtime_metadata(&"Russian");
    il2cpp_codegen_initialize_runtime_metadata(&"Spanish");
    il2cpp_codegen_initialize_runtime_metadata(&"TraditionalChinese");
    il2cpp_codegen_initialize_runtime_metadata(&"Italian");
    il2cpp_codegen_initialize_runtime_metadata(&"Japanese");
    il2cpp_codegen_initialize_runtime_metadata(&"German");
    il2cpp_codegen_initialize_runtime_metadata(&"BrazilianPortuguese");
    il2cpp_codegen_initialize_runtime_metadata(&"Indonesian");
    il2cpp_codegen_initialize_runtime_metadata(&"Dutch");
    il2cpp_codegen_initialize_runtime_metadata(&"Chinese");
    il2cpp_codegen_initialize_runtime_metadata(&"Polish");
    il2cpp_codegen_initialize_runtime_metadata(&"Arabic");
    il2cpp_codegen_initialize_runtime_metadata(&"Ukrainian");
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    il2cpp_codegen_initialize_runtime_metadata(&"Korean");
    il2cpp_codegen_initialize_runtime_metadata(&"Greek");
    il2cpp_codegen_initialize_runtime_metadata(&"French");
    Il2CppMethodInitialized_184345e9d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Arabic",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BrazilianPortuguese",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Chinese",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Czech",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dutch",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"English",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"French",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"German",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Greek",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Indonesian",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Italian",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Japanese",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Korean",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Polish",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Russian",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Spanish",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TraditionalChinese",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Turkish",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Ukrainian",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLanguageEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Arabic>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Arabic_g____getter_2_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x181fdaec0

Il2CppObject*
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Arabic_g____getter_2_0(CustomLogic_CustomLogicLanguageEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345e74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\xd8\xa7\xd9\x84\xd8\xb9\xd8\xb1\xd8\xa8\xd9\x8a\xd8\xa9");
    Il2CppMethodInitialized_184345e74 = '\x01';
  }
  return "\xd8\xa7\xd9\x84\xd8\xb9\xd8\xb1\xd8\xa8\xd9\x8a\xd8\xa9";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__BrazilianPortuguese>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__BrazilianPortuguese_g____getter_3_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x181fdbe40

Il2CppObject*
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__BrazilianPortuguese_g____getter_3_0(CustomLogic_CustomLogicLanguageEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345e75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"PT-BR");
    Il2CppMethodInitialized_184345e75 = '\x01';
  }
  return "PT-BR";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Chinese>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Chinese_g____getter_4_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x181fdbf20

Il2CppObject*
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Chinese_g____getter_4_0(CustomLogic_CustomLogicLanguageEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345e76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\xe7\xae\x80\xe4\xbd\x93\xe4\xb8\xad\xe6\x96\x87");
    Il2CppMethodInitialized_184345e76 = '\x01';
  }
  return "\xe7\xae\x80\xe4\xbd\x93\xe4\xb8\xad\xe6\x96\x87";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Czech>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Czech_g____getter_5_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x181fdc110

Il2CppObject*
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Czech_g____getter_5_0(CustomLogic_CustomLogicLanguageEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345e77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\xc4\x8ce\xc5\xa1tina");
    Il2CppMethodInitialized_184345e77 = '\x01';
  }
  return "\xc4\x8ce\xc5\xa1tina";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Dutch>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Dutch_g____getter_6_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x181fdc250

Il2CppObject*
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Dutch_g____getter_6_0(CustomLogic_CustomLogicLanguageEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345e78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Dutch");
    Il2CppMethodInitialized_184345e78 = '\x01';
  }
  return "Dutch";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__English>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__English_g____getter_7_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x181fdc400

Il2CppObject*
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__English_g____getter_7_0(CustomLogic_CustomLogicLanguageEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345e79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    Il2CppMethodInitialized_184345e79 = '\x01';
  }
  return "English";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__French>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__French_g____getter_8_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x181fdc9e0

Il2CppObject*
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__French_g____getter_8_0(CustomLogic_CustomLogicLanguageEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345e7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Fran\xc3\xa7ais");
    Il2CppMethodInitialized_184345e7a = '\x01';
  }
  return "Fran\xc3\xa7ais";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__German>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__German_g____getter_9_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x181fdcaa0

Il2CppObject*
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__German_g____getter_9_0(CustomLogic_CustomLogicLanguageEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345e7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Deutsch");
    Il2CppMethodInitialized_184345e7b = '\x01';
  }
  return "Deutsch";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Greek>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Greek_g____getter_10_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x181fdcb00

Il2CppObject*
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Greek_g____getter_10_0(CustomLogic_CustomLogicLanguageEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345e7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\xce\x95\xce\xbb\xce\xbb\xce\xb7\xce\xbd\xce\xb9\xce\xba\xce\xac");
    Il2CppMethodInitialized_184345e7c = '\x01';
  }
  return "\xce\x95\xce\xbb\xce\xbb\xce\xb7\xce\xbd\xce\xb9\xce\xba\xce\xac";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Indonesian>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Indonesian_g____getter_11_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x181fdd100

Il2CppObject*
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Indonesian_g____getter_11_0(CustomLogic_CustomLogicLanguageEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345e7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Indonesian");
    Il2CppMethodInitialized_184345e7d = '\x01';
  }
  return "Indonesian";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Italian>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Italian_g____getter_12_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x181fdd160

Il2CppObject*
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Italian_g____getter_12_0(CustomLogic_CustomLogicLanguageEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345e7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Italiano");
    Il2CppMethodInitialized_184345e7e = '\x01';
  }
  return "Italiano";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Japanese>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Japanese_g____getter_13_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x181fdd190

Il2CppObject*
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Japanese_g____getter_13_0(CustomLogic_CustomLogicLanguageEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345e7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\xe6\x97\xa5\xe6\x9c\xac\xe8\xaa\x9e");
    Il2CppMethodInitialized_184345e7f = '\x01';
  }
  return "\xe6\x97\xa5\xe6\x9c\xac\xe8\xaa\x9e";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Korean>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Korean_g____getter_14_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x181fdd400

Il2CppObject*
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Korean_g____getter_14_0(CustomLogic_CustomLogicLanguageEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345e80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\xed\x95\x9c\xea\xb5\xad\xec\x96\xb4");
    Il2CppMethodInitialized_184345e80 = '\x01';
  }
  return "\xed\x95\x9c\xea\xb5\xad\xec\x96\xb4";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Polish>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Polish_g____getter_15_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x181fddd30

Il2CppObject*
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Polish_g____getter_15_0(CustomLogic_CustomLogicLanguageEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345e81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Polski");
    Il2CppMethodInitialized_184345e81 = '\x01';
  }
  return "Polski";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Russian>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Russian_g____getter_16_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x181fddf20

Il2CppObject*
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Russian_g____getter_16_0(CustomLogic_CustomLogicLanguageEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345e82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Russian");
    Il2CppMethodInitialized_184345e82 = '\x01';
  }
  return "Russian";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Spanish>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Spanish_g____getter_17_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x181fde1e0

Il2CppObject*
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Spanish_g____getter_17_0(CustomLogic_CustomLogicLanguageEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345e83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Espa\xc3\xb1ol");
    Il2CppMethodInitialized_184345e83 = '\x01';
  }
  return "Espa\xc3\xb1ol";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__TraditionalChinese>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__TraditionalChinese_g____getter_18_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x181fde900

Il2CppObject*
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__TraditionalChinese_g____getter_18_0(CustomLogic_CustomLogicLanguageEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345e84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\xe7\xb9\x81\xe9\xab\x94\xe4\xb8\xad\xe6\x96\x87");
    Il2CppMethodInitialized_184345e84 = '\x01';
  }
  return "\xe7\xb9\x81\xe9\xab\x94\xe4\xb8\xad\xe6\x96\x87";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Turkish>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Turkish_g____getter_19_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x181fde930

Il2CppObject*
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Turkish_g____getter_19_0(CustomLogic_CustomLogicLanguageEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345e85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"T\xc3\xbcrk\xc3\xa7e");
    Il2CppMethodInitialized_184345e85 = '\x01';
  }
  return "T\xc3\xbcrk\xc3\xa7e";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Ukrainian>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Ukrainian_g____getter_20_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x181fde960

Il2CppObject*
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Ukrainian_g____getter_20_0(CustomLogic_CustomLogicLanguageEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345e86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\xd0\xa3\xd0\xba\xd1\x80\xd0\xb0\xd1\x97\xd0\xbd\xd1\x81\xd1\x8c\xd0\xba\xd0\xb0");
    Il2CppMethodInitialized_184345e86 = '\x01';
  }
  return "\xd0\xa3\xd0\xba\xd1\x80\xd0\xb0\xd1\x97\xd0\xbd\xd1\x81\xd1\x8c\xd0\xba\xd0\xb0";
}


// CustomLogic.CustomLogicLanguageEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicLanguageEnum___ctor (CustomLogic_CustomLogicLanguageEnum_o* __this, const MethodInfo* method);
// 0x181fedfd0

void CustomLogic_CustomLogicLanguageEnum___ctor
               (CustomLogic_CustomLogicLanguageEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345e73 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLanguageEnum$$get_Arabic
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Arabic (const MethodInfo* method);
// 0x181fdaec0

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Arabic(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\xd8\xa7\xd9\x84\xd8\xb9\xd8\xb1\xd8\xa8\xd9\x8a\xd8\xa9");
    Il2CppMethodInitialized_184345e74 = '\x01';
  }
  return "\xd8\xa7\xd9\x84\xd8\xb9\xd8\xb1\xd8\xa8\xd9\x8a\xd8\xa9";
}


// CustomLogic.CustomLogicLanguageEnum$$get_BrazilianPortuguese
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_BrazilianPortuguese (const MethodInfo* method);
// 0x181fdbe40

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_BrazilianPortuguese(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"PT-BR");
    Il2CppMethodInitialized_184345e75 = '\x01';
  }
  return "PT-BR";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Chinese
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Chinese (const MethodInfo* method);
// 0x181fdbf20

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Chinese(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\xe7\xae\x80\xe4\xbd\x93\xe4\xb8\xad\xe6\x96\x87");
    Il2CppMethodInitialized_184345e76 = '\x01';
  }
  return "\xe7\xae\x80\xe4\xbd\x93\xe4\xb8\xad\xe6\x96\x87";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Czech
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Czech (const MethodInfo* method);
// 0x181fdc110

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Czech(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\xc4\x8ce\xc5\xa1tina");
    Il2CppMethodInitialized_184345e77 = '\x01';
  }
  return "\xc4\x8ce\xc5\xa1tina";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Dutch
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Dutch (const MethodInfo* method);
// 0x181fdc250

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Dutch(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Dutch");
    Il2CppMethodInitialized_184345e78 = '\x01';
  }
  return "Dutch";
}


// CustomLogic.CustomLogicLanguageEnum$$get_English
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_English (const MethodInfo* method);
// 0x181fdc400

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_English(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    Il2CppMethodInitialized_184345e79 = '\x01';
  }
  return "English";
}


// CustomLogic.CustomLogicLanguageEnum$$get_French
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_French (const MethodInfo* method);
// 0x181fdc9e0

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_French(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Fran\xc3\xa7ais");
    Il2CppMethodInitialized_184345e7a = '\x01';
  }
  return "Fran\xc3\xa7ais";
}


// CustomLogic.CustomLogicLanguageEnum$$get_German
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_German (const MethodInfo* method);
// 0x181fdcaa0

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_German(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Deutsch");
    Il2CppMethodInitialized_184345e7b = '\x01';
  }
  return "Deutsch";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Greek
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Greek (const MethodInfo* method);
// 0x181fdcb00

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Greek(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\xce\x95\xce\xbb\xce\xbb\xce\xb7\xce\xbd\xce\xb9\xce\xba\xce\xac");
    Il2CppMethodInitialized_184345e7c = '\x01';
  }
  return "\xce\x95\xce\xbb\xce\xbb\xce\xb7\xce\xbd\xce\xb9\xce\xba\xce\xac";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Indonesian
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Indonesian (const MethodInfo* method);
// 0x181fdd100

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Indonesian(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Indonesian");
    Il2CppMethodInitialized_184345e7d = '\x01';
  }
  return "Indonesian";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Italian
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Italian (const MethodInfo* method);
// 0x181fdd160

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Italian(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Italiano");
    Il2CppMethodInitialized_184345e7e = '\x01';
  }
  return "Italiano";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Japanese
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Japanese (const MethodInfo* method);
// 0x181fdd190

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Japanese(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\xe6\x97\xa5\xe6\x9c\xac\xe8\xaa\x9e");
    Il2CppMethodInitialized_184345e7f = '\x01';
  }
  return "\xe6\x97\xa5\xe6\x9c\xac\xe8\xaa\x9e";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Korean
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Korean (const MethodInfo* method);
// 0x181fdd400

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Korean(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\xed\x95\x9c\xea\xb5\xad\xec\x96\xb4");
    Il2CppMethodInitialized_184345e80 = '\x01';
  }
  return "\xed\x95\x9c\xea\xb5\xad\xec\x96\xb4";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Polish
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Polish (const MethodInfo* method);
// 0x181fddd30

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Polish(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Polski");
    Il2CppMethodInitialized_184345e81 = '\x01';
  }
  return "Polski";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Russian
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Russian (const MethodInfo* method);
// 0x181fddf20

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Russian(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Russian");
    Il2CppMethodInitialized_184345e82 = '\x01';
  }
  return "Russian";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Spanish
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Spanish (const MethodInfo* method);
// 0x181fde1e0

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Spanish(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Espa\xc3\xb1ol");
    Il2CppMethodInitialized_184345e83 = '\x01';
  }
  return "Espa\xc3\xb1ol";
}


// CustomLogic.CustomLogicLanguageEnum$$get_TraditionalChinese
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese (const MethodInfo* method);
// 0x181fde900

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\xe7\xb9\x81\xe9\xab\x94\xe4\xb8\xad\xe6\x96\x87");
    Il2CppMethodInitialized_184345e84 = '\x01';
  }
  return "\xe7\xb9\x81\xe9\xab\x94\xe4\xb8\xad\xe6\x96\x87";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Turkish
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Turkish (const MethodInfo* method);
// 0x181fde930

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Turkish(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"T\xc3\xbcrk\xc3\xa7e");
    Il2CppMethodInitialized_184345e85 = '\x01';
  }
  return "T\xc3\xbcrk\xc3\xa7e";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Ukrainian
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Ukrainian (const MethodInfo* method);
// 0x181fde960

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Ukrainian(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\xd0\xa3\xd0\xba\xd1\x80\xd0\xb0\xd1\x97\xd0\xbd\xd1\x81\xd1\x8c\xd0\xba\xd0\xb0");
    Il2CppMethodInitialized_184345e86 = '\x01';
  }
  return "\xd0\xa3\xd0\xba\xd1\x80\xd0\xb0\xd1\x97\xd0\xbd\xd1\x81\xd1\x8c\xd0\xba\xd0\xb0";
}


// CustomLogic.CustomLogicLanguageEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_ClassName (CustomLogic_CustomLogicLanguageEnum_o* __this, const MethodInfo* method);
// 0x181fee020

System_String_o *
CustomLogic_CustomLogicLanguageEnum__get_ClassName
          (CustomLogic_CustomLogicLanguageEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LanguageEnum");
    Il2CppMethodInitialized_184345e87 = '\x01';
  }
  return "LanguageEnum";
}


// CustomLogic.CustomLogicLanguageEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLanguageEnum__get_IsAbstract (CustomLogic_CustomLogicLanguageEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLanguageEnum__get_IsAbstract(CustomLogic_CustomLogicLanguageEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicLanguageEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLanguageEnum__get_IsStatic (CustomLogic_CustomLogicLanguageEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLanguageEnum__get_IsStatic(CustomLogic_CustomLogicLanguageEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicLanguageEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLanguageEnum__get_InheritBaseMembers (CustomLogic_CustomLogicLanguageEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLanguageEnum__get_InheritBaseMembers(CustomLogic_CustomLogicLanguageEnum_o* __this, MethodInfo* method)

{
  return true;
}


