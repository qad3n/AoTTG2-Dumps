// Type: CustomLogic.CustomLogicTitanAnimationEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTitanAnimationEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTitanAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTitanAnimationEnum_o* CustomLogic_CustomLogicTitanAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x182017220

CustomLogic_CustomLogicTitanAnimationEnum_o *
CustomLogic_CustomLogicTitanAnimationEnum_Factory__CreateInstance
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
  
  if (Il2CppMethodInitialized_18434617d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum);
    Il2CppMethodInitialized_18434617d = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum);
      if (Il2CppMethodInitialized_184346121 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184346121 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicTitanAnimationEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTitanAnimationEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ff7180

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_18434617e == '\0') {
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
    Il2CppMethodInitialized_18434617e = '\x01';
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
                if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
                }
                if (Il2CppMethodInitialized_1843461ba == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&
                             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapR_g____get
                            );
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
                  Il2CppMethodInitialized_1843461ba = '\x01';
                }
                __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
                pMVar4 = 
                MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapR_g____get
                ;
                goto label_181ffaa94;
              }
            }
            else if (uVar2 == 0x87de46b) {
              bVar1 = System_String__op_Equality(name,"AttackPunch",(MethodInfo *)0x0);
              if (bVar1) {
                if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
                }
                if (Il2CppMethodInitialized_184346196 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&
                             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackPunch_g____get
                            );
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
                  Il2CppMethodInitialized_184346196 = '\x01';
                }
                __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
                pMVar4 = 
                MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackPunch_g____get
                ;
                goto label_181ffaa94;
              }
            }
          }
          else if (uVar2 == 0xa250c8c) {
            bVar1 = System_String__op_Equality(name,"DieFront",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_18434618f == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieFront_g____getter
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
                Il2CppMethodInitialized_18434618f = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieFront_g____getter
              ;
              goto label_181ffaa94;
            }
          }
          else if (uVar2 == 0xb04c157) {
            bVar1 = System_String__op_Equality(name,"AttackGrabGroundFrontR",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_1843461ac == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundFron_40e3270
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
                Il2CppMethodInitialized_1843461ac = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundFron_40e3270
              ;
              goto label_181ffaa94;
            }
          }
          else if (uVar2 == 0xcb00c2d) {
            bVar1 = System_String__op_Equality(name,"AttackGrabGroundBackL",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_1843461a9 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundBack
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
                Il2CppMethodInitialized_1843461a9 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundBack
              ;
              goto label_181ffaa94;
            }
          }
        }
        else if (uVar2 < 0xfd3122c) {
          if (uVar2 == 0xd2f75f1) {
            bVar1 = System_String__op_Equality(name,"AttackGrabAirR",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_1843461a4 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirR_g
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
                Il2CppMethodInitialized_1843461a4 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirR_g
              ;
              goto label_181ffaa94;
            }
          }
          else if (uVar2 == 0xe1ef32d) {
            bVar1 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184346188 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_11
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
                Il2CppMethodInitialized_184346188 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_11
              ;
              goto label_181ffaa94;
            }
          }
          else if (uVar2 == 0xfd3122b) {
            bVar1 = System_String__op_Equality(name,"AttackGrabHighR",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_1843461b2 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHighR_g
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
                Il2CppMethodInitialized_1843461b2 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHighR_g
              ;
              goto label_181ffaa94;
            }
          }
        }
        else if (uVar2 == 0x1104cac9) {
          bVar1 = System_String__op_Equality(name,"AttackGrabGroundFrontL",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843461ab == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundFron
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_1843461ab = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundFron
            ;
            goto label_181ffaa94;
          }
        }
        else if (uVar2 == 0x12aed9d5) {
          bVar1 = System_String__op_Equality(name,"AttackSlapL",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843461b9 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapL_g____get
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_1843461b9 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapL_g____get
            ;
            goto label_181ffaa94;
          }
        }
        else if (uVar2 == 0x132daa5f) {
          bVar1 = System_String__op_Equality(name,"AttackBiteR",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843461a0 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBiteR_g____get
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_1843461a0 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBiteR_g____get
            ;
            goto label_181ffaa94;
          }
        }
        goto label_181ffaad6;
      }
      if (uVar2 < 0x22ccd731) {
        if (uVar2 < 0x1d298760) {
          if (uVar2 == 0x172f85af) {
            bVar1 = System_String__op_Equality(name,"AttackGrabAirL",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_1843461a3 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirL_g
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
                Il2CppMethodInitialized_1843461a3 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirL_g
              ;
              goto label_181ffaa94;
            }
          }
          else if (uVar2 == 0x1d29875f) {
            bVar1 = System_String__op_Equality(name,"AttackSlapHighR",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_1843461b8 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapHighR_g
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
                Il2CppMethodInitialized_1843461b8 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapHighR_g
              ;
              goto label_181ffaa94;
            }
          }
        }
        else if (uVar2 == 0x1dd32835) {
          bVar1 = System_String__op_Equality(name,"AttackGrabHighL",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843461b1 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHighL_g
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_1843461b1 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHighL_g
            ;
            goto label_181ffaa94;
          }
        }
        else if (uVar2 == 0x1f2dbd43) {
          bVar1 = System_String__op_Equality(name,"AttackBiteF",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_18434619e == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBiteF_g____get
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_18434619e = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBiteF_g____get
            ;
            goto label_181ffaa94;
          }
        }
        else if (uVar2 == 0x22ccd730) {
          bVar1 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184346187 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_10
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_184346187 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_10
            ;
            goto label_181ffaa94;
          }
        }
      }
      else if (uVar2 < 0x292dcd02) {
        if (uVar2 == 0x25093a4c) {
          bVar1 = System_String__op_Equality(name,"ArmHurtL",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843461d2 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__ArmHurtL_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_1843461d2 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__ArmHurtL_g____getter
            ;
            goto label_181ffaa94;
          }
        }
        else if (uVar2 == 0x27bb25ca) {
          bVar1 = System_String__op_Equality(name,"SitFallCrawler",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843461ca == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitFallCrawler_g
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_1843461ca = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitFallCrawler_g
            ;
            goto label_181ffaa94;
          }
        }
        else if (uVar2 == 0x292dcd01) {
          bVar1 = System_String__op_Equality(name,"AttackBiteL",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_18434619f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBiteL_g____get
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_18434619f = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBiteL_g____get
            ;
            goto label_181ffaa94;
          }
        }
      }
      else if (uVar2 == 0x3329aa01) {
        bVar1 = System_String__op_Equality(name,"AttackSlapHighL",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843461b7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapHighL_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_1843461b7 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapHighL_g
          ;
          goto label_181ffaa94;
        }
      }
      else if (uVar2 == 0x371c1522) {
        bVar1 = System_String__op_Equality(name,"AttackStomp",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_18434619b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackStomp_g____get
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_18434619b = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackStomp_g____get
          ;
          goto label_181ffaa94;
        }
      }
      else if (uVar2 == 0x3a2d364e) {
        bVar1 = System_String__op_Equality(name,"AttackBellyFlop",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346198 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBellyFlop_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_184346198 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBellyFlop_g
          ;
          goto label_181ffaa94;
        }
      }
      goto label_181ffaad6;
    }
    if (uVar2 < 0x5d992b42) {
      if (uVar2 < 0x425a9db8) {
        if (uVar2 < 0x3d9daaed) {
          if (uVar2 == 0x3b095cee) {
            bVar1 = System_String__op_Equality(name,"ArmHurtR",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_1843461d3 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__ArmHurtR_g____getter
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
                Il2CppMethodInitialized_1843461d3 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__ArmHurtR_g____getter
              ;
              goto label_181ffaa94;
            }
          }
          else if (uVar2 == 0x3d9daaec) {
            bVar1 = System_String__op_Equality(name,"StunLeft",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_18434618c == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__StunLeft_g____getter
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
                Il2CppMethodInitialized_18434618c = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__StunLeft_g____getter
              ;
              goto label_181ffaa94;
            }
          }
        }
        else if (uVar2 == 0x3db5a1bf) {
          bVar1 = System_String__op_Equality(name,"EmoteShake",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843461d7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteShake_g____gett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_1843461d7 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteShake_g____gett
            ;
            goto label_181ffaa94;
          }
        }
        else if (uVar2 == 0x3fd565eb) {
          bVar1 = System_String__op_Equality(name,"DieSit",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184346192 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieSit_g____getter_2
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_184346192 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieSit_g____getter_2
            ;
            goto label_181ffaa94;
          }
        }
        else if (uVar2 == 0x425a9db7) {
          bVar1 = System_String__op_Equality(name,"AttackBellyFlopGetup",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184346199 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBellyFlopGetup
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_184346199 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBellyFlopGetup
            ;
            goto label_181ffaa94;
          }
        }
      }
      else if (uVar2 < 0x45aa17b4) {
        if (uVar2 == 0x426f593c) {
          bVar1 = System_String__op_Equality(name,"EmoteLaugh",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843461d5 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteLaugh_g____gett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_1843461d5 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteLaugh_g____gett
            ;
            goto label_181ffaa94;
          }
        }
        else if (uVar2 == 0x45516aaa) {
          bVar1 = System_String__op_Equality(name,"SitUp",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843461c7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitUp_g____getter_74
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_1843461c7 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitUp_g____getter_74
            ;
            goto label_181ffaa94;
          }
        }
        else if (uVar2 == 0x45aa17b3) {
          bVar1 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_18434617f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_18434617f = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
            ;
            goto label_181ffaa94;
          }
        }
      }
      else if (uVar2 == 0x518c7bc2) {
        bVar1 = System_String__op_Equality(name,"DieGround",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346190 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieGround_g____gette
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_184346190 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieGround_g____gette
          ;
          goto label_181ffaa94;
        }
      }
      else if (uVar2 == 0x54623468) {
        bVar1 = System_String__op_Equality(name,"FallCrawler",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346185 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__FallCrawler_g____get
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_184346185 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__FallCrawler_g____get
          ;
          goto label_181ffaa94;
        }
      }
      else if (uVar2 == 0x5d992b41) {
        bVar1 = System_String__op_Equality(name,"Stun",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_18434618b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Stun_g____getter_14
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_18434618b = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Stun_g____getter_14
          ;
          goto label_181ffaa94;
        }
      }
      goto label_181ffaad6;
    }
    if (uVar2 < 0x717ed71c) {
      if (uVar2 < 0x69fd27f7) {
        if (uVar2 == 0x5f7ebac5) {
          bVar1 = System_String__op_Equality(name,"Turn90L",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843461cb == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90L_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_1843461cb = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90L_g____getter
            ;
            goto label_181ffaa94;
          }
        }
        else if (uVar2 == 0x6700754b) {
          bVar1 = System_String__op_Equality(name,"AttackHitFace",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843461c0 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackHitFace_g____g
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_1843461c0 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackHitFace_g____g
            ;
            goto label_181ffaa94;
          }
        }
        else if (uVar2 == 0x69fd27f6) {
          bVar1 = System_String__op_Equality(name,"RunAbnormal",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184346180 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__RunAbnormal_g____get
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_184346180 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__RunAbnormal_g____get
            ;
            goto label_181ffaa94;
          }
        }
      }
      else if (uVar2 == 0x6ada9f85) {
        bVar1 = System_String__op_Equality(name,"DieBlow",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346193 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieBlow_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_184346193 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieBlow_g____getter
          ;
          goto label_181ffaa94;
        }
      }
      else if (uVar2 == 0x70cfd606) {
        bVar1 = System_String__op_Equality(name,"RunCrawler",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346182 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__RunCrawler_g____gett
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_184346182 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__RunCrawler_g____gett
          ;
          goto label_181ffaa94;
        }
      }
      else if (uVar2 == 0x717ed71b) {
        bVar1 = System_String__op_Equality(name,"Turn90R",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843461cc == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90R_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_1843461cc = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90R_g____getter
          ;
          goto label_181ffaa94;
        }
      }
    }
    else if (uVar2 < 0x7b00bc81) {
      if (uVar2 == 0x729a03b7) {
        bVar1 = System_String__op_Equality(name,"AttackJumpCrawler",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843461c3 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackJumpCrawler_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_1843461c3 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackJumpCrawler_g
          ;
          goto label_181ffaa94;
        }
      }
      else if (uVar2 == 0x745f154b) {
        bVar1 = System_String__op_Equality(name,"AttackSlapLowR",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843461bc == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapLowR_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_1843461bc = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapLowR_g
          ;
          goto label_181ffaa94;
        }
      }
      else if (uVar2 == 0x7b00bc80) {
        bVar1 = System_String__op_Equality(name,"Fall",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346189 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_12
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_184346189 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_12
          ;
          goto label_181ffaa94;
        }
      }
    }
    else if (uVar2 == 0x7b128cf9) {
      bVar1 = System_String__op_Equality(name,"StunRight",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434618d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__StunRight_g____gette
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          Il2CppMethodInitialized_18434618d = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__StunRight_g____gette
        ;
        goto label_181ffaa94;
      }
    }
    else if (uVar2 == 0x7b4c8700) {
      bVar1 = System_String__op_Equality(name,"AttackGrabCoreL",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843461a7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabCoreL_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          Il2CppMethodInitialized_1843461a7 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabCoreL_g
        ;
        goto label_181ffaa94;
      }
    }
    else if (uVar2 == 0x7cdffe17) {
      bVar1 = System_String__op_Equality(name,"Turn90LCrawler",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843461cd == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90LCrawler_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          Il2CppMethodInitialized_1843461cd = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90LCrawler_g
        ;
        goto label_181ffaa94;
      }
    }
    goto label_181ffaad6;
  }
  if (uVar2 < 0xac717d26) {
    if (uVar2 < 0x882f3d51) {
      if (uVar2 < 0x838656ad) {
        if (uVar2 < 0x7ee23ea7) {
          if (uVar2 == 0x7e4b9533) {
            bVar1 = System_String__op_Equality(name,"AttackEatL",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_1843461b5 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackEatL_g____gett
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
                Il2CppMethodInitialized_1843461b5 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackEatL_g____gett
              ;
              goto label_181ffaa94;
            }
          }
          else if (uVar2 == 0x7ee23ea6) {
            bVar1 = System_String__op_Equality(name,"AttackGrabHeadFrontR",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_1843461b0 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadFrontR
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
                Il2CppMethodInitialized_1843461b0 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadFrontR
              ;
              goto label_181ffaa94;
            }
          }
        }
        else if (uVar2 == 0x7f7ae464) {
          bVar1 = System_String__op_Equality(name,"AttackBrushChestL",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843461bd == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushChestL_g
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_1843461bd = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushChestL_g
            ;
            goto label_181ffaa94;
          }
        }
        else if (uVar2 == 0x825f2b55) {
          bVar1 = System_String__op_Equality(name,"AttackSlapLowL",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843461bb == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapLowL_g
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_1843461bb = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapLowL_g
            ;
            goto label_181ffaa94;
          }
        }
        else if (uVar2 == 0x838656ac) {
          bVar1 = System_String__op_Equality(name,"AttackSlam",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184346197 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlam_g____gett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_184346197 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlam_g____gett
            ;
            goto label_181ffaa94;
          }
        }
      }
      else if (uVar2 < 0x862f3a2b) {
        if (uVar2 == 0x84fc6844) {
          bVar1 = System_String__op_Equality(name,"AttackGrabBackL",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843461a5 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBackL_g
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_1843461a5 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBackL_g
            ;
            goto label_181ffaa94;
          }
        }
        else if (uVar2 == 0x857aedd6) {
          bVar1 = System_String__op_Equality(name,"AttackBrushChestR",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843461be == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushChestR_g
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_1843461be = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushChestR_g
            ;
            goto label_181ffaa94;
          }
        }
        else if (uVar2 == 0x862f3a2a) {
          bVar1 = System_String__op_Equality(name,"AttackGrabAirFarL",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843461a1 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirFarL_g
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_1843461a1 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirFarL_g
            ;
            goto label_181ffaa94;
          }
        }
      }
      else if (uVar2 == 0x86827373) {
        bVar1 = System_String__op_Equality(name,"DieCrawler",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346191 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieCrawler_g____gett
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_184346191 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieCrawler_g____gett
          ;
          goto label_181ffaa94;
        }
      }
      else if (uVar2 == 0x87b6990b) {
        bVar1 = System_String__op_Equality(name,"SitDown",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843461c6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitDown_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_1843461c6 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitDown_g____getter
          ;
          goto label_181ffaa94;
        }
      }
      else if (uVar2 == 0x882f3d50) {
        bVar1 = System_String__op_Equality(name,"AttackGrabAirFarR",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843461a2 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirFarR_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_1843461a2 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirFarR_g
          ;
          goto label_181ffaa94;
        }
      }
      goto label_181ffaad6;
    }
    if (uVar2 < 0x994cb63b) {
      if (uVar2 < 0x912e23bf) {
        if (uVar2 == 0x8afc71b6) {
          bVar1 = System_String__op_Equality(name,"AttackGrabBackR",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843461a6 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBackR_g
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_1843461a6 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBackR_g
            ;
            goto label_181ffaa94;
          }
        }
        else if (uVar2 == 0x912e23be) {
          bVar1 = System_String__op_Equality(name,"SitFall",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843461c9 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitFall_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_1843461c9 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitFall_g____getter
            ;
            goto label_181ffaa94;
          }
        }
      }
      else if (uVar2 == 0x972856bf) {
        bVar1 = System_String__op_Equality(name,"SitIdleCrawler",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843461c5 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitIdleCrawler_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_1843461c5 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitIdleCrawler_g
          ;
          goto label_181ffaa94;
        }
      }
      else if (uVar2 == 0x98e26794) {
        bVar1 = System_String__op_Equality(name,"AttackGrabHeadFrontL",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843461af == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadFrontL
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_1843461af = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadFrontL
          ;
          goto label_181ffaa94;
        }
      }
      else if (uVar2 == 0x994cb63a) {
        bVar1 = System_String__op_Equality(name,"AttackGrabCoreR",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843461a8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabCoreR_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_1843461a8 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabCoreR_g
          ;
          goto label_181ffaa94;
        }
      }
    }
    else if (uVar2 < 0xa47f6adf) {
      if (uVar2 == 0x99ca44b9) {
        bVar1 = System_String__op_Equality(name,"IdleCrawler",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346183 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__IdleCrawler_g____get
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_184346183 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__IdleCrawler_g____get
          ;
          goto label_181ffaa94;
        }
      }
      else if (uVar2 == 0x9c4bc46d) {
        bVar1 = System_String__op_Equality(name,"AttackEatR",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843461b6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackEatR_g____gett
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_1843461b6 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackEatR_g____gett
          ;
          goto label_181ffaa94;
        }
      }
      else if (uVar2 == 0xa47f6ade) {
        bVar1 = System_String__op_Equality(name,"DieBack",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_18434618e == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieBack_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_18434618e = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieBack_g____getter
          ;
          goto label_181ffaa94;
        }
      }
    }
    else if (uVar2 == 0xa9381ee1) {
      bVar1 = System_String__op_Equality(name,"Turn90RCrawler",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843461ce == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90RCrawler_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          Il2CppMethodInitialized_1843461ce = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90RCrawler_g
        ;
        goto label_181ffaa94;
      }
    }
    else if (uVar2 == 0xaa02d909) {
      bVar1 = System_String__op_Equality(name,"SprintAbnormal",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346181 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SprintAbnormal_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          Il2CppMethodInitialized_184346181 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SprintAbnormal_g
        ;
        goto label_181ffaa94;
      }
    }
    else if (uVar2 == 0xac717d25) {
      bVar1 = System_String__op_Equality(name,"AttackJump",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843461c2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackJump_g____gett
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          Il2CppMethodInitialized_1843461c2 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackJump_g____gett
        ;
        goto label_181ffaa94;
      }
    }
    goto label_181ffaad6;
  }
  if (uVar2 < 0xd0f70cad) {
    if (uVar2 < 0xc2cea647) {
      if (uVar2 < 0xbe6b9bc0) {
        if (uVar2 == 0xb8819b82) {
          bVar1 = System_String__op_Equality(name,"SitBlind",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843461d0 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitBlind_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_1843461d0 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitBlind_g____getter
            ;
            goto label_181ffaa94;
          }
        }
        else if (uVar2 == 0xbe6b9bbf) {
          bVar1 = System_String__op_Equality(name,"JumpCrawler",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184346184 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__JumpCrawler_g____get
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
              Il2CppMethodInitialized_184346184 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__JumpCrawler_g____get
            ;
            goto label_181ffaa94;
          }
        }
      }
      else if (uVar2 == 0xc0fd15a3) {
        bVar1 = System_String__op_Equality(name,"AttackPunchCombo",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346195 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackPunchCombo_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_184346195 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackPunchCombo_g
          ;
          goto label_181ffaa94;
        }
      }
      else if (uVar2 == 0xc1018924) {
        bVar1 = System_String__op_Equality(name,"EmoteNod",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843461d6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteNod_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_1843461d6 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteNod_g____getter
          ;
          goto label_181ffaa94;
        }
      }
      else if (uVar2 == 0xc2cea646) {
        bVar1 = System_String__op_Equality(name,"SitUpCrawler",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843461c8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitUpCrawler_g____ge
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_1843461c8 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitUpCrawler_g____ge
          ;
          goto label_181ffaa94;
        }
      }
    }
    else if (uVar2 < 0xc6f75898) {
      if (uVar2 == 0xc4a10b99) {
        bVar1 = System_String__op_Equality(name,"AttackSwingR",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_18434619d == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSwingR_g____ge
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_18434619d = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSwingR_g____ge
          ;
          goto label_181ffaa94;
        }
      }
      else if (uVar2 == 0xc65e5944) {
        bVar1 = System_String__op_Equality(name,"AttackRockThrow",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843461c1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackRockThrow_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_1843461c1 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackRockThrow_g
          ;
          goto label_181ffaa94;
        }
      }
      else if (uVar2 == 0xc6f75897) {
        bVar1 = System_String__op_Equality(name,"EmoteRoar",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843461d8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteRoar_g____gette
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_1843461d8 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteRoar_g____gette
          ;
          goto label_181ffaa94;
        }
      }
    }
    else if (uVar2 == 0xc8f30ee7) {
      bVar1 = System_String__op_Equality(name,"AttackKick",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434619a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackKick_g____gett
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          Il2CppMethodInitialized_18434619a = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackKick_g____gett
        ;
        goto label_181ffaa94;
      }
    }
    else if (uVar2 == 0xcf14e204) {
      bVar1 = System_String__op_Equality(name,"AttackGrabStomachL",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843461b3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabStomachL_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          Il2CppMethodInitialized_1843461b3 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabStomachL_g
        ;
        goto label_181ffaa94;
      }
    }
    else if (uVar2 == 0xd0f70cac) {
      bVar1 = System_String__op_Equality(name,"DieHeadOff",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346194 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieHeadOff_g____gett
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          Il2CppMethodInitialized_184346194 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieHeadOff_g____gett
        ;
        goto label_181ffaa94;
      }
    }
    goto label_181ffaad6;
  }
  if (uVar2 < 0xe6b2342e) {
    if (uVar2 < 0xd8f110d5) {
      if (uVar2 == 0xd514eb76) {
        bVar1 = System_String__op_Equality(name,"AttackGrabStomachR",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843461b4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabStomachR_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_1843461b4 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabStomachR_g
          ;
          goto label_181ffaa94;
        }
      }
      else if (uVar2 == 0xd5e03fe2) {
        bVar1 = System_String__op_Equality(name,"CoverNape",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843461d4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__CoverNape_g____gette
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_1843461d4 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__CoverNape_g____gette
          ;
          goto label_181ffaa94;
        }
      }
      else if (uVar2 == 0xd8f110d4) {
        bVar1 = System_String__op_Equality(name,"LandCrawler",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346186 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__LandCrawler_g____get
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
            Il2CppMethodInitialized_184346186 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__LandCrawler_g____get
          ;
          goto label_181ffaa94;
        }
      }
    }
    else if (uVar2 == 0xdea13487) {
      bVar1 = System_String__op_Equality(name,"AttackSwingL",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434619c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSwingL_g____ge
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          Il2CppMethodInitialized_18434619c = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSwingL_g____ge
        ;
        goto label_181ffaa94;
      }
    }
    else if (uVar2 == 0xe4d66f54) {
      bVar1 = System_String__op_Equality(name,"Blind",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843461cf == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Blind_g____getter_82
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          Il2CppMethodInitialized_1843461cf = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Blind_g____getter_82
        ;
        goto label_181ffaa94;
      }
    }
    else if (uVar2 == 0xe6b2342d) {
      bVar1 = System_String__op_Equality(name,"SitIdle",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843461c4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitIdle_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          Il2CppMethodInitialized_1843461c4 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitIdle_g____getter
        ;
        goto label_181ffaa94;
      }
    }
  }
  else if (uVar2 < 0xee1682bd) {
    if (uVar2 == 0xe8476a11) {
      bVar1 = System_String__op_Equality(name,"AttackHitBack",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843461bf == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackHitBack_g____g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          Il2CppMethodInitialized_1843461bf = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackHitBack_g____g
        ;
        goto label_181ffaa94;
      }
    }
    else if (uVar2 == 0xe89df278) {
      bVar1 = System_String__op_Equality(name,"AttackGrabHeadBackR",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843461ae == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadBackR
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          Il2CppMethodInitialized_1843461ae = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadBackR
        ;
        goto label_181ffaa94;
      }
    }
    else if (uVar2 == 0xee1682bc) {
      bVar1 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434618a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_13
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
          Il2CppMethodInitialized_18434618a = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_13
        ;
        goto label_181ffaa94;
      }
    }
  }
  else if (uVar2 == 0xeeafdcf3) {
    bVar1 = System_String__op_Equality(name,"AttackGrabGroundBackR",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
      }
      if (Il2CppMethodInitialized_1843461aa == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundBack_40e30b8
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
        ;
        Il2CppMethodInitialized_1843461aa = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundBack_40e30b8
      ;
label_181ffaa94:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)0x0,
                 (MethodInfo_12B8EE0 *)
                 MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
  }
  else if (uVar2 == 0xf69e0882) {
    bVar1 = System_String__op_Equality(name,"AttackGrabHeadBackL",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
      }
      if (Il2CppMethodInitialized_1843461ad == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadBackL
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
        ;
        Il2CppMethodInitialized_1843461ad = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadBackL
      ;
      goto label_181ffaa94;
    }
  }
  else if (uVar2 == 0xfd07560c) {
    bVar1 = System_String__op_Equality(name,"BlindCrawler",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings);
      }
      if (Il2CppMethodInitialized_1843461d1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__BlindCrawler_g____ge
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
        ;
        Il2CppMethodInitialized_1843461d1 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__BlindCrawler_g____ge
      ;
      goto label_181ffaa94;
    }
  }
label_181ffaad6:
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTitanAnimationEnum not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Idle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Idle (const MethodInfo* method);
// 0x1820058f0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Idle(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434617f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_18434617f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__RunAbnormal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__RunAbnormal (const MethodInfo* method);
// 0x1820071a0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__RunAbnormal(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346180 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__RunAbnormal_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_184346180 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__RunAbnormal_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SprintAbnormal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SprintAbnormal (const MethodInfo* method);
// 0x182007880

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SprintAbnormal
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346181 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SprintAbnormal_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_184346181 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SprintAbnormal_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__RunCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__RunCrawler (const MethodInfo* method);
// 0x182007240

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__RunCrawler(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346182 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__RunCrawler_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_184346182 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__RunCrawler_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__IdleCrawler (const MethodInfo* method);
// 0x1820057b0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__IdleCrawler(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346183 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__IdleCrawler_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_184346183 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__IdleCrawler_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__JumpCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__JumpCrawler (const MethodInfo* method);
// 0x182005a30

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__JumpCrawler(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346184 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__JumpCrawler_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_184346184 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__JumpCrawler_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__FallCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__FallCrawler (const MethodInfo* method);
// 0x1820041d0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__FallCrawler(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346185 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__FallCrawler_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_184346185 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__FallCrawler_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__LandCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__LandCrawler (const MethodInfo* method);
// 0x182005d50

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__LandCrawler(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346186 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__LandCrawler_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_184346186 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__LandCrawler_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x182008af0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346187 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_184346187 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_10
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x182005ad0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346188 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_11
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_184346188 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_11
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Fall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Fall (const MethodInfo* method);
// 0x182004270

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Fall(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346189 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_12
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_184346189 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_12
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x182005df0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Land(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434618a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_13
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_18434618a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_13
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Stun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Stun (const MethodInfo* method);
// 0x182007ba0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Stun(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434618b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Stun_g____getter_14
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_18434618b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Stun_g____getter_14
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__StunLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__StunLeft (const MethodInfo* method);
// 0x182007a60

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__StunLeft(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434618c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__StunLeft_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_18434618c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__StunLeft_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__StunRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__StunRight (const MethodInfo* method);
// 0x182007b00

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__StunRight(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434618d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__StunRight_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_18434618d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__StunRight_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieBack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieBack (const MethodInfo* method);
// 0x182003910

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieBack(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434618e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieBack_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_18434618e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieBack_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieFront
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieFront (const MethodInfo* method);
// 0x182003af0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieFront(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434618f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieFront_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_18434618f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieFront_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieGround
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieGround (const MethodInfo* method);
// 0x182003b90

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieGround(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346190 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieGround_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_184346190 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieGround_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieCrawler (const MethodInfo* method);
// 0x182003a50

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieCrawler(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346191 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieCrawler_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_184346191 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieCrawler_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieSit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieSit (const MethodInfo* method);
// 0x182003cd0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieSit(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346192 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieSit_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_184346192 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieSit_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieBlow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieBlow (const MethodInfo* method);
// 0x1820039b0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieBlow(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346193 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieBlow_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_184346193 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieBlow_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieHeadOff
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieHeadOff (const MethodInfo* method);
// 0x182003c30

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieHeadOff(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346194 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieHeadOff_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_184346194 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieHeadOff_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackPunchCombo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackPunchCombo (const MethodInfo* method);
// 0x182002010

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackPunchCombo
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346195 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackPunchCombo_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_184346195 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackPunchCombo_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackPunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackPunch (const MethodInfo* method);
// 0x1820020b0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackPunch(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346196 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackPunch_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_184346196 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackPunch_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlam
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlam (const MethodInfo* method);
// 0x1820021f0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlam(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346197 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlam_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_184346197 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlam_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBellyFlop
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBellyFlop (const MethodInfo* method);
// 0x182000ad0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBellyFlop
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346198 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBellyFlop_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_184346198 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBellyFlop_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBellyFlopGetup
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBellyFlopGetup (const MethodInfo* method);
// 0x182000a30

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBellyFlopGetup
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346199 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBellyFlopGetup
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_184346199 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBellyFlopGetup
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackKick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackKick (const MethodInfo* method);
// 0x182001f70

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackKick(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434619a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackKick_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_18434619a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackKick_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackStomp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackStomp (const MethodInfo* method);
// 0x1820026f0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackStomp(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434619b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackStomp_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_18434619b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackStomp_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSwingL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSwingL (const MethodInfo* method);
// 0x182002830

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSwingL(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434619c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSwingL_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_18434619c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSwingL_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSwingR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSwingR (const MethodInfo* method);
// 0x1820028d0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSwingR(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434619d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSwingR_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_18434619d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSwingR_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBiteF
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteF (const MethodInfo* method);
// 0x182000b70

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteF(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434619e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBiteF_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_18434619e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBiteF_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBiteL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteL (const MethodInfo* method);
// 0x182000c10

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteL(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434619f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBiteL_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_18434619f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBiteL_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBiteR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteR (const MethodInfo* method);
// 0x182000cb0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteR(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBiteR_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461a0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBiteR_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirFarL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirFarL (const MethodInfo* method);
// 0x182000fd0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirFarL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirFarL_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461a1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirFarL_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirFarR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirFarR (const MethodInfo* method);
// 0x182001070

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirFarR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirFarR_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461a2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirFarR_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirL (const MethodInfo* method);
// 0x182001110

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirL_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461a3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirL_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirR (const MethodInfo* method);
// 0x1820011b0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirR_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461a4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirR_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabBackL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBackL (const MethodInfo* method);
// 0x182001250

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBackL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBackL_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461a5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBackL_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabBackR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBackR (const MethodInfo* method);
// 0x1820012f0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBackR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBackR_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461a6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBackR_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabCoreL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabCoreL (const MethodInfo* method);
// 0x182001390

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabCoreL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabCoreL_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461a7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabCoreL_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabCoreR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabCoreR (const MethodInfo* method);
// 0x182001430

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabCoreR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabCoreR_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461a8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabCoreR_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabGroundBackL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundBackL (const MethodInfo* method);
// 0x1820014d0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundBackL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundBack
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461a9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundBack
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabGroundBackR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundBackR (const MethodInfo* method);
// 0x182001570

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundBackR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundBack_40e30b8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461aa = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundBack_40e30b8
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabGroundFrontL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundFrontL (const MethodInfo* method);
// 0x182001610

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundFrontL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundFron
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461ab = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundFron
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabGroundFrontR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundFrontR (const MethodInfo* method);
// 0x1820016b0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundFrontR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundFron_40e3270
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461ac = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundFron_40e3270
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHeadBackL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadBackL (const MethodInfo* method);
// 0x182001750

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadBackL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadBackL
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461ad = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadBackL
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHeadBackR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadBackR (const MethodInfo* method);
// 0x1820017f0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadBackR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadBackR
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461ae = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadBackR
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHeadFrontL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadFrontL (const MethodInfo* method);
// 0x182001890

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadFrontL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadFrontL
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461af = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadFrontL
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHeadFrontR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadFrontR (const MethodInfo* method);
// 0x182001930

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadFrontR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadFrontR
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461b0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadFrontR
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHighL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHighL (const MethodInfo* method);
// 0x1820019d0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHighL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHighL_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461b1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHighL_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHighR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHighR (const MethodInfo* method);
// 0x182001a70

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHighR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHighR_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461b2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHighR_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabStomachL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabStomachL (const MethodInfo* method);
// 0x182001b10

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabStomachL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabStomachL_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461b3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabStomachL_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabStomachR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabStomachR (const MethodInfo* method);
// 0x182001bb0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabStomachR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabStomachR_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461b4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabStomachR_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackEatL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackEatL (const MethodInfo* method);
// 0x182000e90

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackEatL(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackEatL_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461b5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackEatL_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackEatR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackEatR (const MethodInfo* method);
// 0x182000f30

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackEatR(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackEatR_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461b6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackEatR_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapHighL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapHighL (const MethodInfo* method);
// 0x182002290

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapHighL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapHighL_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461b7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapHighL_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapHighR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapHighR (const MethodInfo* method);
// 0x182002330

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapHighR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapHighR_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461b8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapHighR_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapL (const MethodInfo* method);
// 0x1820023d0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapL(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapL_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461b9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapL_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapR (const MethodInfo* method);
// 0x1820025b0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapR(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapR_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461ba = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapR_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapLowL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapLowL (const MethodInfo* method);
// 0x182002470

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapLowL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapLowL_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461bb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapLowL_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapLowR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapLowR (const MethodInfo* method);
// 0x182002510

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapLowR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapLowR_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461bc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapLowR_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushChestL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushChestL (const MethodInfo* method);
// 0x182000d50

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushChestL
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushChestL_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461bd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushChestL_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushChestR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushChestR (const MethodInfo* method);
// 0x182000df0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushChestR
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushChestR_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461be = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushChestR_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackHitBack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackHitBack (const MethodInfo* method);
// 0x182001c50

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackHitBack(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackHitBack_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461bf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackHitBack_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackHitFace
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackHitFace (const MethodInfo* method);
// 0x182001cf0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackHitFace(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackHitFace_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461c0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackHitFace_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackRockThrow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackRockThrow (const MethodInfo* method);
// 0x182002150

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackRockThrow
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackRockThrow_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461c1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackRockThrow_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackJump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackJump (const MethodInfo* method);
// 0x182001e30

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackJump(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackJump_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461c2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackJump_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackJumpCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackJumpCrawler (const MethodInfo* method);
// 0x182001d90

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackJumpCrawler
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackJumpCrawler_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461c3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackJumpCrawler_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitIdle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitIdle (const MethodInfo* method);
// 0x1820076a0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitIdle(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitIdle_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461c4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitIdle_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitIdleCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitIdleCrawler (const MethodInfo* method);
// 0x182007600

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitIdleCrawler
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitIdleCrawler_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461c5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitIdleCrawler_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitDown
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitDown (const MethodInfo* method);
// 0x182007420

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitDown(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitDown_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461c6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitDown_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitUp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitUp (const MethodInfo* method);
// 0x1820077e0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitUp(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitUp_g____getter_74
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461c7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitUp_g____getter_74
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitUpCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitUpCrawler (const MethodInfo* method);
// 0x182007740

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitUpCrawler(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitUpCrawler_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461c8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitUpCrawler_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitFall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitFall (const MethodInfo* method);
// 0x182007560

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitFall(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitFall_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461c9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitFall_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitFallCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitFallCrawler (const MethodInfo* method);
// 0x1820074c0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitFallCrawler
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitFallCrawler_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461ca = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitFallCrawler_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Turn90L
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90L (const MethodInfo* method);
// 0x1820083c0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90L(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90L_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461cb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90L_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Turn90R
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90R (const MethodInfo* method);
// 0x182008500

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90R(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90R_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461cc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90R_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Turn90LCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90LCrawler (const MethodInfo* method);
// 0x182008320

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90LCrawler
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90LCrawler_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461cd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90LCrawler_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Turn90RCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90RCrawler (const MethodInfo* method);
// 0x182008460

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90RCrawler
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90RCrawler_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461ce = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90RCrawler_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Blind
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Blind (const MethodInfo* method);
// 0x182002e70

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Blind(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Blind_g____getter_82
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461cf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Blind_g____getter_82
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitBlind
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitBlind (const MethodInfo* method);
// 0x182007380

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitBlind(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitBlind_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461d0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitBlind_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__BlindCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__BlindCrawler (const MethodInfo* method);
// 0x182002dd0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__BlindCrawler(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__BlindCrawler_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461d1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__BlindCrawler_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__ArmHurtL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__ArmHurtL (const MethodInfo* method);
// 0x182000850

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__ArmHurtL(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__ArmHurtL_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461d2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__ArmHurtL_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__ArmHurtR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__ArmHurtR (const MethodInfo* method);
// 0x1820008f0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__ArmHurtR(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__ArmHurtR_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461d3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__ArmHurtR_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__CoverNape
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__CoverNape (const MethodInfo* method);
// 0x182003410

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__CoverNape(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__CoverNape_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461d4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__CoverNape_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteLaugh
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteLaugh (const MethodInfo* method);
// 0x182003e10

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteLaugh(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteLaugh_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461d5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteLaugh_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteNod
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteNod (const MethodInfo* method);
// 0x182003eb0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteNod(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteNod_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461d6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteNod_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteShake
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteShake (const MethodInfo* method);
// 0x182003ff0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteShake(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteShake_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461d7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteShake_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteRoar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar (const MethodInfo* method);
// 0x182003f50

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar(MethodInfo *method)

{
  System_Func_CustomLogicTitanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteRoar_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object);
    Il2CppMethodInitialized_1843461d8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteRoar_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTitanAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x182009010

void CustomLogic_CustomLogicTitanAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843461d9 == '\0') {
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
    Il2CppMethodInitialized_1843461d9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Idle",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RunAbnormal",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SprintAbnormal",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RunCrawler",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IdleCrawler",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"JumpCrawler",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FallCrawler",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LandCrawler",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Walk",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Jump",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Fall",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Land",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stun",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StunLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StunRight",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DieBack",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DieFront",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DieGround",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DieCrawler",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DieSit",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DieBlow",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DieHeadOff",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackPunchCombo",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackPunch",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlam",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBellyFlop",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBellyFlopGetup",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackKick",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackStomp",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSwingL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSwingR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBiteF",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBiteL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBiteR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabAirFarL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabAirFarR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabAirL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabAirR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabBackL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabBackR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabCoreL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabCoreR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabGroundBackL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabGroundBackR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabGroundFrontL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabGroundFrontR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabHeadBackL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabHeadBackR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabHeadFrontL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabHeadFrontR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabHighL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabHighR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabStomachL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabStomachR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackEatL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackEatR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapHighL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapHighR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapLowL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapLowR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBrushChestL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBrushChestR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackHitBack",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackHitFace",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackRockThrow",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackJump",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackJumpCrawler",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SitIdle",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SitIdleCrawler",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SitDown",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SitUp",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SitUpCrawler",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SitFall",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SitFallCrawler",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Turn90L",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Turn90R",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Turn90LCrawler",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Turn90RCrawler",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Blind",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SitBlind",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BlindCrawler",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ArmHurtL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ArmHurtR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CoverNape",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteLaugh",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteNod",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteShake",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteRoar",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings->static_fields->MemberNames,__this
              );
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffdc10

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346122 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|idle");
    Il2CppMethodInitialized_184346122 = '\x01';
  }
  return "Amarture_VER2|idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__RunAbnormal>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__RunAbnormal_g____getter_3_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffe7f0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__RunAbnormal_g____getter_3_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346123 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|run.abnormal");
    Il2CppMethodInitialized_184346123 = '\x01';
  }
  return "Amarture_VER2|run.abnormal";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SprintAbnormal>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SprintAbnormal_g____getter_4_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffea10

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SprintAbnormal_g____getter_4_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346124 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|run.abnormal.1");
    Il2CppMethodInitialized_184346124 = '\x01';
  }
  return "Amarture_VER2|run.abnormal.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__RunCrawler>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__RunCrawler_g____getter_5_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffe820

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__RunCrawler_g____getter_5_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346125 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.run");
    Il2CppMethodInitialized_184346125 = '\x01';
  }
  return "Amarture_VER2|crawler.run";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleCrawler>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__IdleCrawler_g____getter_6_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffdbe0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__IdleCrawler_g____getter_6_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346126 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.idle");
    Il2CppMethodInitialized_184346126 = '\x01';
  }
  return "Amarture_VER2|crawler.idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__JumpCrawler>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__JumpCrawler_g____getter_7_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffdce0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__JumpCrawler_g____getter_7_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346127 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.crawler.jump.0");
    Il2CppMethodInitialized_184346127 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__FallCrawler>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__FallCrawler_g____getter_8_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffcde0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__FallCrawler_g____getter_8_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346128 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.crawler.jump.1");
    Il2CppMethodInitialized_184346128 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__LandCrawler>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__LandCrawler_g____getter_9_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffde00

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__LandCrawler_g____getter_9_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346129 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.crawler.jump.2");
    Il2CppMethodInitialized_184346129 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.2";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_10_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fff280

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_10_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434612a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|run.walk");
    Il2CppMethodInitialized_18434612a = '\x01';
  }
  return "Amarture_VER2|run.walk";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_11_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffdd10

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_11_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434612b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.jumper.0");
    Il2CppMethodInitialized_18434612b = '\x01';
  }
  return "Amarture_VER2|attack.jumper.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Fall>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_12_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffce10

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_12_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434612c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.jumper.1");
    Il2CppMethodInitialized_18434612c = '\x01';
  }
  return "Amarture_VER2|attack.jumper.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_13_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffde30

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_13_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434612d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.jumper.2");
    Il2CppMethodInitialized_18434612d = '\x01';
  }
  return "Amarture_VER2|attack.jumper.2";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Stun>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_14_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffeb30

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_14_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434612e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|hit.eren.L");
    Il2CppMethodInitialized_18434612e = '\x01';
  }
  return "Amarture_VER2|hit.eren.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__StunLeft>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__StunLeft_g____getter_15_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffead0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__StunLeft_g____getter_15_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434612f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|hit.eren.L");
    Il2CppMethodInitialized_18434612f = '\x01';
  }
  return "Amarture_VER2|hit.eren.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__StunRight>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__StunRight_g____getter_16_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffeb00

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__StunRight_g____getter_16_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346130 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|hit.eren.R");
    Il2CppMethodInitialized_184346130 = '\x01';
  }
  return "Amarture_VER2|hit.eren.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieBack>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieBack_g____getter_17_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffcb60

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieBack_g____getter_17_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346131 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|die.back");
    Il2CppMethodInitialized_184346131 = '\x01';
  }
  return "Amarture_VER2|die.back";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieFront>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieFront_g____getter_18_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffcbf0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieFront_g____getter_18_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346132 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|die.front");
    Il2CppMethodInitialized_184346132 = '\x01';
  }
  return "Amarture_VER2|die.front";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieGround>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieGround_g____getter_19_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffcc20

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieGround_g____getter_19_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346133 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|die.ground");
    Il2CppMethodInitialized_184346133 = '\x01';
  }
  return "Amarture_VER2|die.ground";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieCrawler>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieCrawler_g____getter_20_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffcbc0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieCrawler_g____getter_20_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346134 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.die");
    Il2CppMethodInitialized_184346134 = '\x01';
  }
  return "Amarture_VER2|crawler.die";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieSit>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieSit_g____getter_21_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffcc80

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieSit_g____getter_21_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346135 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_die");
    Il2CppMethodInitialized_184346135 = '\x01';
  }
  return "Amarture_VER2|sit_die";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieBlow>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieBlow_g____getter_22_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffcb90

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieBlow_g____getter_22_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346136 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|die.blow");
    Il2CppMethodInitialized_184346136 = '\x01';
  }
  return "Amarture_VER2|die.blow";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieHeadOff>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieHeadOff_g____getter_23_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffcc50

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieHeadOff_g____getter_23_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346137 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|die.headOff");
    Il2CppMethodInitialized_184346137 = '\x01';
  }
  return "Amarture_VER2|die.headOff";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackPunchCombo>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackPunchCombo_g____getter_24_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc1d0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackPunchCombo_g____getter_24_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346138 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.combo");
    Il2CppMethodInitialized_184346138 = '\x01';
  }
  return "Amarture_VER2|attack.combo";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackPunch>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackPunch_g____getter_25_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc200

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackPunch_g____getter_25_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346139 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.comboPunch");
    Il2CppMethodInitialized_184346139 = '\x01';
  }
  return "Amarture_VER2|attack.comboPunch";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlam>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlam_g____getter_26_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc260

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlam_g____getter_26_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434613a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.front.ground");
    Il2CppMethodInitialized_18434613a = '\x01';
  }
  return "Amarture_VER2|attack.front.ground";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBellyFlop>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBellyFlop_g____getter_27_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbb70

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBellyFlop_g____getter_27_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434613b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.abnormal.jump");
    Il2CppMethodInitialized_18434613b = '\x01';
  }
  return "Amarture_VER2|attack.abnormal.jump";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBellyFlopGetup>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBellyFlopGetup_g____getter_28_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbb40

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBellyFlopGetup_g____getter_28_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434613c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.abnormal.getup");
    Il2CppMethodInitialized_18434613c = '\x01';
  }
  return "Amarture_VER2|attack.abnormal.getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackKick>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_29_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc170

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_29_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434613d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.kick");
    Il2CppMethodInitialized_18434613d = '\x01';
  }
  return "Amarture_VER2|attack.kick";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackStomp>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_30_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc3e0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_30_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434613e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.stomp");
    Il2CppMethodInitialized_18434613e = '\x01';
  }
  return "Amarture_VER2|attack.stomp";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSwingL>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSwingL_g____getter_31_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc440

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSwingL_g____getter_31_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434613f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.swing.l");
    Il2CppMethodInitialized_18434613f = '\x01';
  }
  return "Amarture_VER2|attack.swing.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSwingR>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSwingR_g____getter_32_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc470

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSwingR_g____getter_32_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346140 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.swing.r");
    Il2CppMethodInitialized_184346140 = '\x01';
  }
  return "Amarture_VER2|attack.swing.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBiteF>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBiteF_g____getter_33_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbba0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBiteF_g____getter_33_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346141 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|bite");
    Il2CppMethodInitialized_184346141 = '\x01';
  }
  return "Amarture_VER2|bite";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBiteL>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBiteL_g____getter_34_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbbd0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBiteL_g____getter_34_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346142 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|bite.l");
    Il2CppMethodInitialized_184346142 = '\x01';
  }
  return "Amarture_VER2|bite.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBiteR>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBiteR_g____getter_35_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbc00

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBiteR_g____getter_35_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346143 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|bite.r");
    Il2CppMethodInitialized_184346143 = '\x01';
  }
  return "Amarture_VER2|bite.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirFarL>g____getter|36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirFarL_g____getter_36_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbcf0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirFarL_g____getter_36_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346144 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.air.far.l");
    Il2CppMethodInitialized_184346144 = '\x01';
  }
  return "Amarture_VER2|grab.air.far.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirFarR>g____getter|37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirFarR_g____getter_37_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbd20

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirFarR_g____getter_37_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.air.far.r");
    Il2CppMethodInitialized_184346145 = '\x01';
  }
  return "Amarture_VER2|grab.air.far.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirL>g____getter|38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirL_g____getter_38_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbd50

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirL_g____getter_38_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346146 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.air.short.l");
    Il2CppMethodInitialized_184346146 = '\x01';
  }
  return "Amarture_VER2|grab.air.short.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirR>g____getter|39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirR_g____getter_39_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbd80

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirR_g____getter_39_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346147 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.air.short.r");
    Il2CppMethodInitialized_184346147 = '\x01';
  }
  return "Amarture_VER2|grab.air.short.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBackL>g____getter|40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBackL_g____getter_40_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbdb0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBackL_g____getter_40_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346148 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.back.l");
    Il2CppMethodInitialized_184346148 = '\x01';
  }
  return "Amarture_VER2|grab.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBackR>g____getter|41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBackR_g____getter_41_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbde0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBackR_g____getter_41_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346149 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.back.r");
    Il2CppMethodInitialized_184346149 = '\x01';
  }
  return "Amarture_VER2|grab.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabCoreL>g____getter|42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabCoreL_g____getter_42_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbe10

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabCoreL_g____getter_42_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434614a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.core.L");
    Il2CppMethodInitialized_18434614a = '\x01';
  }
  return "Amarture_VER2|grab.core.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabCoreR>g____getter|43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabCoreR_g____getter_43_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbe40

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabCoreR_g____getter_43_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434614b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.core.R");
    Il2CppMethodInitialized_18434614b = '\x01';
  }
  return "Amarture_VER2|grab.core.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGroundBackL>g____getter|44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundBackL_g____getter_44_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbe70

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundBackL_g____getter_44_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434614c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.ground.back.l");
    Il2CppMethodInitialized_18434614c = '\x01';
  }
  return "Amarture_VER2|grab.ground.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGroundBackR>g____getter|45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundBackR_g____getter_45_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbea0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundBackR_g____getter_45_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434614d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.ground.back.r");
    Il2CppMethodInitialized_18434614d = '\x01';
  }
  return "Amarture_VER2|grab.ground.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGroundFrontL>g____getter|46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundFrontL_g____getter_46_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbed0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundFrontL_g____getter_46_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434614e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.ground.front.l");
    Il2CppMethodInitialized_18434614e = '\x01';
  }
  return "Amarture_VER2|grab.ground.front.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGroundFrontR>g____getter|47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundFrontR_g____getter_47_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbf00

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundFrontR_g____getter_47_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434614f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.ground.front.r");
    Il2CppMethodInitialized_18434614f = '\x01';
  }
  return "Amarture_VER2|grab.ground.front.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHeadBackL>g____getter|48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadBackL_g____getter_48_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbf30

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadBackL_g____getter_48_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346150 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.head.back.l");
    Il2CppMethodInitialized_184346150 = '\x01';
  }
  return "Amarture_VER2|grab.head.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHeadBackR>g____getter|49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadBackR_g____getter_49_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbf60

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadBackR_g____getter_49_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346151 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.head.back.r");
    Il2CppMethodInitialized_184346151 = '\x01';
  }
  return "Amarture_VER2|grab.head.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHeadFrontL>g____getter|50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadFrontL_g____getter_50_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbf90

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadFrontL_g____getter_50_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346152 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.head.front.1");
    Il2CppMethodInitialized_184346152 = '\x01';
  }
  return "Amarture_VER2|grab.head.front.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHeadFrontR>g____getter|51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadFrontR_g____getter_51_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbfc0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadFrontR_g____getter_51_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346153 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.head.front.r");
    Il2CppMethodInitialized_184346153 = '\x01';
  }
  return "Amarture_VER2|grab.head.front.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHighL>g____getter|52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHighL_g____getter_52_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbff0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHighL_g____getter_52_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346154 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.high.l");
    Il2CppMethodInitialized_184346154 = '\x01';
  }
  return "Amarture_VER2|grab.high.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHighR>g____getter|53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHighR_g____getter_53_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc020

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHighR_g____getter_53_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346155 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.high.r");
    Il2CppMethodInitialized_184346155 = '\x01';
  }
  return "Amarture_VER2|grab.high.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabStomachL>g____getter|54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabStomachL_g____getter_54_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc050

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabStomachL_g____getter_54_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346156 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.stomach.l");
    Il2CppMethodInitialized_184346156 = '\x01';
  }
  return "Amarture_VER2|grab.stomach.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabStomachR>g____getter|55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabStomachR_g____getter_55_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc080

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabStomachR_g____getter_55_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346157 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.stomach.r");
    Il2CppMethodInitialized_184346157 = '\x01';
  }
  return "Amarture_VER2|grab.stomach.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackEatL>g____getter|56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackEatL_g____getter_56_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbc90

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackEatL_g____getter_56_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346158 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|eat.l");
    Il2CppMethodInitialized_184346158 = '\x01';
  }
  return "Amarture_VER2|eat.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackEatR>g____getter|57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackEatR_g____getter_57_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbcc0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackEatR_g____getter_57_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346159 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|eat.r");
    Il2CppMethodInitialized_184346159 = '\x01';
  }
  return "Amarture_VER2|eat.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapHighL>g____getter|58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapHighL_g____getter_58_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc290

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapHighL_g____getter_58_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434615a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.high.l");
    Il2CppMethodInitialized_18434615a = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.high.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapHighR>g____getter|59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapHighR_g____getter_59_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc2c0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapHighR_g____getter_59_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434615b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.high.r");
    Il2CppMethodInitialized_18434615b = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.high.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapL>g____getter|60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapL_g____getter_60_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc2f0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapL_g____getter_60_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434615c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.l");
    Il2CppMethodInitialized_18434615c = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapR>g____getter|61_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapR_g____getter_61_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc380

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapR_g____getter_61_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434615d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.r");
    Il2CppMethodInitialized_18434615d = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapLowL>g____getter|62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapLowL_g____getter_62_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc320

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapLowL_g____getter_62_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434615e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.low.l");
    Il2CppMethodInitialized_18434615e = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.low.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapLowR>g____getter|63_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapLowR_g____getter_63_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc350

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapLowR_g____getter_63_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434615f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.low.r");
    Il2CppMethodInitialized_18434615f = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.low.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushChestL>g____getter|64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushChestL_g____getter_64_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbc30

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushChestL_g____getter_64_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346160 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.chest.L");
    Il2CppMethodInitialized_184346160 = '\x01';
  }
  return "Amarture_VER2|attack.chest.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushChestR>g____getter|65_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushChestR_g____getter_65_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffbc60

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushChestR_g____getter_65_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346161 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.chest.R");
    Il2CppMethodInitialized_184346161 = '\x01';
  }
  return "Amarture_VER2|attack.chest.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackHitBack>g____getter|66_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackHitBack_g____getter_66_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc0b0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackHitBack_g____getter_66_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346162 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.slap.back");
    Il2CppMethodInitialized_184346162 = '\x01';
  }
  return "Amarture_VER2|attack.slap.back";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackHitFace>g____getter|67_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackHitFace_g____getter_67_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc0e0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackHitFace_g____getter_67_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346163 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.slap.face");
    Il2CppMethodInitialized_184346163 = '\x01';
  }
  return "Amarture_VER2|attack.slap.face";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackRockThrow>g____getter|68_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackRockThrow_g____getter_68_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc230

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackRockThrow_g____getter_68_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346164 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.throw");
    Il2CppMethodInitialized_184346164 = '\x01';
  }
  return "Amarture_VER2|attack.throw";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackJump>g____getter|69_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackJump_g____getter_69_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc140

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackJump_g____getter_69_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346165 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.jumper.0");
    Il2CppMethodInitialized_184346165 = '\x01';
  }
  return "Amarture_VER2|attack.jumper.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackJumpCrawler>g____getter|70_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackJumpCrawler_g____getter_70_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc110

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackJumpCrawler_g____getter_70_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346166 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.crawler.jump.0");
    Il2CppMethodInitialized_184346166 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitIdle>g____getter|71_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitIdle_g____getter_71_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffe980

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitIdle_g____getter_71_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346167 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_idle");
    Il2CppMethodInitialized_184346167 = '\x01';
  }
  return "Amarture_VER2|sit_idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitIdleCrawler>g____getter|72_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitIdleCrawler_g____getter_72_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffe950

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitIdleCrawler_g____getter_72_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346168 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.sit.idle");
    Il2CppMethodInitialized_184346168 = '\x01';
  }
  return "Amarture_VER2|crawler.sit.idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitDown>g____getter|73_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitDown_g____getter_73_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffe8c0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitDown_g____getter_73_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346169 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_down");
    Il2CppMethodInitialized_184346169 = '\x01';
  }
  return "Amarture_VER2|sit_down";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitUp>g____getter|74_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitUp_g____getter_74_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffe9e0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitUp_g____getter_74_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434616a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_getup");
    Il2CppMethodInitialized_18434616a = '\x01';
  }
  return "Amarture_VER2|sit_getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitUpCrawler>g____getter|75_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitUpCrawler_g____getter_75_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffe9b0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitUpCrawler_g____getter_75_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434616b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.getup");
    Il2CppMethodInitialized_18434616b = '\x01';
  }
  return "Amarture_VER2|crawler.getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitFall>g____getter|76_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitFall_g____getter_76_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffe920

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitFall_g____getter_76_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434616c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_hunt_down");
    Il2CppMethodInitialized_18434616c = '\x01';
  }
  return "Amarture_VER2|sit_hunt_down";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitFallCrawler>g____getter|77_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitFallCrawler_g____getter_77_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffe8f0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitFallCrawler_g____getter_77_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434616d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.hunt.down");
    Il2CppMethodInitialized_18434616d = '\x01';
  }
  return "Amarture_VER2|crawler.hunt.down";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Turn90L>g____getter|78_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90L_g____getter_78_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffee40

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90L_g____getter_78_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434616e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|turnaround.L");
    Il2CppMethodInitialized_18434616e = '\x01';
  }
  return "Amarture_VER2|turnaround.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Turn90R>g____getter|79_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90R_g____getter_79_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffeea0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90R_g____getter_79_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434616f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|turnaround.R");
    Il2CppMethodInitialized_18434616f = '\x01';
  }
  return "Amarture_VER2|turnaround.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Turn90LCrawler>g____getter|80_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90LCrawler_g____getter_80_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffee10

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90LCrawler_g____getter_80_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346170 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.turnaround.L");
    Il2CppMethodInitialized_184346170 = '\x01';
  }
  return "Amarture_VER2|crawler.turnaround.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Turn90RCrawler>g____getter|81_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90RCrawler_g____getter_81_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffee70

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90RCrawler_g____getter_81_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346171 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.turnaround.R");
    Il2CppMethodInitialized_184346171 = '\x01';
  }
  return "Amarture_VER2|crawler.turnaround.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Blind>g____getter|82_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Blind_g____getter_82_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc6a0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Blind_g____getter_82_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346172 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|hit.eye");
    Il2CppMethodInitialized_184346172 = '\x01';
  }
  return "Amarture_VER2|hit.eye";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitBlind>g____getter|83_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitBlind_g____getter_83_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffe890

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitBlind_g____getter_83_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346173 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_hit_eye");
    Il2CppMethodInitialized_184346173 = '\x01';
  }
  return "Amarture_VER2|sit_hit_eye";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__BlindCrawler>g____getter|84_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__BlindCrawler_g____getter_84_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc670

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__BlindCrawler_g____getter_84_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346174 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.hiteyes");
    Il2CppMethodInitialized_184346174 = '\x01';
  }
  return "Amarture_VER2|crawler.hiteyes";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__ArmHurtL>g____getter|85_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__ArmHurtL_g____getter_85_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffba50

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__ArmHurtL_g____getter_85_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346175 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|arm_hurt_L");
    Il2CppMethodInitialized_184346175 = '\x01';
  }
  return "Amarture_VER2|arm_hurt_L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__ArmHurtR>g____getter|86_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__ArmHurtR_g____getter_86_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffba80

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__ArmHurtR_g____getter_86_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346176 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|arm_hurt_R");
    Il2CppMethodInitialized_184346176 = '\x01';
  }
  return "Amarture_VER2|arm_hurt_R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__CoverNape>g____getter|87_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__CoverNape_g____getter_87_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffc9b0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__CoverNape_g____getter_87_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346177 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|idle.recovery");
    Il2CppMethodInitialized_184346177 = '\x01';
  }
  return "Amarture_VER2|idle.recovery";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteLaugh>g____getter|88_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteLaugh_g____getter_88_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffccb0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteLaugh_g____getter_88_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346178 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|laugh");
    Il2CppMethodInitialized_184346178 = '\x01';
  }
  return "Amarture_VER2|laugh";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteNod>g____getter|89_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteNod_g____getter_89_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffcce0

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteNod_g____getter_89_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346179 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|emote_titan_yes");
    Il2CppMethodInitialized_184346179 = '\x01';
  }
  return "Amarture_VER2|emote_titan_yes";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteShake>g____getter|90_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteShake_g____getter_90_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffcd40

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteShake_g____getter_90_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434617a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|emote_titan_no");
    Il2CppMethodInitialized_18434617a = '\x01';
  }
  return "Amarture_VER2|emote_titan_no";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteRoar>g____getter|91_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteRoar_g____getter_91_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181ffcd10

Il2CppObject*
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteRoar_g____getter_91_0(CustomLogic_CustomLogicTitanAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434617b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.scream");
    Il2CppMethodInitialized_18434617b = '\x01';
  }
  return "Amarture_VER2|attack.scream";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTitanAnimationEnum___ctor (CustomLogic_CustomLogicTitanAnimationEnum_o* __this, const MethodInfo* method);
// 0x1820151c0

void CustomLogic_CustomLogicTitanAnimationEnum___ctor
               (CustomLogic_CustomLogicTitanAnimationEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346121 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184346121 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Idle
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Idle (const MethodInfo* method);
// 0x181ffdc10

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Idle(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346122 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|idle");
    Il2CppMethodInitialized_184346122 = '\x01';
  }
  return "Amarture_VER2|idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_RunAbnormal
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_RunAbnormal (const MethodInfo* method);
// 0x181ffe7f0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_RunAbnormal(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346123 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|run.abnormal");
    Il2CppMethodInitialized_184346123 = '\x01';
  }
  return "Amarture_VER2|run.abnormal";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SprintAbnormal
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SprintAbnormal (const MethodInfo* method);
// 0x181ffea10

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SprintAbnormal(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346124 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|run.abnormal.1");
    Il2CppMethodInitialized_184346124 = '\x01';
  }
  return "Amarture_VER2|run.abnormal.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_RunCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_RunCrawler (const MethodInfo* method);
// 0x181ffe820

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_RunCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346125 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.run");
    Il2CppMethodInitialized_184346125 = '\x01';
  }
  return "Amarture_VER2|crawler.run";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_IdleCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_IdleCrawler (const MethodInfo* method);
// 0x181ffdbe0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_IdleCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346126 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.idle");
    Il2CppMethodInitialized_184346126 = '\x01';
  }
  return "Amarture_VER2|crawler.idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_JumpCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_JumpCrawler (const MethodInfo* method);
// 0x181ffdce0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_JumpCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346127 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.crawler.jump.0");
    Il2CppMethodInitialized_184346127 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_FallCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_FallCrawler (const MethodInfo* method);
// 0x181ffcde0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_FallCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346128 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.crawler.jump.1");
    Il2CppMethodInitialized_184346128 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_LandCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_LandCrawler (const MethodInfo* method);
// 0x181ffde00

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_LandCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346129 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.crawler.jump.2");
    Il2CppMethodInitialized_184346129 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.2";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Walk (const MethodInfo* method);
// 0x181fff280

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Walk(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434612a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|run.walk");
    Il2CppMethodInitialized_18434612a = '\x01';
  }
  return "Amarture_VER2|run.walk";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Jump (const MethodInfo* method);
// 0x181ffdd10

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Jump(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434612b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.jumper.0");
    Il2CppMethodInitialized_18434612b = '\x01';
  }
  return "Amarture_VER2|attack.jumper.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Fall
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Fall (const MethodInfo* method);
// 0x181ffce10

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Fall(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434612c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.jumper.1");
    Il2CppMethodInitialized_18434612c = '\x01';
  }
  return "Amarture_VER2|attack.jumper.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Land (const MethodInfo* method);
// 0x181ffde30

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Land(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434612d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.jumper.2");
    Il2CppMethodInitialized_18434612d = '\x01';
  }
  return "Amarture_VER2|attack.jumper.2";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Stun
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Stun (const MethodInfo* method);
// 0x181ffeb30

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Stun(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434612e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|hit.eren.L");
    Il2CppMethodInitialized_18434612e = '\x01';
  }
  return "Amarture_VER2|hit.eren.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_StunLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_StunLeft (const MethodInfo* method);
// 0x181ffead0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_StunLeft(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434612f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|hit.eren.L");
    Il2CppMethodInitialized_18434612f = '\x01';
  }
  return "Amarture_VER2|hit.eren.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_StunRight
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_StunRight (const MethodInfo* method);
// 0x181ffeb00

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_StunRight(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346130 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|hit.eren.R");
    Il2CppMethodInitialized_184346130 = '\x01';
  }
  return "Amarture_VER2|hit.eren.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieBack
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieBack (const MethodInfo* method);
// 0x181ffcb60

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieBack(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346131 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|die.back");
    Il2CppMethodInitialized_184346131 = '\x01';
  }
  return "Amarture_VER2|die.back";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieFront
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieFront (const MethodInfo* method);
// 0x181ffcbf0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieFront(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346132 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|die.front");
    Il2CppMethodInitialized_184346132 = '\x01';
  }
  return "Amarture_VER2|die.front";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieGround
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieGround (const MethodInfo* method);
// 0x181ffcc20

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieGround(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346133 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|die.ground");
    Il2CppMethodInitialized_184346133 = '\x01';
  }
  return "Amarture_VER2|die.ground";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieCrawler (const MethodInfo* method);
// 0x181ffcbc0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346134 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.die");
    Il2CppMethodInitialized_184346134 = '\x01';
  }
  return "Amarture_VER2|crawler.die";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieSit
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieSit (const MethodInfo* method);
// 0x181ffcc80

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieSit(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346135 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_die");
    Il2CppMethodInitialized_184346135 = '\x01';
  }
  return "Amarture_VER2|sit_die";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieBlow
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieBlow (const MethodInfo* method);
// 0x181ffcb90

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieBlow(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346136 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|die.blow");
    Il2CppMethodInitialized_184346136 = '\x01';
  }
  return "Amarture_VER2|die.blow";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieHeadOff
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieHeadOff (const MethodInfo* method);
// 0x181ffcc50

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieHeadOff(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346137 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|die.headOff");
    Il2CppMethodInitialized_184346137 = '\x01';
  }
  return "Amarture_VER2|die.headOff";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackPunchCombo
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackPunchCombo (const MethodInfo* method);
// 0x181ffc1d0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackPunchCombo(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346138 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.combo");
    Il2CppMethodInitialized_184346138 = '\x01';
  }
  return "Amarture_VER2|attack.combo";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackPunch
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackPunch (const MethodInfo* method);
// 0x181ffc200

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackPunch(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346139 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.comboPunch");
    Il2CppMethodInitialized_184346139 = '\x01';
  }
  return "Amarture_VER2|attack.comboPunch";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlam
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlam (const MethodInfo* method);
// 0x181ffc260

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlam(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434613a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.front.ground");
    Il2CppMethodInitialized_18434613a = '\x01';
  }
  return "Amarture_VER2|attack.front.ground";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBellyFlop
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBellyFlop (const MethodInfo* method);
// 0x181ffbb70

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBellyFlop(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434613b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.abnormal.jump");
    Il2CppMethodInitialized_18434613b = '\x01';
  }
  return "Amarture_VER2|attack.abnormal.jump";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBellyFlopGetup
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBellyFlopGetup (const MethodInfo* method);
// 0x181ffbb40

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBellyFlopGetup(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434613c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.abnormal.getup");
    Il2CppMethodInitialized_18434613c = '\x01';
  }
  return "Amarture_VER2|attack.abnormal.getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackKick
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackKick (const MethodInfo* method);
// 0x181ffc170

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackKick(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434613d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.kick");
    Il2CppMethodInitialized_18434613d = '\x01';
  }
  return "Amarture_VER2|attack.kick";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackStomp
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackStomp (const MethodInfo* method);
// 0x181ffc3e0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackStomp(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434613e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.stomp");
    Il2CppMethodInitialized_18434613e = '\x01';
  }
  return "Amarture_VER2|attack.stomp";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSwingL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSwingL (const MethodInfo* method);
// 0x181ffc440

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSwingL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434613f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.swing.l");
    Il2CppMethodInitialized_18434613f = '\x01';
  }
  return "Amarture_VER2|attack.swing.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSwingR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSwingR (const MethodInfo* method);
// 0x181ffc470

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSwingR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346140 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.swing.r");
    Il2CppMethodInitialized_184346140 = '\x01';
  }
  return "Amarture_VER2|attack.swing.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBiteF
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteF (const MethodInfo* method);
// 0x181ffbba0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteF(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346141 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|bite");
    Il2CppMethodInitialized_184346141 = '\x01';
  }
  return "Amarture_VER2|bite";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBiteL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteL (const MethodInfo* method);
// 0x181ffbbd0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346142 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|bite.l");
    Il2CppMethodInitialized_184346142 = '\x01';
  }
  return "Amarture_VER2|bite.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBiteR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteR (const MethodInfo* method);
// 0x181ffbc00

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346143 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|bite.r");
    Il2CppMethodInitialized_184346143 = '\x01';
  }
  return "Amarture_VER2|bite.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabAirFarL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirFarL (const MethodInfo* method);
// 0x181ffbcf0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirFarL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346144 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.air.far.l");
    Il2CppMethodInitialized_184346144 = '\x01';
  }
  return "Amarture_VER2|grab.air.far.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabAirFarR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirFarR (const MethodInfo* method);
// 0x181ffbd20

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirFarR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.air.far.r");
    Il2CppMethodInitialized_184346145 = '\x01';
  }
  return "Amarture_VER2|grab.air.far.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabAirL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirL (const MethodInfo* method);
// 0x181ffbd50

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346146 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.air.short.l");
    Il2CppMethodInitialized_184346146 = '\x01';
  }
  return "Amarture_VER2|grab.air.short.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabAirR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirR (const MethodInfo* method);
// 0x181ffbd80

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346147 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.air.short.r");
    Il2CppMethodInitialized_184346147 = '\x01';
  }
  return "Amarture_VER2|grab.air.short.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabBackL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabBackL (const MethodInfo* method);
// 0x181ffbdb0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabBackL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346148 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.back.l");
    Il2CppMethodInitialized_184346148 = '\x01';
  }
  return "Amarture_VER2|grab.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabBackR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabBackR (const MethodInfo* method);
// 0x181ffbde0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabBackR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346149 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.back.r");
    Il2CppMethodInitialized_184346149 = '\x01';
  }
  return "Amarture_VER2|grab.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabCoreL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabCoreL (const MethodInfo* method);
// 0x181ffbe10

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabCoreL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434614a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.core.L");
    Il2CppMethodInitialized_18434614a = '\x01';
  }
  return "Amarture_VER2|grab.core.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabCoreR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabCoreR (const MethodInfo* method);
// 0x181ffbe40

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabCoreR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434614b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.core.R");
    Il2CppMethodInitialized_18434614b = '\x01';
  }
  return "Amarture_VER2|grab.core.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabGroundBackL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundBackL (const MethodInfo* method);
// 0x181ffbe70

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundBackL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434614c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.ground.back.l");
    Il2CppMethodInitialized_18434614c = '\x01';
  }
  return "Amarture_VER2|grab.ground.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabGroundBackR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundBackR (const MethodInfo* method);
// 0x181ffbea0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundBackR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434614d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.ground.back.r");
    Il2CppMethodInitialized_18434614d = '\x01';
  }
  return "Amarture_VER2|grab.ground.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabGroundFrontL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundFrontL (const MethodInfo* method);
// 0x181ffbed0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundFrontL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434614e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.ground.front.l");
    Il2CppMethodInitialized_18434614e = '\x01';
  }
  return "Amarture_VER2|grab.ground.front.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabGroundFrontR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundFrontR (const MethodInfo* method);
// 0x181ffbf00

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundFrontR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434614f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.ground.front.r");
    Il2CppMethodInitialized_18434614f = '\x01';
  }
  return "Amarture_VER2|grab.ground.front.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHeadBackL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadBackL (const MethodInfo* method);
// 0x181ffbf30

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadBackL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346150 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.head.back.l");
    Il2CppMethodInitialized_184346150 = '\x01';
  }
  return "Amarture_VER2|grab.head.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHeadBackR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadBackR (const MethodInfo* method);
// 0x181ffbf60

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadBackR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346151 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.head.back.r");
    Il2CppMethodInitialized_184346151 = '\x01';
  }
  return "Amarture_VER2|grab.head.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHeadFrontL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadFrontL (const MethodInfo* method);
// 0x181ffbf90

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadFrontL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346152 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.head.front.1");
    Il2CppMethodInitialized_184346152 = '\x01';
  }
  return "Amarture_VER2|grab.head.front.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHeadFrontR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadFrontR (const MethodInfo* method);
// 0x181ffbfc0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadFrontR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346153 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.head.front.r");
    Il2CppMethodInitialized_184346153 = '\x01';
  }
  return "Amarture_VER2|grab.head.front.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHighL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHighL (const MethodInfo* method);
// 0x181ffbff0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHighL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346154 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.high.l");
    Il2CppMethodInitialized_184346154 = '\x01';
  }
  return "Amarture_VER2|grab.high.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHighR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHighR (const MethodInfo* method);
// 0x181ffc020

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHighR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346155 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.high.r");
    Il2CppMethodInitialized_184346155 = '\x01';
  }
  return "Amarture_VER2|grab.high.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabStomachL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabStomachL (const MethodInfo* method);
// 0x181ffc050

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabStomachL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346156 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.stomach.l");
    Il2CppMethodInitialized_184346156 = '\x01';
  }
  return "Amarture_VER2|grab.stomach.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabStomachR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabStomachR (const MethodInfo* method);
// 0x181ffc080

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabStomachR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346157 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.stomach.r");
    Il2CppMethodInitialized_184346157 = '\x01';
  }
  return "Amarture_VER2|grab.stomach.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackEatL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackEatL (const MethodInfo* method);
// 0x181ffbc90

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackEatL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346158 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|eat.l");
    Il2CppMethodInitialized_184346158 = '\x01';
  }
  return "Amarture_VER2|eat.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackEatR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackEatR (const MethodInfo* method);
// 0x181ffbcc0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackEatR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346159 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|eat.r");
    Il2CppMethodInitialized_184346159 = '\x01';
  }
  return "Amarture_VER2|eat.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapHighL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapHighL (const MethodInfo* method);
// 0x181ffc290

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapHighL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434615a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.high.l");
    Il2CppMethodInitialized_18434615a = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.high.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapHighR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapHighR (const MethodInfo* method);
// 0x181ffc2c0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapHighR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434615b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.high.r");
    Il2CppMethodInitialized_18434615b = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.high.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapL (const MethodInfo* method);
// 0x181ffc2f0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434615c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.l");
    Il2CppMethodInitialized_18434615c = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapR (const MethodInfo* method);
// 0x181ffc380

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434615d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.r");
    Il2CppMethodInitialized_18434615d = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapLowL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapLowL (const MethodInfo* method);
// 0x181ffc320

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapLowL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434615e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.low.l");
    Il2CppMethodInitialized_18434615e = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.low.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapLowR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapLowR (const MethodInfo* method);
// 0x181ffc350

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapLowR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434615f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.anti.AE.low.r");
    Il2CppMethodInitialized_18434615f = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.low.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBrushChestL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBrushChestL (const MethodInfo* method);
// 0x181ffbc30

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBrushChestL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346160 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.chest.L");
    Il2CppMethodInitialized_184346160 = '\x01';
  }
  return "Amarture_VER2|attack.chest.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBrushChestR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBrushChestR (const MethodInfo* method);
// 0x181ffbc60

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBrushChestR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346161 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.chest.R");
    Il2CppMethodInitialized_184346161 = '\x01';
  }
  return "Amarture_VER2|attack.chest.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackHitBack
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackHitBack (const MethodInfo* method);
// 0x181ffc0b0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackHitBack(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346162 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.slap.back");
    Il2CppMethodInitialized_184346162 = '\x01';
  }
  return "Amarture_VER2|attack.slap.back";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackHitFace
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackHitFace (const MethodInfo* method);
// 0x181ffc0e0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackHitFace(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346163 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.slap.face");
    Il2CppMethodInitialized_184346163 = '\x01';
  }
  return "Amarture_VER2|attack.slap.face";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackRockThrow
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackRockThrow (const MethodInfo* method);
// 0x181ffc230

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackRockThrow(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346164 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.throw");
    Il2CppMethodInitialized_184346164 = '\x01';
  }
  return "Amarture_VER2|attack.throw";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackJump
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackJump (const MethodInfo* method);
// 0x181ffc140

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackJump(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346165 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.jumper.0");
    Il2CppMethodInitialized_184346165 = '\x01';
  }
  return "Amarture_VER2|attack.jumper.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackJumpCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackJumpCrawler (const MethodInfo* method);
// 0x181ffc110

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackJumpCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346166 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.crawler.jump.0");
    Il2CppMethodInitialized_184346166 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitIdle
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitIdle (const MethodInfo* method);
// 0x181ffe980

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitIdle(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346167 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_idle");
    Il2CppMethodInitialized_184346167 = '\x01';
  }
  return "Amarture_VER2|sit_idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitIdleCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitIdleCrawler (const MethodInfo* method);
// 0x181ffe950

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitIdleCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346168 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.sit.idle");
    Il2CppMethodInitialized_184346168 = '\x01';
  }
  return "Amarture_VER2|crawler.sit.idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitDown
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitDown (const MethodInfo* method);
// 0x181ffe8c0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitDown(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346169 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_down");
    Il2CppMethodInitialized_184346169 = '\x01';
  }
  return "Amarture_VER2|sit_down";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitUp
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitUp (const MethodInfo* method);
// 0x181ffe9e0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitUp(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434616a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_getup");
    Il2CppMethodInitialized_18434616a = '\x01';
  }
  return "Amarture_VER2|sit_getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitUpCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitUpCrawler (const MethodInfo* method);
// 0x181ffe9b0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitUpCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434616b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.getup");
    Il2CppMethodInitialized_18434616b = '\x01';
  }
  return "Amarture_VER2|crawler.getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitFall
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitFall (const MethodInfo* method);
// 0x181ffe920

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitFall(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434616c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_hunt_down");
    Il2CppMethodInitialized_18434616c = '\x01';
  }
  return "Amarture_VER2|sit_hunt_down";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitFallCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitFallCrawler (const MethodInfo* method);
// 0x181ffe8f0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitFallCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434616d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.hunt.down");
    Il2CppMethodInitialized_18434616d = '\x01';
  }
  return "Amarture_VER2|crawler.hunt.down";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Turn90L
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90L (const MethodInfo* method);
// 0x181ffee40

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90L(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434616e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|turnaround.L");
    Il2CppMethodInitialized_18434616e = '\x01';
  }
  return "Amarture_VER2|turnaround.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Turn90R
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90R (const MethodInfo* method);
// 0x181ffeea0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90R(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434616f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|turnaround.R");
    Il2CppMethodInitialized_18434616f = '\x01';
  }
  return "Amarture_VER2|turnaround.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Turn90LCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90LCrawler (const MethodInfo* method);
// 0x181ffee10

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90LCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346170 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.turnaround.L");
    Il2CppMethodInitialized_184346170 = '\x01';
  }
  return "Amarture_VER2|crawler.turnaround.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Turn90RCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90RCrawler (const MethodInfo* method);
// 0x181ffee70

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90RCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346171 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.turnaround.R");
    Il2CppMethodInitialized_184346171 = '\x01';
  }
  return "Amarture_VER2|crawler.turnaround.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Blind
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Blind (const MethodInfo* method);
// 0x181ffc6a0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Blind(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346172 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|hit.eye");
    Il2CppMethodInitialized_184346172 = '\x01';
  }
  return "Amarture_VER2|hit.eye";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitBlind
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitBlind (const MethodInfo* method);
// 0x181ffe890

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitBlind(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346173 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|sit_hit_eye");
    Il2CppMethodInitialized_184346173 = '\x01';
  }
  return "Amarture_VER2|sit_hit_eye";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_BlindCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_BlindCrawler (const MethodInfo* method);
// 0x181ffc670

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_BlindCrawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346174 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|crawler.hiteyes");
    Il2CppMethodInitialized_184346174 = '\x01';
  }
  return "Amarture_VER2|crawler.hiteyes";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_ArmHurtL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_ArmHurtL (const MethodInfo* method);
// 0x181ffba50

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_ArmHurtL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346175 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|arm_hurt_L");
    Il2CppMethodInitialized_184346175 = '\x01';
  }
  return "Amarture_VER2|arm_hurt_L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_ArmHurtR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_ArmHurtR (const MethodInfo* method);
// 0x181ffba80

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_ArmHurtR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346176 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|arm_hurt_R");
    Il2CppMethodInitialized_184346176 = '\x01';
  }
  return "Amarture_VER2|arm_hurt_R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_CoverNape
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_CoverNape (const MethodInfo* method);
// 0x181ffc9b0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_CoverNape(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346177 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|idle.recovery");
    Il2CppMethodInitialized_184346177 = '\x01';
  }
  return "Amarture_VER2|idle.recovery";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_EmoteLaugh
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteLaugh (const MethodInfo* method);
// 0x181ffccb0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteLaugh(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346178 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|laugh");
    Il2CppMethodInitialized_184346178 = '\x01';
  }
  return "Amarture_VER2|laugh";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_EmoteNod
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteNod (const MethodInfo* method);
// 0x181ffcce0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteNod(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346179 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|emote_titan_yes");
    Il2CppMethodInitialized_184346179 = '\x01';
  }
  return "Amarture_VER2|emote_titan_yes";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_EmoteShake
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteShake (const MethodInfo* method);
// 0x181ffcd40

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteShake(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434617a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|emote_titan_no");
    Il2CppMethodInitialized_18434617a = '\x01';
  }
  return "Amarture_VER2|emote_titan_no";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_EmoteRoar
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteRoar (const MethodInfo* method);
// 0x181ffcd10

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteRoar(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434617b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|attack.scream");
    Il2CppMethodInitialized_18434617b = '\x01';
  }
  return "Amarture_VER2|attack.scream";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_ClassName (CustomLogic_CustomLogicTitanAnimationEnum_o* __this, const MethodInfo* method);
// 0x182015210

System_String_o *
CustomLogic_CustomLogicTitanAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434617c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAnimationEnum");
    Il2CppMethodInitialized_18434617c = '\x01';
  }
  return "TitanAnimationEnum";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTitanAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicTitanAnimationEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTitanAnimationEnum__get_IsAbstract(CustomLogic_CustomLogicTitanAnimationEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTitanAnimationEnum__get_IsStatic (CustomLogic_CustomLogicTitanAnimationEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTitanAnimationEnum__get_IsStatic(CustomLogic_CustomLogicTitanAnimationEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTitanAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTitanAnimationEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTitanAnimationEnum__get_InheritBaseMembers(CustomLogic_CustomLogicTitanAnimationEnum_o* __this, MethodInfo* method)

{
  return true;
}


