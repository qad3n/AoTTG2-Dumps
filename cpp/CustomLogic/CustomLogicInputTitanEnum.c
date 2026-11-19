// Type: CustomLogic.CustomLogicInputTitanEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicInputTitanEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicInputTitanEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputTitanEnum_o* CustomLogic_CustomLogicInputTitanEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a8d7f0

CustomLogic_CustomLogicInputTitanEnum_o *
CustomLogic_CustomLogicInputTitanEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicInputTitanEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_0754678f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_0754678f = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputTitanEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  if (Il2CppMethodInitialized_0754676d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754676d = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputTitanEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a8d910

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputTitanEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicInputTitanEnum_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07546790 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBellyFlop");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBody");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBiteF");
    il2cpp_codegen_initialize_runtime_metadata(&"Sprint");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlam");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackHitBack");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBiteL");
    il2cpp_codegen_initialize_runtime_metadata(&"CoverNape1");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackStomp");
    il2cpp_codegen_initialize_runtime_metadata(&"Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackRockThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapLowR");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapHighL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBiteR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackHitFace");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabCore");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapHighR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushChest");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAir");
    il2cpp_codegen_initialize_runtime_metadata(&"Sit");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirFar");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackPunch");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHead");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGround");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHigh");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapLowL");
    Il2CppMethodInitialized_07546790 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x3a2d364f) {
    if (uVar2 < 0x1d298760) {
      if (uVar2 < 0x87de46c) {
        if (uVar2 == 0x3b80da8) {
          bVar1 = System_String__op_Equality(name,"AttackGrabGround",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabGround
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x4aec3cb) {
          bVar1 = System_String__op_Equality(name,"AttackSlapR",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapR
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x87de46b) {
          bVar1 = System_String__op_Equality(name,"AttackPunch",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackPunch
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x12aed9d6) {
        if (uVar2 == 0xe1ef32d) {
          bVar1 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Jump
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x12aed9d5) {
          bVar1 = System_String__op_Equality(name,"AttackSlapL",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapL
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x132daa5f) {
        bVar1 = System_String__op_Equality(name,"AttackBiteR",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteR
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x1d29875f) {
        bVar1 = System_String__op_Equality(name,"AttackSlapHighR",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapHighR
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x292dcd02) {
      if (uVar2 < 0x22ccd731) {
        if (uVar2 == 0x1f2dbd43) {
          bVar1 = System_String__op_Equality(name,"AttackBiteF",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteF
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x22ccd730) {
          bVar1 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Walk
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x28bc2bff) {
        bVar1 = System_String__op_Equality(name,"Sit",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Sit
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x292dcd01) {
        bVar1 = System_String__op_Equality(name,"AttackBiteL",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteL
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x3329aa02) {
      if (uVar2 == 0x2cfbaa3f) {
        bVar1 = System_String__op_Equality(name,"Kick",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Kick
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x3329aa01) {
        bVar1 = System_String__op_Equality(name,"AttackSlapHighL",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapHighL
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x371c1522) {
      bVar1 = System_String__op_Equality(name,"AttackStomp",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackStomp
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x3a2d364e) {
      bVar1 = System_String__op_Equality(name,"AttackBellyFlop",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBellyFlop
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x8304792a) {
    if (uVar2 < 0x6136bd0e) {
      if (uVar2 < 0x4f638210) {
        if (uVar2 == 0x3f31bd4c) {
          bVar1 = System_String__op_Equality(name,"AttackGrabCore",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabCore
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x4f63820f) {
          bVar1 = System_String__op_Equality(name,"AttackGrabBody",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabBody
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x5aec6cb9) {
        bVar1 = System_String__op_Equality(name,"AttackGrabAir",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabAir
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x6136bd0d) {
        bVar1 = System_String__op_Equality(name,"AttackGrabHead",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabHead
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x745f154c) {
      if (uVar2 == 0x6700754b) {
        bVar1 = System_String__op_Equality(name,"AttackHitFace",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackHitFace
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x745f154b) {
        bVar1 = System_String__op_Equality(name,"AttackSlapLowR",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapLowR
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x825f2b55) {
      bVar1 = System_String__op_Equality(name,"AttackSlapLowL",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapLowL
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x83047929) {
      bVar1 = System_String__op_Equality(name,"CoverNape1",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__CoverNape1
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xb502d8c1) {
    if (uVar2 < 0x92d2a9f2) {
      if (uVar2 == 0x838656ac) {
        bVar1 = System_String__op_Equality(name,"AttackSlam",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlam
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x92d2a9f1) {
        bVar1 = System_String__op_Equality(name,"AttackSwing",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSwing
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x9ed36c5b) {
      bVar1 = System_String__op_Equality(name,"AttackGrabHigh",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabHigh
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xb502d8c0) {
      bVar1 = System_String__op_Equality(name,"AttackBrushChest",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBrushChest
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xe8476a12) {
    if (uVar2 == 0xc65e5944) {
      bVar1 = System_String__op_Equality(name,"AttackRockThrow",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackRockThrow
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xe8476a11) {
      bVar1 = System_String__op_Equality(name,"AttackHitBack",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackHitBack
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xe943dc75) {
    bVar1 = System_String__op_Equality(name,"Sprint",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Sprint
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xeda35f22) {
    bVar1 = System_String__op_Equality(name,"AttackGrabAirFar",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabAirFar
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputTitanEnum not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Kick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Kick (const MethodInfo* method);
// 0x5a8e4d0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Kick(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546791 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Kick_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_07546791 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Kick_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x5a8e570

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546792 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Jump_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_07546792 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Jump_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Sit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Sit (const MethodInfo* method);
// 0x5a8e610

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Sit(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546793 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Sit_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_07546793 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Sit_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x5a8e6b0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546794 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Walk_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_07546794 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Walk_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Sprint
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Sprint (const MethodInfo* method);
// 0x5a8e750

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Sprint(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546795 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Sprint_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_07546795 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Sprint_g____getter_6_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__CoverNape1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__CoverNape1 (const MethodInfo* method);
// 0x5a8e7f0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__CoverNape1(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546796 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__CoverNape1_g____getter_7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_07546796 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__CoverNape1_g____getter_7
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackPunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackPunch (const MethodInfo* method);
// 0x5a8e890

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackPunch(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546797 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackPunch_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_07546797 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackPunch_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBellyFlop
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBellyFlop (const MethodInfo* method);
// 0x5a8e930

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBellyFlop(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546798 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBellyFlop_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_07546798 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBellyFlop_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapL (const MethodInfo* method);
// 0x5a8e9d0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapL(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546799 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapL_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_07546799 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapL_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapR (const MethodInfo* method);
// 0x5a8ea70

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapR(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754679a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapR_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_0754679a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapR_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackRockThrow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackRockThrow (const MethodInfo* method);
// 0x5a8eb10

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackRockThrow(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754679b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackRockThrow_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_0754679b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackRockThrow_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBiteL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteL (const MethodInfo* method);
// 0x5a8ebb0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteL(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754679c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBiteL_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_0754679c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBiteL_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBiteF
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteF (const MethodInfo* method);
// 0x5a8ec50

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteF(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754679d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBiteF_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_0754679d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBiteF_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBiteR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteR (const MethodInfo* method);
// 0x5a8ecf0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteR(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754679e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBiteR_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_0754679e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBiteR_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackHitFace
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackHitFace (const MethodInfo* method);
// 0x5a8ed90

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackHitFace(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754679f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackHitFace_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_0754679f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackHitFace_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackHitBack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackHitBack (const MethodInfo* method);
// 0x5a8ee30

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackHitBack(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075467a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackHitBack_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_075467a0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackHitBack_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlam
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlam (const MethodInfo* method);
// 0x5a8eed0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlam(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075467a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlam_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_075467a1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlam_g____getter_1
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackStomp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackStomp (const MethodInfo* method);
// 0x5a8ef70

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackStomp(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075467a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackStomp_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_075467a2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackStomp_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSwing
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSwing (const MethodInfo* method);
// 0x5a8f010

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSwing(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075467a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSwing_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_075467a3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSwing_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirFar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabAirFar (const MethodInfo* method);
// 0x5a8f0b0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabAirFar(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075467a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabAirFar_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_075467a4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabAirFar_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabAir (const MethodInfo* method);
// 0x5a8f150

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabAir(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075467a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabAir_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_075467a5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabAir_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabBody
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabBody (const MethodInfo* method);
// 0x5a8f1f0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabBody(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075467a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabBody_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_075467a6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabBody_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabCore
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabCore (const MethodInfo* method);
// 0x5a8f290

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabCore(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075467a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabCore_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_075467a7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabCore_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabGround
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabGround (const MethodInfo* method);
// 0x5a8f330

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabGround(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075467a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabGround_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_075467a8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabGround_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabHead
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabHead (const MethodInfo* method);
// 0x5a8f3d0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabHead(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075467a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabHead_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_075467a9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabHead_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabHigh
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabHigh (const MethodInfo* method);
// 0x5a8f470

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabHigh(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075467aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabHigh_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_075467aa = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabHigh_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapHighL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapHighL (const MethodInfo* method);
// 0x5a8f510

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapHighL(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075467ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapHighL_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_075467ab = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapHighL_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapHighR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapHighR (const MethodInfo* method);
// 0x5a8f5b0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapHighR(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075467ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapHighR_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_075467ac = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapHighR_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapLowL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapLowL (const MethodInfo* method);
// 0x5a8f650

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapLowL(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075467ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapLowL_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_075467ad = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapLowL_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapLowR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapLowR (const MethodInfo* method);
// 0x5a8f6f0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapLowR(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075467ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapLowR_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_075467ae = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapLowR_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBrushChest
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBrushChest (const MethodInfo* method);
// 0x5a8f790

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBrushChest(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075467af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBrushChest_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_075467af = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBrushChest_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputTitanEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a8f830

void CustomLogic_CustomLogicInputTitanEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_075467b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBellyFlop");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBody");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBiteF");
    il2cpp_codegen_initialize_runtime_metadata(&"Sprint");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlam");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackHitBack");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBiteL");
    il2cpp_codegen_initialize_runtime_metadata(&"CoverNape1");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackStomp");
    il2cpp_codegen_initialize_runtime_metadata(&"Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackRockThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapLowR");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapHighL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBiteR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackHitFace");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabCore");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapHighR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushChest");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAir");
    il2cpp_codegen_initialize_runtime_metadata(&"Sit");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirFar");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackPunch");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHead");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGround");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHigh");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapLowL");
    Il2CppMethodInitialized_075467b0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Kick",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Jump",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Sit",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Walk",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Sprint",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CoverNape1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackPunch",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBellyFlop",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackRockThrow",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBiteL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBiteF",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBiteR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackHitFace",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackHitBack",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlam",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackStomp",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSwing",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabAirFar",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabAir",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabBody",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabCore",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabGround",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabHead",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabHigh",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapHighL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapHighR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapLowL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapLowR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBrushChest",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Kick>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Kick_g____getter_2_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a8fce0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8fcfd: cmp byte ptr [rip + 0x1ab6cdb], 0
// asm:   0x5a8fd04: je 0x5a8fd52

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Kick_g____getter_2_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467b1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469df = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->KickValue;
  }
  return *(Il2CppObject **)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_3_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a8fd90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8fdad: cmp byte ptr [rip + 0x1ab6c2c], 0
// asm:   0x5a8fdb4: je 0x5a8fe03

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_3_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467b2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469e0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->JumpValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 8);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Sit>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Sit_g____getter_4_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a8fe40
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8fe5d: cmp byte ptr [rip + 0x1ab6b7d], 0
// asm:   0x5a8fe64: je 0x5a8feb3

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Sit_g____getter_4_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467b3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469e1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->SitValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x10);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_5_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a8fef0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8ff0d: cmp byte ptr [rip + 0x1ab6ace], 0
// asm:   0x5a8ff14: je 0x5a8ff63

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_5_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467b4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469e2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->WalkValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x18);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Sprint>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Sprint_g____getter_6_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a8ffa0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8ffbd: cmp byte ptr [rip + 0x1ab6a1f], 0
// asm:   0x5a8ffc4: je 0x5a90013

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Sprint_g____getter_6_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467b5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469e3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->SprintValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x20);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__CoverNape1>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__CoverNape1_g____getter_7_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a90050
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a9006d: cmp byte ptr [rip + 0x1ab6970], 0
// asm:   0x5a90074: je 0x5a900c3

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__CoverNape1_g____getter_7_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467b6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469e4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->CoverNape1Value;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x28);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackPunch>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackPunch_g____getter_8_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a90100
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a9011d: cmp byte ptr [rip + 0x1ab68c1], 0
// asm:   0x5a90124: je 0x5a90173

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackPunch_g____getter_8_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467b7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469e5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackPunchValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x30);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBellyFlop>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBellyFlop_g____getter_9_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a901b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a901cd: cmp byte ptr [rip + 0x1ab6812], 0
// asm:   0x5a901d4: je 0x5a90223

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBellyFlop_g____getter_9_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467b8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469e6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBellyFlopValue
    ;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x38);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapL>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapL_g____getter_10_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a90260
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a9027d: cmp byte ptr [rip + 0x1ab6763], 0
// asm:   0x5a90284: je 0x5a902d3

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapL_g____getter_10_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467b9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469e7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapLValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x40);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapR>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapR_g____getter_11_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a90310
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a9032d: cmp byte ptr [rip + 0x1ab66b4], 0
// asm:   0x5a90334: je 0x5a90383

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapR_g____getter_11_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467ba = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469e8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapRValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x48);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackRockThrow>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackRockThrow_g____getter_12_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a903c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a903dd: cmp byte ptr [rip + 0x1ab6605], 0
// asm:   0x5a903e4: je 0x5a90433

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackRockThrow_g____getter_12_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467bb = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469e9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackRockThrowValue
    ;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x50);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBiteL>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBiteL_g____getter_13_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a90470
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a9048d: cmp byte ptr [rip + 0x1ab6556], 0
// asm:   0x5a90494: je 0x5a904e3

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBiteL_g____getter_13_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467bc = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469ea = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBiteLValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x58);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBiteF>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBiteF_g____getter_14_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a90520
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a9053d: cmp byte ptr [rip + 0x1ab64a7], 0
// asm:   0x5a90544: je 0x5a90593

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBiteF_g____getter_14_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467bd = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469eb = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBiteFValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x60);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBiteR>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBiteR_g____getter_15_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a905d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a905ed: cmp byte ptr [rip + 0x1ab63f8], 0
// asm:   0x5a905f4: je 0x5a90643

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBiteR_g____getter_15_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467be = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469ec = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBiteRValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x68);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackHitFace>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackHitFace_g____getter_16_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a90680
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a9069d: cmp byte ptr [rip + 0x1ab6349], 0
// asm:   0x5a906a4: je 0x5a906f3

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackHitFace_g____getter_16_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467bf = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469ed = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackHitFaceValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x70);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackHitBack>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackHitBack_g____getter_17_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a90730
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a9074d: cmp byte ptr [rip + 0x1ab629a], 0
// asm:   0x5a90754: je 0x5a907a3

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackHitBack_g____getter_17_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467c0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469ee = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackHitBackValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x78);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlam>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlam_g____getter_18_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a907e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a907fd: cmp byte ptr [rip + 0x1ab61eb], 0
// asm:   0x5a90804: je 0x5a90856

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlam_g____getter_18_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467c1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469ef = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlamValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x80);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackStomp>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_19_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a90890
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a908ad: cmp byte ptr [rip + 0x1ab613c], 0
// asm:   0x5a908b4: je 0x5a90906

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_19_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467c2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469f0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackStompValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x88);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSwing>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSwing_g____getter_20_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a90940
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a9095d: cmp byte ptr [rip + 0x1ab608d], 0
// asm:   0x5a90964: je 0x5a909b6

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSwing_g____getter_20_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467c3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469f1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSwingValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x90);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirFar>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabAirFar_g____getter_21_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a909f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a90a0d: cmp byte ptr [rip + 0x1ab5fde], 0
// asm:   0x5a90a14: je 0x5a90a66

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabAirFar_g____getter_21_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467c4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469f2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabAirFarValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x98);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAir>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabAir_g____getter_22_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a90aa0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a90abd: cmp byte ptr [rip + 0x1ab5f2f], 0
// asm:   0x5a90ac4: je 0x5a90b16

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabAir_g____getter_22_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467c5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469f3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabAirValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0xa0);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBody>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabBody_g____getter_23_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a90b50
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a90b6d: cmp byte ptr [rip + 0x1ab5e80], 0
// asm:   0x5a90b74: je 0x5a90bc6

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabBody_g____getter_23_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467c6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469f4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabBodyValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0xa8);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabCore>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabCore_g____getter_24_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a90c00
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a90c1d: cmp byte ptr [rip + 0x1ab5dd1], 0
// asm:   0x5a90c24: je 0x5a90c76

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabCore_g____getter_24_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467c7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469f5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabCoreValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0xb0);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGround>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabGround_g____getter_25_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a90cb0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a90ccd: cmp byte ptr [rip + 0x1ab5d22], 0
// asm:   0x5a90cd4: je 0x5a90d26

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabGround_g____getter_25_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467c8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469f6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabGroundValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0xb8);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHead>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabHead_g____getter_26_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a90d60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a90d7d: cmp byte ptr [rip + 0x1ab5c73], 0
// asm:   0x5a90d84: je 0x5a90dd6

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabHead_g____getter_26_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467c9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469f7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabHeadValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0xc0);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHigh>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabHigh_g____getter_27_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a90e10
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a90e2d: cmp byte ptr [rip + 0x1ab5bc4], 0
// asm:   0x5a90e34: je 0x5a90e86

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabHigh_g____getter_27_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467ca = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469f8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabHighValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 200);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapHighL>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapHighL_g____getter_28_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a90ec0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a90edd: cmp byte ptr [rip + 0x1ab5b15], 0
// asm:   0x5a90ee4: je 0x5a90f36

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapHighL_g____getter_28_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467cb = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469f9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapHighLValue
    ;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0xd0);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapHighR>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapHighR_g____getter_29_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a90f70
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a90f8d: cmp byte ptr [rip + 0x1ab5a66], 0
// asm:   0x5a90f94: je 0x5a90fe6

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapHighR_g____getter_29_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467cc = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469fa = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapHighRValue
    ;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0xd8);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapLowL>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapLowL_g____getter_30_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a91020
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a9103d: cmp byte ptr [rip + 0x1ab59b7], 0
// asm:   0x5a91044: je 0x5a91096

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapLowL_g____getter_30_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467cd = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469fb = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapLowLValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0xe0);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapLowR>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapLowR_g____getter_31_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a910d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a910ed: cmp byte ptr [rip + 0x1ab5908], 0
// asm:   0x5a910f4: je 0x5a91146

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapLowR_g____getter_31_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467ce = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469fc = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapLowRValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0xe8);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBrushChest>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBrushChest_g____getter_32_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x5a91180
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a9119d: cmp byte ptr [rip + 0x1ab5859], 0
// asm:   0x5a911a4: je 0x5a911f6

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBrushChest_g____getter_32_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075467cf = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_075469fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_075469fd = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBrushChestValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0xf0);
}


// CustomLogic.CustomLogicInputTitanEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputTitanEnum___ctor (CustomLogic_CustomLogicInputTitanEnum_o* __this, const MethodInfo* method);
// 0x5a8c390

void CustomLogic_CustomLogicInputTitanEnum___ctor
               (CustomLogic_CustomLogicInputTitanEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754676d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754676d = '\x01';
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


// CustomLogic.CustomLogicInputTitanEnum$$get_Kick
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_Kick (const MethodInfo* method);
// 0x5a8c400

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_Kick(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754676e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_0754676e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->KickValue;
  }
  return *(System_String_o **)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_Jump (const MethodInfo* method);
// 0x5a8c470

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_Jump(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754676f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_0754676f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->JumpValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 8);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_Sit
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_Sit (const MethodInfo* method);
// 0x5a8c4e0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_Sit(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546770 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_07546770 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->SitValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x10);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_Walk (const MethodInfo* method);
// 0x5a8c550

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_Walk(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546771 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_07546771 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->WalkValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x18);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_Sprint
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_Sprint (const MethodInfo* method);
// 0x5a8c5c0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_Sprint(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546772 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_07546772 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->SprintValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x20);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_CoverNape1
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_CoverNape1 (const MethodInfo* method);
// 0x5a8c630

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_CoverNape1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546773 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_07546773 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->CoverNape1Value;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x28);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackPunch
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackPunch (const MethodInfo* method);
// 0x5a8c6a0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackPunch(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546774 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_07546774 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackPunchValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x30);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackBellyFlop
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackBellyFlop (const MethodInfo* method);
// 0x5a8c710

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackBellyFlop(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546775 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_07546775 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBellyFlopValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x38);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapL
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapL (const MethodInfo* method);
// 0x5a8c780

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapL(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546776 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_07546776 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapLValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x40);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapR
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapR (const MethodInfo* method);
// 0x5a8c7f0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapR(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546777 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_07546777 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapRValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x48);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackRockThrow
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackRockThrow (const MethodInfo* method);
// 0x5a8c860

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackRockThrow(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546778 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_07546778 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackRockThrowValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x50);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackBiteL
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteL (const MethodInfo* method);
// 0x5a8c8d0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteL(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546779 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_07546779 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBiteLValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x58);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackBiteF
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteF (const MethodInfo* method);
// 0x5a8c940

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteF(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754677a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_0754677a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBiteFValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x60);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackBiteR
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteR (const MethodInfo* method);
// 0x5a8c9b0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteR(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754677b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_0754677b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBiteRValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x68);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackHitFace
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackHitFace (const MethodInfo* method);
// 0x5a8ca20

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackHitFace(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754677c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_0754677c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackHitFaceValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x70);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackHitBack
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackHitBack (const MethodInfo* method);
// 0x5a8ca90

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackHitBack(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754677d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_0754677d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackHitBackValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x78);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlam
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlam (const MethodInfo* method);
// 0x5a8cb00

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlam(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754677e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_0754677e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlamValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x80);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackStomp
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackStomp (const MethodInfo* method);
// 0x5a8cb70

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackStomp(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754677f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_0754677f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackStompValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x88);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSwing
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSwing (const MethodInfo* method);
// 0x5a8cbe0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSwing(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546780 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_07546780 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSwingValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x90);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabAirFar
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabAirFar (const MethodInfo* method);
// 0x5a8cc50

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabAirFar(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546781 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_07546781 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabAirFarValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0x98);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabAir
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabAir (const MethodInfo* method);
// 0x5a8ccc0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabAir(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546782 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_07546782 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabAirValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0xa0);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabBody
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabBody (const MethodInfo* method);
// 0x5a8cd30

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabBody(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546783 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_07546783 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabBodyValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0xa8);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabCore
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabCore (const MethodInfo* method);
// 0x5a8cda0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabCore(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546784 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_07546784 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabCoreValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0xb0);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabGround
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabGround (const MethodInfo* method);
// 0x5a8ce10

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabGround(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546785 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_07546785 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabGroundValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0xb8);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabHead
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabHead (const MethodInfo* method);
// 0x5a8ce80

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabHead(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546786 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_07546786 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabHeadValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0xc0);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabHigh
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabHigh (const MethodInfo* method);
// 0x5a8cef0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabHigh(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546787 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_07546787 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabHighValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 200);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapHighL
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapHighL (const MethodInfo* method);
// 0x5a8cf60

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapHighL(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546788 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_07546788 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapHighLValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0xd0);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapHighR
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapHighR (const MethodInfo* method);
// 0x5a8cfd0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapHighR(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546789 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_07546789 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapHighRValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0xd8);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapLowL
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapLowL (const MethodInfo* method);
// 0x5a8d040

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapLowL(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754678a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_0754678a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapLowLValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0xe0);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapLowR
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapLowR (const MethodInfo* method);
// 0x5a8d0b0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapLowR(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754678b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_0754678b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapLowRValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0xe8);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackBrushChest
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackBrushChest (const MethodInfo* method);
// 0x5a8d120

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackBrushChest(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754678c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_0754678c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBrushChestValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum)->static_fields + 0xf0);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_ClassName (CustomLogic_CustomLogicInputTitanEnum_o* __this, const MethodInfo* method);
// 0x5a8d190

System_String_o *
CustomLogic_CustomLogicInputTitanEnum__get_ClassName
          (CustomLogic_CustomLogicInputTitanEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754678d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"InputTitanEnum");
    Il2CppMethodInitialized_0754678d = '\x01';
  }
  return "InputTitanEnum";
}


// CustomLogic.CustomLogicInputTitanEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputTitanEnum__get_IsAbstract (CustomLogic_CustomLogicInputTitanEnum_o* __this, const MethodInfo* method);
// 0x5a8d1c0

bool CustomLogic_CustomLogicInputTitanEnum__get_IsAbstract
               (CustomLogic_CustomLogicInputTitanEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputTitanEnum__get_IsStatic (CustomLogic_CustomLogicInputTitanEnum_o* __this, const MethodInfo* method);
// 0x5a8d1d0

bool CustomLogic_CustomLogicInputTitanEnum__get_IsStatic
               (CustomLogic_CustomLogicInputTitanEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputTitanEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputTitanEnum_o* __this, const MethodInfo* method);
// 0x5a8d1e0

bool CustomLogic_CustomLogicInputTitanEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicInputTitanEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicInputTitanEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputTitanEnum___cctor (const MethodInfo* method);
// 0x5a8d1f0

void CustomLogic_CustomLogicInputTitanEnum___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicInputTitanEnum_StaticFields *pCVar1;
  
  if (Il2CppMethodInitialized_0754678e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackHitFace");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackGrabHead");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackBrushChest");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackPunch");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackBiteR");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackSlapR");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/Sprint");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackSlapHighL");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackGrabHigh");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackBellyFlop");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackBiteL");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackGrabAir");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackSlapHighR");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackSlapLowL");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackGrabCore");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackSlapL");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackGrabAirFar");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackSlam");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/Sit");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/CoverNape1");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackGrabBody");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackStomp");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackHitBack");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackBiteF");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackRockThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackSlapLowR");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackGrabGround");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/Jump");
    Il2CppMethodInitialized_0754678e = '\x01';
  }
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->KickValue = "Titan/Kick";
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->KickValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->JumpValue = "Titan/Jump";
  Il2CppCodeGenWriteBarrier(&pCVar1->JumpValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->SitValue = "Titan/Sit";
  Il2CppCodeGenWriteBarrier(&pCVar1->SitValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->WalkValue = "Titan/Walk";
  Il2CppCodeGenWriteBarrier(&pCVar1->WalkValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->SprintValue = "Titan/Sprint";
  Il2CppCodeGenWriteBarrier(&pCVar1->SprintValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->CoverNape1Value = "Titan/CoverNape1";
  Il2CppCodeGenWriteBarrier(&pCVar1->CoverNape1Value);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackPunchValue = "Titan/AttackPunch";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackPunchValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackBellyFlopValue = "Titan/AttackBellyFlop";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackBellyFlopValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackSlapLValue = "Titan/AttackSlapL";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackSlapLValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackSlapRValue = "Titan/AttackSlapR";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackSlapRValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackRockThrowValue = "Titan/AttackRockThrow";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackRockThrowValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackBiteLValue = "Titan/AttackBiteL";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackBiteLValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackBiteFValue = "Titan/AttackBiteF";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackBiteFValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackBiteRValue = "Titan/AttackBiteR";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackBiteRValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackHitFaceValue = "Titan/AttackHitFace";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackHitFaceValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackHitBackValue = "Titan/AttackHitBack";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackHitBackValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackSlamValue = "Titan/AttackSlam";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackSlamValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackStompValue = "Titan/AttackStomp";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackStompValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackSwingValue = "Titan/AttackSwing";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackSwingValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackGrabAirFarValue = "Titan/AttackGrabAirFar";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackGrabAirFarValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackGrabAirValue = "Titan/AttackGrabAir";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackGrabAirValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackGrabBodyValue = "Titan/AttackGrabBody";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackGrabBodyValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackGrabCoreValue = "Titan/AttackGrabCore";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackGrabCoreValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackGrabGroundValue = "Titan/AttackGrabGround";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackGrabGroundValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackGrabHeadValue = "Titan/AttackGrabHead";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackGrabHeadValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackGrabHighValue = "Titan/AttackGrabHigh";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackGrabHighValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackSlapHighLValue = "Titan/AttackSlapHighL";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackSlapHighLValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackSlapHighRValue = "Titan/AttackSlapHighR";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackSlapHighRValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackSlapLowLValue = "Titan/AttackSlapLowL";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackSlapLowLValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackSlapLowRValue = "Titan/AttackSlapLowR";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackSlapLowRValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields;
  pCVar1->AttackBrushChestValue = "Titan/AttackBrushChest";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackBrushChestValue);
  return;
}


