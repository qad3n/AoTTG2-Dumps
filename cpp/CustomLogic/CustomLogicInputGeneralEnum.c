// Type: CustomLogic.CustomLogicInputGeneralEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputGeneralEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicInputGeneralEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputGeneralEnum_o* CustomLogic_CustomLogicInputGeneralEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fce000

CustomLogic_CustomLogicInputGeneralEnum_o *
CustomLogic_CustomLogicInputGeneralEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicInputGeneralEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345c51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c51 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
      if (Il2CppMethodInitialized_184345c32 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345c32 = '\x01';
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
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputGeneralEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputGeneralEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fa8c70

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_184345c52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Right");
    il2cpp_codegen_initialize_runtime_metadata(&"SpectatePreviousPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&"OpenSearchPalette");
    il2cpp_codegen_initialize_runtime_metadata(&"ToggleMap");
    il2cpp_codegen_initialize_runtime_metadata(&"Down");
    il2cpp_codegen_initialize_runtime_metadata(&"HideCursor");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"PushToTalk");
    il2cpp_codegen_initialize_runtime_metadata(&"RotateWOWCamera");
    il2cpp_codegen_initialize_runtime_metadata(&"ZoomOut");
    il2cpp_codegen_initialize_runtime_metadata(&"HideUI");
    il2cpp_codegen_initialize_runtime_metadata(&"Forward");
    il2cpp_codegen_initialize_runtime_metadata(&"SpectateNextPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&"ChangeCharacter");
    il2cpp_codegen_initialize_runtime_metadata(&"RestartGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Chat");
    il2cpp_codegen_initialize_runtime_metadata(&"Up");
    il2cpp_codegen_initialize_runtime_metadata(&"DebugWindow");
    il2cpp_codegen_initialize_runtime_metadata(&"Pause");
    il2cpp_codegen_initialize_runtime_metadata(&"Left");
    il2cpp_codegen_initialize_runtime_metadata(&"ZoomIn");
    il2cpp_codegen_initialize_runtime_metadata(&"Modifier");
    il2cpp_codegen_initialize_runtime_metadata(&"ChangeCamera");
    il2cpp_codegen_initialize_runtime_metadata(&"ToggleScoreboard");
    il2cpp_codegen_initialize_runtime_metadata(&"HideChat");
    il2cpp_codegen_initialize_runtime_metadata(&"Autorun");
    il2cpp_codegen_initialize_runtime_metadata(&"OpenCurrentScreenSearch");
    il2cpp_codegen_initialize_runtime_metadata(&"SkipCutscene");
    Il2CppMethodInitialized_184345c52 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x7a15f7a3) {
    if (uVar2 < 0x3010e277) {
      if (uVar2 < 0x10dc95d1) {
        if (uVar2 == 0x7e09cc2) {
          bVar1 = System_String__op_Equality(name,"SkipCutscene",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345c66 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__SkipCutscene_g____gett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
              Il2CppMethodInitialized_184345c66 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__SkipCutscene_g____gett
            ;
            goto label_181fa9e64;
          }
        }
        else if (uVar2 == 0xf7c56a8) {
          bVar1 = System_String__op_Equality(name,"ChangeCharacter",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345c5c == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ChangeCharacter_g____g
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
              Il2CppMethodInitialized_184345c5c = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ChangeCharacter_g____g
            ;
            goto label_181fa9e64;
          }
        }
        else if (uVar2 == 0x10dc95d0) {
          bVar1 = System_String__op_Equality(name,"OpenSearchPalette",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345c6d == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__OpenSearchPalette_g
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
              Il2CppMethodInitialized_184345c6d = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__OpenSearchPalette_g
            ;
            goto label_181fa9e64;
          }
        }
      }
      else if (uVar2 < 0x1e9e9f86) {
        if (uVar2 == 0x145dfac4) {
          bVar1 = System_String__op_Equality(name,"DebugWindow",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345c68 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__DebugWindow_g____gette
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
              Il2CppMethodInitialized_184345c68 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__DebugWindow_g____gette
            ;
            goto label_181fa9e64;
          }
        }
        else if (uVar2 == 0x1e9e9f85) {
          bVar1 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345c56 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Right_g____getter_5_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
              Il2CppMethodInitialized_184345c56 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Right_g____getter_5_0
            ;
            goto label_181fa9e64;
          }
        }
      }
      else if (uVar2 == 0x2279d8cb) {
        bVar1 = System_String__op_Equality(name,"Chat",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345c60 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Chat_g____getter_15_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
            Il2CppMethodInitialized_184345c60 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Chat_g____getter_15_0
          ;
          goto label_181fa9e64;
        }
      }
      else if (uVar2 == 0x3010e276) {
        bVar1 = System_String__op_Equality(name,"RotateWOWCamera",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345c69 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__RotateWOWCamera_g____g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
            Il2CppMethodInitialized_184345c69 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__RotateWOWCamera_g____g
          ;
          goto label_181fa9e64;
        }
      }
    }
    else if (uVar2 < 0x496ac1c7) {
      if (uVar2 == 0x42f35940) {
        bVar1 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345c57 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Up_g____getter_6_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
            Il2CppMethodInitialized_184345c57 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Up_g____getter_6_0
          ;
          goto label_181fa9e64;
        }
      }
      else if (uVar2 == 0x44f9bf2d) {
        bVar1 = System_String__op_Equality(name,"Pause",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345c5b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Pause_g____getter_10_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
            Il2CppMethodInitialized_184345c5b = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Pause_g____getter_10_0
          ;
          goto label_181fa9e64;
        }
      }
      else if (uVar2 == 0x496ac1c6) {
        bVar1 = System_String__op_Equality(name,"RestartGame",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345c5d == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__RestartGame_g____gette
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
            Il2CppMethodInitialized_184345c5d = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__RestartGame_g____gette
          ;
          goto label_181fa9e64;
        }
      }
    }
    else if (uVar2 < 0x51a47144) {
      if (uVar2 == 0x4c33ceaa) {
        bVar1 = System_String__op_Equality(name,"PushToTalk",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345c61 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__PushToTalk_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
            Il2CppMethodInitialized_184345c61 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__PushToTalk_g____getter
          ;
          goto label_181fa9e64;
        }
      }
      else if (uVar2 == 0x51a47143) {
        bVar1 = System_String__op_Equality(name,"HideChat",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345c6c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__HideChat_g____getter_2
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
            Il2CppMethodInitialized_184345c6c = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__HideChat_g____getter_2
          ;
          goto label_181fa9e64;
        }
      }
    }
    else if (uVar2 == 0x59d8853d) {
      bVar1 = System_String__op_Equality(name,"ZoomIn",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345c6a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ZoomIn_g____getter_25
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object)
          ;
          Il2CppMethodInitialized_184345c6a = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ZoomIn_g____getter_25
        ;
        goto label_181fa9e64;
      }
    }
    else if (uVar2 == 0x7a15f7a2) {
      bVar1 = System_String__op_Equality(name,"OpenCurrentScreenSearch",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345c6e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__OpenCurrentScreenSearc
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object)
          ;
          Il2CppMethodInitialized_184345c6e = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__OpenCurrentScreenSearc
        ;
        goto label_181fa9e64;
      }
    }
  }
  else if (uVar2 < 0x9c35923c) {
    if (uVar2 < 0x86de76b7) {
      if (uVar2 == 0x8134b193) {
        bVar1 = System_String__op_Equality(name,"HideUI",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345c67 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__HideUI_g____getter_22
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
            Il2CppMethodInitialized_184345c67 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__HideUI_g____getter_22
          ;
          goto label_181fa9e64;
        }
      }
      else if (uVar2 == 0x840193c6) {
        bVar1 = System_String__op_Equality(name,"ZoomOut",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345c6b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ZoomOut_g____getter_26
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
            Il2CppMethodInitialized_184345c6b = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ZoomOut_g____getter_26
          ;
          goto label_181fa9e64;
        }
      }
      else if (uVar2 == 0x86de76b6) {
        bVar1 = System_String__op_Equality(name,"SpectateNextPlayer",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345c65 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__SpectateNextPlayer_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
            Il2CppMethodInitialized_184345c65 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__SpectateNextPlayer_g
          ;
          goto label_181fa9e64;
        }
      }
    }
    else if (uVar2 < 0x896ac890) {
      if (uVar2 == 0x88ce65f6) {
        bVar1 = System_String__op_Equality(name,"ChangeCamera",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345c62 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ChangeCamera_g____gett
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
            Il2CppMethodInitialized_184345c62 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ChangeCamera_g____gett
          ;
          goto label_181fa9e64;
        }
      }
      else if (uVar2 == 0x896ac88f) {
        bVar1 = System_String__op_Equality(name,"Autorun",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345c5a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Autorun_g____getter_9
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
            Il2CppMethodInitialized_184345c5a = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Autorun_g____getter_9
          ;
          goto label_181fa9e64;
        }
      }
    }
    else if (uVar2 == 0x92773890) {
      bVar1 = System_String__op_Equality(name,"Left",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345c55 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Left_g____getter_4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object)
          ;
          Il2CppMethodInitialized_184345c55 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Left_g____getter_4_0
        ;
        goto label_181fa9e64;
      }
    }
    else if (uVar2 == 0x9c35923b) {
      bVar1 = System_String__op_Equality(name,"ToggleScoreboard",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345c5e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ToggleScoreboard_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object)
          ;
          Il2CppMethodInitialized_184345c5e = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ToggleScoreboard_g
        ;
        goto label_181fa9e64;
      }
    }
  }
  else if (uVar2 < 0xc2954bc3) {
    if (uVar2 == 0x9cd60e67) {
      bVar1 = System_String__op_Equality(name,"HideCursor",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345c63 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__HideCursor_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object)
          ;
          Il2CppMethodInitialized_184345c63 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__HideCursor_g____getter
        ;
label_181fa9e64:
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                   (System_Action_T__object__o *)0x0,
                   (MethodInfo_12B8EE0 *)
                   MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
        return (CustomLogic_ICLMemberBinding_o *)__this_00;
      }
    }
    else if (uVar2 == 0xa4995035) {
      bVar1 = System_String__op_Equality(name,"Down",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345c58 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Down_g____getter_7_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object)
          ;
          Il2CppMethodInitialized_184345c58 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Down_g____getter_7_0
        ;
        goto label_181fa9e64;
      }
    }
    else if (uVar2 == 0xc2954bc2) {
      bVar1 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345c54 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Back_g____getter_3_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object)
          ;
          Il2CppMethodInitialized_184345c54 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Back_g____getter_3_0
        ;
        goto label_181fa9e64;
      }
    }
  }
  else if (uVar2 < 0xd31e770f) {
    if (uVar2 == 0xcfea99f1) {
      bVar1 = System_String__op_Equality(name,"ToggleMap",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345c5f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ToggleMap_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object)
          ;
          Il2CppMethodInitialized_184345c5f = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ToggleMap_g____getter
        ;
        goto label_181fa9e64;
      }
    }
    else if (uVar2 == 0xd31e770e) {
      bVar1 = System_String__op_Equality(name,"SpectatePreviousPlayer",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345c64 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__SpectatePreviousPlayer
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object)
          ;
          Il2CppMethodInitialized_184345c64 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__SpectatePreviousPlayer
        ;
        goto label_181fa9e64;
      }
    }
  }
  else if (uVar2 == 0xe50883ba) {
    bVar1 = System_String__op_Equality(name,"Forward",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345c53 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Forward_g____getter_2
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
        Il2CppMethodInitialized_184345c53 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Forward_g____getter_2
      ;
      goto label_181fa9e64;
    }
  }
  else if (uVar2 == 0xe713b670) {
    bVar1 = System_String__op_Equality(name,"Modifier",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345c59 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Modifier_g____getter_8
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
        Il2CppMethodInitialized_184345c59 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Modifier_g____getter_8
      ;
      goto label_181fa9e64;
    }
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputGeneralEnum not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Forward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Forward (const MethodInfo* method);
// 0x181fbd8b0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Forward(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Forward_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c53 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Forward_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Back
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Back (const MethodInfo* method);
// 0x181fbb5b0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Back(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Back_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c54 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Back_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Left
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Left (const MethodInfo* method);
// 0x181fc00b0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Left(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Left_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c55 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Left_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x181fc1730

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Right_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c56 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Right_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x181fc30d0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Up_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c57 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Up_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Down
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Down (const MethodInfo* method);
// 0x181fbd130

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Down(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Down_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c58 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Down_g____getter_7_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Modifier
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Modifier (const MethodInfo* method);
// 0x181fc0290

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Modifier(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Modifier_g____getter_8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c59 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Modifier_g____getter_8
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Autorun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Autorun (const MethodInfo* method);
// 0x181fbb510

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Autorun(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Autorun_g____getter_9
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c5a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Autorun_g____getter_9
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Pause
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Pause (const MethodInfo* method);
// 0x181fc0a10

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Pause(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Pause_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c5b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Pause_g____getter_10_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ChangeCharacter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ChangeCharacter (const MethodInfo* method);
// 0x181fbc5f0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ChangeCharacter(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ChangeCharacter_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c5c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ChangeCharacter_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__RestartGame
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__RestartGame (const MethodInfo* method);
// 0x181fc1690

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__RestartGame(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__RestartGame_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c5d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__RestartGame_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ToggleScoreboard
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ToggleScoreboard (const MethodInfo* method);
// 0x181fc3030

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ToggleScoreboard
          (MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ToggleScoreboard_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c5e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ToggleScoreboard_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ToggleMap
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ToggleMap (const MethodInfo* method);
// 0x181fc2f90

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ToggleMap(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ToggleMap_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c5f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ToggleMap_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Chat
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Chat (const MethodInfo* method);
// 0x181fbc690

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Chat(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Chat_g____getter_15_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c60 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Chat_g____getter_15_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__PushToTalk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__PushToTalk (const MethodInfo* method);
// 0x181fc0ab0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__PushToTalk(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__PushToTalk_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c61 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__PushToTalk_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ChangeCamera
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ChangeCamera (const MethodInfo* method);
// 0x181fbc550

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ChangeCamera(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ChangeCamera_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c62 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ChangeCamera_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__HideCursor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideCursor (const MethodInfo* method);
// 0x181fbe3f0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideCursor(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__HideCursor_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c63 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__HideCursor_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__SpectatePreviousPlayer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SpectatePreviousPlayer (const MethodInfo* method);
// 0x181fc26d0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SpectatePreviousPlayer
          (MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__SpectatePreviousPlayer
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c64 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__SpectatePreviousPlayer
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__SpectateNextPlayer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SpectateNextPlayer (const MethodInfo* method);
// 0x181fc2630

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SpectateNextPlayer
          (MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__SpectateNextPlayer_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c65 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__SpectateNextPlayer_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__SkipCutscene
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SkipCutscene (const MethodInfo* method);
// 0x181fc1c30

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SkipCutscene(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__SkipCutscene_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c66 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__SkipCutscene_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__HideUI
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideUI (const MethodInfo* method);
// 0x181fbe490

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideUI(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__HideUI_g____getter_22
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c67 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__HideUI_g____getter_22
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__DebugWindow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__DebugWindow (const MethodInfo* method);
// 0x181fbce10

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__DebugWindow(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__DebugWindow_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c68 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__DebugWindow_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__RotateWOWCamera
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__RotateWOWCamera (const MethodInfo* method);
// 0x181fc17d0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__RotateWOWCamera(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__RotateWOWCamera_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c69 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__RotateWOWCamera_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ZoomIn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ZoomIn (const MethodInfo* method);
// 0x181fc3670

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ZoomIn(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ZoomIn_g____getter_25
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c6a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ZoomIn_g____getter_25
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ZoomOut
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ZoomOut (const MethodInfo* method);
// 0x181fc3710

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ZoomOut(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ZoomOut_g____getter_26
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c6b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ZoomOut_g____getter_26
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__HideChat
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideChat (const MethodInfo* method);
// 0x181fbe350

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideChat(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__HideChat_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c6c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__HideChat_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__OpenSearchPalette
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__OpenSearchPalette (const MethodInfo* method);
// 0x181fc0970

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__OpenSearchPalette
          (MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__OpenSearchPalette_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c6d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__OpenSearchPalette_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__OpenCurrentScreenSearch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__OpenCurrentScreenSearch (const MethodInfo* method);
// 0x181fc08d0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__OpenCurrentScreenSearch
          (MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__OpenCurrentScreenSearc
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_184345c6e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__OpenCurrentScreenSearc
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputGeneralEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fc38e0

void CustomLogic_CustomLogicInputGeneralEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345c6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Right");
    il2cpp_codegen_initialize_runtime_metadata(&"SpectatePreviousPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&"OpenSearchPalette");
    il2cpp_codegen_initialize_runtime_metadata(&"ToggleMap");
    il2cpp_codegen_initialize_runtime_metadata(&"Down");
    il2cpp_codegen_initialize_runtime_metadata(&"HideCursor");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"PushToTalk");
    il2cpp_codegen_initialize_runtime_metadata(&"RotateWOWCamera");
    il2cpp_codegen_initialize_runtime_metadata(&"ZoomOut");
    il2cpp_codegen_initialize_runtime_metadata(&"HideUI");
    il2cpp_codegen_initialize_runtime_metadata(&"Forward");
    il2cpp_codegen_initialize_runtime_metadata(&"SpectateNextPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&"ChangeCharacter");
    il2cpp_codegen_initialize_runtime_metadata(&"RestartGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Chat");
    il2cpp_codegen_initialize_runtime_metadata(&"Up");
    il2cpp_codegen_initialize_runtime_metadata(&"DebugWindow");
    il2cpp_codegen_initialize_runtime_metadata(&"Pause");
    il2cpp_codegen_initialize_runtime_metadata(&"Left");
    il2cpp_codegen_initialize_runtime_metadata(&"ZoomIn");
    il2cpp_codegen_initialize_runtime_metadata(&"Modifier");
    il2cpp_codegen_initialize_runtime_metadata(&"ChangeCamera");
    il2cpp_codegen_initialize_runtime_metadata(&"ToggleScoreboard");
    il2cpp_codegen_initialize_runtime_metadata(&"HideChat");
    il2cpp_codegen_initialize_runtime_metadata(&"Autorun");
    il2cpp_codegen_initialize_runtime_metadata(&"OpenCurrentScreenSearch");
    il2cpp_codegen_initialize_runtime_metadata(&"SkipCutscene");
    Il2CppMethodInitialized_184345c6f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Forward",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Back",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Left",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Right",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Up",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Down",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Modifier",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Autorun",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Pause",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ChangeCharacter",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RestartGame",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToggleScoreboard",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToggleMap",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Chat",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PushToTalk",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ChangeCamera",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HideCursor",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpectatePreviousPlayer",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpectateNextPlayer",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SkipCutscene",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HideUI",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DebugWindow",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RotateWOWCamera",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ZoomIn",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ZoomOut",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HideChat",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OpenSearchPalette",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OpenCurrentScreenSearch",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Forward>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Forward_g____getter_2_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb4ab0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Forward_g____getter_2_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c70 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345dc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345dc6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ForwardValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Back>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Back_g____getter_3_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb3580

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Back_g____getter_3_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c71 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345dc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345dc7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->BackValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Left>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Left_g____getter_4_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb65c0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Left_g____getter_4_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c72 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345dc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345dc8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->LeftValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Right>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Right_g____getter_5_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb76e0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Right_g____getter_5_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c73 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345dc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345dc9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->RightValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Up>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Up_g____getter_6_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb87b0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Up_g____getter_6_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c74 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345dca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345dca = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->UpValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Down>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Down_g____getter_7_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb4610

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Down_g____getter_7_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c75 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345dcb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345dcb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->DownValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Modifier>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Modifier_g____getter_8_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb6730

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Modifier_g____getter_8_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c76 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345dcc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345dcc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ModifierValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Autorun>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Autorun_g____getter_9_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb34f0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Autorun_g____getter_9_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c77 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345dcd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345dcd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->AutorunValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Pause>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Pause_g____getter_10_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb6c60

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Pause_g____getter_10_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c78 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345dce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345dce = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->PauseValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ChangeCharacter>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ChangeCharacter_g____getter_11_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb3ec0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ChangeCharacter_g____getter_11_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c79 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345dcf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345dcf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ChangeCharacterValue
  ;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__RestartGame>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__RestartGame_g____getter_12_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb7650

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__RestartGame_g____getter_12_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c7a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345dd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345dd0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->RestartGameValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ToggleScoreboard>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ToggleScoreboard_g____getter_13_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb8720

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ToggleScoreboard_g____getter_13_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c7b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345dd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345dd1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ToggleScoreboardValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ToggleMap>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ToggleMap_g____getter_14_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb8690

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ToggleMap_g____getter_14_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c7c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345dd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345dd2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ToggleMapValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Chat>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Chat_g____getter_15_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb3f50

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Chat_g____getter_15_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c7d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345dd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345dd3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ChatValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__PushToTalk>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__PushToTalk_g____getter_16_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb6cf0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__PushToTalk_g____getter_16_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c7e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345dd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345dd4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->PushToTalkValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ChangeCamera>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ChangeCamera_g____getter_17_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb3e30

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ChangeCamera_g____getter_17_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c7f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345dd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345dd5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ChangeCameraValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__HideCursor>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__HideCursor_g____getter_18_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb5250

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__HideCursor_g____getter_18_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c80 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345dd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345dd6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->HideCursorValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__SpectatePreviousPlayer>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__SpectatePreviousPlayer_g____getter_19_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb8120

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__SpectatePreviousPlayer_g____getter_19_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c81 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345dd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345dd7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->SpectatePreviousPlayerValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__SpectateNextPlayer>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__SpectateNextPlayer_g____getter_20_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb8090

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__SpectateNextPlayer_g____getter_20_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c82 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345dd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345dd8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->SpectateNextPlayerValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__SkipCutscene>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__SkipCutscene_g____getter_21_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb79d0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__SkipCutscene_g____getter_21_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c83 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345dd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345dd9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->SkipCutsceneValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__HideUI>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__HideUI_g____getter_22_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb52e0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__HideUI_g____getter_22_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c84 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345dda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345dda = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->HideUIValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__DebugWindow>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__DebugWindow_g____getter_23_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb43c0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__DebugWindow_g____getter_23_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c85 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345ddb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345ddb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->DebugWindowValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__RotateWOWCamera>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__RotateWOWCamera_g____getter_24_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb7770

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__RotateWOWCamera_g____getter_24_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c86 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345ddc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345ddc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->RotateWOWCameraValue
  ;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ZoomIn>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ZoomIn_g____getter_25_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb8bf0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ZoomIn_g____getter_25_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c87 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345ddd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345ddd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ZoomInValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ZoomOut>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ZoomOut_g____getter_26_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb8c80

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ZoomOut_g____getter_26_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c88 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345dde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345dde = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ZoomOutValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__HideChat>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__HideChat_g____getter_27_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb51c0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__HideChat_g____getter_27_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c89 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345ddf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345ddf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->HideChatValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__OpenSearchPalette>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__OpenSearchPalette_g____getter_28_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb6bd0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__OpenSearchPalette_g____getter_28_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c8a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345de0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345de0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->OpenSearchPaletteValue;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__OpenCurrentScreenSearch>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__OpenCurrentScreenSearch_g____getter_29_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x181fb6b40

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__OpenCurrentScreenSearch_g____getter_29_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c8b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_184345de1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345de1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->OpenCurrentScreenSearchValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputGeneralEnum___ctor (CustomLogic_CustomLogicInputGeneralEnum_o* __this, const MethodInfo* method);
// 0x181fcc050

void CustomLogic_CustomLogicInputGeneralEnum___ctor
               (CustomLogic_CustomLogicInputGeneralEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345c32 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Forward
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Forward (const MethodInfo* method);
// 0x181fcc330

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Forward(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c33 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ForwardValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Back
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Back (const MethodInfo* method);
// 0x181fcc0f0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Back(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c34 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->BackValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Left
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Left (const MethodInfo* method);
// 0x181fcc490

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Left(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c35 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->LeftValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Right
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Right (const MethodInfo* method);
// 0x181fcc6e0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Right(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c36 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->RightValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Up
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Up (const MethodInfo* method);
// 0x181fcc960

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Up(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c37 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->UpValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Down
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Down (const MethodInfo* method);
// 0x181fcc2e0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Down(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c38 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->DownValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Modifier
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Modifier (const MethodInfo* method);
// 0x181fcc4e0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Modifier(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c39 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ModifierValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Autorun
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Autorun (const MethodInfo* method);
// 0x181fcc0a0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Autorun(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c3a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->AutorunValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Pause
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Pause (const MethodInfo* method);
// 0x181fcc5d0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Pause(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c3b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->PauseValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ChangeCharacter
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ChangeCharacter (const MethodInfo* method);
// 0x181fcc1a0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_ChangeCharacter(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c3c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ChangeCharacterValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_RestartGame
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_RestartGame (const MethodInfo* method);
// 0x181fcc680

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_RestartGame(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c3d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->RestartGameValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ToggleScoreboard
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ToggleScoreboard (const MethodInfo* method);
// 0x181fcc900

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_ToggleScoreboard(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c3e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ToggleScoreboardValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ToggleMap
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ToggleMap (const MethodInfo* method);
// 0x181fcc8a0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_ToggleMap(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c3f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ToggleMapValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Chat
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Chat (const MethodInfo* method);
// 0x181fcc1f0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Chat(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c40 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ChatValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_PushToTalk
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_PushToTalk (const MethodInfo* method);
// 0x181fcc620

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_PushToTalk(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c41 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->PushToTalkValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ChangeCamera
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ChangeCamera (const MethodInfo* method);
// 0x181fcc140

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_ChangeCamera(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c42 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ChangeCameraValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_HideCursor
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_HideCursor (const MethodInfo* method);
// 0x181fcc3d0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_HideCursor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c43 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->HideCursorValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_SpectatePreviousPlayer
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_SpectatePreviousPlayer (const MethodInfo* method);
// 0x181fcc840

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_SpectatePreviousPlayer(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c44 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->SpectatePreviousPlayerValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_SpectateNextPlayer
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_SpectateNextPlayer (const MethodInfo* method);
// 0x181fcc7e0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_SpectateNextPlayer(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c45 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->SpectateNextPlayerValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_SkipCutscene
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_SkipCutscene (const MethodInfo* method);
// 0x181fcc780

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_SkipCutscene(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c46 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->SkipCutsceneValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_HideUI
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_HideUI (const MethodInfo* method);
// 0x181fcc430

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_HideUI(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c47 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->HideUIValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_DebugWindow
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_DebugWindow (const MethodInfo* method);
// 0x181fcc280

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_DebugWindow(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c48 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->DebugWindowValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_RotateWOWCamera
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_RotateWOWCamera (const MethodInfo* method);
// 0x181fcc730

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_RotateWOWCamera(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c49 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->RotateWOWCameraValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ZoomIn
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ZoomIn (const MethodInfo* method);
// 0x181fcc9b0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_ZoomIn(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c4a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ZoomInValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ZoomOut
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ZoomOut (const MethodInfo* method);
// 0x181fcca00

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_ZoomOut(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c4b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ZoomOutValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_HideChat
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_HideChat (const MethodInfo* method);
// 0x181fcc380

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_HideChat(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c4c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->HideChatValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_OpenSearchPalette
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_OpenSearchPalette (const MethodInfo* method);
// 0x181fcc580

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_OpenSearchPalette(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c4d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->OpenSearchPaletteValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_OpenCurrentScreenSearch
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_OpenCurrentScreenSearch (const MethodInfo* method);
// 0x181fcc530

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_OpenCurrentScreenSearch(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_184345c4e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->OpenCurrentScreenSearchValue;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ClassName (CustomLogic_CustomLogicInputGeneralEnum_o* __this, const MethodInfo* method);
// 0x181fcc250

System_String_o *
CustomLogic_CustomLogicInputGeneralEnum__get_ClassName
          (CustomLogic_CustomLogicInputGeneralEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"InputGeneralEnum");
    Il2CppMethodInitialized_184345c4f = '\x01';
  }
  return "InputGeneralEnum";
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputGeneralEnum__get_IsAbstract (CustomLogic_CustomLogicInputGeneralEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputGeneralEnum__get_IsAbstract(CustomLogic_CustomLogicInputGeneralEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputGeneralEnum__get_IsStatic (CustomLogic_CustomLogicInputGeneralEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputGeneralEnum__get_IsStatic(CustomLogic_CustomLogicInputGeneralEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputGeneralEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputGeneralEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputGeneralEnum__get_InheritBaseMembers(CustomLogic_CustomLogicInputGeneralEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicInputGeneralEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputGeneralEnum___cctor (const MethodInfo* method);
// 0x181fcb890

void CustomLogic_CustomLogicInputGeneralEnum___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&"General/Modifier");
    il2cpp_codegen_initialize_runtime_metadata(&"General/HideCursor");
    il2cpp_codegen_initialize_runtime_metadata(&"General/ChangeCamera");
    il2cpp_codegen_initialize_runtime_metadata(&"General/ToggleScoreboard");
    il2cpp_codegen_initialize_runtime_metadata(&"General/HideChat");
    il2cpp_codegen_initialize_runtime_metadata(&"General/Pause");
    il2cpp_codegen_initialize_runtime_metadata(&"General/RotateWOWCamera");
    il2cpp_codegen_initialize_runtime_metadata(&"General/ZoomOut");
    il2cpp_codegen_initialize_runtime_metadata(&"General/Left");
    il2cpp_codegen_initialize_runtime_metadata(&"General/Autorun");
    il2cpp_codegen_initialize_runtime_metadata(&"General/Up");
    il2cpp_codegen_initialize_runtime_metadata(&"General/SpectateNextPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&"General/Right");
    il2cpp_codegen_initialize_runtime_metadata(&"General/ChangeCharacter");
    il2cpp_codegen_initialize_runtime_metadata(&"General/RestartGame");
    il2cpp_codegen_initialize_runtime_metadata(&"General/DebugWindow");
    il2cpp_codegen_initialize_runtime_metadata(&"General/Forward");
    il2cpp_codegen_initialize_runtime_metadata(&"General/OpenCurrentScreenSearch");
    il2cpp_codegen_initialize_runtime_metadata(&"General/ZoomIn");
    il2cpp_codegen_initialize_runtime_metadata(&"General/Back");
    il2cpp_codegen_initialize_runtime_metadata(&"General/PushToTalk");
    il2cpp_codegen_initialize_runtime_metadata(&"General/SpectatePreviousPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&"General/ToggleMap");
    il2cpp_codegen_initialize_runtime_metadata(&"General/Down");
    il2cpp_codegen_initialize_runtime_metadata(&"General/Chat");
    il2cpp_codegen_initialize_runtime_metadata(&"General/SkipCutscene");
    il2cpp_codegen_initialize_runtime_metadata(&"General/OpenSearchPalette");
    il2cpp_codegen_initialize_runtime_metadata(&"General/HideUI");
    Il2CppMethodInitialized_184345c50 = '\x01';
  }
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->RotateWOWCameraValue =
       "General/RotateWOWCamera";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->RotateWOWCameraValue,
             "General/RotateWOWCamera");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ZoomInValue = "General/ZoomIn";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ZoomInValue,
             "General/ZoomIn");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ZoomOutValue = "General/ZoomOut";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ZoomOutValue,
             "General/ZoomOut");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->HideChatValue = "General/HideChat";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->HideChatValue,
             "General/HideChat");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->OpenSearchPaletteValue =
       "General/OpenSearchPalette";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->OpenSearchPaletteValue,
             "General/OpenSearchPalette");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->OpenCurrentScreenSearchValue =
       "General/OpenCurrentScreenSearch";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->OpenCurrentScreenSearchValue,
             "General/OpenCurrentScreenSearch");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ForwardValue = "General/Forward";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ForwardValue,
             "General/Forward");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->BackValue = "General/Back";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->BackValue,"General/Back"
            );
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->LeftValue = "General/Left";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->LeftValue,"General/Left"
            );
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->RightValue = "General/Right";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->RightValue,
             "General/Right");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->UpValue = "General/Up";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->UpValue,"General/Up");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->DownValue = "General/Down";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->DownValue,"General/Down"
            );
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ModifierValue = "General/Modifier";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ModifierValue,
             "General/Modifier");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->AutorunValue = "General/Autorun";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->AutorunValue,
             "General/Autorun");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->PauseValue = "General/Pause";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->PauseValue,
             "General/Pause");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ChangeCharacterValue =
       "General/ChangeCharacter";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ChangeCharacterValue,
             "General/ChangeCharacter");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->RestartGameValue = "General/RestartGame";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->RestartGameValue,
             "General/RestartGame");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ToggleScoreboardValue =
       "General/ToggleScoreboard";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ToggleScoreboardValue,
             "General/ToggleScoreboard");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ToggleMapValue = "General/ToggleMap";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ToggleMapValue,
             "General/ToggleMap");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ChatValue = "General/Chat";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ChatValue,"General/Chat"
            );
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->PushToTalkValue = "General/PushToTalk";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->PushToTalkValue,
             "General/PushToTalk");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ChangeCameraValue = "General/ChangeCamera";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ChangeCameraValue,
             "General/ChangeCamera");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->HideCursorValue = "General/HideCursor";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->HideCursorValue,
             "General/HideCursor");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->SpectatePreviousPlayerValue =
       "General/SpectatePreviousPlayer";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->SpectatePreviousPlayerValue,
             "General/SpectatePreviousPlayer");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->SpectateNextPlayerValue =
       "General/SpectateNextPlayer";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->SpectateNextPlayerValue,
             "General/SpectateNextPlayer");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->SkipCutsceneValue = "General/SkipCutscene";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->SkipCutsceneValue,
             "General/SkipCutscene");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->HideUIValue = "General/HideUI";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->HideUIValue,
             "General/HideUI");
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->DebugWindowValue = "General/DebugWindow";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->DebugWindowValue,
             "General/DebugWindow");
  return;
}


