// Type: CustomLogic.CustomLogicInputInteractionEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputInteractionEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicInputInteractionEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputInteractionEnum_o* CustomLogic_CustomLogicInputInteractionEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fce850

CustomLogic_CustomLogicInputInteractionEnum_o *
CustomLogic_CustomLogicInputInteractionEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicInputInteractionEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345cd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cd8 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
      if (Il2CppMethodInitialized_184345cc2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345cc2 = '\x01';
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
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputInteractionEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputInteractionEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fb0d00

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_184345cd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect5");
    il2cpp_codegen_initialize_runtime_metadata(&"ItemMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"MenuNext");
    il2cpp_codegen_initialize_runtime_metadata(&"Function1");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect2");
    il2cpp_codegen_initialize_runtime_metadata(&"Interact");
    il2cpp_codegen_initialize_runtime_metadata(&"Function4");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect1");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect3");
    il2cpp_codegen_initialize_runtime_metadata(&"Interact2");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect4");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect8");
    il2cpp_codegen_initialize_runtime_metadata(&"Interact3");
    il2cpp_codegen_initialize_runtime_metadata(&"Function2");
    il2cpp_codegen_initialize_runtime_metadata(&"Function3");
    il2cpp_codegen_initialize_runtime_metadata(&"ActionMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect6");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect7");
    Il2CppMethodInitialized_184345cd9 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x93a28290) {
    if (uVar2 < 0x6b01bab5) {
      if (uVar2 < 0x5f8e9555) {
        if (uVar2 == 0x1e2eb9ef) {
          bVar1 = System_String__op_Equality(name,"Interact",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345cda == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Interact_g____gett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
              Il2CppMethodInitialized_184345cda = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Interact_g____gett
            ;
            goto label_181fb193a;
          }
        }
        else if (uVar2 == 0x5f8e9554) {
          bVar1 = System_String__op_Equality(name,"Interact3",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345cdc == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Interact3_g____get
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
              Il2CppMethodInitialized_184345cdc = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Interact3_g____get
            ;
            goto label_181fb193a;
          }
        }
      }
      else if (uVar2 == 0x608e96e7) {
        bVar1 = System_String__op_Equality(name,"Interact2",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345cdb == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Interact2_g____get
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
            Il2CppMethodInitialized_184345cdb = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Interact2_g____get
          ;
          goto label_181fb193a;
        }
      }
      else if (uVar2 == 0x6b01bab4) {
        bVar1 = System_String__op_Equality(name,"EmoteMenu",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345cdf == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__EmoteMenu_g____get
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
            Il2CppMethodInitialized_184345cdf = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__EmoteMenu_g____get
          ;
          goto label_181fb193a;
        }
      }
    }
    else if (uVar2 < 0x8fa27c44) {
      if (uVar2 == 0x8ea27ab0) {
        bVar1 = System_String__op_Equality(name,"QuickSelect4",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ce4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect4_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
            Il2CppMethodInitialized_184345ce4 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect4_g
          ;
          goto label_181fb193a;
        }
      }
      else if (uVar2 == 0x8fa27c43) {
        bVar1 = System_String__op_Equality(name,"QuickSelect5",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ce5 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect5_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
            Il2CppMethodInitialized_184345ce5 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect5_g
          ;
          goto label_181fb193a;
        }
      }
    }
    else if (uVar2 == 0x90a27dd6) {
      bVar1 = System_String__op_Equality(name,"QuickSelect6",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ce6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect6_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
          Il2CppMethodInitialized_184345ce6 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect6_g
        ;
        goto label_181fb193a;
      }
    }
    else if (uVar2 == 0x91a27f69) {
      bVar1 = System_String__op_Equality(name,"QuickSelect7",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ce7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect7_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
          Il2CppMethodInitialized_184345ce7 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect7_g
        ;
        goto label_181fb193a;
      }
    }
    else if (uVar2 == 0x93a2828f) {
      bVar1 = System_String__op_Equality(name,"QuickSelect1",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ce1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect1_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
          Il2CppMethodInitialized_184345ce1 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect1_g
        ;
        goto label_181fb193a;
      }
    }
    goto label_181fb197c;
  }
  if (uVar2 < 0xa9d7fbaf) {
    if (uVar2 < 0x95a285b6) {
      if (uVar2 == 0x94a28422) {
        bVar1 = System_String__op_Equality(name,"QuickSelect2",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ce2 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect2_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
            Il2CppMethodInitialized_184345ce2 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect2_g
          ;
          goto label_181fb193a;
        }
      }
      else if (uVar2 == 0x95a285b5) {
        bVar1 = System_String__op_Equality(name,"QuickSelect3",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ce3 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect3_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
            Il2CppMethodInitialized_184345ce3 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect3_g
          ;
          goto label_181fb193a;
        }
      }
    }
    else if (uVar2 == 0x9aa28d94) {
      bVar1 = System_String__op_Equality(name,"QuickSelect8",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ce8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect8_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
          Il2CppMethodInitialized_184345ce8 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect8_g
        ;
        goto label_181fb193a;
      }
    }
    else if (uVar2 == 0xa7d7f888) {
      bVar1 = System_String__op_Equality(name,"Function1",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ce9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function1_g____get
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
          Il2CppMethodInitialized_184345ce9 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function1_g____get
        ;
        goto label_181fb193a;
      }
    }
    else if (uVar2 == 0xa9d7fbae) {
      bVar1 = System_String__op_Equality(name,"Function3",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ceb == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function3_g____get
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
          Il2CppMethodInitialized_184345ceb = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function3_g____get
        ;
        goto label_181fb193a;
      }
    }
  }
  else if (uVar2 < 0xacd80068) {
    if (uVar2 == 0xaad7fd41) {
      bVar1 = System_String__op_Equality(name,"Function2",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345cea == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function2_g____get
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
          Il2CppMethodInitialized_184345cea = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function2_g____get
        ;
        goto label_181fb193a;
      }
    }
    else if (uVar2 == 0xacd80067) {
      bVar1 = System_String__op_Equality(name,"Function4",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345cec == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function4_g____get
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
          Il2CppMethodInitialized_184345cec = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function4_g____get
        ;
        goto label_181fb193a;
      }
    }
  }
  else if (uVar2 == 0xd86dc4f0) {
    bVar1 = System_String__op_Equality(name,"ActionMenu",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345cde == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__ActionMenu_g____ge
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
        Il2CppMethodInitialized_184345cde = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__ActionMenu_g____ge
      ;
label_181fb193a:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)0x0,
                 (MethodInfo_12B8EE0 *)
                 MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
  }
  else if (uVar2 == 0xf092cb97) {
    bVar1 = System_String__op_Equality(name,"MenuNext",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345ce0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__MenuNext_g____gett
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
        Il2CppMethodInitialized_184345ce0 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__MenuNext_g____gett
      ;
      goto label_181fb193a;
    }
  }
  else if (uVar2 == 0xf32eba39) {
    bVar1 = System_String__op_Equality(name,"ItemMenu",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345cdd == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__ItemMenu_g____gett
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
        Il2CppMethodInitialized_184345cdd = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__ItemMenu_g____gett
      ;
      goto label_181fb193a;
    }
  }
label_181fb197c:
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputInteractionEnum not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Interact
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact (const MethodInfo* method);
// 0x181fbf890

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact(MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345cda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Interact_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_184345cda = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Interact_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Interact2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact2 (const MethodInfo* method);
// 0x181fbf750

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact2(MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345cdb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Interact2_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_184345cdb = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Interact2_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Interact3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact3 (const MethodInfo* method);
// 0x181fbf7f0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact3(MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345cdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Interact3_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_184345cdc = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Interact3_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__ItemMenu
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__ItemMenu (const MethodInfo* method);
// 0x181fbf9d0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__ItemMenu(MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345cdd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__ItemMenu_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_184345cdd = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__ItemMenu_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__ActionMenu
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__ActionMenu (const MethodInfo* method);
// 0x181fb9df0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__ActionMenu(MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345cde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__ActionMenu_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_184345cde = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__ActionMenu_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__EmoteMenu
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__EmoteMenu (const MethodInfo* method);
// 0x181fbd270

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__EmoteMenu(MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345cdf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__EmoteMenu_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_184345cdf = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__EmoteMenu_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__MenuNext
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__MenuNext (const MethodInfo* method);
// 0x181fc01f0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__MenuNext(MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ce0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__MenuNext_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_184345ce0 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__MenuNext_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect1 (const MethodInfo* method);
// 0x181fc0b50

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect1
          (MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ce1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect1_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_184345ce1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect1_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect2 (const MethodInfo* method);
// 0x181fc0bf0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect2
          (MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ce2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect2_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_184345ce2 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect2_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect3 (const MethodInfo* method);
// 0x181fc0c90

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect3
          (MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ce3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect3_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_184345ce3 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect3_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect4 (const MethodInfo* method);
// 0x181fc0d30

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect4
          (MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ce4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect4_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_184345ce4 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect4_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect5 (const MethodInfo* method);
// 0x181fc0dd0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect5
          (MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ce5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect5_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_184345ce5 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect5_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect6 (const MethodInfo* method);
// 0x181fc0e70

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect6
          (MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ce6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect6_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_184345ce6 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect6_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect7 (const MethodInfo* method);
// 0x181fc0f10

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect7
          (MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ce7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect7_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_184345ce7 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect7_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect8 (const MethodInfo* method);
// 0x181fc0fb0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect8
          (MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ce8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect8_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_184345ce8 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect8_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Function1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function1 (const MethodInfo* method);
// 0x181fbd950

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function1(MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ce9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function1_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_184345ce9 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function1_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Function2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function2 (const MethodInfo* method);
// 0x181fbd9f0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function2(MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345cea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function2_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_184345cea = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function2_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Function3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function3 (const MethodInfo* method);
// 0x181fbda90

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function3(MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ceb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function3_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_184345ceb = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function3_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Function4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function4 (const MethodInfo* method);
// 0x181fbdb30

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function4(MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345cec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function4_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_184345cec = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function4_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputInteractionEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fc3d40

void CustomLogic_CustomLogicInputInteractionEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345ced == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect5");
    il2cpp_codegen_initialize_runtime_metadata(&"ItemMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"MenuNext");
    il2cpp_codegen_initialize_runtime_metadata(&"Function1");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect2");
    il2cpp_codegen_initialize_runtime_metadata(&"Interact");
    il2cpp_codegen_initialize_runtime_metadata(&"Function4");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect1");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect3");
    il2cpp_codegen_initialize_runtime_metadata(&"Interact2");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect4");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect8");
    il2cpp_codegen_initialize_runtime_metadata(&"Interact3");
    il2cpp_codegen_initialize_runtime_metadata(&"Function2");
    il2cpp_codegen_initialize_runtime_metadata(&"Function3");
    il2cpp_codegen_initialize_runtime_metadata(&"ActionMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect6");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect7");
    Il2CppMethodInitialized_184345ced = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Interact",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Interact2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Interact3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ItemMenu",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ActionMenu",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteMenu",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MenuNext",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuickSelect1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuickSelect2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuickSelect3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuickSelect4",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuickSelect5",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuickSelect6",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuickSelect7",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuickSelect8",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Function1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Function2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Function3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Function4",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->static_fields->MemberNames,
               __this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Interact>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Interact_g____getter_2_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x181fb5fb0

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Interact_g____getter_2_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cee = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_184345df2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345df2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->InteractValue;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Interact2>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Interact2_g____getter_3_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x181fb5e90

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Interact2_g____getter_3_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cef = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_184345df3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345df3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Interact2Value;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Interact3>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Interact3_g____getter_4_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x181fb5f20

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Interact3_g____getter_4_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cf0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cf0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_184345df4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345df4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Interact3Value;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__ItemMenu>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__ItemMenu_g____getter_5_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x181fb6070

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__ItemMenu_g____getter_5_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_184345df5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345df5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->ItemMenuValue;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__ActionMenu>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__ActionMenu_g____getter_6_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x181fb2410

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__ActionMenu_g____getter_6_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cf2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cf2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_184345df6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345df6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->ActionMenuValue;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__EmoteMenu>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__EmoteMenu_g____getter_7_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x181fb4730

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__EmoteMenu_g____getter_7_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cf3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cf3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_184345df7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345df7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->EmoteMenuValue;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__MenuNext>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__MenuNext_g____getter_8_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x181fb66a0

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__MenuNext_g____getter_8_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cf4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cf4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_184345df8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345df8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->MenuNextValue;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect1>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect1_g____getter_9_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x181fb6d80

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect1_g____getter_9_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cf5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cf5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_184345df9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345df9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect1Value;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect2>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect2_g____getter_10_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x181fb6e10

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect2_g____getter_10_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cf6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cf6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_184345dfa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345dfa = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect2Value;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect3>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect3_g____getter_11_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x181fb6ea0

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect3_g____getter_11_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cf7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cf7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_184345dfb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345dfb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect3Value;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect4>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect4_g____getter_12_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x181fb6f30

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect4_g____getter_12_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cf8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cf8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_184345dfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345dfc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect4Value;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect5>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect5_g____getter_13_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x181fb6fc0

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect5_g____getter_13_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cf9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cf9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_184345dfd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345dfd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect5Value;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect6>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect6_g____getter_14_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x181fb7050

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect6_g____getter_14_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cfa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cfa = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_184345dfe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345dfe = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect6Value;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect7>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect7_g____getter_15_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x181fb70e0

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect7_g____getter_15_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cfb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cfb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_184345dff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345dff = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect7Value;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect8>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect8_g____getter_16_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x181fb7170

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect8_g____getter_16_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cfc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_184345e00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345e00 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect8Value;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Function1>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function1_g____getter_17_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x181fb4b40

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function1_g____getter_17_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cfd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cfd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_184345e01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345e01 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function1Value;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Function2>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function2_g____getter_18_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x181fb4bd0

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function2_g____getter_18_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cfe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cfe = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_184345e02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345e02 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function2Value;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Function3>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function3_g____getter_19_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x181fb4c60

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function3_g____getter_19_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cff = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_184345e03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345e03 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function3Value;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Function4>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function4_g____getter_20_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x181fb4cf0

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function4_g____getter_20_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345d00 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_184345e04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345e04 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function4Value;
}


// CustomLogic.CustomLogicInputInteractionEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputInteractionEnum___ctor (CustomLogic_CustomLogicInputInteractionEnum_o* __this, const MethodInfo* method);
// 0x181fcd960

void CustomLogic_CustomLogicInputInteractionEnum___ctor
               (CustomLogic_CustomLogicInputInteractionEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345cc2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Interact
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Interact (const MethodInfo* method);
// 0x181fcdc90

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Interact(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cc3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->InteractValue;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Interact2
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Interact2 (const MethodInfo* method);
// 0x181fcdbf0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Interact2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cc4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Interact2Value;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Interact3
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Interact3 (const MethodInfo* method);
// 0x181fcdc40

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Interact3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cc5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Interact3Value;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_ItemMenu
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_ItemMenu (const MethodInfo* method);
// 0x181fcdce0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_ItemMenu(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cc6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->ItemMenuValue;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_ActionMenu
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_ActionMenu (const MethodInfo* method);
// 0x181fcd9b0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_ActionMenu(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cc7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->ActionMenuValue;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_EmoteMenu
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_EmoteMenu (const MethodInfo* method);
// 0x181fcda30

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_EmoteMenu(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cc8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->EmoteMenuValue;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_MenuNext
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_MenuNext (const MethodInfo* method);
// 0x181fcdd30

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_MenuNext(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cc9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->MenuNextValue;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect1
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect1 (const MethodInfo* method);
// 0x181fcdd80

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cca = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect1Value;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect2
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect2 (const MethodInfo* method);
// 0x181fcddd0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ccb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345ccb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect2Value;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect3
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect3 (const MethodInfo* method);
// 0x181fcde20

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ccc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345ccc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect3Value;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect4
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect4 (const MethodInfo* method);
// 0x181fcde70

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect4(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ccd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345ccd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect4Value;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect5
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect5 (const MethodInfo* method);
// 0x181fcdec0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect5(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cce = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect5Value;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect6
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect6 (const MethodInfo* method);
// 0x181fcdf10

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect6(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ccf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345ccf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect6Value;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect7
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect7 (const MethodInfo* method);
// 0x181fcdf60

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect7(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cd0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect7Value;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect8
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect8 (const MethodInfo* method);
// 0x181fcdfb0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect8(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cd1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect8Value;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Function1
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Function1 (const MethodInfo* method);
// 0x181fcda80

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Function1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cd2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function1Value;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Function2
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Function2 (const MethodInfo* method);
// 0x181fcdad0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Function2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cd3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function2Value;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Function3
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Function3 (const MethodInfo* method);
// 0x181fcdb30

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Function3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cd4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function3Value;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Function4
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Function4 (const MethodInfo* method);
// 0x181fcdb90

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Function4(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_184345cd5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function4Value;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_ClassName (CustomLogic_CustomLogicInputInteractionEnum_o* __this, const MethodInfo* method);
// 0x181fcda00

System_String_o *
CustomLogic_CustomLogicInputInteractionEnum__get_ClassName
          (CustomLogic_CustomLogicInputInteractionEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"InputInteractionEnum");
    Il2CppMethodInitialized_184345cd6 = '\x01';
  }
  return "InputInteractionEnum";
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputInteractionEnum__get_IsAbstract (CustomLogic_CustomLogicInputInteractionEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputInteractionEnum__get_IsAbstract(CustomLogic_CustomLogicInputInteractionEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputInteractionEnum__get_IsStatic (CustomLogic_CustomLogicInputInteractionEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputInteractionEnum__get_IsStatic(CustomLogic_CustomLogicInputInteractionEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputInteractionEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputInteractionEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputInteractionEnum__get_InheritBaseMembers(CustomLogic_CustomLogicInputInteractionEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicInputInteractionEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputInteractionEnum___cctor (const MethodInfo* method);
// 0x181fcd430

void CustomLogic_CustomLogicInputInteractionEnum___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/QuickSelect3");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/Interact");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/Interact3");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/Function3");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/MenuNext");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/QuickSelect4");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/QuickSelect8");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/QuickSelect1");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/ItemMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/EmoteMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/QuickSelect5");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/QuickSelect2");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/Function1");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/Function2");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/ActionMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/QuickSelect6");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/Interact2");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/QuickSelect7");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/Function4");
    Il2CppMethodInitialized_184345cd7 = '\x01';
  }
  TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->InteractValue = "Interaction/Interact";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->InteractValue,
             "Interaction/Interact");
  TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Interact2Value = "Interaction/Interact2";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Interact2Value,
             "Interaction/Interact2");
  TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Interact3Value = "Interaction/Interact3";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Interact3Value,
             "Interaction/Interact3");
  TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->ItemMenuValue = "Interaction/ItemMenu";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->ItemMenuValue,
             "Interaction/ItemMenu");
  TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->ActionMenuValue = "Interaction/ActionMenu"
  ;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->ActionMenuValue,
             "Interaction/ActionMenu");
  TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->EmoteMenuValue = "Interaction/EmoteMenu";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->EmoteMenuValue,
             "Interaction/EmoteMenu");
  TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->MenuNextValue = "Interaction/MenuNext";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->MenuNextValue,
             "Interaction/MenuNext");
  TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect1Value =
       "Interaction/QuickSelect1";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect1Value,
             "Interaction/QuickSelect1");
  TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect2Value =
       "Interaction/QuickSelect2";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect2Value,
             "Interaction/QuickSelect2");
  TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect3Value =
       "Interaction/QuickSelect3";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect3Value,
             "Interaction/QuickSelect3");
  TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect4Value =
       "Interaction/QuickSelect4";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect4Value,
             "Interaction/QuickSelect4");
  TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect5Value =
       "Interaction/QuickSelect5";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect5Value,
             "Interaction/QuickSelect5");
  TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect6Value =
       "Interaction/QuickSelect6";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect6Value,
             "Interaction/QuickSelect6");
  TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect7Value =
       "Interaction/QuickSelect7";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect7Value,
             "Interaction/QuickSelect7");
  TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect8Value =
       "Interaction/QuickSelect8";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect8Value,
             "Interaction/QuickSelect8");
  TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function1Value = "Interaction/Function1";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function1Value,
             "Interaction/Function1");
  TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function2Value = "Interaction/Function2";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function2Value,
             "Interaction/Function2");
  TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function3Value = "Interaction/Function3";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function3Value,
             "Interaction/Function3");
  TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function4Value = "Interaction/Function4";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function4Value,
             "Interaction/Function4");
  return;
}


