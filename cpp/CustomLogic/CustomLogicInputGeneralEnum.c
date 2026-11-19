// Type: CustomLogic.CustomLogicInputGeneralEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputGeneralEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicInputGeneralEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputGeneralEnum_o* CustomLogic_CustomLogicInputGeneralEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a83370

CustomLogic_CustomLogicInputGeneralEnum_o *
CustomLogic_CustomLogicInputGeneralEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicInputGeneralEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_075466bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466bd = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputGeneralEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  if (Il2CppMethodInitialized_0754669e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754669e = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputGeneralEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a83490

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicInputGeneralEnum_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_075466be == '\0') {
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
    Il2CppMethodInitialized_075466be = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x7a15f7a3) {
    if (uVar2 < 0x3010e277) {
      if (uVar2 < 0x10dc95d1) {
        if (uVar2 == 0x7e09cc2) {
          bVar1 = System_String__op_Equality(name,"SkipCutscene",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SkipCutscene
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0xf7c56a8) {
          bVar1 = System_String__op_Equality(name,"ChangeCharacter",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ChangeCharacter
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x10dc95d0) {
          bVar1 = System_String__op_Equality(name,"OpenSearchPalette",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__OpenSearchPalette
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x1e9e9f86) {
        if (uVar2 == 0x145dfac4) {
          bVar1 = System_String__op_Equality(name,"DebugWindow",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__DebugWindow
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x1e9e9f85) {
          bVar1 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Right
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x2279d8cb) {
        bVar1 = System_String__op_Equality(name,"Chat",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Chat
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x3010e276) {
        bVar1 = System_String__op_Equality(name,"RotateWOWCamera",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__RotateWOWCamera
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x496ac1c7) {
      if (uVar2 == 0x42f35940) {
        bVar1 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Up
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x44f9bf2d) {
        bVar1 = System_String__op_Equality(name,"Pause",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Pause
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x496ac1c6) {
        bVar1 = System_String__op_Equality(name,"RestartGame",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__RestartGame
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x51a47144) {
      if (uVar2 == 0x4c33ceaa) {
        bVar1 = System_String__op_Equality(name,"PushToTalk",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__PushToTalk
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x51a47143) {
        bVar1 = System_String__op_Equality(name,"HideChat",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideChat
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x59d8853d) {
      bVar1 = System_String__op_Equality(name,"ZoomIn",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ZoomIn
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x7a15f7a2) {
      bVar1 = System_String__op_Equality(name,"OpenCurrentScreenSearch",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__OpenCurrentScreenSearch
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x9c35923c) {
    if (uVar2 < 0x86de76b7) {
      if (uVar2 == 0x8134b193) {
        bVar1 = System_String__op_Equality(name,"HideUI",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideUI
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x840193c6) {
        bVar1 = System_String__op_Equality(name,"ZoomOut",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ZoomOut
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x86de76b6) {
        bVar1 = System_String__op_Equality(name,"SpectateNextPlayer",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SpectateNextPlayer
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x896ac890) {
      if (uVar2 == 0x88ce65f6) {
        bVar1 = System_String__op_Equality(name,"ChangeCamera",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ChangeCamera
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x896ac88f) {
        bVar1 = System_String__op_Equality(name,"Autorun",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Autorun
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x92773890) {
      bVar1 = System_String__op_Equality(name,"Left",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Left
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x9c35923b) {
      bVar1 = System_String__op_Equality(name,"ToggleScoreboard",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ToggleScoreboard
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xc2954bc3) {
    if (uVar2 == 0x9cd60e67) {
      bVar1 = System_String__op_Equality(name,"HideCursor",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideCursor
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xa4995035) {
      bVar1 = System_String__op_Equality(name,"Down",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Down
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xc2954bc2) {
      bVar1 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Back
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xd31e770f) {
    if (uVar2 == 0xcfea99f1) {
      bVar1 = System_String__op_Equality(name,"ToggleMap",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ToggleMap
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xd31e770e) {
      bVar1 = System_String__op_Equality(name,"SpectatePreviousPlayer",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SpectatePreviousPlayer
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xe713b670) {
    bVar1 = System_String__op_Equality(name,"Modifier",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Modifier
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xe50883ba) {
    bVar1 = System_String__op_Equality(name,"Forward",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Forward
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputGeneralEnum not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Forward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Forward (const MethodInfo* method);
// 0x5a83f20

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Forward(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Forward_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466bf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Forward_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Back
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Back (const MethodInfo* method);
// 0x5a83fc0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Back(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Back_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466c0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Back_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Left
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Left (const MethodInfo* method);
// 0x5a84060

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Left(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Left_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466c1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Left_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x5a84100

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Right_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466c2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Right_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x5a841a0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Up_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466c3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Up_g____getter_6_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Down
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Down (const MethodInfo* method);
// 0x5a84240

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Down(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Down_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466c4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Down_g____getter_7_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Modifier
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Modifier (const MethodInfo* method);
// 0x5a842e0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Modifier(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Modifier_g____getter_8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466c5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Modifier_g____getter_8
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Autorun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Autorun (const MethodInfo* method);
// 0x5a84380

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Autorun(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Autorun_g____getter_9
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466c6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Autorun_g____getter_9
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Pause
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Pause (const MethodInfo* method);
// 0x5a84420

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Pause(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Pause_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466c7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Pause_g____getter_10_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ChangeCharacter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ChangeCharacter (const MethodInfo* method);
// 0x5a844c0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ChangeCharacter(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ChangeCharacter_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466c8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ChangeCharacter_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__RestartGame
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__RestartGame (const MethodInfo* method);
// 0x5a84560

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__RestartGame(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__RestartGame_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466c9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__RestartGame_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ToggleScoreboard
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ToggleScoreboard (const MethodInfo* method);
// 0x5a84600

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ToggleScoreboard
          (MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ToggleScoreboard_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466ca = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ToggleScoreboard_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ToggleMap
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ToggleMap (const MethodInfo* method);
// 0x5a846a0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ToggleMap(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ToggleMap_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466cb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ToggleMap_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Chat
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Chat (const MethodInfo* method);
// 0x5a84740

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Chat(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Chat_g____getter_15_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466cc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Chat_g____getter_15_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__PushToTalk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__PushToTalk (const MethodInfo* method);
// 0x5a847e0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__PushToTalk(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__PushToTalk_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466cd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__PushToTalk_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ChangeCamera
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ChangeCamera (const MethodInfo* method);
// 0x5a84880

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ChangeCamera(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ChangeCamera_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466ce = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ChangeCamera_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__HideCursor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideCursor (const MethodInfo* method);
// 0x5a84920

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideCursor(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__HideCursor_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466cf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__HideCursor_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__SpectatePreviousPlayer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SpectatePreviousPlayer (const MethodInfo* method);
// 0x5a849c0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SpectatePreviousPlayer
          (MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__SpectatePreviousPlayer
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466d0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__SpectatePreviousPlayer
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__SpectateNextPlayer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SpectateNextPlayer (const MethodInfo* method);
// 0x5a84a60

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SpectateNextPlayer
          (MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__SpectateNextPlayer_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466d1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__SpectateNextPlayer_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__SkipCutscene
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SkipCutscene (const MethodInfo* method);
// 0x5a84b00

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SkipCutscene(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__SkipCutscene_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466d2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__SkipCutscene_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__HideUI
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideUI (const MethodInfo* method);
// 0x5a84ba0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideUI(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__HideUI_g____getter_22
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466d3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__HideUI_g____getter_22
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__DebugWindow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__DebugWindow (const MethodInfo* method);
// 0x5a84c40

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__DebugWindow(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__DebugWindow_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466d4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__DebugWindow_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__RotateWOWCamera
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__RotateWOWCamera (const MethodInfo* method);
// 0x5a84ce0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__RotateWOWCamera(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__RotateWOWCamera_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466d5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__RotateWOWCamera_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ZoomIn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ZoomIn (const MethodInfo* method);
// 0x5a84d80

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ZoomIn(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ZoomIn_g____getter_25
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466d6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ZoomIn_g____getter_25
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ZoomOut
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ZoomOut (const MethodInfo* method);
// 0x5a84e20

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ZoomOut(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ZoomOut_g____getter_26
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466d7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ZoomOut_g____getter_26
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__HideChat
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideChat (const MethodInfo* method);
// 0x5a84ec0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideChat(MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__HideChat_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466d8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__HideChat_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__OpenSearchPalette
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__OpenSearchPalette (const MethodInfo* method);
// 0x5a84f60

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__OpenSearchPalette
          (MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__OpenSearchPalette_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466d9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__OpenSearchPalette_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__OpenCurrentScreenSearch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__OpenCurrentScreenSearch (const MethodInfo* method);
// 0x5a85000

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__OpenCurrentScreenSearch
          (MethodInfo *method)

{
  System_Func_CustomLogicInputGeneralEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075466da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__OpenCurrentScreenSearc
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
    Il2CppMethodInitialized_075466da = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__OpenCurrentScreenSearc
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputGeneralEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a850a0

void CustomLogic_CustomLogicInputGeneralEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_075466db == '\0') {
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
    Il2CppMethodInitialized_075466db = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Forward",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Back",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Left",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Right",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Up",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Down",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Modifier",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Autorun",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Pause",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ChangeCharacter",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RestartGame",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToggleScoreboard",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToggleMap",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Chat",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PushToTalk",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ChangeCamera",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HideCursor",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpectatePreviousPlayer",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpectateNextPlayer",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SkipCutscene",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HideUI",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DebugWindow",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RotateWOWCamera",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ZoomIn",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ZoomOut",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HideChat",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OpenSearchPalette",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OpenCurrentScreenSearch",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Forward>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Forward_g____getter_2_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a854f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8550d: cmp byte ptr [rip + 0x1ac148c], 0
// asm:   0x5a85514: je 0x5a85563

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Forward_g____getter_2_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466dc = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469a0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ForwardValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x30);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Back>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Back_g____getter_3_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a855a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a855bd: cmp byte ptr [rip + 0x1ac13dd], 0
// asm:   0x5a855c4: je 0x5a85613

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Back_g____getter_3_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466dd = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469a1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->BackValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x38);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Left>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Left_g____getter_4_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a85650
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8566d: cmp byte ptr [rip + 0x1ac132e], 0
// asm:   0x5a85674: je 0x5a856c3

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Left_g____getter_4_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466de = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469a2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->LeftValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x40);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Right>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Right_g____getter_5_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a85700
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8571d: cmp byte ptr [rip + 0x1ac127f], 0
// asm:   0x5a85724: je 0x5a85773

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Right_g____getter_5_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466df = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469a3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->RightValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x48);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Up>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Up_g____getter_6_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a857b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a857cd: cmp byte ptr [rip + 0x1ac11d0], 0
// asm:   0x5a857d4: je 0x5a85823

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Up_g____getter_6_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466e0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469a4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->UpValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x50);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Down>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Down_g____getter_7_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a85860
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8587d: cmp byte ptr [rip + 0x1ac1121], 0
// asm:   0x5a85884: je 0x5a858d3

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Down_g____getter_7_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466e1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469a5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->DownValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x58);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Modifier>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Modifier_g____getter_8_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a85910
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8592d: cmp byte ptr [rip + 0x1ac1072], 0
// asm:   0x5a85934: je 0x5a85983

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Modifier_g____getter_8_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466e2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469a6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ModifierValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x60);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Autorun>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Autorun_g____getter_9_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a859c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a859dd: cmp byte ptr [rip + 0x1ac0fc3], 0
// asm:   0x5a859e4: je 0x5a85a33

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Autorun_g____getter_9_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466e3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469a7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->AutorunValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x68);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Pause>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Pause_g____getter_10_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a85a70
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a85a8d: cmp byte ptr [rip + 0x1ac0f14], 0
// asm:   0x5a85a94: je 0x5a85ae3

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Pause_g____getter_10_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466e4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469a8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->PauseValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x70);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ChangeCharacter>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ChangeCharacter_g____getter_11_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a85b20
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a85b3d: cmp byte ptr [rip + 0x1ac0e65], 0
// asm:   0x5a85b44: je 0x5a85b93

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ChangeCharacter_g____getter_11_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466e5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469a9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ChangeCharacterValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x78);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__RestartGame>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__RestartGame_g____getter_12_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a85bd0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a85bed: cmp byte ptr [rip + 0x1ac0db6], 0
// asm:   0x5a85bf4: je 0x5a85c46

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__RestartGame_g____getter_12_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466e6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469aa = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->RestartGameValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x80);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ToggleScoreboard>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ToggleScoreboard_g____getter_13_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a85c80
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a85c9d: cmp byte ptr [rip + 0x1ac0d07], 0
// asm:   0x5a85ca4: je 0x5a85cf6

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ToggleScoreboard_g____getter_13_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466e7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469ab = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ToggleScoreboardValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x88);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ToggleMap>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ToggleMap_g____getter_14_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a85d30
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a85d4d: cmp byte ptr [rip + 0x1ac0c58], 0
// asm:   0x5a85d54: je 0x5a85da6

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ToggleMap_g____getter_14_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466e8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469ac = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ToggleMapValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x90);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Chat>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Chat_g____getter_15_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a85de0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a85dfd: cmp byte ptr [rip + 0x1ac0ba9], 0
// asm:   0x5a85e04: je 0x5a85e56

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Chat_g____getter_15_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466e9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469ad = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ChatValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x98);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__PushToTalk>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__PushToTalk_g____getter_16_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a85e90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a85ead: cmp byte ptr [rip + 0x1ac0afa], 0
// asm:   0x5a85eb4: je 0x5a85f06

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__PushToTalk_g____getter_16_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466ea = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469ae = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->PushToTalkValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0xa0);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ChangeCamera>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ChangeCamera_g____getter_17_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a85f40
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a85f5d: cmp byte ptr [rip + 0x1ac0a4b], 0
// asm:   0x5a85f64: je 0x5a85fb6

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ChangeCamera_g____getter_17_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466eb = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469af = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ChangeCameraValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0xa8);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__HideCursor>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__HideCursor_g____getter_18_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a85ff0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8600d: cmp byte ptr [rip + 0x1ac099c], 0
// asm:   0x5a86014: je 0x5a86066

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__HideCursor_g____getter_18_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466ec = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469b0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->HideCursorValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0xb0);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__SpectatePreviousPlayer>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__SpectatePreviousPlayer_g____getter_19_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a860a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a860bd: cmp byte ptr [rip + 0x1ac08ed], 0
// asm:   0x5a860c4: je 0x5a86116

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__SpectatePreviousPlayer_g____getter_19_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466ed = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469b1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->SpectatePreviousPlayerValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0xb8);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__SpectateNextPlayer>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__SpectateNextPlayer_g____getter_20_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a86150
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8616d: cmp byte ptr [rip + 0x1ac083e], 0
// asm:   0x5a86174: je 0x5a861c6

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__SpectateNextPlayer_g____getter_20_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466ee = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469b2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->SpectateNextPlayerValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0xc0);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__SkipCutscene>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__SkipCutscene_g____getter_21_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a86200
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8621d: cmp byte ptr [rip + 0x1ac078f], 0
// asm:   0x5a86224: je 0x5a86276

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__SkipCutscene_g____getter_21_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466ef = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469b3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->SkipCutsceneValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 200);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__HideUI>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__HideUI_g____getter_22_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a862b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a862cd: cmp byte ptr [rip + 0x1ac06e0], 0
// asm:   0x5a862d4: je 0x5a86326

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__HideUI_g____getter_22_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466f0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469b4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->HideUIValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0xd0);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__DebugWindow>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__DebugWindow_g____getter_23_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a86360
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8637d: cmp byte ptr [rip + 0x1ac0631], 0
// asm:   0x5a86384: je 0x5a863d6

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__DebugWindow_g____getter_23_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466f1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469b5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->DebugWindowValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0xd8);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__RotateWOWCamera>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__RotateWOWCamera_g____getter_24_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a86410
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8642d: cmp byte ptr [rip + 0x1ac0582], 0
// asm:   0x5a86434: je 0x5a86482

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__RotateWOWCamera_g____getter_24_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466f2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469b6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->RotateWOWCameraValue;
  }
  return *(Il2CppObject **)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ZoomIn>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ZoomIn_g____getter_25_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a864c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a864dd: cmp byte ptr [rip + 0x1ac04d3], 0
// asm:   0x5a864e4: je 0x5a86533

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ZoomIn_g____getter_25_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466f3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469b7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ZoomInValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 8);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ZoomOut>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ZoomOut_g____getter_26_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a86570
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8658d: cmp byte ptr [rip + 0x1ac0424], 0
// asm:   0x5a86594: je 0x5a865e3

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ZoomOut_g____getter_26_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466f4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469b8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ZoomOutValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x10);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__HideChat>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__HideChat_g____getter_27_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a86620
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8663d: cmp byte ptr [rip + 0x1ac0375], 0
// asm:   0x5a86644: je 0x5a86693

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__HideChat_g____getter_27_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466f5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469b9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->HideChatValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x18);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__OpenSearchPalette>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__OpenSearchPalette_g____getter_28_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a866d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a866ed: cmp byte ptr [rip + 0x1ac02c6], 0
// asm:   0x5a866f4: je 0x5a86743

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__OpenSearchPalette_g____getter_28_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466f6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469ba = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->OpenSearchPaletteValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x20);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__OpenCurrentScreenSearch>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__OpenCurrentScreenSearch_g____getter_29_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x5a86780
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8679d: cmp byte ptr [rip + 0x1ac0217], 0
// asm:   0x5a867a4: je 0x5a867f3

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__OpenCurrentScreenSearch_g____getter_29_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466f7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
  }
  if (Il2CppMethodInitialized_075469bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075469bb = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->OpenCurrentScreenSearchValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x28);
}


// CustomLogic.CustomLogicInputGeneralEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputGeneralEnum___ctor (CustomLogic_CustomLogicInputGeneralEnum_o* __this, const MethodInfo* method);
// 0x5a820f0

void CustomLogic_CustomLogicInputGeneralEnum___ctor
               (CustomLogic_CustomLogicInputGeneralEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754669e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754669e = '\x01';
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


// CustomLogic.CustomLogicInputGeneralEnum$$get_Forward
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Forward (const MethodInfo* method);
// 0x5a82160

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Forward(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754669f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_0754669f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ForwardValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x30);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Back
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Back (const MethodInfo* method);
// 0x5a821d0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Back(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466a0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->BackValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x38);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Left
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Left (const MethodInfo* method);
// 0x5a82240

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Left(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466a1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->LeftValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x40);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Right
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Right (const MethodInfo* method);
// 0x5a822b0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Right(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466a2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->RightValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x48);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Up
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Up (const MethodInfo* method);
// 0x5a82320

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Up(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466a3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->UpValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x50);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Down
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Down (const MethodInfo* method);
// 0x5a82390

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Down(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466a4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->DownValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x58);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Modifier
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Modifier (const MethodInfo* method);
// 0x5a82400

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Modifier(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466a5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ModifierValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x60);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Autorun
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Autorun (const MethodInfo* method);
// 0x5a82470

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Autorun(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466a6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->AutorunValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x68);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Pause
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Pause (const MethodInfo* method);
// 0x5a824e0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Pause(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466a7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->PauseValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x70);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ChangeCharacter
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ChangeCharacter (const MethodInfo* method);
// 0x5a82550

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_ChangeCharacter(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466a8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ChangeCharacterValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x78);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_RestartGame
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_RestartGame (const MethodInfo* method);
// 0x5a825c0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_RestartGame(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466a9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->RestartGameValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x80);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ToggleScoreboard
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ToggleScoreboard (const MethodInfo* method);
// 0x5a82630

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_ToggleScoreboard(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466aa = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ToggleScoreboardValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x88);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ToggleMap
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ToggleMap (const MethodInfo* method);
// 0x5a826a0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_ToggleMap(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466ab = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ToggleMapValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x90);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Chat
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Chat (const MethodInfo* method);
// 0x5a82710

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Chat(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466ac = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ChatValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x98);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_PushToTalk
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_PushToTalk (const MethodInfo* method);
// 0x5a82780

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_PushToTalk(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466ad = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->PushToTalkValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0xa0);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ChangeCamera
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ChangeCamera (const MethodInfo* method);
// 0x5a827f0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_ChangeCamera(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466ae = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ChangeCameraValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0xa8);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_HideCursor
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_HideCursor (const MethodInfo* method);
// 0x5a82860

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_HideCursor(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466af = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->HideCursorValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0xb0);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_SpectatePreviousPlayer
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_SpectatePreviousPlayer (const MethodInfo* method);
// 0x5a828d0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_SpectatePreviousPlayer(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466b0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->SpectatePreviousPlayerValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0xb8);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_SpectateNextPlayer
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_SpectateNextPlayer (const MethodInfo* method);
// 0x5a82940

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_SpectateNextPlayer(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466b1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->SpectateNextPlayerValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0xc0);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_SkipCutscene
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_SkipCutscene (const MethodInfo* method);
// 0x5a829b0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_SkipCutscene(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466b2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->SkipCutsceneValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 200);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_HideUI
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_HideUI (const MethodInfo* method);
// 0x5a82a20

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_HideUI(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466b3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->HideUIValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0xd0);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_DebugWindow
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_DebugWindow (const MethodInfo* method);
// 0x5a82a90

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_DebugWindow(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466b4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->DebugWindowValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0xd8);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_RotateWOWCamera
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_RotateWOWCamera (const MethodInfo* method);
// 0x5a82b00

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_RotateWOWCamera(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466b5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->RotateWOWCameraValue;
  }
  return *(System_String_o **)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields
  ;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ZoomIn
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ZoomIn (const MethodInfo* method);
// 0x5a82b70

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_ZoomIn(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466b6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ZoomInValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 8);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ZoomOut
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ZoomOut (const MethodInfo* method);
// 0x5a82be0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_ZoomOut(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466b7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->ZoomOutValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x10);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_HideChat
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_HideChat (const MethodInfo* method);
// 0x5a82c50

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_HideChat(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466b8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->HideChatValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x18);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_OpenSearchPalette
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_OpenSearchPalette (const MethodInfo* method);
// 0x5a82cc0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_OpenSearchPalette(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466b9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->OpenSearchPaletteValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x20);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_OpenCurrentScreenSearch
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_OpenCurrentScreenSearch (const MethodInfo* method);
// 0x5a82d30

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_OpenCurrentScreenSearch(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    Il2CppMethodInitialized_075466ba = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum);
    return TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->OpenCurrentScreenSearchValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputGeneralEnum)->static_fields + 0x28);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ClassName (CustomLogic_CustomLogicInputGeneralEnum_o* __this, const MethodInfo* method);
// 0x5a82da0

System_String_o *
CustomLogic_CustomLogicInputGeneralEnum__get_ClassName
          (CustomLogic_CustomLogicInputGeneralEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075466bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"InputGeneralEnum");
    Il2CppMethodInitialized_075466bb = '\x01';
  }
  return "InputGeneralEnum";
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputGeneralEnum__get_IsAbstract (CustomLogic_CustomLogicInputGeneralEnum_o* __this, const MethodInfo* method);
// 0x5a82dd0

bool CustomLogic_CustomLogicInputGeneralEnum__get_IsAbstract
               (CustomLogic_CustomLogicInputGeneralEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputGeneralEnum__get_IsStatic (CustomLogic_CustomLogicInputGeneralEnum_o* __this, const MethodInfo* method);
// 0x5a82de0

bool CustomLogic_CustomLogicInputGeneralEnum__get_IsStatic
               (CustomLogic_CustomLogicInputGeneralEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputGeneralEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputGeneralEnum_o* __this, const MethodInfo* method);
// 0x5a82df0

bool CustomLogic_CustomLogicInputGeneralEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicInputGeneralEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicInputGeneralEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputGeneralEnum___cctor (const MethodInfo* method);
// 0x5a82e00

void CustomLogic_CustomLogicInputGeneralEnum___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicInputGeneralEnum_StaticFields *pCVar1;
  
  if (Il2CppMethodInitialized_075466bc == '\0') {
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
    Il2CppMethodInitialized_075466bc = '\x01';
  }
  TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->RotateWOWCameraValue =
       "General/RotateWOWCamera";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields->RotateWOWCameraValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->ZoomInValue = "General/ZoomIn";
  Il2CppCodeGenWriteBarrier(&pCVar1->ZoomInValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->ZoomOutValue = "General/ZoomOut";
  Il2CppCodeGenWriteBarrier(&pCVar1->ZoomOutValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->HideChatValue = "General/HideChat";
  Il2CppCodeGenWriteBarrier(&pCVar1->HideChatValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->OpenSearchPaletteValue = "General/OpenSearchPalette";
  Il2CppCodeGenWriteBarrier(&pCVar1->OpenSearchPaletteValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->OpenCurrentScreenSearchValue = "General/OpenCurrentScreenSearch";
  Il2CppCodeGenWriteBarrier(&pCVar1->OpenCurrentScreenSearchValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->ForwardValue = "General/Forward";
  Il2CppCodeGenWriteBarrier(&pCVar1->ForwardValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->BackValue = "General/Back";
  Il2CppCodeGenWriteBarrier(&pCVar1->BackValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->LeftValue = "General/Left";
  Il2CppCodeGenWriteBarrier(&pCVar1->LeftValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->RightValue = "General/Right";
  Il2CppCodeGenWriteBarrier(&pCVar1->RightValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->UpValue = "General/Up";
  Il2CppCodeGenWriteBarrier(&pCVar1->UpValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->DownValue = "General/Down";
  Il2CppCodeGenWriteBarrier(&pCVar1->DownValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->ModifierValue = "General/Modifier";
  Il2CppCodeGenWriteBarrier(&pCVar1->ModifierValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->AutorunValue = "General/Autorun";
  Il2CppCodeGenWriteBarrier(&pCVar1->AutorunValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->PauseValue = "General/Pause";
  Il2CppCodeGenWriteBarrier(&pCVar1->PauseValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->ChangeCharacterValue = "General/ChangeCharacter";
  Il2CppCodeGenWriteBarrier(&pCVar1->ChangeCharacterValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->RestartGameValue = "General/RestartGame";
  Il2CppCodeGenWriteBarrier(&pCVar1->RestartGameValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->ToggleScoreboardValue = "General/ToggleScoreboard";
  Il2CppCodeGenWriteBarrier(&pCVar1->ToggleScoreboardValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->ToggleMapValue = "General/ToggleMap";
  Il2CppCodeGenWriteBarrier(&pCVar1->ToggleMapValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->ChatValue = "General/Chat";
  Il2CppCodeGenWriteBarrier(&pCVar1->ChatValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->PushToTalkValue = "General/PushToTalk";
  Il2CppCodeGenWriteBarrier(&pCVar1->PushToTalkValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->ChangeCameraValue = "General/ChangeCamera";
  Il2CppCodeGenWriteBarrier(&pCVar1->ChangeCameraValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->HideCursorValue = "General/HideCursor";
  Il2CppCodeGenWriteBarrier(&pCVar1->HideCursorValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->SpectatePreviousPlayerValue = "General/SpectatePreviousPlayer";
  Il2CppCodeGenWriteBarrier(&pCVar1->SpectatePreviousPlayerValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->SpectateNextPlayerValue = "General/SpectateNextPlayer";
  Il2CppCodeGenWriteBarrier(&pCVar1->SpectateNextPlayerValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->SkipCutsceneValue = "General/SkipCutscene";
  Il2CppCodeGenWriteBarrier(&pCVar1->SkipCutsceneValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->HideUIValue = "General/HideUI";
  Il2CppCodeGenWriteBarrier(&pCVar1->HideUIValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputGeneralEnum->static_fields;
  pCVar1->DebugWindowValue = "General/DebugWindow";
  Il2CppCodeGenWriteBarrier(&pCVar1->DebugWindowValue);
  return;
}


