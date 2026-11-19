// Type: CustomLogic.CustomLogicTitanSoundEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicTitanSoundEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTitanSoundEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTitanSoundEnum_o* CustomLogic_CustomLogicTitanSoundEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5abb520

CustomLogic_CustomLogicTitanSoundEnum_o *
CustomLogic_CustomLogicTitanSoundEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546bca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanSoundEnum);
    Il2CppMethodInitialized_07546bca = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTitanSoundEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum);
  if (Il2CppMethodInitialized_07546b9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546b9b = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicTitanSoundEnum_o *)__this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTitanSoundEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5abb640

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicTitanSoundEnum_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07546bcb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt2");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff2");
    il2cpp_codegen_initialize_runtime_metadata(&"Swing3");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff4");
    il2cpp_codegen_initialize_runtime_metadata(&"DeathNoFall");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep1");
    il2cpp_codegen_initialize_runtime_metadata(&"RockThrow2");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff1");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt1");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanJump");
    il2cpp_codegen_initialize_runtime_metadata(&"Laugh2");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt3");
    il2cpp_codegen_initialize_runtime_metadata(&"Bite1");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff6");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt4");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt5");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep3");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt2");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt6");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt10");
    il2cpp_codegen_initialize_runtime_metadata(&"Swing1");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt4");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt8");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff5");
    il2cpp_codegen_initialize_runtime_metadata(&"Hit");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt1");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt6");
    il2cpp_codegen_initialize_runtime_metadata(&"Bite2");
    il2cpp_codegen_initialize_runtime_metadata(&"Decapitate");
    il2cpp_codegen_initialize_runtime_metadata(&"Swing2");
    il2cpp_codegen_initialize_runtime_metadata(&"DeathFall");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep2");
    il2cpp_codegen_initialize_runtime_metadata(&"RockPickup");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt5");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt7");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt9");
    il2cpp_codegen_initialize_runtime_metadata(&"Roar2");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt8");
    il2cpp_codegen_initialize_runtime_metadata(&"Laugh1");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt3");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt7");
    il2cpp_codegen_initialize_runtime_metadata(&"Roar1");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff3");
    il2cpp_codegen_initialize_runtime_metadata(&"Steam");
    il2cpp_codegen_initialize_runtime_metadata(&"RockThrow1");
    Il2CppMethodInitialized_07546bcb = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x45d92973) {
    if (uVar2 < 0x22d25e85) {
      if (uVar2 < 0x1ae90931) {
        if (uVar2 < 0xfb1ddde) {
          if (uVar2 == 0xcb1d924) {
            bVar1 = System_String__op_Equality(name,"Roar1",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Roar1
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0xfb1dddd) {
            bVar1 = System_String__op_Equality(name,"Roar2",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Roar2
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x15c63468) {
          bVar1 = System_String__op_Equality(name,"DeathFall",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__DeathFall
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x16d24ba0) {
          bVar1 = System_String__op_Equality(name,"Hurt8",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt8
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x1ae90930) {
          bVar1 = System_String__op_Equality(name,"Footstep3",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep3
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x1fd259cc) {
        if (uVar2 == 0x1be90ac3) {
          bVar1 = System_String__op_Equality(name,"Footstep2",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep2
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x1ce90c56) {
          bVar1 = System_String__op_Equality(name,"Footstep1",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep1
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x1fd259cb) {
          bVar1 = System_String__op_Equality(name,"Hurt1",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt1
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x20d25b5e) {
        bVar1 = System_String__op_Equality(name,"Hurt2",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt2
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x21d25cf1) {
        bVar1 = System_String__op_Equality(name,"Hurt3",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt3
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x22d25e84) {
        bVar1 = System_String__op_Equality(name,"Hurt4",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt4
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x26b48369) {
      if (uVar2 < 0x24389c32) {
        if (uVar2 == 0x23d26017) {
          bVar1 = System_String__op_Equality(name,"Hurt5",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt5
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x24389c31) {
          bVar1 = System_String__op_Equality(name,"TitanJump",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__TitanJump
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x24d261aa) {
        bVar1 = System_String__op_Equality(name,"Hurt6",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt6
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x25d2633d) {
        bVar1 = System_String__op_Equality(name,"Hurt7",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt7
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x26b48368) {
        bVar1 = System_String__op_Equality(name,"RockPickup",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockPickup
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x42d924ba) {
      if (uVar2 == 0x3fd92000) {
        bVar1 = System_String__op_Equality(name,"Grunt1",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt1
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x41d92326) {
        bVar1 = System_String__op_Equality(name,"Grunt3",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt3
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x42d924b9) {
        bVar1 = System_String__op_Equality(name,"Grunt2",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt2
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x43d9264c) {
      bVar1 = System_String__op_Equality(name,"Grunt5",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt5
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x44d927df) {
      bVar1 = System_String__op_Equality(name,"Grunt4",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt4
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x45d92972) {
      bVar1 = System_String__op_Equality(name,"Grunt7",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt7
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x926e2ded) {
    if (uVar2 < 0x88284e09) {
      if (uVar2 < 0x47d92c99) {
        if (uVar2 == 0x46d92b05) {
          bVar1 = System_String__op_Equality(name,"Grunt6",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt6
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x47d92c98) {
          bVar1 = System_String__op_Equality(name,"Grunt9",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt9
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x88284e08) {
        bVar1 = System_String__op_Equality(name,"Swing1",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing1
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x48d92e2b) {
        bVar1 = System_String__op_Equality(name,"Grunt8",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt8
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x655d504a) {
        bVar1 = System_String__op_Equality(name,"Hit",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hit
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x8e6e27a1) {
      if (uVar2 == 0x8a28512e) {
        bVar1 = System_String__op_Equality(name,"Swing3",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing3
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x8b2852c1) {
        bVar1 = System_String__op_Equality(name,"Swing2",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing2
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x8e6e27a0) {
        bVar1 = System_String__op_Equality(name,"Huff2",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff2
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x8f6e2933) {
      bVar1 = System_String__op_Equality(name,"Huff3",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff3
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x916e2c59) {
      bVar1 = System_String__op_Equality(name,"Huff1",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff1
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x926e2dec) {
      bVar1 = System_String__op_Equality(name,"Huff6",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff6
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xad627478) {
    if (uVar2 < 0xa0091098) {
      if (uVar2 == 0x946e3112) {
        bVar1 = System_String__op_Equality(name,"Huff4",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff4
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x956e32a5) {
        bVar1 = System_String__op_Equality(name,"Huff5",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff5
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xa0091097) {
        bVar1 = System_String__op_Equality(name,"RockThrow1",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockThrow1
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xa109122a) {
      bVar1 = System_String__op_Equality(name,"RockThrow2",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockThrow2
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xac6b6ce7) {
      bVar1 = System_String__op_Equality(name,"Bite2",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Bite2
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xad627477) {
      bVar1 = System_String__op_Equality(name,"DeathNoFall",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__DeathNoFall
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xb6407b94) {
    if (uVar2 == 0xad6b6e7a) {
      bVar1 = System_String__op_Equality(name,"Bite1",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Bite1
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xb2cdab90) {
      bVar1 = System_String__op_Equality(name,"Grunt10",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt10
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xb6407b93) {
      bVar1 = System_String__op_Equality(name,"Steam",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Steam
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xc25fad04) {
    bVar1 = System_String__op_Equality(name,"Laugh2",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Laugh2
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xc55fb1bd) {
    bVar1 = System_String__op_Equality(name,"Laugh1",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Laugh1
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xfc4e544d) {
    bVar1 = System_String__op_Equality(name,"Decapitate",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Decapitate
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTitanSoundEnum not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep1 (const MethodInfo* method);
// 0x5abc6c0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep1(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bcc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Footstep1_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bcc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Footstep1_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep2 (const MethodInfo* method);
// 0x5abc760

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep2(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bcd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Footstep2_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bcd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Footstep2_g____getter_3
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep3 (const MethodInfo* method);
// 0x5abc800

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep3(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Footstep3_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bce = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Footstep3_g____getter_4
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Swing1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing1 (const MethodInfo* method);
// 0x5abc8a0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing1(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bcf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Swing1_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bcf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Swing1_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Swing2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing2 (const MethodInfo* method);
// 0x5abc940

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing2(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Swing2_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bd0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Swing2_g____getter_6_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Swing3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing3 (const MethodInfo* method);
// 0x5abc9e0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing3(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Swing3_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bd1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Swing3_g____getter_7_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt1 (const MethodInfo* method);
// 0x5abca80

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt1(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt1_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bd2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt1_g____getter_8_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt2 (const MethodInfo* method);
// 0x5abcb20

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt2(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt2_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bd3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt2_g____getter_9_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt3 (const MethodInfo* method);
// 0x5abcbc0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt3(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt3_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bd4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt3_g____getter_10_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt4 (const MethodInfo* method);
// 0x5abcc60

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt4(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt4_g____getter_11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bd5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt4_g____getter_11_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt5 (const MethodInfo* method);
// 0x5abcd00

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt5(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt5_g____getter_12_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bd6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt5_g____getter_12_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt6 (const MethodInfo* method);
// 0x5abcda0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt6(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt6_g____getter_13_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bd7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt6_g____getter_13_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt7 (const MethodInfo* method);
// 0x5abce40

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt7(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt7_g____getter_14_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bd8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt7_g____getter_14_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt8 (const MethodInfo* method);
// 0x5abcee0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt8(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt8_g____getter_15_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bd9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt8_g____getter_15_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt1 (const MethodInfo* method);
// 0x5abcf80

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt1(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt1_g____getter_16_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bda = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt1_g____getter_16_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt2 (const MethodInfo* method);
// 0x5abd020

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt2(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bdb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt2_g____getter_17_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bdb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt2_g____getter_17_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt3 (const MethodInfo* method);
// 0x5abd0c0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt3(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt3_g____getter_18_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bdc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt3_g____getter_18_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt4 (const MethodInfo* method);
// 0x5abd160

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt4(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bdd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt4_g____getter_19_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bdd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt4_g____getter_19_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt5 (const MethodInfo* method);
// 0x5abd200

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt5(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt5_g____getter_20_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bde = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt5_g____getter_20_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt6 (const MethodInfo* method);
// 0x5abd2a0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt6(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bdf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt6_g____getter_21_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bdf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt6_g____getter_21_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt7 (const MethodInfo* method);
// 0x5abd340

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt7(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546be0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt7_g____getter_22_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546be0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt7_g____getter_22_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt8 (const MethodInfo* method);
// 0x5abd3e0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt8(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546be1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt8_g____getter_23_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546be1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt8_g____getter_23_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt9
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt9 (const MethodInfo* method);
// 0x5abd480

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt9(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546be2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt9_g____getter_24_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546be2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt9_g____getter_24_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt10
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt10 (const MethodInfo* method);
// 0x5abd520

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt10(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546be3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt10_g____getter_25_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546be3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt10_g____getter_25_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hit (const MethodInfo* method);
// 0x5abd5c0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hit(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546be4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hit_g____getter_26_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546be4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hit_g____getter_26_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Roar1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Roar1 (const MethodInfo* method);
// 0x5abd660

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Roar1(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546be5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Roar1_g____getter_27_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546be5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Roar1_g____getter_27_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Roar2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Roar2 (const MethodInfo* method);
// 0x5abd700

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Roar2(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546be6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Roar2_g____getter_28_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546be6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Roar2_g____getter_28_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__DeathFall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__DeathFall (const MethodInfo* method);
// 0x5abd7a0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__DeathFall(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546be7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__DeathFall_g____getter_29
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546be7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__DeathFall_g____getter_29
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__DeathNoFall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__DeathNoFall (const MethodInfo* method);
// 0x5abd840

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__DeathNoFall(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546be8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__DeathNoFall_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546be8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__DeathNoFall_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Steam
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Steam (const MethodInfo* method);
// 0x5abd8e0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Steam(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546be9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Steam_g____getter_31_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546be9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Steam_g____getter_31_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Bite1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Bite1 (const MethodInfo* method);
// 0x5abd980

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Bite1(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Bite1_g____getter_32_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bea = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Bite1_g____getter_32_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Bite2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Bite2 (const MethodInfo* method);
// 0x5abda20

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Bite2(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546beb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Bite2_g____getter_33_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546beb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Bite2_g____getter_33_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Laugh1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Laugh1 (const MethodInfo* method);
// 0x5abdac0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Laugh1(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Laugh1_g____getter_34_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bec = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Laugh1_g____getter_34_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Laugh2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Laugh2 (const MethodInfo* method);
// 0x5abdb60

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Laugh2(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Laugh2_g____getter_35_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bed = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Laugh2_g____getter_35_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff1 (const MethodInfo* method);
// 0x5abdc00

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff1(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff1_g____getter_36_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bee = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff1_g____getter_36_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff2 (const MethodInfo* method);
// 0x5abdca0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff2(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff2_g____getter_37_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bef = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff2_g____getter_37_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff3 (const MethodInfo* method);
// 0x5abdd40

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff3(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bf0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff3_g____getter_38_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bf0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff3_g____getter_38_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff4 (const MethodInfo* method);
// 0x5abdde0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff4(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff4_g____getter_39_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bf1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff4_g____getter_39_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff5 (const MethodInfo* method);
// 0x5abde80

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff5(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bf2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff5_g____getter_40_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bf2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff5_g____getter_40_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff6 (const MethodInfo* method);
// 0x5abdf20

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff6(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bf3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff6_g____getter_41_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bf3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff6_g____getter_41_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__TitanJump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__TitanJump (const MethodInfo* method);
// 0x5abdfc0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__TitanJump(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bf4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__TitanJump_g____getter_42
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bf4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__TitanJump_g____getter_42
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__RockPickup
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockPickup (const MethodInfo* method);
// 0x5abe060

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockPickup(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bf5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__RockPickup_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bf5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__RockPickup_g____getter_4
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__RockThrow1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockThrow1 (const MethodInfo* method);
// 0x5abe100

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockThrow1(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bf6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__RockThrow1_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bf6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__RockThrow1_g____getter_4
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__RockThrow2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockThrow2 (const MethodInfo* method);
// 0x5abe1a0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockThrow2(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bf7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__RockThrow2_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bf7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__RockThrow2_g____getter_4
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Decapitate
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Decapitate (const MethodInfo* method);
// 0x5abe240

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Decapitate(MethodInfo *method)

{
  System_Func_CustomLogicTitanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546bf8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Decapitate_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
    Il2CppMethodInitialized_07546bf8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Decapitate_g____getter_4
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTitanSoundEnum_Bindings___cctor (const MethodInfo* method);
// 0x5abe2e0

void CustomLogic_CustomLogicTitanSoundEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546bf9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt2");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff2");
    il2cpp_codegen_initialize_runtime_metadata(&"Swing3");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff4");
    il2cpp_codegen_initialize_runtime_metadata(&"DeathNoFall");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep1");
    il2cpp_codegen_initialize_runtime_metadata(&"RockThrow2");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff1");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt1");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanJump");
    il2cpp_codegen_initialize_runtime_metadata(&"Laugh2");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt3");
    il2cpp_codegen_initialize_runtime_metadata(&"Bite1");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff6");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt4");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt5");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep3");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt2");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt6");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt10");
    il2cpp_codegen_initialize_runtime_metadata(&"Swing1");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt4");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt8");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff5");
    il2cpp_codegen_initialize_runtime_metadata(&"Hit");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt1");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt6");
    il2cpp_codegen_initialize_runtime_metadata(&"Bite2");
    il2cpp_codegen_initialize_runtime_metadata(&"Decapitate");
    il2cpp_codegen_initialize_runtime_metadata(&"Swing2");
    il2cpp_codegen_initialize_runtime_metadata(&"DeathFall");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep2");
    il2cpp_codegen_initialize_runtime_metadata(&"RockPickup");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt5");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt7");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt9");
    il2cpp_codegen_initialize_runtime_metadata(&"Roar2");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt8");
    il2cpp_codegen_initialize_runtime_metadata(&"Laugh1");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt3");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt7");
    il2cpp_codegen_initialize_runtime_metadata(&"Roar1");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff3");
    il2cpp_codegen_initialize_runtime_metadata(&"Steam");
    il2cpp_codegen_initialize_runtime_metadata(&"RockThrow1");
    Il2CppMethodInitialized_07546bf9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Footstep1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Footstep2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Footstep3",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Swing1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Swing2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Swing3",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hurt1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hurt2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hurt3",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hurt4",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hurt5",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hurt6",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hurt7",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hurt8",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grunt1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grunt2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grunt3",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grunt4",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grunt5",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grunt6",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grunt7",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grunt8",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grunt9",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grunt10",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hit",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Roar1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Roar2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DeathFall",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DeathNoFall",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Steam",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Bite1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Bite2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Laugh1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Laugh2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Huff1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Huff2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Huff3",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Huff4",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Huff5",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Huff6",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TitanJump",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RockPickup",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RockThrow1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RockThrow2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Decapitate",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep1>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Footstep1_g____getter_2_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abe960

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Footstep1_g____getter_2_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546caa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546caa = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Footstep1;
  }
  return *(Il2CppObject **)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep2>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Footstep2_g____getter_3_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abe9d0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Footstep2_g____getter_3_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cab = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Footstep2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 8);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep3>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Footstep3_g____getter_4_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abea40

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Footstep3_g____getter_4_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cac = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Footstep3;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x10);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Swing1>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Swing1_g____getter_5_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abeab0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Swing1_g____getter_5_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cad = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Swing1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x18);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Swing2>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Swing2_g____getter_6_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abeb20

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Swing2_g____getter_6_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cae = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Swing2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x20);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Swing3>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Swing3_g____getter_7_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abeb90

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Swing3_g____getter_7_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546caf = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Swing3;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x28);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt1>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt1_g____getter_8_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abec00

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt1_g____getter_8_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cb0 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Hurt1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x30);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt2>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt2_g____getter_9_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abec70

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt2_g____getter_9_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cb1 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Hurt2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x38);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt3>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt3_g____getter_10_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abece0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt3_g____getter_10_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cb2 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Hurt3;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x40);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt4>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt4_g____getter_11_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abed50

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt4_g____getter_11_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cb3 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Hurt4;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x48);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt5>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt5_g____getter_12_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abedc0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt5_g____getter_12_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cb4 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Hurt5;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x50);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt6>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt6_g____getter_13_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abee30

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt6_g____getter_13_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cb5 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Hurt6;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x58);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt7>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt7_g____getter_14_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abeea0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt7_g____getter_14_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cb6 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Hurt7;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x60);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt8>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt8_g____getter_15_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abef10

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt8_g____getter_15_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cb7 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Hurt8;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x68);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt1>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt1_g____getter_16_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abef80

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt1_g____getter_16_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cb8 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Grunt1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x70);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt2>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt2_g____getter_17_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abeff0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt2_g____getter_17_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cb9 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Grunt2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x78);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt3>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt3_g____getter_18_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abf060

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt3_g____getter_18_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cba = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Grunt3;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x80);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt4>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt4_g____getter_19_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abf0d0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt4_g____getter_19_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cbb = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Grunt4;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x88);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt5>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt5_g____getter_20_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abf140

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt5_g____getter_20_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cbc = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Grunt5;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x90);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt6>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt6_g____getter_21_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abf1b0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt6_g____getter_21_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cbd = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Grunt6;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x98);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt7>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt7_g____getter_22_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abf220

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt7_g____getter_22_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cbe = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Grunt7;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0xa0);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt8>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt8_g____getter_23_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abf290

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt8_g____getter_23_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cbf = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Grunt8;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0xa8);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt9>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt9_g____getter_24_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abf300

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt9_g____getter_24_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cc0 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Grunt9;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0xb0);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt10>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt10_g____getter_25_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abf370

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt10_g____getter_25_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cc1 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Grunt10;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0xb8);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hit>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hit_g____getter_26_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abf3e0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hit_g____getter_26_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cc2 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Hit;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0xc0);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Roar1>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Roar1_g____getter_27_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abf450

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Roar1_g____getter_27_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cc3 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Roar1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 200);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Roar2>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Roar2_g____getter_28_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abf4c0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Roar2_g____getter_28_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cc4 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Roar2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0xd0);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__DeathFall>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__DeathFall_g____getter_29_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abf530

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__DeathFall_g____getter_29_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cc5 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->DeathFall;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0xd8);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__DeathNoFall>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__DeathNoFall_g____getter_30_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abf5a0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__DeathNoFall_g____getter_30_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cc6 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->DeathNoFall;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0xe0);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Steam>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Steam_g____getter_31_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abf610

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Steam_g____getter_31_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cc7 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Steam;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0xe8);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Bite1>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Bite1_g____getter_32_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abf680

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Bite1_g____getter_32_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cc8 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Bite1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0xf0);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Bite2>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Bite2_g____getter_33_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abf6f0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Bite2_g____getter_33_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cc9 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Bite2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0xf8);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Laugh1>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Laugh1_g____getter_34_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abf760

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Laugh1_g____getter_34_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cca = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Laugh1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x100);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Laugh2>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Laugh2_g____getter_35_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abf7d0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Laugh2_g____getter_35_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ccb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546ccb = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Laugh2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x108);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff1>g____getter|36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff1_g____getter_36_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abf840

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff1_g____getter_36_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ccc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546ccc = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Huff1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x110);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff2>g____getter|37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff2_g____getter_37_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abf8b0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff2_g____getter_37_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ccd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546ccd = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Huff2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x118);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff3>g____getter|38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff3_g____getter_38_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abf920

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff3_g____getter_38_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cce = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Huff3;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x120);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff4>g____getter|39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff4_g____getter_39_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abf990

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff4_g____getter_39_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ccf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546ccf = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Huff4;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x128);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff5>g____getter|40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff5_g____getter_40_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abfa00

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff5_g____getter_40_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cd0 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Huff5;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x130);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff6>g____getter|41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff6_g____getter_41_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abfa70

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff6_g____getter_41_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cd1 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Huff6;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x138);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__TitanJump>g____getter|42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__TitanJump_g____getter_42_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abfae0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__TitanJump_g____getter_42_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cd2 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->TitanJump;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x140);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__RockPickup>g____getter|43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__RockPickup_g____getter_43_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abfb50

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__RockPickup_g____getter_43_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cd3 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->RockPickup;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x148);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__RockThrow1>g____getter|44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__RockThrow1_g____getter_44_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abfbc0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__RockThrow1_g____getter_44_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cd4 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->RockThrow1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x150);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__RockThrow2>g____getter|45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__RockThrow2_g____getter_45_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abfc30

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__RockThrow2_g____getter_45_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cd5 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->RockThrow2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x158);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Decapitate>g____getter|46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Decapitate_g____getter_46_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x5abfca0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Decapitate_g____getter_46_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546cd6 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Decapitate;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x160);
}


// CustomLogic.CustomLogicTitanSoundEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTitanSoundEnum___ctor (CustomLogic_CustomLogicTitanSoundEnum_o* __this, const MethodInfo* method);
// 0x5aba0a0

void CustomLogic_CustomLogicTitanSoundEnum___ctor
               (CustomLogic_CustomLogicTitanSoundEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546b9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546b9b = '\x01';
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


// CustomLogic.CustomLogicTitanSoundEnum$$get_Footstep1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Footstep1 (const MethodInfo* method);
// 0x5aba110

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Footstep1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546b9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546b9c = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Footstep1;
  }
  return *(System_String_o **)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Footstep2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Footstep2 (const MethodInfo* method);
// 0x5aba180

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Footstep2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546b9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546b9d = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Footstep2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 8);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Footstep3
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Footstep3 (const MethodInfo* method);
// 0x5aba1f0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Footstep3(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546b9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546b9e = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Footstep3;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x10);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Swing1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Swing1 (const MethodInfo* method);
// 0x5aba260

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Swing1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546b9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546b9f = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Swing1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x18);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Swing2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Swing2 (const MethodInfo* method);
// 0x5aba2d0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Swing2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ba0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546ba0 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Swing2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x20);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Swing3
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Swing3 (const MethodInfo* method);
// 0x5aba340

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Swing3(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ba1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546ba1 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Swing3;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x28);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt1 (const MethodInfo* method);
// 0x5aba3b0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ba2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546ba2 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Hurt1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x30);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt2 (const MethodInfo* method);
// 0x5aba420

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ba3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546ba3 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Hurt2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x38);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt3
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt3 (const MethodInfo* method);
// 0x5aba490

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt3(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ba4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546ba4 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Hurt3;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x40);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt4
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt4 (const MethodInfo* method);
// 0x5aba500

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt4(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ba5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546ba5 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Hurt4;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x48);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt5
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt5 (const MethodInfo* method);
// 0x5aba570

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt5(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ba6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546ba6 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Hurt5;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x50);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt6
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt6 (const MethodInfo* method);
// 0x5aba5e0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt6(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ba7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546ba7 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Hurt6;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x58);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt7
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt7 (const MethodInfo* method);
// 0x5aba650

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt7(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ba8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546ba8 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Hurt7;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x60);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt8
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt8 (const MethodInfo* method);
// 0x5aba6c0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt8(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ba9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546ba9 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Hurt8;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x68);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt1 (const MethodInfo* method);
// 0x5aba730

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546baa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546baa = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Grunt1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x70);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt2 (const MethodInfo* method);
// 0x5aba7a0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bab = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Grunt2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x78);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt3
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt3 (const MethodInfo* method);
// 0x5aba810

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt3(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bac = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Grunt3;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x80);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt4
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt4 (const MethodInfo* method);
// 0x5aba880

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt4(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bad = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Grunt4;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x88);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt5
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt5 (const MethodInfo* method);
// 0x5aba8f0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt5(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bae = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Grunt5;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x90);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt6
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt6 (const MethodInfo* method);
// 0x5aba960

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt6(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546baf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546baf = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Grunt6;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x98);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt7
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt7 (const MethodInfo* method);
// 0x5aba9d0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt7(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bb0 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Grunt7;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0xa0);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt8
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt8 (const MethodInfo* method);
// 0x5abaa40

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt8(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bb1 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Grunt8;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0xa8);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt9
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt9 (const MethodInfo* method);
// 0x5abaab0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt9(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bb2 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Grunt9;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0xb0);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt10
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt10 (const MethodInfo* method);
// 0x5abab20

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt10(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bb3 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Grunt10;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0xb8);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hit
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hit (const MethodInfo* method);
// 0x5abab90

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hit(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bb4 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Hit;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0xc0);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Roar1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Roar1 (const MethodInfo* method);
// 0x5abac00

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Roar1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bb5 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Roar1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 200);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Roar2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Roar2 (const MethodInfo* method);
// 0x5abac70

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Roar2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bb6 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Roar2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0xd0);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_DeathFall
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_DeathFall (const MethodInfo* method);
// 0x5abace0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_DeathFall(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bb7 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->DeathFall;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0xd8);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_DeathNoFall
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_DeathNoFall (const MethodInfo* method);
// 0x5abad50

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_DeathNoFall(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bb8 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->DeathNoFall;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0xe0);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Steam
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Steam (const MethodInfo* method);
// 0x5abadc0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Steam(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bb9 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Steam;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0xe8);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Bite1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Bite1 (const MethodInfo* method);
// 0x5abae30

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Bite1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bba = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Bite1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0xf0);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Bite2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Bite2 (const MethodInfo* method);
// 0x5abaea0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Bite2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bbb = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Bite2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0xf8);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Laugh1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Laugh1 (const MethodInfo* method);
// 0x5abaf10

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Laugh1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bbc = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Laugh1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x100);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Laugh2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Laugh2 (const MethodInfo* method);
// 0x5abaf80

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Laugh2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bbd = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Laugh2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x108);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff1 (const MethodInfo* method);
// 0x5abaff0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bbe = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Huff1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x110);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff2 (const MethodInfo* method);
// 0x5abb060

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bbf = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Huff2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x118);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff3
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff3 (const MethodInfo* method);
// 0x5abb0d0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff3(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bc0 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Huff3;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x120);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff4
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff4 (const MethodInfo* method);
// 0x5abb140

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff4(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bc1 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Huff4;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x128);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff5
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff5 (const MethodInfo* method);
// 0x5abb1b0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff5(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bc2 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Huff5;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x130);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff6
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff6 (const MethodInfo* method);
// 0x5abb220

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff6(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bc3 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Huff6;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x138);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_TitanJump
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_TitanJump (const MethodInfo* method);
// 0x5abb290

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_TitanJump(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bc4 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->TitanJump;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x140);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_RockPickup
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_RockPickup (const MethodInfo* method);
// 0x5abb300

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_RockPickup(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bc5 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->RockPickup;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x148);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_RockThrow1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_RockThrow1 (const MethodInfo* method);
// 0x5abb370

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_RockThrow1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bc6 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->RockThrow1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x150);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_RockThrow2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_RockThrow2 (const MethodInfo* method);
// 0x5abb3e0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_RockThrow2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bc7 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->RockThrow2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x158);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Decapitate
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Decapitate (const MethodInfo* method);
// 0x5abb450

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Decapitate(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07546bc8 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    return TypeInfo_Characters_TitanSounds->static_fields->Decapitate;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x160);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_ClassName (CustomLogic_CustomLogicTitanSoundEnum_o* __this, const MethodInfo* method);
// 0x5abb4c0

System_String_o *
CustomLogic_CustomLogicTitanSoundEnum__get_ClassName
          (CustomLogic_CustomLogicTitanSoundEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546bc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TitanSoundEnum");
    Il2CppMethodInitialized_07546bc9 = '\x01';
  }
  return "TitanSoundEnum";
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTitanSoundEnum__get_IsAbstract (CustomLogic_CustomLogicTitanSoundEnum_o* __this, const MethodInfo* method);
// 0x5abb4f0

bool CustomLogic_CustomLogicTitanSoundEnum__get_IsAbstract
               (CustomLogic_CustomLogicTitanSoundEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTitanSoundEnum__get_IsStatic (CustomLogic_CustomLogicTitanSoundEnum_o* __this, const MethodInfo* method);
// 0x5abb500

bool CustomLogic_CustomLogicTitanSoundEnum__get_IsStatic
               (CustomLogic_CustomLogicTitanSoundEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTitanSoundEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTitanSoundEnum_o* __this, const MethodInfo* method);
// 0x5abb510

bool CustomLogic_CustomLogicTitanSoundEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicTitanSoundEnum_o *__this,MethodInfo *method)

{
  return true;
}


