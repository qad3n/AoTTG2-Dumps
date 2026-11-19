// Type: CustomLogic.CustomLogicTitanAnimationEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicTitanAnimationEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTitanAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTitanAnimationEnum_o* CustomLogic_CustomLogicTitanAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5ab2150

CustomLogic_CustomLogicTitanAnimationEnum_o *
CustomLogic_CustomLogicTitanAnimationEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546b35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum);
    Il2CppMethodInitialized_07546b35 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTitanAnimationEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum);
  if (Il2CppMethodInitialized_07546ad9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546ad9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicTitanAnimationEnum_o *)__this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5ab2270

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicTitanAnimationEnum_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07546b36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGroundBackL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBellyFlop");
    il2cpp_codegen_initialize_runtime_metadata(&"StunRight");
    il2cpp_codegen_initialize_runtime_metadata(&"FallCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushChestL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushChestR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabCoreR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBiteF");
    il2cpp_codegen_initialize_runtime_metadata(&"ArmHurtR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackJumpCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHighR");
    il2cpp_codegen_initialize_runtime_metadata(&"SitIdleCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteNod");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlam");
    il2cpp_codegen_initialize_runtime_metadata(&"DieBlow");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSwingL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabStomachL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackJump");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteShake");
    il2cpp_codegen_initialize_runtime_metadata(&"SitFallCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"RunAbnormal");
    il2cpp_codegen_initialize_runtime_metadata(&"DieFront");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBellyFlopGetup");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackHitBack");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSwingR");
    il2cpp_codegen_initialize_runtime_metadata(&"DieGround");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackEatL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirFarL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBiteL");
    il2cpp_codegen_initialize_runtime_metadata(&"JumpCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabCoreL");
    il2cpp_codegen_initialize_runtime_metadata(&"CoverNape");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackStomp");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackEatR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackRockThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"Land");
    il2cpp_codegen_initialize_runtime_metadata(&"DieHeadOff");
    il2cpp_codegen_initialize_runtime_metadata(&"BlindCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHeadBackL");
    il2cpp_codegen_initialize_runtime_metadata(&"DieCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapLowR");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"Turn90R");
    il2cpp_codegen_initialize_runtime_metadata(&"Blind");
    il2cpp_codegen_initialize_runtime_metadata(&"Turn90L");
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapHighL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHeadBackR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBiteR");
    il2cpp_codegen_initialize_runtime_metadata(&"StunLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"SitIdle");
    il2cpp_codegen_initialize_runtime_metadata(&"RunCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"SitBlind");
    il2cpp_codegen_initialize_runtime_metadata(&"Turn90RCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHighL");
    il2cpp_codegen_initialize_runtime_metadata(&"IdleCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackHitFace");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapHighR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHeadFrontL");
    il2cpp_codegen_initialize_runtime_metadata(&"Turn90LCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirFarR");
    il2cpp_codegen_initialize_runtime_metadata(&"DieSit");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirR");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGroundFrontL");
    il2cpp_codegen_initialize_runtime_metadata(&"SitFall");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabStomachR");
    il2cpp_codegen_initialize_runtime_metadata(&"SitDown");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGroundFrontR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackPunch");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteLaugh");
    il2cpp_codegen_initialize_runtime_metadata(&"ArmHurtL");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackPunchCombo");
    il2cpp_codegen_initialize_runtime_metadata(&"SitUpCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"DieBack");
    il2cpp_codegen_initialize_runtime_metadata(&"Fall");
    il2cpp_codegen_initialize_runtime_metadata(&"LandCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"SprintAbnormal");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGroundBackR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
    il2cpp_codegen_initialize_runtime_metadata(&"SitUp");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBackR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBackL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHeadFrontR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapLowL");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteRoar");
    Il2CppMethodInitialized_07546b36 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x7cdffe18) {
    if (uVar2 < 0x3a2d364f) {
      if (uVar2 < 0x132daa60) {
        if (uVar2 < 0xcb00c2e) {
          if (uVar2 < 0x87de46c) {
            if (uVar2 == 0x4aec3cb) {
              bVar1 = System_String__op_Equality(name,"AttackSlapR",(MethodInfo *)0x0);
              if (bVar1) {
                pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
                if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
                }
                pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapR
                                   ((MethodInfo *)pCVar5);
                return (CustomLogic_ICLMemberBinding_o *)pCVar3;
              }
            }
            else if (uVar2 == 0x87de46b) {
              bVar1 = System_String__op_Equality(name,"AttackPunch",(MethodInfo *)0x0);
              if (bVar1) {
                pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
                if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
                }
                pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackPunch
                                   ((MethodInfo *)pCVar5);
                return (CustomLogic_ICLMemberBinding_o *)pCVar3;
              }
            }
          }
          else if (uVar2 == 0xa250c8c) {
            bVar1 = System_String__op_Equality(name,"DieFront",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieFront
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0xb04c157) {
            bVar1 = System_String__op_Equality(name,"AttackGrabGroundFrontR",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundFrontR
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0xcb00c2d) {
            bVar1 = System_String__op_Equality(name,"AttackGrabGroundBackL",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundBackL
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 < 0xfd3122c) {
          if (uVar2 == 0xd2f75f1) {
            bVar1 = System_String__op_Equality(name,"AttackGrabAirR",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirR
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0xe1ef32d) {
            bVar1 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Jump
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0xfd3122b) {
            bVar1 = System_String__op_Equality(name,"AttackGrabHighR",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHighR
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x1104cac9) {
          bVar1 = System_String__op_Equality(name,"AttackGrabGroundFrontL",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundFrontL
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x12aed9d5) {
          bVar1 = System_String__op_Equality(name,"AttackSlapL",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapL
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x132daa5f) {
          bVar1 = System_String__op_Equality(name,"AttackBiteR",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteR
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x22ccd731) {
        if (uVar2 < 0x1d298760) {
          if (uVar2 == 0x172f85af) {
            bVar1 = System_String__op_Equality(name,"AttackGrabAirL",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirL
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x1d29875f) {
            bVar1 = System_String__op_Equality(name,"AttackSlapHighR",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapHighR
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x1dd32835) {
          bVar1 = System_String__op_Equality(name,"AttackGrabHighL",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHighL
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x1f2dbd43) {
          bVar1 = System_String__op_Equality(name,"AttackBiteF",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteF
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x22ccd730) {
          bVar1 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Walk
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x292dcd02) {
        if (uVar2 == 0x25093a4c) {
          bVar1 = System_String__op_Equality(name,"ArmHurtL",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__ArmHurtL
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x27bb25ca) {
          bVar1 = System_String__op_Equality(name,"SitFallCrawler",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitFallCrawler
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x292dcd01) {
          bVar1 = System_String__op_Equality(name,"AttackBiteL",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteL
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x3329aa01) {
        bVar1 = System_String__op_Equality(name,"AttackSlapHighL",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapHighL
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x371c1522) {
        bVar1 = System_String__op_Equality(name,"AttackStomp",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackStomp
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x3a2d364e) {
        bVar1 = System_String__op_Equality(name,"AttackBellyFlop",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBellyFlop
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x5d992b42) {
      if (uVar2 < 0x425a9db8) {
        if (uVar2 < 0x3d9daaed) {
          if (uVar2 == 0x3b095cee) {
            bVar1 = System_String__op_Equality(name,"ArmHurtR",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__ArmHurtR
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x3d9daaec) {
            bVar1 = System_String__op_Equality(name,"StunLeft",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__StunLeft
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x3db5a1bf) {
          bVar1 = System_String__op_Equality(name,"EmoteShake",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteShake
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x3fd565eb) {
          bVar1 = System_String__op_Equality(name,"DieSit",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieSit
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x425a9db7) {
          bVar1 = System_String__op_Equality(name,"AttackBellyFlopGetup",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBellyFlopGetup
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x45aa17b4) {
        if (uVar2 == 0x426f593c) {
          bVar1 = System_String__op_Equality(name,"EmoteLaugh",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteLaugh
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x45516aaa) {
          bVar1 = System_String__op_Equality(name,"SitUp",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitUp
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x45aa17b3) {
          bVar1 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Idle
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x518c7bc2) {
        bVar1 = System_String__op_Equality(name,"DieGround",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieGround
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x54623468) {
        bVar1 = System_String__op_Equality(name,"FallCrawler",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__FallCrawler
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x5d992b41) {
        bVar1 = System_String__op_Equality(name,"Stun",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Stun
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x717ed71c) {
      if (uVar2 < 0x69fd27f7) {
        if (uVar2 == 0x5f7ebac5) {
          bVar1 = System_String__op_Equality(name,"Turn90L",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90L
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x6700754b) {
          bVar1 = System_String__op_Equality(name,"AttackHitFace",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackHitFace
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x69fd27f6) {
          bVar1 = System_String__op_Equality(name,"RunAbnormal",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__RunAbnormal
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x6ada9f85) {
        bVar1 = System_String__op_Equality(name,"DieBlow",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieBlow
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x70cfd606) {
        bVar1 = System_String__op_Equality(name,"RunCrawler",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__RunCrawler
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x717ed71b) {
        bVar1 = System_String__op_Equality(name,"Turn90R",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90R
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x7b00bc81) {
      if (uVar2 == 0x729a03b7) {
        bVar1 = System_String__op_Equality(name,"AttackJumpCrawler",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackJumpCrawler
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x745f154b) {
        bVar1 = System_String__op_Equality(name,"AttackSlapLowR",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapLowR
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x7b00bc80) {
        bVar1 = System_String__op_Equality(name,"Fall",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Fall
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x7b128cf9) {
      bVar1 = System_String__op_Equality(name,"StunRight",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__StunRight
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x7b4c8700) {
      bVar1 = System_String__op_Equality(name,"AttackGrabCoreL",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabCoreL
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x7cdffe17) {
      bVar1 = System_String__op_Equality(name,"Turn90LCrawler",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90LCrawler
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xac717d26) {
    if (uVar2 < 0x882f3d51) {
      if (uVar2 < 0x838656ad) {
        if (uVar2 < 0x7ee23ea7) {
          if (uVar2 == 0x7e4b9533) {
            bVar1 = System_String__op_Equality(name,"AttackEatL",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackEatL
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x7ee23ea6) {
            bVar1 = System_String__op_Equality(name,"AttackGrabHeadFrontR",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadFrontR
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x825f2b55) {
          bVar1 = System_String__op_Equality(name,"AttackSlapLowL",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapLowL
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x838656ac) {
          bVar1 = System_String__op_Equality(name,"AttackSlam",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlam
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x7f7ae464) {
          bVar1 = System_String__op_Equality(name,"AttackBrushChestL",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushChestL
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x862f3a2b) {
        if (uVar2 == 0x84fc6844) {
          bVar1 = System_String__op_Equality(name,"AttackGrabBackL",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBackL
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x857aedd6) {
          bVar1 = System_String__op_Equality(name,"AttackBrushChestR",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushChestR
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x862f3a2a) {
          bVar1 = System_String__op_Equality(name,"AttackGrabAirFarL",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirFarL
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x86827373) {
        bVar1 = System_String__op_Equality(name,"DieCrawler",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieCrawler
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x87b6990b) {
        bVar1 = System_String__op_Equality(name,"SitDown",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitDown
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x882f3d50) {
        bVar1 = System_String__op_Equality(name,"AttackGrabAirFarR",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirFarR
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x994cb63b) {
      if (uVar2 < 0x912e23bf) {
        if (uVar2 == 0x8afc71b6) {
          bVar1 = System_String__op_Equality(name,"AttackGrabBackR",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBackR
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x912e23be) {
          bVar1 = System_String__op_Equality(name,"SitFall",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitFall
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x972856bf) {
        bVar1 = System_String__op_Equality(name,"SitIdleCrawler",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitIdleCrawler
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x98e26794) {
        bVar1 = System_String__op_Equality(name,"AttackGrabHeadFrontL",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadFrontL
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x994cb63a) {
        bVar1 = System_String__op_Equality(name,"AttackGrabCoreR",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabCoreR
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0xa47f6adf) {
      if (uVar2 == 0x99ca44b9) {
        bVar1 = System_String__op_Equality(name,"IdleCrawler",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__IdleCrawler
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x9c4bc46d) {
        bVar1 = System_String__op_Equality(name,"AttackEatR",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackEatR
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xa47f6ade) {
        bVar1 = System_String__op_Equality(name,"DieBack",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieBack
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xa9381ee1) {
      bVar1 = System_String__op_Equality(name,"Turn90RCrawler",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90RCrawler
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xaa02d909) {
      bVar1 = System_String__op_Equality(name,"SprintAbnormal",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SprintAbnormal
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xac717d25) {
      bVar1 = System_String__op_Equality(name,"AttackJump",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackJump
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xd0f70cad) {
    if (uVar2 < 0xc2cea647) {
      if (uVar2 < 0xbe6b9bc0) {
        if (uVar2 == 0xb8819b82) {
          bVar1 = System_String__op_Equality(name,"SitBlind",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitBlind
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0xbe6b9bbf) {
          bVar1 = System_String__op_Equality(name,"JumpCrawler",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__JumpCrawler
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0xc0fd15a3) {
        bVar1 = System_String__op_Equality(name,"AttackPunchCombo",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackPunchCombo
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xc1018924) {
        bVar1 = System_String__op_Equality(name,"EmoteNod",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteNod
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xc2cea646) {
        bVar1 = System_String__op_Equality(name,"SitUpCrawler",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitUpCrawler
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0xc6f75898) {
      if (uVar2 == 0xc4a10b99) {
        bVar1 = System_String__op_Equality(name,"AttackSwingR",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSwingR
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xc65e5944) {
        bVar1 = System_String__op_Equality(name,"AttackRockThrow",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackRockThrow
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xc6f75897) {
        bVar1 = System_String__op_Equality(name,"EmoteRoar",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xc8f30ee7) {
      bVar1 = System_String__op_Equality(name,"AttackKick",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackKick
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xcf14e204) {
      bVar1 = System_String__op_Equality(name,"AttackGrabStomachL",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabStomachL
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xd0f70cac) {
      bVar1 = System_String__op_Equality(name,"DieHeadOff",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieHeadOff
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xe6b2342e) {
    if (uVar2 < 0xd8f110d5) {
      if (uVar2 == 0xd514eb76) {
        bVar1 = System_String__op_Equality(name,"AttackGrabStomachR",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabStomachR
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xd5e03fe2) {
        bVar1 = System_String__op_Equality(name,"CoverNape",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__CoverNape
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xd8f110d4) {
        bVar1 = System_String__op_Equality(name,"LandCrawler",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__LandCrawler
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xdea13487) {
      bVar1 = System_String__op_Equality(name,"AttackSwingL",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSwingL
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xe4d66f54) {
      bVar1 = System_String__op_Equality(name,"Blind",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Blind
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xe6b2342d) {
      bVar1 = System_String__op_Equality(name,"SitIdle",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitIdle
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xee1682bd) {
    if (uVar2 == 0xe8476a11) {
      bVar1 = System_String__op_Equality(name,"AttackHitBack",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackHitBack
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xe89df278) {
      bVar1 = System_String__op_Equality(name,"AttackGrabHeadBackR",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadBackR
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xee1682bc) {
      bVar1 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Land
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xeeafdcf3) {
    bVar1 = System_String__op_Equality(name,"AttackGrabGroundBackR",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundBackR
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xf69e0882) {
    bVar1 = System_String__op_Equality(name,"AttackGrabHeadBackL",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadBackL
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xfd07560c) {
    bVar1 = System_String__op_Equality(name,"BlindCrawler",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__BlindCrawler
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTitanAnimationEnum not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Idle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Idle (const MethodInfo* method);
// 0x5ab42f0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Idle(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b37 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__RunAbnormal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__RunAbnormal (const MethodInfo* method);
// 0x5ab4390

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__RunAbnormal(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__RunAbnormal_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b38 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__RunAbnormal_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SprintAbnormal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SprintAbnormal (const MethodInfo* method);
// 0x5ab4430

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SprintAbnormal
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SprintAbnormal_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b39 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SprintAbnormal_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__RunCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__RunCrawler (const MethodInfo* method);
// 0x5ab44d0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__RunCrawler(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__RunCrawler_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b3a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__RunCrawler_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__IdleCrawler (const MethodInfo* method);
// 0x5ab4570

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__IdleCrawler(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__IdleCrawler_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b3b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__IdleCrawler_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__JumpCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__JumpCrawler (const MethodInfo* method);
// 0x5ab4610

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__JumpCrawler(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__JumpCrawler_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b3c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__JumpCrawler_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__FallCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__FallCrawler (const MethodInfo* method);
// 0x5ab46b0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__FallCrawler(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__FallCrawler_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b3d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__FallCrawler_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__LandCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__LandCrawler (const MethodInfo* method);
// 0x5ab4750

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__LandCrawler(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__LandCrawler_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b3e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__LandCrawler_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x5ab47f0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b3f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_10
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x5ab4890

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_11
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b40 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_11
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Fall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Fall (const MethodInfo* method);
// 0x5ab4930

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Fall(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_12
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b41 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_12
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x5ab49d0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Land(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_13
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b42 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_13
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Stun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Stun (const MethodInfo* method);
// 0x5ab4a70

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Stun(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Stun_g____getter_14
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b43 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Stun_g____getter_14
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__StunLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__StunLeft (const MethodInfo* method);
// 0x5ab4b10

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__StunLeft(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__StunLeft_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b44 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__StunLeft_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__StunRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__StunRight (const MethodInfo* method);
// 0x5ab4bb0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__StunRight(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__StunRight_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b45 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__StunRight_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieBack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieBack (const MethodInfo* method);
// 0x5ab4c50

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieBack(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieBack_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b46 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieBack_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieFront
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieFront (const MethodInfo* method);
// 0x5ab4cf0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieFront(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieFront_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b47 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieFront_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieGround
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieGround (const MethodInfo* method);
// 0x5ab4d90

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieGround(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieGround_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b48 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieGround_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieCrawler (const MethodInfo* method);
// 0x5ab4e30

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieCrawler(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieCrawler_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b49 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieCrawler_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieSit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieSit (const MethodInfo* method);
// 0x5ab4ed0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieSit(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieSit_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b4a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieSit_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieBlow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieBlow (const MethodInfo* method);
// 0x5ab4f70

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieBlow(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieBlow_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b4b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieBlow_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieHeadOff
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieHeadOff (const MethodInfo* method);
// 0x5ab5010

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieHeadOff(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieHeadOff_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b4c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieHeadOff_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackPunchCombo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackPunchCombo (const MethodInfo* method);
// 0x5ab50b0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackPunchCombo
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackPunchCombo_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b4d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackPunchCombo_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackPunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackPunch (const MethodInfo* method);
// 0x5ab5150

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackPunch(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackPunch_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b4e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackPunch_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlam
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlam (const MethodInfo* method);
// 0x5ab51f0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlam(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlam_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b4f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlam_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBellyFlop
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBellyFlop (const MethodInfo* method);
// 0x5ab5290

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBellyFlop
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBellyFlop_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b50 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBellyFlop_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBellyFlopGetup
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBellyFlopGetup (const MethodInfo* method);
// 0x5ab5330

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBellyFlopGetup
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBellyFlopGetup
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b51 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBellyFlopGetup
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackKick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackKick (const MethodInfo* method);
// 0x5ab53d0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackKick(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackKick_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b52 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackKick_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackStomp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackStomp (const MethodInfo* method);
// 0x5ab5470

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackStomp(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackStomp_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b53 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackStomp_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSwingL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSwingL (const MethodInfo* method);
// 0x5ab5510

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSwingL(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSwingL_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b54 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSwingL_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSwingR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSwingR (const MethodInfo* method);
// 0x5ab55b0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSwingR(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSwingR_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b55 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSwingR_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBiteF
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteF (const MethodInfo* method);
// 0x5ab5650

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteF(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBiteF_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b56 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBiteF_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBiteL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteL (const MethodInfo* method);
// 0x5ab56f0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteL(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBiteL_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b57 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBiteL_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBiteR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteR (const MethodInfo* method);
// 0x5ab5790

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteR(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBiteR_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b58 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBiteR_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirFarL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirFarL (const MethodInfo* method);
// 0x5ab5830

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirFarL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirFarL_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b59 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirFarL_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirFarR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirFarR (const MethodInfo* method);
// 0x5ab58d0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirFarR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirFarR_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b5a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirFarR_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirL (const MethodInfo* method);
// 0x5ab5970

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirL_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b5b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirL_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirR (const MethodInfo* method);
// 0x5ab5a10

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirR_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b5c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirR_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabBackL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBackL (const MethodInfo* method);
// 0x5ab5ab0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBackL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBackL_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b5d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBackL_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabBackR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBackR (const MethodInfo* method);
// 0x5ab5b50

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBackR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBackR_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b5e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBackR_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabCoreL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabCoreL (const MethodInfo* method);
// 0x5ab5bf0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabCoreL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabCoreL_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b5f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabCoreL_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabCoreR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabCoreR (const MethodInfo* method);
// 0x5ab5c90

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabCoreR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabCoreR_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b60 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabCoreR_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabGroundBackL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundBackL (const MethodInfo* method);
// 0x5ab5d30

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundBackL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundBack
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b61 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundBack
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabGroundBackR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundBackR (const MethodInfo* method);
// 0x5ab5dd0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundBackR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundBack_71c1bd0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b62 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundBack_71c1bd0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabGroundFrontL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundFrontL (const MethodInfo* method);
// 0x5ab5e70

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundFrontL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundFron
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b63 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundFron
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabGroundFrontR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundFrontR (const MethodInfo* method);
// 0x5ab5f10

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundFrontR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundFron_71c1be0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b64 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundFron_71c1be0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHeadBackL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadBackL (const MethodInfo* method);
// 0x5ab5fb0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadBackL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadBackL
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b65 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadBackL
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHeadBackR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadBackR (const MethodInfo* method);
// 0x5ab6050

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadBackR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadBackR
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b66 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadBackR
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHeadFrontL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadFrontL (const MethodInfo* method);
// 0x5ab60f0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadFrontL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadFrontL
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b67 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadFrontL
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHeadFrontR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadFrontR (const MethodInfo* method);
// 0x5ab6190

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadFrontR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadFrontR
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b68 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadFrontR
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHighL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHighL (const MethodInfo* method);
// 0x5ab6230

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHighL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHighL_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b69 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHighL_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHighR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHighR (const MethodInfo* method);
// 0x5ab62d0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHighR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHighR_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b6a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHighR_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabStomachL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabStomachL (const MethodInfo* method);
// 0x5ab6370

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabStomachL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabStomachL_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b6b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabStomachL_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabStomachR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabStomachR (const MethodInfo* method);
// 0x5ab6410

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabStomachR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabStomachR_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b6c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabStomachR_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackEatL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackEatL (const MethodInfo* method);
// 0x5ab64b0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackEatL(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackEatL_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b6d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackEatL_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackEatR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackEatR (const MethodInfo* method);
// 0x5ab6550

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackEatR(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackEatR_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b6e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackEatR_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapHighL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapHighL (const MethodInfo* method);
// 0x5ab65f0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapHighL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapHighL_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b6f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapHighL_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapHighR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapHighR (const MethodInfo* method);
// 0x5ab6690

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapHighR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapHighR_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b70 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapHighR_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapL (const MethodInfo* method);
// 0x5ab6730

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapL(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapL_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b71 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapL_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapR (const MethodInfo* method);
// 0x5ab67d0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapR(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapR_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b72 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapR_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapLowL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapLowL (const MethodInfo* method);
// 0x5ab6870

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapLowL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapLowL_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b73 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapLowL_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapLowR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapLowR (const MethodInfo* method);
// 0x5ab6910

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapLowR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapLowR_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b74 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapLowR_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushChestL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushChestL (const MethodInfo* method);
// 0x5ab69b0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushChestL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushChestL_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b75 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushChestL_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushChestR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushChestR (const MethodInfo* method);
// 0x5ab6a50

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushChestR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushChestR_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b76 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushChestR_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackHitBack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackHitBack (const MethodInfo* method);
// 0x5ab6af0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackHitBack(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackHitBack_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b77 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackHitBack_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackHitFace
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackHitFace (const MethodInfo* method);
// 0x5ab6b90

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackHitFace(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackHitFace_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b78 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackHitFace_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackRockThrow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackRockThrow (const MethodInfo* method);
// 0x5ab6c30

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackRockThrow
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackRockThrow_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b79 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackRockThrow_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackJump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackJump (const MethodInfo* method);
// 0x5ab6cd0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackJump(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackJump_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b7a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackJump_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackJumpCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackJumpCrawler (const MethodInfo* method);
// 0x5ab6d70

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackJumpCrawler
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackJumpCrawler_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b7b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackJumpCrawler_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitIdle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitIdle (const MethodInfo* method);
// 0x5ab6e10

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitIdle(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitIdle_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b7c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitIdle_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitIdleCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitIdleCrawler (const MethodInfo* method);
// 0x5ab6eb0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitIdleCrawler
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitIdleCrawler_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b7d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitIdleCrawler_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitDown
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitDown (const MethodInfo* method);
// 0x5ab6f50

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitDown(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitDown_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b7e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitDown_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitUp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitUp (const MethodInfo* method);
// 0x5ab6ff0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitUp(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitUp_g____getter_74
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b7f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitUp_g____getter_74
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitUpCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitUpCrawler (const MethodInfo* method);
// 0x5ab7090

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitUpCrawler(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitUpCrawler_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b80 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitUpCrawler_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitFall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitFall (const MethodInfo* method);
// 0x5ab7130

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitFall(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitFall_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b81 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitFall_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitFallCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitFallCrawler (const MethodInfo* method);
// 0x5ab71d0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitFallCrawler
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitFallCrawler_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b82 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitFallCrawler_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Turn90L
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90L (const MethodInfo* method);
// 0x5ab7270

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90L(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90L_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b83 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90L_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Turn90R
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90R (const MethodInfo* method);
// 0x5ab7310

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90R(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90R_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b84 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90R_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Turn90LCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90LCrawler (const MethodInfo* method);
// 0x5ab73b0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90LCrawler
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90LCrawler_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b85 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90LCrawler_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Turn90RCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90RCrawler (const MethodInfo* method);
// 0x5ab7450

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90RCrawler
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90RCrawler_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b86 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90RCrawler_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Blind
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Blind (const MethodInfo* method);
// 0x5ab74f0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Blind(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Blind_g____getter_82
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b87 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Blind_g____getter_82
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitBlind
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitBlind (const MethodInfo* method);
// 0x5ab7590

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitBlind(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitBlind_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b88 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitBlind_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__BlindCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__BlindCrawler (const MethodInfo* method);
// 0x5ab7630

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__BlindCrawler(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__BlindCrawler_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b89 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__BlindCrawler_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__ArmHurtL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__ArmHurtL (const MethodInfo* method);
// 0x5ab76d0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__ArmHurtL(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__ArmHurtL_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b8a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__ArmHurtL_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__ArmHurtR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__ArmHurtR (const MethodInfo* method);
// 0x5ab7770

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__ArmHurtR(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__ArmHurtR_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b8b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__ArmHurtR_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__CoverNape
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__CoverNape (const MethodInfo* method);
// 0x5ab7810

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__CoverNape(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__CoverNape_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b8c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__CoverNape_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteLaugh
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteLaugh (const MethodInfo* method);
// 0x5ab78b0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteLaugh(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteLaugh_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b8d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteLaugh_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteNod
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteNod (const MethodInfo* method);
// 0x5ab7950

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteNod(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteNod_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b8e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteNod_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteShake
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteShake (const MethodInfo* method);
// 0x5ab79f0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteShake(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteShake_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b8f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteShake_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteRoar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar (const MethodInfo* method);
// 0x5ab7a90

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteRoar_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_07546b90 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteRoar_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTitanAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x5ab7b30

void CustomLogic_CustomLogicTitanAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546b91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGroundBackL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBellyFlop");
    il2cpp_codegen_initialize_runtime_metadata(&"StunRight");
    il2cpp_codegen_initialize_runtime_metadata(&"FallCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushChestL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushChestR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabCoreR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBiteF");
    il2cpp_codegen_initialize_runtime_metadata(&"ArmHurtR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackJumpCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHighR");
    il2cpp_codegen_initialize_runtime_metadata(&"SitIdleCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteNod");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlam");
    il2cpp_codegen_initialize_runtime_metadata(&"DieBlow");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSwingL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabStomachL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackJump");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteShake");
    il2cpp_codegen_initialize_runtime_metadata(&"SitFallCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"RunAbnormal");
    il2cpp_codegen_initialize_runtime_metadata(&"DieFront");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBellyFlopGetup");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackHitBack");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSwingR");
    il2cpp_codegen_initialize_runtime_metadata(&"DieGround");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackEatL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirFarL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBiteL");
    il2cpp_codegen_initialize_runtime_metadata(&"JumpCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabCoreL");
    il2cpp_codegen_initialize_runtime_metadata(&"CoverNape");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackStomp");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackEatR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackRockThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"Land");
    il2cpp_codegen_initialize_runtime_metadata(&"DieHeadOff");
    il2cpp_codegen_initialize_runtime_metadata(&"BlindCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHeadBackL");
    il2cpp_codegen_initialize_runtime_metadata(&"DieCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapLowR");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"Turn90R");
    il2cpp_codegen_initialize_runtime_metadata(&"Blind");
    il2cpp_codegen_initialize_runtime_metadata(&"Turn90L");
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapHighL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHeadBackR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBiteR");
    il2cpp_codegen_initialize_runtime_metadata(&"StunLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"SitIdle");
    il2cpp_codegen_initialize_runtime_metadata(&"RunCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"SitBlind");
    il2cpp_codegen_initialize_runtime_metadata(&"Turn90RCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHighL");
    il2cpp_codegen_initialize_runtime_metadata(&"IdleCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackHitFace");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapHighR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHeadFrontL");
    il2cpp_codegen_initialize_runtime_metadata(&"Turn90LCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirFarR");
    il2cpp_codegen_initialize_runtime_metadata(&"DieSit");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirR");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGroundFrontL");
    il2cpp_codegen_initialize_runtime_metadata(&"SitFall");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabStomachR");
    il2cpp_codegen_initialize_runtime_metadata(&"SitDown");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGroundFrontR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackPunch");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteLaugh");
    il2cpp_codegen_initialize_runtime_metadata(&"ArmHurtL");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackPunchCombo");
    il2cpp_codegen_initialize_runtime_metadata(&"SitUpCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"DieBack");
    il2cpp_codegen_initialize_runtime_metadata(&"Fall");
    il2cpp_codegen_initialize_runtime_metadata(&"LandCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"SprintAbnormal");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGroundBackR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
    il2cpp_codegen_initialize_runtime_metadata(&"SitUp");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBackR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBackL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHeadFrontR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapLowL");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteRoar");
    Il2CppMethodInitialized_07546b91 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Idle",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RunAbnormal",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SprintAbnormal",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RunCrawler",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IdleCrawler",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"JumpCrawler",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FallCrawler",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LandCrawler",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Walk",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Jump",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Fall",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Land",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stun",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StunLeft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StunRight",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DieBack",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DieFront",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DieGround",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DieCrawler",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DieSit",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DieBlow",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DieHeadOff",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackPunchCombo",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackPunch",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlam",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBellyFlop",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBellyFlopGetup",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackKick",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackStomp",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSwingL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSwingR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBiteF",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBiteL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBiteR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabAirFarL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabAirFarR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabAirL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabAirR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabBackL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabBackR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabCoreL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabCoreR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabGroundBackL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabGroundBackR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabGroundFrontL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabGroundFrontR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabHeadBackL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabHeadBackR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabHeadFrontL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabHeadFrontR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabHighL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabHighR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabStomachL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabStomachR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackEatL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackEatR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapHighL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapHighR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapLowL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapLowR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBrushChestL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBrushChestR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackHitBack",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackHitFace",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackRockThrow",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackJump",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackJumpCrawler",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SitIdle",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SitIdleCrawler",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SitDown",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SitUp",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SitUpCrawler",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SitFall",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SitFallCrawler",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Turn90L",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Turn90R",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Turn90LCrawler",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Turn90RCrawler",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Blind",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SitBlind",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BlindCrawler",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ArmHurtL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ArmHurtR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CoverNape",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteLaugh",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteNod",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteShake",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteRoar",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8780

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ada == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|idle");
    Il2CppMethodInitialized_07546ada = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__RunAbnormal>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__RunAbnormal_g____getter_3_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab87b0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__RunAbnormal_g____getter_3_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546adb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|run.abnormal");
    Il2CppMethodInitialized_07546adb = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|run.abnormal";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SprintAbnormal>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SprintAbnormal_g____getter_4_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab87e0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SprintAbnormal_g____getter_4_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546adc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|run.abnormal.1");
    Il2CppMethodInitialized_07546adc = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|run.abnormal.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__RunCrawler>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__RunCrawler_g____getter_5_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8810

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__RunCrawler_g____getter_5_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546add == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.run");
    Il2CppMethodInitialized_07546add = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|crawler.run";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleCrawler>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__IdleCrawler_g____getter_6_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8840

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__IdleCrawler_g____getter_6_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ade == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.idle");
    Il2CppMethodInitialized_07546ade = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|crawler.idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__JumpCrawler>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__JumpCrawler_g____getter_7_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8870

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__JumpCrawler_g____getter_7_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546adf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.crawler.jump.0");
    Il2CppMethodInitialized_07546adf = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.crawler.jump.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__FallCrawler>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__FallCrawler_g____getter_8_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab88a0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__FallCrawler_g____getter_8_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ae0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.crawler.jump.1");
    Il2CppMethodInitialized_07546ae0 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.crawler.jump.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__LandCrawler>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__LandCrawler_g____getter_9_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab88d0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__LandCrawler_g____getter_9_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ae1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.crawler.jump.2");
    Il2CppMethodInitialized_07546ae1 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.crawler.jump.2";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_10_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8900

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_10_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ae2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|run.walk");
    Il2CppMethodInitialized_07546ae2 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|run.walk";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_11_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8930

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_11_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ae3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.jumper.0");
    Il2CppMethodInitialized_07546ae3 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.jumper.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Fall>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_12_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8960

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_12_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ae4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.jumper.1");
    Il2CppMethodInitialized_07546ae4 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.jumper.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_13_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8990

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_13_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ae5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.jumper.2");
    Il2CppMethodInitialized_07546ae5 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.jumper.2";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Stun>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_14_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab89c0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_14_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ae6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|hit.eren.L");
    Il2CppMethodInitialized_07546ae6 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|hit.eren.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__StunLeft>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__StunLeft_g____getter_15_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab89f0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__StunLeft_g____getter_15_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ae7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|hit.eren.L");
    Il2CppMethodInitialized_07546ae7 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|hit.eren.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__StunRight>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__StunRight_g____getter_16_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8a20

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__StunRight_g____getter_16_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ae8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|hit.eren.R");
    Il2CppMethodInitialized_07546ae8 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|hit.eren.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieBack>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieBack_g____getter_17_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8a50

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieBack_g____getter_17_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ae9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|die.back");
    Il2CppMethodInitialized_07546ae9 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|die.back";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieFront>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieFront_g____getter_18_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8a80

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieFront_g____getter_18_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546aea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|die.front");
    Il2CppMethodInitialized_07546aea = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|die.front";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieGround>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieGround_g____getter_19_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8ab0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieGround_g____getter_19_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546aeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|die.ground");
    Il2CppMethodInitialized_07546aeb = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|die.ground";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieCrawler>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieCrawler_g____getter_20_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8ae0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieCrawler_g____getter_20_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546aec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.die");
    Il2CppMethodInitialized_07546aec = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|crawler.die";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieSit>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieSit_g____getter_21_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8b10

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieSit_g____getter_21_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546aed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_die");
    Il2CppMethodInitialized_07546aed = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|sit_die";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieBlow>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieBlow_g____getter_22_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8b40

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieBlow_g____getter_22_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546aee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|die.blow");
    Il2CppMethodInitialized_07546aee = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|die.blow";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieHeadOff>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieHeadOff_g____getter_23_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8b70

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieHeadOff_g____getter_23_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546aef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|die.headOff");
    Il2CppMethodInitialized_07546aef = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|die.headOff";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackPunchCombo>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackPunchCombo_g____getter_24_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8ba0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackPunchCombo_g____getter_24_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546af0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.combo");
    Il2CppMethodInitialized_07546af0 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.combo";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackPunch>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackPunch_g____getter_25_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8bd0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackPunch_g____getter_25_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546af1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.comboPunch");
    Il2CppMethodInitialized_07546af1 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.comboPunch";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlam>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlam_g____getter_26_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8c00

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlam_g____getter_26_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546af2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.front.ground");
    Il2CppMethodInitialized_07546af2 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.front.ground";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBellyFlop>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBellyFlop_g____getter_27_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8c30

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBellyFlop_g____getter_27_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546af3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.abnormal.jump");
    Il2CppMethodInitialized_07546af3 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.abnormal.jump";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBellyFlopGetup>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBellyFlopGetup_g____getter_28_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8c60

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBellyFlopGetup_g____getter_28_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546af4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.abnormal.getup");
    Il2CppMethodInitialized_07546af4 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.abnormal.getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackKick>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_29_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8c90

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_29_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546af5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.kick");
    Il2CppMethodInitialized_07546af5 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.kick";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackStomp>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_30_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8cc0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_30_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546af6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.stomp");
    Il2CppMethodInitialized_07546af6 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.stomp";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSwingL>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSwingL_g____getter_31_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8cf0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSwingL_g____getter_31_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546af7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.swing.l");
    Il2CppMethodInitialized_07546af7 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.swing.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSwingR>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSwingR_g____getter_32_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8d20

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSwingR_g____getter_32_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546af8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.swing.r");
    Il2CppMethodInitialized_07546af8 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.swing.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBiteF>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBiteF_g____getter_33_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8d50

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBiteF_g____getter_33_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546af9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|bite");
    Il2CppMethodInitialized_07546af9 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|bite";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBiteL>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBiteL_g____getter_34_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8d80

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBiteL_g____getter_34_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546afa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|bite.l");
    Il2CppMethodInitialized_07546afa = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|bite.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBiteR>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBiteR_g____getter_35_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8db0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBiteR_g____getter_35_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546afb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|bite.r");
    Il2CppMethodInitialized_07546afb = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|bite.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirFarL>g____getter|36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirFarL_g____getter_36_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8de0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirFarL_g____getter_36_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546afc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.air.far.l");
    Il2CppMethodInitialized_07546afc = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|grab.air.far.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirFarR>g____getter|37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirFarR_g____getter_37_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8e10

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirFarR_g____getter_37_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546afd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.air.far.r");
    Il2CppMethodInitialized_07546afd = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|grab.air.far.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirL>g____getter|38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirL_g____getter_38_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8e40

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirL_g____getter_38_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546afe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.air.short.l");
    Il2CppMethodInitialized_07546afe = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|grab.air.short.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirR>g____getter|39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirR_g____getter_39_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8e70

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirR_g____getter_39_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546aff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.air.short.r");
    Il2CppMethodInitialized_07546aff = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|grab.air.short.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBackL>g____getter|40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBackL_g____getter_40_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8ea0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBackL_g____getter_40_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.back.l");
    Il2CppMethodInitialized_07546b00 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|grab.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBackR>g____getter|41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBackR_g____getter_41_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8ed0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBackR_g____getter_41_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.back.r");
    Il2CppMethodInitialized_07546b01 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|grab.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabCoreL>g____getter|42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabCoreL_g____getter_42_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8f00

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabCoreL_g____getter_42_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.core.L");
    Il2CppMethodInitialized_07546b02 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|grab.core.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabCoreR>g____getter|43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabCoreR_g____getter_43_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8f30

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabCoreR_g____getter_43_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.core.R");
    Il2CppMethodInitialized_07546b03 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|grab.core.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGroundBackL>g____getter|44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundBackL_g____getter_44_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8f60

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundBackL_g____getter_44_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.ground.back.l");
    Il2CppMethodInitialized_07546b04 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|grab.ground.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGroundBackR>g____getter|45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundBackR_g____getter_45_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8f90

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundBackR_g____getter_45_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.ground.back.r");
    Il2CppMethodInitialized_07546b05 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|grab.ground.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGroundFrontL>g____getter|46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundFrontL_g____getter_46_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8fc0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundFrontL_g____getter_46_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.ground.front.l");
    Il2CppMethodInitialized_07546b06 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|grab.ground.front.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGroundFrontR>g____getter|47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundFrontR_g____getter_47_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab8ff0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundFrontR_g____getter_47_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.ground.front.r");
    Il2CppMethodInitialized_07546b07 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|grab.ground.front.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHeadBackL>g____getter|48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadBackL_g____getter_48_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9020

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadBackL_g____getter_48_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.head.back.l");
    Il2CppMethodInitialized_07546b08 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|grab.head.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHeadBackR>g____getter|49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadBackR_g____getter_49_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9050

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadBackR_g____getter_49_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.head.back.r");
    Il2CppMethodInitialized_07546b09 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|grab.head.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHeadFrontL>g____getter|50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadFrontL_g____getter_50_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9080

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadFrontL_g____getter_50_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.head.front.1");
    Il2CppMethodInitialized_07546b0a = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|grab.head.front.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHeadFrontR>g____getter|51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadFrontR_g____getter_51_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab90b0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadFrontR_g____getter_51_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.head.front.r");
    Il2CppMethodInitialized_07546b0b = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|grab.head.front.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHighL>g____getter|52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHighL_g____getter_52_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab90e0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHighL_g____getter_52_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.high.l");
    Il2CppMethodInitialized_07546b0c = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|grab.high.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHighR>g____getter|53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHighR_g____getter_53_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9110

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHighR_g____getter_53_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.high.r");
    Il2CppMethodInitialized_07546b0d = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|grab.high.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabStomachL>g____getter|54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabStomachL_g____getter_54_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9140

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabStomachL_g____getter_54_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.stomach.l");
    Il2CppMethodInitialized_07546b0e = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|grab.stomach.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabStomachR>g____getter|55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabStomachR_g____getter_55_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9170

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabStomachR_g____getter_55_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.stomach.r");
    Il2CppMethodInitialized_07546b0f = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|grab.stomach.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackEatL>g____getter|56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackEatL_g____getter_56_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab91a0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackEatL_g____getter_56_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|eat.l");
    Il2CppMethodInitialized_07546b10 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|eat.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackEatR>g____getter|57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackEatR_g____getter_57_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab91d0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackEatR_g____getter_57_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|eat.r");
    Il2CppMethodInitialized_07546b11 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|eat.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapHighL>g____getter|58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapHighL_g____getter_58_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9200

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapHighL_g____getter_58_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.high.l");
    Il2CppMethodInitialized_07546b12 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.anti.AE.high.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapHighR>g____getter|59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapHighR_g____getter_59_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9230

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapHighR_g____getter_59_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.high.r");
    Il2CppMethodInitialized_07546b13 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.anti.AE.high.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapL>g____getter|60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapL_g____getter_60_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9260

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapL_g____getter_60_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.l");
    Il2CppMethodInitialized_07546b14 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.anti.AE.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapR>g____getter|61_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapR_g____getter_61_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9290

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapR_g____getter_61_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.r");
    Il2CppMethodInitialized_07546b15 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.anti.AE.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapLowL>g____getter|62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapLowL_g____getter_62_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab92c0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapLowL_g____getter_62_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.low.l");
    Il2CppMethodInitialized_07546b16 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.anti.AE.low.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapLowR>g____getter|63_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapLowR_g____getter_63_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab92f0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapLowR_g____getter_63_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.low.r");
    Il2CppMethodInitialized_07546b17 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.anti.AE.low.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushChestL>g____getter|64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushChestL_g____getter_64_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9320

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushChestL_g____getter_64_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.chest.L");
    Il2CppMethodInitialized_07546b18 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.chest.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushChestR>g____getter|65_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushChestR_g____getter_65_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9350

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushChestR_g____getter_65_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.chest.R");
    Il2CppMethodInitialized_07546b19 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.chest.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackHitBack>g____getter|66_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackHitBack_g____getter_66_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9380

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackHitBack_g____getter_66_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.slap.back");
    Il2CppMethodInitialized_07546b1a = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.slap.back";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackHitFace>g____getter|67_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackHitFace_g____getter_67_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab93b0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackHitFace_g____getter_67_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.slap.face");
    Il2CppMethodInitialized_07546b1b = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.slap.face";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackRockThrow>g____getter|68_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackRockThrow_g____getter_68_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab93e0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackRockThrow_g____getter_68_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.throw");
    Il2CppMethodInitialized_07546b1c = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.throw";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackJump>g____getter|69_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackJump_g____getter_69_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9410

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackJump_g____getter_69_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.jumper.0");
    Il2CppMethodInitialized_07546b1d = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.jumper.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackJumpCrawler>g____getter|70_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackJumpCrawler_g____getter_70_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9440

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackJumpCrawler_g____getter_70_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.crawler.jump.0");
    Il2CppMethodInitialized_07546b1e = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.crawler.jump.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitIdle>g____getter|71_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitIdle_g____getter_71_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9470

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitIdle_g____getter_71_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_idle");
    Il2CppMethodInitialized_07546b1f = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|sit_idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitIdleCrawler>g____getter|72_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitIdleCrawler_g____getter_72_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab94a0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitIdleCrawler_g____getter_72_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.sit.idle");
    Il2CppMethodInitialized_07546b20 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|crawler.sit.idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitDown>g____getter|73_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitDown_g____getter_73_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab94d0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitDown_g____getter_73_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_down");
    Il2CppMethodInitialized_07546b21 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|sit_down";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitUp>g____getter|74_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitUp_g____getter_74_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9500

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitUp_g____getter_74_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_getup");
    Il2CppMethodInitialized_07546b22 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|sit_getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitUpCrawler>g____getter|75_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitUpCrawler_g____getter_75_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9530

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitUpCrawler_g____getter_75_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.getup");
    Il2CppMethodInitialized_07546b23 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|crawler.getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitFall>g____getter|76_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitFall_g____getter_76_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9560

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitFall_g____getter_76_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_hunt_down");
    Il2CppMethodInitialized_07546b24 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|sit_hunt_down";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitFallCrawler>g____getter|77_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitFallCrawler_g____getter_77_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9590

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitFallCrawler_g____getter_77_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.hunt.down");
    Il2CppMethodInitialized_07546b25 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|crawler.hunt.down";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Turn90L>g____getter|78_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90L_g____getter_78_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab95c0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90L_g____getter_78_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|turnaround.L");
    Il2CppMethodInitialized_07546b26 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|turnaround.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Turn90R>g____getter|79_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90R_g____getter_79_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab95f0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90R_g____getter_79_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|turnaround.R");
    Il2CppMethodInitialized_07546b27 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|turnaround.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Turn90LCrawler>g____getter|80_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90LCrawler_g____getter_80_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9620

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90LCrawler_g____getter_80_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.turnaround.L");
    Il2CppMethodInitialized_07546b28 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|crawler.turnaround.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Turn90RCrawler>g____getter|81_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90RCrawler_g____getter_81_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9650

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90RCrawler_g____getter_81_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.turnaround.R");
    Il2CppMethodInitialized_07546b29 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|crawler.turnaround.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Blind>g____getter|82_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Blind_g____getter_82_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9680

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Blind_g____getter_82_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|hit.eye");
    Il2CppMethodInitialized_07546b2a = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|hit.eye";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitBlind>g____getter|83_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitBlind_g____getter_83_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab96b0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitBlind_g____getter_83_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_hit_eye");
    Il2CppMethodInitialized_07546b2b = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|sit_hit_eye";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__BlindCrawler>g____getter|84_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__BlindCrawler_g____getter_84_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab96e0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__BlindCrawler_g____getter_84_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.hiteyes");
    Il2CppMethodInitialized_07546b2c = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|crawler.hiteyes";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__ArmHurtL>g____getter|85_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__ArmHurtL_g____getter_85_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9710

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__ArmHurtL_g____getter_85_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|arm_hurt_L");
    Il2CppMethodInitialized_07546b2d = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|arm_hurt_L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__ArmHurtR>g____getter|86_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__ArmHurtR_g____getter_86_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9740

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__ArmHurtR_g____getter_86_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|arm_hurt_R");
    Il2CppMethodInitialized_07546b2e = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|arm_hurt_R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__CoverNape>g____getter|87_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__CoverNape_g____getter_87_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9770

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__CoverNape_g____getter_87_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|idle.recovery");
    Il2CppMethodInitialized_07546b2f = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|idle.recovery";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteLaugh>g____getter|88_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteLaugh_g____getter_88_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab97a0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteLaugh_g____getter_88_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|laugh");
    Il2CppMethodInitialized_07546b30 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|laugh";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteNod>g____getter|89_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteNod_g____getter_89_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab97d0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteNod_g____getter_89_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|emote_titan_yes");
    Il2CppMethodInitialized_07546b31 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|emote_titan_yes";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteShake>g____getter|90_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteShake_g____getter_90_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9800

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteShake_g____getter_90_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|emote_titan_no");
    Il2CppMethodInitialized_07546b32 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|emote_titan_no";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteRoar>g____getter|91_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteRoar_g____getter_91_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ab9830

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteRoar_g____getter_91_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.scream");
    Il2CppMethodInitialized_07546b33 = '\x01';
  }
  return (Il2CppObject *)"Amarture_VER2|attack.scream";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTitanAnimationEnum___ctor (CustomLogic_CustomLogicTitanAnimationEnum_o* __this, const MethodInfo* method);
// 0x5ab0fa0

void CustomLogic_CustomLogicTitanAnimationEnum___ctor
               (CustomLogic_CustomLogicTitanAnimationEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ad9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546ad9 = '\x01';
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


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Idle
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Idle (const MethodInfo* method);
// 0x5ab1010

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Idle(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ada == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|idle");
    Il2CppMethodInitialized_07546ada = '\x01';
  }
  return "Amarture_VER2|idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_RunAbnormal
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_RunAbnormal (const MethodInfo* method);
// 0x5ab1040

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_RunAbnormal(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546adb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|run.abnormal");
    Il2CppMethodInitialized_07546adb = '\x01';
  }
  return "Amarture_VER2|run.abnormal";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SprintAbnormal
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SprintAbnormal (const MethodInfo* method);
// 0x5ab1070

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SprintAbnormal(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546adc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|run.abnormal.1");
    Il2CppMethodInitialized_07546adc = '\x01';
  }
  return "Amarture_VER2|run.abnormal.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_RunCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_RunCrawler (const MethodInfo* method);
// 0x5ab10a0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_RunCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546add == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.run");
    Il2CppMethodInitialized_07546add = '\x01';
  }
  return "Amarture_VER2|crawler.run";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_IdleCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_IdleCrawler (const MethodInfo* method);
// 0x5ab10d0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_IdleCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ade == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.idle");
    Il2CppMethodInitialized_07546ade = '\x01';
  }
  return "Amarture_VER2|crawler.idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_JumpCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_JumpCrawler (const MethodInfo* method);
// 0x5ab1100

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_JumpCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546adf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.crawler.jump.0");
    Il2CppMethodInitialized_07546adf = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_FallCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_FallCrawler (const MethodInfo* method);
// 0x5ab1130

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_FallCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ae0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.crawler.jump.1");
    Il2CppMethodInitialized_07546ae0 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_LandCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_LandCrawler (const MethodInfo* method);
// 0x5ab1160

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_LandCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ae1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.crawler.jump.2");
    Il2CppMethodInitialized_07546ae1 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.2";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Walk (const MethodInfo* method);
// 0x5ab1190

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Walk(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ae2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|run.walk");
    Il2CppMethodInitialized_07546ae2 = '\x01';
  }
  return "Amarture_VER2|run.walk";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Jump (const MethodInfo* method);
// 0x5ab11c0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Jump(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ae3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.jumper.0");
    Il2CppMethodInitialized_07546ae3 = '\x01';
  }
  return "Amarture_VER2|attack.jumper.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Fall
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Fall (const MethodInfo* method);
// 0x5ab11f0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Fall(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ae4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.jumper.1");
    Il2CppMethodInitialized_07546ae4 = '\x01';
  }
  return "Amarture_VER2|attack.jumper.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Land (const MethodInfo* method);
// 0x5ab1220

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Land(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ae5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.jumper.2");
    Il2CppMethodInitialized_07546ae5 = '\x01';
  }
  return "Amarture_VER2|attack.jumper.2";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Stun
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Stun (const MethodInfo* method);
// 0x5ab1250

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Stun(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ae6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|hit.eren.L");
    Il2CppMethodInitialized_07546ae6 = '\x01';
  }
  return "Amarture_VER2|hit.eren.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_StunLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_StunLeft (const MethodInfo* method);
// 0x5ab1280

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_StunLeft(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ae7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|hit.eren.L");
    Il2CppMethodInitialized_07546ae7 = '\x01';
  }
  return "Amarture_VER2|hit.eren.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_StunRight
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_StunRight (const MethodInfo* method);
// 0x5ab12b0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_StunRight(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ae8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|hit.eren.R");
    Il2CppMethodInitialized_07546ae8 = '\x01';
  }
  return "Amarture_VER2|hit.eren.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieBack
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieBack (const MethodInfo* method);
// 0x5ab12e0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieBack(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ae9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|die.back");
    Il2CppMethodInitialized_07546ae9 = '\x01';
  }
  return "Amarture_VER2|die.back";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieFront
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieFront (const MethodInfo* method);
// 0x5ab1310

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieFront(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546aea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|die.front");
    Il2CppMethodInitialized_07546aea = '\x01';
  }
  return "Amarture_VER2|die.front";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieGround
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieGround (const MethodInfo* method);
// 0x5ab1340

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieGround(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546aeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|die.ground");
    Il2CppMethodInitialized_07546aeb = '\x01';
  }
  return "Amarture_VER2|die.ground";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieCrawler (const MethodInfo* method);
// 0x5ab1370

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546aec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.die");
    Il2CppMethodInitialized_07546aec = '\x01';
  }
  return "Amarture_VER2|crawler.die";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieSit
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieSit (const MethodInfo* method);
// 0x5ab13a0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieSit(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546aed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_die");
    Il2CppMethodInitialized_07546aed = '\x01';
  }
  return "Amarture_VER2|sit_die";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieBlow
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieBlow (const MethodInfo* method);
// 0x5ab13d0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieBlow(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546aee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|die.blow");
    Il2CppMethodInitialized_07546aee = '\x01';
  }
  return "Amarture_VER2|die.blow";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieHeadOff
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieHeadOff (const MethodInfo* method);
// 0x5ab1400

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieHeadOff(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546aef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|die.headOff");
    Il2CppMethodInitialized_07546aef = '\x01';
  }
  return "Amarture_VER2|die.headOff";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackPunchCombo
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackPunchCombo (const MethodInfo* method);
// 0x5ab1430

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackPunchCombo(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546af0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.combo");
    Il2CppMethodInitialized_07546af0 = '\x01';
  }
  return "Amarture_VER2|attack.combo";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackPunch
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackPunch (const MethodInfo* method);
// 0x5ab1460

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackPunch(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546af1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.comboPunch");
    Il2CppMethodInitialized_07546af1 = '\x01';
  }
  return "Amarture_VER2|attack.comboPunch";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlam
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlam (const MethodInfo* method);
// 0x5ab1490

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlam(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546af2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.front.ground");
    Il2CppMethodInitialized_07546af2 = '\x01';
  }
  return "Amarture_VER2|attack.front.ground";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBellyFlop
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBellyFlop (const MethodInfo* method);
// 0x5ab14c0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBellyFlop(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546af3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.abnormal.jump");
    Il2CppMethodInitialized_07546af3 = '\x01';
  }
  return "Amarture_VER2|attack.abnormal.jump";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBellyFlopGetup
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBellyFlopGetup (const MethodInfo* method);
// 0x5ab14f0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBellyFlopGetup(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546af4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.abnormal.getup");
    Il2CppMethodInitialized_07546af4 = '\x01';
  }
  return "Amarture_VER2|attack.abnormal.getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackKick
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackKick (const MethodInfo* method);
// 0x5ab1520

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackKick(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546af5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.kick");
    Il2CppMethodInitialized_07546af5 = '\x01';
  }
  return "Amarture_VER2|attack.kick";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackStomp
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackStomp (const MethodInfo* method);
// 0x5ab1550

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackStomp(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546af6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.stomp");
    Il2CppMethodInitialized_07546af6 = '\x01';
  }
  return "Amarture_VER2|attack.stomp";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSwingL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSwingL (const MethodInfo* method);
// 0x5ab1580

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSwingL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546af7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.swing.l");
    Il2CppMethodInitialized_07546af7 = '\x01';
  }
  return "Amarture_VER2|attack.swing.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSwingR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSwingR (const MethodInfo* method);
// 0x5ab15b0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSwingR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546af8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.swing.r");
    Il2CppMethodInitialized_07546af8 = '\x01';
  }
  return "Amarture_VER2|attack.swing.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBiteF
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteF (const MethodInfo* method);
// 0x5ab15e0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteF(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546af9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|bite");
    Il2CppMethodInitialized_07546af9 = '\x01';
  }
  return "Amarture_VER2|bite";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBiteL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteL (const MethodInfo* method);
// 0x5ab1610

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546afa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|bite.l");
    Il2CppMethodInitialized_07546afa = '\x01';
  }
  return "Amarture_VER2|bite.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBiteR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteR (const MethodInfo* method);
// 0x5ab1640

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546afb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|bite.r");
    Il2CppMethodInitialized_07546afb = '\x01';
  }
  return "Amarture_VER2|bite.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabAirFarL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirFarL (const MethodInfo* method);
// 0x5ab1670

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirFarL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546afc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.air.far.l");
    Il2CppMethodInitialized_07546afc = '\x01';
  }
  return "Amarture_VER2|grab.air.far.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabAirFarR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirFarR (const MethodInfo* method);
// 0x5ab16a0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirFarR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546afd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.air.far.r");
    Il2CppMethodInitialized_07546afd = '\x01';
  }
  return "Amarture_VER2|grab.air.far.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabAirL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirL (const MethodInfo* method);
// 0x5ab16d0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546afe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.air.short.l");
    Il2CppMethodInitialized_07546afe = '\x01';
  }
  return "Amarture_VER2|grab.air.short.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabAirR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirR (const MethodInfo* method);
// 0x5ab1700

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546aff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.air.short.r");
    Il2CppMethodInitialized_07546aff = '\x01';
  }
  return "Amarture_VER2|grab.air.short.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabBackL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabBackL (const MethodInfo* method);
// 0x5ab1730

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabBackL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.back.l");
    Il2CppMethodInitialized_07546b00 = '\x01';
  }
  return "Amarture_VER2|grab.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabBackR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabBackR (const MethodInfo* method);
// 0x5ab1760

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabBackR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.back.r");
    Il2CppMethodInitialized_07546b01 = '\x01';
  }
  return "Amarture_VER2|grab.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabCoreL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabCoreL (const MethodInfo* method);
// 0x5ab1790

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabCoreL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.core.L");
    Il2CppMethodInitialized_07546b02 = '\x01';
  }
  return "Amarture_VER2|grab.core.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabCoreR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabCoreR (const MethodInfo* method);
// 0x5ab17c0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabCoreR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.core.R");
    Il2CppMethodInitialized_07546b03 = '\x01';
  }
  return "Amarture_VER2|grab.core.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabGroundBackL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundBackL (const MethodInfo* method);
// 0x5ab17f0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundBackL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.ground.back.l");
    Il2CppMethodInitialized_07546b04 = '\x01';
  }
  return "Amarture_VER2|grab.ground.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabGroundBackR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundBackR (const MethodInfo* method);
// 0x5ab1820

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundBackR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.ground.back.r");
    Il2CppMethodInitialized_07546b05 = '\x01';
  }
  return "Amarture_VER2|grab.ground.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabGroundFrontL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundFrontL (const MethodInfo* method);
// 0x5ab1850

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundFrontL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.ground.front.l");
    Il2CppMethodInitialized_07546b06 = '\x01';
  }
  return "Amarture_VER2|grab.ground.front.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabGroundFrontR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundFrontR (const MethodInfo* method);
// 0x5ab1880

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundFrontR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.ground.front.r");
    Il2CppMethodInitialized_07546b07 = '\x01';
  }
  return "Amarture_VER2|grab.ground.front.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHeadBackL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadBackL (const MethodInfo* method);
// 0x5ab18b0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadBackL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.head.back.l");
    Il2CppMethodInitialized_07546b08 = '\x01';
  }
  return "Amarture_VER2|grab.head.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHeadBackR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadBackR (const MethodInfo* method);
// 0x5ab18e0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadBackR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.head.back.r");
    Il2CppMethodInitialized_07546b09 = '\x01';
  }
  return "Amarture_VER2|grab.head.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHeadFrontL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadFrontL (const MethodInfo* method);
// 0x5ab1910

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadFrontL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.head.front.1");
    Il2CppMethodInitialized_07546b0a = '\x01';
  }
  return "Amarture_VER2|grab.head.front.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHeadFrontR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadFrontR (const MethodInfo* method);
// 0x5ab1940

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadFrontR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.head.front.r");
    Il2CppMethodInitialized_07546b0b = '\x01';
  }
  return "Amarture_VER2|grab.head.front.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHighL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHighL (const MethodInfo* method);
// 0x5ab1970

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHighL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.high.l");
    Il2CppMethodInitialized_07546b0c = '\x01';
  }
  return "Amarture_VER2|grab.high.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHighR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHighR (const MethodInfo* method);
// 0x5ab19a0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHighR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.high.r");
    Il2CppMethodInitialized_07546b0d = '\x01';
  }
  return "Amarture_VER2|grab.high.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabStomachL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabStomachL (const MethodInfo* method);
// 0x5ab19d0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabStomachL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.stomach.l");
    Il2CppMethodInitialized_07546b0e = '\x01';
  }
  return "Amarture_VER2|grab.stomach.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabStomachR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabStomachR (const MethodInfo* method);
// 0x5ab1a00

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabStomachR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.stomach.r");
    Il2CppMethodInitialized_07546b0f = '\x01';
  }
  return "Amarture_VER2|grab.stomach.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackEatL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackEatL (const MethodInfo* method);
// 0x5ab1a30

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackEatL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|eat.l");
    Il2CppMethodInitialized_07546b10 = '\x01';
  }
  return "Amarture_VER2|eat.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackEatR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackEatR (const MethodInfo* method);
// 0x5ab1a60

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackEatR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|eat.r");
    Il2CppMethodInitialized_07546b11 = '\x01';
  }
  return "Amarture_VER2|eat.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapHighL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapHighL (const MethodInfo* method);
// 0x5ab1a90

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapHighL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.high.l");
    Il2CppMethodInitialized_07546b12 = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.high.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapHighR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapHighR (const MethodInfo* method);
// 0x5ab1ac0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapHighR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.high.r");
    Il2CppMethodInitialized_07546b13 = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.high.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapL (const MethodInfo* method);
// 0x5ab1af0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.l");
    Il2CppMethodInitialized_07546b14 = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapR (const MethodInfo* method);
// 0x5ab1b20

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.r");
    Il2CppMethodInitialized_07546b15 = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapLowL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapLowL (const MethodInfo* method);
// 0x5ab1b50

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapLowL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.low.l");
    Il2CppMethodInitialized_07546b16 = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.low.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapLowR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapLowR (const MethodInfo* method);
// 0x5ab1b80

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapLowR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.low.r");
    Il2CppMethodInitialized_07546b17 = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.low.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBrushChestL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBrushChestL (const MethodInfo* method);
// 0x5ab1bb0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBrushChestL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.chest.L");
    Il2CppMethodInitialized_07546b18 = '\x01';
  }
  return "Amarture_VER2|attack.chest.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBrushChestR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBrushChestR (const MethodInfo* method);
// 0x5ab1be0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBrushChestR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.chest.R");
    Il2CppMethodInitialized_07546b19 = '\x01';
  }
  return "Amarture_VER2|attack.chest.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackHitBack
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackHitBack (const MethodInfo* method);
// 0x5ab1c10

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackHitBack(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.slap.back");
    Il2CppMethodInitialized_07546b1a = '\x01';
  }
  return "Amarture_VER2|attack.slap.back";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackHitFace
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackHitFace (const MethodInfo* method);
// 0x5ab1c40

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackHitFace(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.slap.face");
    Il2CppMethodInitialized_07546b1b = '\x01';
  }
  return "Amarture_VER2|attack.slap.face";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackRockThrow
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackRockThrow (const MethodInfo* method);
// 0x5ab1c70

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackRockThrow(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.throw");
    Il2CppMethodInitialized_07546b1c = '\x01';
  }
  return "Amarture_VER2|attack.throw";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackJump
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackJump (const MethodInfo* method);
// 0x5ab1ca0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackJump(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.jumper.0");
    Il2CppMethodInitialized_07546b1d = '\x01';
  }
  return "Amarture_VER2|attack.jumper.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackJumpCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackJumpCrawler (const MethodInfo* method);
// 0x5ab1cd0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackJumpCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.crawler.jump.0");
    Il2CppMethodInitialized_07546b1e = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitIdle
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitIdle (const MethodInfo* method);
// 0x5ab1d00

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitIdle(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_idle");
    Il2CppMethodInitialized_07546b1f = '\x01';
  }
  return "Amarture_VER2|sit_idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitIdleCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitIdleCrawler (const MethodInfo* method);
// 0x5ab1d30

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitIdleCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.sit.idle");
    Il2CppMethodInitialized_07546b20 = '\x01';
  }
  return "Amarture_VER2|crawler.sit.idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitDown
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitDown (const MethodInfo* method);
// 0x5ab1d60

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitDown(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_down");
    Il2CppMethodInitialized_07546b21 = '\x01';
  }
  return "Amarture_VER2|sit_down";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitUp
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitUp (const MethodInfo* method);
// 0x5ab1d90

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitUp(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_getup");
    Il2CppMethodInitialized_07546b22 = '\x01';
  }
  return "Amarture_VER2|sit_getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitUpCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitUpCrawler (const MethodInfo* method);
// 0x5ab1dc0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitUpCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.getup");
    Il2CppMethodInitialized_07546b23 = '\x01';
  }
  return "Amarture_VER2|crawler.getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitFall
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitFall (const MethodInfo* method);
// 0x5ab1df0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitFall(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_hunt_down");
    Il2CppMethodInitialized_07546b24 = '\x01';
  }
  return "Amarture_VER2|sit_hunt_down";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitFallCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitFallCrawler (const MethodInfo* method);
// 0x5ab1e20

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitFallCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.hunt.down");
    Il2CppMethodInitialized_07546b25 = '\x01';
  }
  return "Amarture_VER2|crawler.hunt.down";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Turn90L
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90L (const MethodInfo* method);
// 0x5ab1e50

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90L(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|turnaround.L");
    Il2CppMethodInitialized_07546b26 = '\x01';
  }
  return "Amarture_VER2|turnaround.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Turn90R
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90R (const MethodInfo* method);
// 0x5ab1e80

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90R(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|turnaround.R");
    Il2CppMethodInitialized_07546b27 = '\x01';
  }
  return "Amarture_VER2|turnaround.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Turn90LCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90LCrawler (const MethodInfo* method);
// 0x5ab1eb0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90LCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.turnaround.L");
    Il2CppMethodInitialized_07546b28 = '\x01';
  }
  return "Amarture_VER2|crawler.turnaround.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Turn90RCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90RCrawler (const MethodInfo* method);
// 0x5ab1ee0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90RCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.turnaround.R");
    Il2CppMethodInitialized_07546b29 = '\x01';
  }
  return "Amarture_VER2|crawler.turnaround.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Blind
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Blind (const MethodInfo* method);
// 0x5ab1f10

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Blind(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|hit.eye");
    Il2CppMethodInitialized_07546b2a = '\x01';
  }
  return "Amarture_VER2|hit.eye";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitBlind
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitBlind (const MethodInfo* method);
// 0x5ab1f40

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitBlind(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_hit_eye");
    Il2CppMethodInitialized_07546b2b = '\x01';
  }
  return "Amarture_VER2|sit_hit_eye";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_BlindCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_BlindCrawler (const MethodInfo* method);
// 0x5ab1f70

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_BlindCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.hiteyes");
    Il2CppMethodInitialized_07546b2c = '\x01';
  }
  return "Amarture_VER2|crawler.hiteyes";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_ArmHurtL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_ArmHurtL (const MethodInfo* method);
// 0x5ab1fa0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_ArmHurtL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|arm_hurt_L");
    Il2CppMethodInitialized_07546b2d = '\x01';
  }
  return "Amarture_VER2|arm_hurt_L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_ArmHurtR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_ArmHurtR (const MethodInfo* method);
// 0x5ab1fd0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_ArmHurtR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|arm_hurt_R");
    Il2CppMethodInitialized_07546b2e = '\x01';
  }
  return "Amarture_VER2|arm_hurt_R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_CoverNape
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_CoverNape (const MethodInfo* method);
// 0x5ab2000

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_CoverNape(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|idle.recovery");
    Il2CppMethodInitialized_07546b2f = '\x01';
  }
  return "Amarture_VER2|idle.recovery";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_EmoteLaugh
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteLaugh (const MethodInfo* method);
// 0x5ab2030

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteLaugh(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|laugh");
    Il2CppMethodInitialized_07546b30 = '\x01';
  }
  return "Amarture_VER2|laugh";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_EmoteNod
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteNod (const MethodInfo* method);
// 0x5ab2060

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteNod(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|emote_titan_yes");
    Il2CppMethodInitialized_07546b31 = '\x01';
  }
  return "Amarture_VER2|emote_titan_yes";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_EmoteShake
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteShake (const MethodInfo* method);
// 0x5ab2090

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteShake(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|emote_titan_no");
    Il2CppMethodInitialized_07546b32 = '\x01';
  }
  return "Amarture_VER2|emote_titan_no";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_EmoteRoar
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteRoar (const MethodInfo* method);
// 0x5ab20c0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteRoar(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.scream");
    Il2CppMethodInitialized_07546b33 = '\x01';
  }
  return "Amarture_VER2|attack.scream";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_ClassName (CustomLogic_CustomLogicTitanAnimationEnum_o* __this, const MethodInfo* method);
// 0x5ab20f0

System_String_o *
CustomLogic_CustomLogicTitanAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAnimationEnum");
    Il2CppMethodInitialized_07546b34 = '\x01';
  }
  return "TitanAnimationEnum";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTitanAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicTitanAnimationEnum_o* __this, const MethodInfo* method);
// 0x5ab2120

bool CustomLogic_CustomLogicTitanAnimationEnum__get_IsAbstract
               (CustomLogic_CustomLogicTitanAnimationEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTitanAnimationEnum__get_IsStatic (CustomLogic_CustomLogicTitanAnimationEnum_o* __this, const MethodInfo* method);
// 0x5ab2130

bool CustomLogic_CustomLogicTitanAnimationEnum__get_IsStatic
               (CustomLogic_CustomLogicTitanAnimationEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTitanAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTitanAnimationEnum_o* __this, const MethodInfo* method);
// 0x5ab2140

bool CustomLogic_CustomLogicTitanAnimationEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicTitanAnimationEnum_o *__this,MethodInfo *method)

{
  return true;
}


