// Type: CustomLogic.CustomLogicTitanAnimationEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTitanAnimationEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicTitanAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTitanAnimationEnum_o* CustomLogic_CustomLogicTitanAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e9a370

CustomLogic_CustomLogicTitanAnimationEnum_o *
CustomLogic_CustomLogicTitanAnimationEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_057036c9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTitanAnimationEnum);
    DAT_057036c9 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTitanAnimationEnum);
      if (DAT_0570366f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_0570366f = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicTitanAnimationEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicTitanAnimationEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicTitanAnimationEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e9a490

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  uint32_t uVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  undefined8 uVar4;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar5;
  CustomLogic_CLPropertyBinding_T__o *pCVar6;
  
  if (DAT_057036ca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"AttackGrabGroundBackL");
    il2cpp_init_method_metadata(&"AttackBellyFlop");
    il2cpp_init_method_metadata(&"StunRight");
    il2cpp_init_method_metadata(&"FallCrawler");
    il2cpp_init_method_metadata(&"AttackBrushChestL");
    il2cpp_init_method_metadata(&"AttackBrushChestR");
    il2cpp_init_method_metadata(&"AttackGrabCoreR");
    il2cpp_init_method_metadata(&"AttackBiteF");
    il2cpp_init_method_metadata(&"ArmHurtR");
    il2cpp_init_method_metadata(&"AttackJumpCrawler");
    il2cpp_init_method_metadata(&"AttackGrabHighR");
    il2cpp_init_method_metadata(&"SitIdleCrawler");
    il2cpp_init_method_metadata(&"EmoteNod");
    il2cpp_init_method_metadata(&"AttackSlam");
    il2cpp_init_method_metadata(&"AttackSwingL");
    il2cpp_init_method_metadata(&"AttackGrabStomachL");
    il2cpp_init_method_metadata(&"AttackJump");
    il2cpp_init_method_metadata(&"EmoteShake");
    il2cpp_init_method_metadata(&"SitFallCrawler");
    il2cpp_init_method_metadata(&"RunAbnormal");
    il2cpp_init_method_metadata(&"DieFront");
    il2cpp_init_method_metadata(&"AttackBellyFlopGetup");
    il2cpp_init_method_metadata(&"AttackGrabAirL");
    il2cpp_init_method_metadata(&"AttackHitBack");
    il2cpp_init_method_metadata(&"AttackSwingR");
    il2cpp_init_method_metadata(&"DieGround");
    il2cpp_init_method_metadata(&"AttackEatL");
    il2cpp_init_method_metadata(&"AttackGrabAirFarL");
    il2cpp_init_method_metadata(&"AttackBiteL");
    il2cpp_init_method_metadata(&"JumpCrawler");
    il2cpp_init_method_metadata(&"AttackGrabCoreL");
    il2cpp_init_method_metadata(&"CoverNape");
    il2cpp_init_method_metadata(&"AttackStomp");
    il2cpp_init_method_metadata(&"AttackEatR");
    il2cpp_init_method_metadata(&"AttackRockThrow");
    il2cpp_init_method_metadata(&"Land");
    il2cpp_init_method_metadata(&"BlindCrawler");
    il2cpp_init_method_metadata(&"AttackSlapL");
    il2cpp_init_method_metadata(&"AttackGrabHeadBackL");
    il2cpp_init_method_metadata(&"DieCrawler");
    il2cpp_init_method_metadata(&"AttackSlapLowR");
    il2cpp_init_method_metadata(&"Jump");
    il2cpp_init_method_metadata(&"Turn90R");
    il2cpp_init_method_metadata(&"Blind");
    il2cpp_init_method_metadata(&"Turn90L");
    il2cpp_init_method_metadata(&"Stun");
    il2cpp_init_method_metadata(&"AttackSlapHighL");
    il2cpp_init_method_metadata(&"AttackGrabHeadBackR");
    il2cpp_init_method_metadata(&"AttackBiteR");
    il2cpp_init_method_metadata(&"StunLeft");
    il2cpp_init_method_metadata(&"SitIdle");
    il2cpp_init_method_metadata(&"RunCrawler");
    il2cpp_init_method_metadata(&"SitBlind");
    il2cpp_init_method_metadata(&"Turn90RCrawler");
    il2cpp_init_method_metadata(&"AttackGrabHighL");
    il2cpp_init_method_metadata(&"IdleCrawler");
    il2cpp_init_method_metadata(&"AttackHitFace");
    il2cpp_init_method_metadata(&"AttackSlapHighR");
    il2cpp_init_method_metadata(&"AttackGrabHeadFrontL");
    il2cpp_init_method_metadata(&"Turn90LCrawler");
    il2cpp_init_method_metadata(&"AttackGrabAirFarR");
    il2cpp_init_method_metadata(&"DieSit");
    il2cpp_init_method_metadata(&"AttackGrabAirR");
    il2cpp_init_method_metadata(&"Walk");
    il2cpp_init_method_metadata(&"AttackGrabGroundFrontL");
    il2cpp_init_method_metadata(&"SitFall");
    il2cpp_init_method_metadata(&"AttackGrabStomachR");
    il2cpp_init_method_metadata(&"SitDown");
    il2cpp_init_method_metadata(&"AttackGrabGroundFrontR");
    il2cpp_init_method_metadata(&"AttackPunch");
    il2cpp_init_method_metadata(&"EmoteLaugh");
    il2cpp_init_method_metadata(&"ArmHurtL");
    il2cpp_init_method_metadata(&"Idle");
    il2cpp_init_method_metadata(&"AttackPunchCombo");
    il2cpp_init_method_metadata(&"SitUpCrawler");
    il2cpp_init_method_metadata(&"DieBack");
    il2cpp_init_method_metadata(&"Fall");
    il2cpp_init_method_metadata(&"LandCrawler");
    il2cpp_init_method_metadata(&"SprintAbnormal");
    il2cpp_init_method_metadata(&"AttackSlapR");
    il2cpp_init_method_metadata(&"AttackGrabGroundBackR");
    il2cpp_init_method_metadata(&"AttackKick");
    il2cpp_init_method_metadata(&"SitUp");
    il2cpp_init_method_metadata(&"AttackGrabBackR");
    il2cpp_init_method_metadata(&"AttackGrabBackL");
    il2cpp_init_method_metadata(&"AttackGrabHeadFrontR");
    il2cpp_init_method_metadata(&"AttackSlapLowL");
    il2cpp_init_method_metadata(&"EmoteRoar");
    DAT_057036ca = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x7cdffe18) {
    if (uVar1 < 0x3a2d364f) {
      if (uVar1 < 0x132daa60) {
        if (uVar1 < 0xcb00c2e) {
          if (uVar1 < 0x87de46c) {
            if (uVar1 == 0x4aec3cb) {
              bVar2 = System_String__op_Equality(name,"AttackSlapR",(MethodInfo *)0x0);
              if ((char)bVar2 != '\0') {
                if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                if (DAT_05703704 == '\0') {
                  il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapR_g);
                  il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
                  il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                  il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
                  DAT_05703704 = '\x01';
                }
                pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
                System_Func<object__object>___ctor();
                pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                CustomLogic_CLPropertyBinding<object>___ctor
                          (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
                return (CustomLogic_ICLMemberBinding_o *)pCVar6;
              }
            }
            else if (uVar1 == 0x87de46b) {
              bVar2 = System_String__op_Equality(name,"AttackPunch",(MethodInfo *)0x0);
              if ((char)bVar2 != '\0') {
                if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                if (DAT_057036e0 == '\0') {
                  il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackPunch_g);
                  il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
                  il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                  il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
                  DAT_057036e0 = '\x01';
                }
                pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
                System_Func<object__object>___ctor();
                pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                CustomLogic_CLPropertyBinding<object>___ctor
                          (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
                return (CustomLogic_ICLMemberBinding_o *)pCVar6;
              }
            }
          }
          else if (uVar1 == 0xa250c8c) {
            bVar2 = System_String__op_Equality(name,"DieFront",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057036db == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DieFront_g____g);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
                DAT_057036db = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0xb04c157) {
            bVar2 = System_String__op_Equality(name,"AttackGrabGroundFrontR",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057036f6 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabGroun);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
                DAT_057036f6 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0xcb00c2d) {
            bVar2 = System_String__op_Equality(name,"AttackGrabGroundBackL",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057036f3 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabGroun);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
                DAT_057036f3 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
        }
        else if (uVar1 < 0xfd3122c) {
          if (uVar1 == 0xd2f75f1) {
            bVar2 = System_String__op_Equality(name,"AttackGrabAirR",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057036ee == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabAirR);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
                DAT_057036ee = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0xe1ef32d) {
            bVar2 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057036d4 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Jump_g____gette);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
                DAT_057036d4 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0xfd3122b) {
            bVar2 = System_String__op_Equality(name,"AttackGrabHighR",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057036fc == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabHighR);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
                DAT_057036fc = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
        }
        else if (uVar1 == 0x1104cac9) {
          bVar2 = System_String__op_Equality(name,"AttackGrabGroundFrontL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057036f5 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabGroun);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_057036f5 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x12aed9d5) {
          bVar2 = System_String__op_Equality(name,"AttackSlapL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703703 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapL_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_05703703 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x132daa5f) {
          bVar2 = System_String__op_Equality(name,"AttackBiteR",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057036ea == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBiteR_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_057036ea = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 < 0x22ccd731) {
        if (uVar1 < 0x1d298760) {
          if (uVar1 == 0x172f85af) {
            bVar2 = System_String__op_Equality(name,"AttackGrabAirL",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057036ed == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabAirL);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
                DAT_057036ed = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0x1d29875f) {
            bVar2 = System_String__op_Equality(name,"AttackSlapHighR",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05703702 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapHighR);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
                DAT_05703702 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
        }
        else if (uVar1 == 0x1dd32835) {
          bVar2 = System_String__op_Equality(name,"AttackGrabHighL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057036fb == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabHighL);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_057036fb = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x1f2dbd43) {
          bVar2 = System_String__op_Equality(name,"AttackBiteF",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057036e8 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBiteF_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_057036e8 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x22ccd730) {
          bVar2 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057036d3 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Walk_g____gette);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_057036d3 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 < 0x292dcd02) {
        if (uVar1 == 0x25093a4c) {
          bVar2 = System_String__op_Equality(name,"ArmHurtL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570371c == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ArmHurtL_g____g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_0570371c = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x27bb25ca) {
          bVar2 = System_String__op_Equality(name,"SitFallCrawler",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703714 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SitFallCrawler);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_05703714 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x292dcd01) {
          bVar2 = System_String__op_Equality(name,"AttackBiteL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057036e9 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBiteL_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_057036e9 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x3329aa01) {
        bVar2 = System_String__op_Equality(name,"AttackSlapHighL",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703701 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapHighL);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_05703701 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x371c1522) {
        bVar2 = System_String__op_Equality(name,"AttackStomp",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057036e5 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackStomp_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_057036e5 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x3a2d364e) {
        bVar2 = System_String__op_Equality(name,"AttackBellyFlop",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057036e2 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBellyFlop);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_057036e2 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x5d992b42) {
      if (uVar1 < 0x425a9db8) {
        if (uVar1 < 0x3d9daaed) {
          if (uVar1 == 0x3b095cee) {
            bVar2 = System_String__op_Equality(name,"ArmHurtR",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_0570371d == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ArmHurtR_g____g);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
                DAT_0570371d = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0x3d9daaec) {
            bVar2 = System_String__op_Equality(name,"StunLeft",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057036d8 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__StunLeft_g____g);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
                DAT_057036d8 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
        }
        else if (uVar1 == 0x3db5a1bf) {
          bVar2 = System_String__op_Equality(name,"EmoteShake",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703721 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteShake_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_05703721 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x3fd565eb) {
          bVar2 = System_String__op_Equality(name,"DieSit",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057036de == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DieSit_g____get);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_057036de = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x425a9db7) {
          bVar2 = System_String__op_Equality(name,"AttackBellyFlopGetup",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057036e3 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBellyFlop);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_057036e3 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 < 0x45aa17b4) {
        if (uVar1 == 0x426f593c) {
          bVar2 = System_String__op_Equality(name,"EmoteLaugh",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570371f == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteLaugh_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_0570371f = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x45516aaa) {
          bVar2 = System_String__op_Equality(name,"SitUp",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703711 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SitUp_g____gett);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_05703711 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x45aa17b3) {
          bVar2 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057036cb == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Idle_g____gette);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_057036cb = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x518c7bc2) {
        bVar2 = System_String__op_Equality(name,"DieGround",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057036dc == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DieGround_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_057036dc = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x54623468) {
        bVar2 = System_String__op_Equality(name,"FallCrawler",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057036d1 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FallCrawler_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_057036d1 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x5d992b41) {
        bVar2 = System_String__op_Equality(name,"Stun",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057036d7 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Stun_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_057036d7 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x717ed71c) {
      if (uVar1 < 0x6700754c) {
        if (uVar1 == 0x5f7ebac5) {
          bVar2 = System_String__op_Equality(name,"Turn90L",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703715 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Turn90L_g____ge);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_05703715 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x6700754b) {
          bVar2 = System_String__op_Equality(name,"AttackHitFace",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570370a == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackHitFace_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_0570370a = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x69fd27f6) {
        bVar2 = System_String__op_Equality(name,"RunAbnormal",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057036cc == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RunAbnormal_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_057036cc = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x70cfd606) {
        bVar2 = System_String__op_Equality(name,"RunCrawler",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057036ce == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RunCrawler_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_057036ce = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x717ed71b) {
        bVar2 = System_String__op_Equality(name,"Turn90R",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703716 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Turn90R_g____ge);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_05703716 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x7b00bc81) {
      if (uVar1 == 0x729a03b7) {
        bVar2 = System_String__op_Equality(name,"AttackJumpCrawler",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570370d == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackJumpCrawl);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_0570370d = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x745f154b) {
        bVar2 = System_String__op_Equality(name,"AttackSlapLowR",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703706 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapLowR);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_05703706 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x7b00bc80) {
        bVar2 = System_String__op_Equality(name,"Fall",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057036d5 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Fall_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_057036d5 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0x7b128cf9) {
      bVar2 = System_String__op_Equality(name,"StunRight",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057036d9 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__StunRight_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          DAT_057036d9 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x7b4c8700) {
      bVar2 = System_String__op_Equality(name,"AttackGrabCoreL",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057036f1 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabCoreL);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          DAT_057036f1 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x7cdffe17) {
      bVar2 = System_String__op_Equality(name,"Turn90LCrawler",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703717 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Turn90LCrawler);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          DAT_05703717 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xac717d26) {
    if (uVar1 < 0x882f3d51) {
      if (uVar1 < 0x838656ad) {
        if (uVar1 < 0x7ee23ea7) {
          if (uVar1 == 0x7e4b9533) {
            bVar2 = System_String__op_Equality(name,"AttackEatL",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057036ff == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackEatL_g);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
                DAT_057036ff = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0x7ee23ea6) {
            bVar2 = System_String__op_Equality(name,"AttackGrabHeadFrontR",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057036fa == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabHeadF);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
                DAT_057036fa = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
        }
        else if (uVar1 == 0x825f2b55) {
          bVar2 = System_String__op_Equality(name,"AttackSlapLowL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703705 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapLowL);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_05703705 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x838656ac) {
          bVar2 = System_String__op_Equality(name,"AttackSlam",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057036e1 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlam_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_057036e1 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x7f7ae464) {
          bVar2 = System_String__op_Equality(name,"AttackBrushChestL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703707 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBrushChes);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_05703707 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 < 0x862f3a2b) {
        if (uVar1 == 0x84fc6844) {
          bVar2 = System_String__op_Equality(name,"AttackGrabBackL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057036ef == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabBackL);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_057036ef = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x857aedd6) {
          bVar2 = System_String__op_Equality(name,"AttackBrushChestR",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703708 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBrushChes);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_05703708 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x862f3a2a) {
          bVar2 = System_String__op_Equality(name,"AttackGrabAirFarL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057036eb == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabAirFa);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_057036eb = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x86827373) {
        bVar2 = System_String__op_Equality(name,"DieCrawler",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057036dd == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DieCrawler_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_057036dd = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x87b6990b) {
        bVar2 = System_String__op_Equality(name,"SitDown",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703710 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SitDown_g____ge);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_05703710 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x882f3d50) {
        bVar2 = System_String__op_Equality(name,"AttackGrabAirFarR",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057036ec == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabAirFa);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_057036ec = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x994cb63b) {
      if (uVar1 < 0x912e23bf) {
        if (uVar1 == 0x8afc71b6) {
          bVar2 = System_String__op_Equality(name,"AttackGrabBackR",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057036f0 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabBackR);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_057036f0 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x912e23be) {
          bVar2 = System_String__op_Equality(name,"SitFall",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703713 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SitFall_g____ge);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_05703713 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x972856bf) {
        bVar2 = System_String__op_Equality(name,"SitIdleCrawler",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570370f == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SitIdleCrawler);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_0570370f = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x98e26794) {
        bVar2 = System_String__op_Equality(name,"AttackGrabHeadFrontL",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057036f9 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabHeadF);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_057036f9 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x994cb63a) {
        bVar2 = System_String__op_Equality(name,"AttackGrabCoreR",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057036f2 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabCoreR);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_057036f2 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0xa47f6adf) {
      if (uVar1 == 0x99ca44b9) {
        bVar2 = System_String__op_Equality(name,"IdleCrawler",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057036cf == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IdleCrawler_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_057036cf = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x9c4bc46d) {
        bVar2 = System_String__op_Equality(name,"AttackEatR",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703700 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackEatR_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_05703700 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xa47f6ade) {
        bVar2 = System_String__op_Equality(name,"DieBack",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057036da == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DieBack_g____ge);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_057036da = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0xa9381ee1) {
      bVar2 = System_String__op_Equality(name,"Turn90RCrawler",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703718 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Turn90RCrawler);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          DAT_05703718 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xaa02d909) {
      bVar2 = System_String__op_Equality(name,"SprintAbnormal",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057036cd == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SprintAbnormal);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          DAT_057036cd = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xac717d25) {
      bVar2 = System_String__op_Equality(name,"AttackJump",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570370c == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackJump_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          DAT_0570370c = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xd514eb77) {
    if (uVar1 < 0xc2cea647) {
      if (uVar1 < 0xbe6b9bc0) {
        if (uVar1 == 0xb8819b82) {
          bVar2 = System_String__op_Equality(name,"SitBlind",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570371a == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SitBlind_g____g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_0570371a = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0xbe6b9bbf) {
          bVar2 = System_String__op_Equality(name,"JumpCrawler",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057036d0 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__JumpCrawler_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
              DAT_057036d0 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0xc0fd15a3) {
        bVar2 = System_String__op_Equality(name,"AttackPunchCombo",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057036df == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackPunchComb);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_057036df = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xc1018924) {
        bVar2 = System_String__op_Equality(name,"EmoteNod",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703720 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteNod_g____g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_05703720 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xc2cea646) {
        bVar2 = System_String__op_Equality(name,"SitUpCrawler",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703712 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SitUpCrawler_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_05703712 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0xc6f75898) {
      if (uVar1 == 0xc4a10b99) {
        bVar2 = System_String__op_Equality(name,"AttackSwingR",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057036e7 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSwingR_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_057036e7 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xc65e5944) {
        bVar2 = System_String__op_Equality(name,"AttackRockThrow",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570370b == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackRockThrow);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_0570370b = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xc6f75897) {
        bVar2 = System_String__op_Equality(name,"EmoteRoar",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703722 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteRoar_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_05703722 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0xc8f30ee7) {
      bVar2 = System_String__op_Equality(name,"AttackKick",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057036e4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackKick_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          DAT_057036e4 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xcf14e204) {
      bVar2 = System_String__op_Equality(name,"AttackGrabStomachL",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057036fd == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabStoma);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          DAT_057036fd = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xd514eb76) {
      bVar2 = System_String__op_Equality(name,"AttackGrabStomachR",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057036fe == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabStoma);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          DAT_057036fe = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xe6b2342e) {
    if (uVar1 < 0xd8f110d5) {
      if (uVar1 == 0xd5e03fe2) {
        bVar2 = System_String__op_Equality(name,"CoverNape",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570371e == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CoverNape_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_0570371e = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xd8f110d4) {
        bVar2 = System_String__op_Equality(name,"LandCrawler",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057036d2 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LandCrawler_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
            DAT_057036d2 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0xdea13487) {
      bVar2 = System_String__op_Equality(name,"AttackSwingL",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057036e6 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSwingL_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          DAT_057036e6 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xe4d66f54) {
      bVar2 = System_String__op_Equality(name,"Blind",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703719 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Blind_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          DAT_05703719 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xe6b2342d) {
      bVar2 = System_String__op_Equality(name,"SitIdle",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570370e == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SitIdle_g____ge);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          DAT_0570370e = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xee1682bd) {
    if (uVar1 == 0xe8476a11) {
      bVar2 = System_String__op_Equality(name,"AttackHitBack",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703709 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackHitBack_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          DAT_05703709 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xe89df278) {
      bVar2 = System_String__op_Equality(name,"AttackGrabHeadBackR",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057036f8 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabHeadB);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          DAT_057036f8 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xee1682bc) {
      bVar2 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057036d6 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Land_g____gette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
          DAT_057036d6 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 == 0xeeafdcf3) {
    bVar2 = System_String__op_Equality(name,"AttackGrabGroundBackR",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057036f4 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabGroun);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
        DAT_057036f4 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xf69e0882) {
    bVar2 = System_String__op_Equality(name,"AttackGrabHeadBackL",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057036f7 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabHeadB);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
        DAT_057036f7 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xfd07560c) {
    bVar2 = System_String__op_Equality(name,"BlindCrawler",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570371b == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BlindCrawler_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
        DAT_0570371b = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicTitanAnimationEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Idle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Idle (const MethodInfo* method);
// 0x3e9c460

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Idle
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036cb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Idle_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036cb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__RunAbnormal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__RunAbnormal (const MethodInfo* method);
// 0x3e9c500

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__RunAbnormal
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036cc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RunAbnormal_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036cc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SprintAbnormal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SprintAbnormal (const MethodInfo* method);
// 0x3e9c5a0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SprintAbnormal
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036cd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SprintAbnormal);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036cd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__RunCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__RunCrawler (const MethodInfo* method);
// 0x3e9c640

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__RunCrawler
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036ce == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RunCrawler_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036ce = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__IdleCrawler (const MethodInfo* method);
// 0x3e9c6e0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__IdleCrawler
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036cf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IdleCrawler_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036cf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__JumpCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__JumpCrawler (const MethodInfo* method);
// 0x3e9c780

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__JumpCrawler
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036d0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__JumpCrawler_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036d0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__FallCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__FallCrawler (const MethodInfo* method);
// 0x3e9c820

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__FallCrawler
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036d1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FallCrawler_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036d1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__LandCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__LandCrawler (const MethodInfo* method);
// 0x3e9c8c0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__LandCrawler
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036d2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LandCrawler_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036d2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x3e9c960

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Walk
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036d3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Walk_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036d3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x3e9ca00

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Jump
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036d4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Jump_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036d4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Fall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Fall (const MethodInfo* method);
// 0x3e9caa0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Fall
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036d5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Fall_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036d5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x3e9cb40

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Land
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036d6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Land_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036d6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Stun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Stun (const MethodInfo* method);
// 0x3e9cbe0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Stun
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Stun_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036d7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__StunLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__StunLeft (const MethodInfo* method);
// 0x3e9cc80

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__StunLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036d8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__StunLeft_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036d8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__StunRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__StunRight (const MethodInfo* method);
// 0x3e9cd20

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__StunRight
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036d9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__StunRight_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036d9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieBack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieBack (const MethodInfo* method);
// 0x3e9cdc0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieBack
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036da == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DieBack_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036da = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieFront
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieFront (const MethodInfo* method);
// 0x3e9ce60

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieFront
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036db == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DieFront_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036db = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieGround
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieGround (const MethodInfo* method);
// 0x3e9cf00

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieGround
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036dc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DieGround_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036dc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieCrawler (const MethodInfo* method);
// 0x3e9cfa0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieCrawler
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036dd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DieCrawler_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036dd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieSit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieSit (const MethodInfo* method);
// 0x3e9d040

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieSit
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036de == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DieSit_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036de = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackPunchCombo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackPunchCombo (const MethodInfo* method);
// 0x3e9d0e0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackPunchCombo
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036df == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackPunchComb);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036df = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackPunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackPunch (const MethodInfo* method);
// 0x3e9d180

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackPunch
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036e0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackPunch_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036e0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlam
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlam (const MethodInfo* method);
// 0x3e9d220

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlam
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036e1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlam_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036e1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBellyFlop
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBellyFlop (const MethodInfo* method);
// 0x3e9d2c0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBellyFlop
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036e2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBellyFlop);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036e2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBellyFlopGetup
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBellyFlopGetup (const MethodInfo* method);
// 0x3e9d360

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBellyFlopGetup
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036e3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBellyFlop);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036e3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackKick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackKick (const MethodInfo* method);
// 0x3e9d400

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackKick
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036e4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackKick_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036e4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackStomp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackStomp (const MethodInfo* method);
// 0x3e9d4a0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackStomp
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036e5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackStomp_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036e5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSwingL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSwingL (const MethodInfo* method);
// 0x3e9d540

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSwingL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSwingL_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036e6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSwingR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSwingR (const MethodInfo* method);
// 0x3e9d5e0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSwingR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036e7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSwingR_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036e7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBiteF
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteF (const MethodInfo* method);
// 0x3e9d680

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteF
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036e8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBiteF_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036e8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBiteL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteL (const MethodInfo* method);
// 0x3e9d720

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036e9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBiteL_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036e9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBiteR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteR (const MethodInfo* method);
// 0x3e9d7c0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036ea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBiteR_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036ea = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirFarL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirFarL (const MethodInfo* method);
// 0x3e9d860

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirFarL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036eb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabAirFa);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036eb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirFarR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirFarR (const MethodInfo* method);
// 0x3e9d900

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirFarR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036ec == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabAirFa);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036ec = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirL (const MethodInfo* method);
// 0x3e9d9a0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036ed == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabAirL);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036ed = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirR (const MethodInfo* method);
// 0x3e9da40

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036ee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabAirR);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036ee = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabBackL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBackL (const MethodInfo* method);
// 0x3e9dae0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBackL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036ef == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabBackL);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036ef = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabBackR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBackR (const MethodInfo* method);
// 0x3e9db80

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBackR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036f0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabBackR);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036f0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabCoreL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabCoreL (const MethodInfo* method);
// 0x3e9dc20

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabCoreL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036f1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabCoreL);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036f1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabCoreR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabCoreR (const MethodInfo* method);
// 0x3e9dcc0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabCoreR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036f2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabCoreR);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036f2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabGroundBackL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundBackL (const MethodInfo* method);
// 0x3e9dd60

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundBackL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036f3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabGroun);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036f3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabGroundBackR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundBackR (const MethodInfo* method);
// 0x3e9de00

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundBackR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036f4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabGroun);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036f4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabGroundFrontL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundFrontL (const MethodInfo* method);
// 0x3e9dea0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundFrontL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036f5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabGroun);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036f5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabGroundFrontR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundFrontR (const MethodInfo* method);
// 0x3e9df40

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundFrontR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036f6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabGroun);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036f6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHeadBackL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadBackL (const MethodInfo* method);
// 0x3e9dfe0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadBackL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036f7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabHeadB);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036f7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHeadBackR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadBackR (const MethodInfo* method);
// 0x3e9e080

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadBackR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036f8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabHeadB);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036f8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHeadFrontL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadFrontL (const MethodInfo* method);
// 0x3e9e120

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadFrontL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036f9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabHeadF);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036f9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHeadFrontR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadFrontR (const MethodInfo* method);
// 0x3e9e1c0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadFrontR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036fa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabHeadF);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036fa = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHighL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHighL (const MethodInfo* method);
// 0x3e9e260

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHighL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036fb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabHighL);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036fb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHighR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHighR (const MethodInfo* method);
// 0x3e9e300

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHighR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036fc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabHighR);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036fc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabStomachL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabStomachL (const MethodInfo* method);
// 0x3e9e3a0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabStomachL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036fd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabStoma);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036fd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabStomachR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabStomachR (const MethodInfo* method);
// 0x3e9e440

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabStomachR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036fe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabStoma);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036fe = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackEatL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackEatL (const MethodInfo* method);
// 0x3e9e4e0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackEatL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_057036ff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackEatL_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_057036ff = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackEatR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackEatR (const MethodInfo* method);
// 0x3e9e580

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackEatR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703700 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackEatR_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703700 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapHighL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapHighL (const MethodInfo* method);
// 0x3e9e620

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapHighL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703701 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapHighL);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703701 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapHighR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapHighR (const MethodInfo* method);
// 0x3e9e6c0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapHighR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703702 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapHighR);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703702 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapL (const MethodInfo* method);
// 0x3e9e760

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703703 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapL_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703703 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapR (const MethodInfo* method);
// 0x3e9e800

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703704 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapR_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703704 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapLowL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapLowL (const MethodInfo* method);
// 0x3e9e8a0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapLowL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703705 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapLowL);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703705 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapLowR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapLowR (const MethodInfo* method);
// 0x3e9e940

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapLowR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703706 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapLowR);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703706 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushChestL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushChestL (const MethodInfo* method);
// 0x3e9e9e0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushChestL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703707 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBrushChes);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703707 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushChestR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushChestR (const MethodInfo* method);
// 0x3e9ea80

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushChestR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703708 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBrushChes);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703708 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackHitBack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackHitBack (const MethodInfo* method);
// 0x3e9eb20

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackHitBack
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703709 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackHitBack_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703709 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackHitFace
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackHitFace (const MethodInfo* method);
// 0x3e9ebc0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackHitFace
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_0570370a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackHitFace_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_0570370a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackRockThrow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackRockThrow (const MethodInfo* method);
// 0x3e9ec60

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackRockThrow
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_0570370b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackRockThrow);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_0570370b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackJump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackJump (const MethodInfo* method);
// 0x3e9ed00

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackJump
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_0570370c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackJump_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_0570370c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackJumpCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackJumpCrawler (const MethodInfo* method);
// 0x3e9eda0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackJumpCrawler
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_0570370d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackJumpCrawl);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_0570370d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitIdle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitIdle (const MethodInfo* method);
// 0x3e9ee40

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitIdle
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_0570370e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SitIdle_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_0570370e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitIdleCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitIdleCrawler (const MethodInfo* method);
// 0x3e9eee0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitIdleCrawler
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_0570370f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SitIdleCrawler);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_0570370f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitDown
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitDown (const MethodInfo* method);
// 0x3e9ef80

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitDown
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703710 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SitDown_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703710 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitUp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitUp (const MethodInfo* method);
// 0x3e9f020

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitUp
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703711 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SitUp_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703711 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitUpCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitUpCrawler (const MethodInfo* method);
// 0x3e9f0c0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitUpCrawler
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703712 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SitUpCrawler_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703712 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitFall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitFall (const MethodInfo* method);
// 0x3e9f160

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitFall
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703713 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SitFall_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703713 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitFallCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitFallCrawler (const MethodInfo* method);
// 0x3e9f200

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitFallCrawler
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703714 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SitFallCrawler);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703714 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Turn90L
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90L (const MethodInfo* method);
// 0x3e9f2a0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90L
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703715 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Turn90L_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703715 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Turn90R
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90R (const MethodInfo* method);
// 0x3e9f340

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90R
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703716 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Turn90R_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703716 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Turn90LCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90LCrawler (const MethodInfo* method);
// 0x3e9f3e0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90LCrawler
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703717 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Turn90LCrawler);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703717 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Turn90RCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90RCrawler (const MethodInfo* method);
// 0x3e9f480

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90RCrawler
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703718 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Turn90RCrawler);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703718 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Blind
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Blind (const MethodInfo* method);
// 0x3e9f520

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Blind
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703719 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Blind_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703719 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitBlind
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitBlind (const MethodInfo* method);
// 0x3e9f5c0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitBlind
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_0570371a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SitBlind_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_0570371a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__BlindCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__BlindCrawler (const MethodInfo* method);
// 0x3e9f660

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__BlindCrawler
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_0570371b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BlindCrawler_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_0570371b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__ArmHurtL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__ArmHurtL (const MethodInfo* method);
// 0x3e9f700

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__ArmHurtL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_0570371c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ArmHurtL_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_0570371c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__ArmHurtR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__ArmHurtR (const MethodInfo* method);
// 0x3e9f7a0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__ArmHurtR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_0570371d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ArmHurtR_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_0570371d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__CoverNape
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__CoverNape (const MethodInfo* method);
// 0x3e9f840

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__CoverNape
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_0570371e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CoverNape_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_0570371e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteLaugh
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteLaugh (const MethodInfo* method);
// 0x3e9f8e0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteLaugh
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_0570371f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteLaugh_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_0570371f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteNod
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteNod (const MethodInfo* method);
// 0x3e9f980

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteNod
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703720 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteNod_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703720 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteShake
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteShake (const MethodInfo* method);
// 0x3e9fa20

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteShake
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703721 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteShake_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703721 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteRoar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar (const MethodInfo* method);
// 0x3e9fac0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (DAT_05703722 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteRoar_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
    DAT_05703722 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTitanAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e9fb60

void CustomLogic_CustomLogicTitanAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703723 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"AttackGrabGroundBackL");
    il2cpp_init_method_metadata(&"AttackBellyFlop");
    il2cpp_init_method_metadata(&"StunRight");
    il2cpp_init_method_metadata(&"FallCrawler");
    il2cpp_init_method_metadata(&"AttackBrushChestL");
    il2cpp_init_method_metadata(&"AttackBrushChestR");
    il2cpp_init_method_metadata(&"AttackGrabCoreR");
    il2cpp_init_method_metadata(&"AttackBiteF");
    il2cpp_init_method_metadata(&"ArmHurtR");
    il2cpp_init_method_metadata(&"AttackJumpCrawler");
    il2cpp_init_method_metadata(&"AttackGrabHighR");
    il2cpp_init_method_metadata(&"SitIdleCrawler");
    il2cpp_init_method_metadata(&"EmoteNod");
    il2cpp_init_method_metadata(&"AttackSlam");
    il2cpp_init_method_metadata(&"AttackSwingL");
    il2cpp_init_method_metadata(&"AttackGrabStomachL");
    il2cpp_init_method_metadata(&"AttackJump");
    il2cpp_init_method_metadata(&"EmoteShake");
    il2cpp_init_method_metadata(&"SitFallCrawler");
    il2cpp_init_method_metadata(&"RunAbnormal");
    il2cpp_init_method_metadata(&"DieFront");
    il2cpp_init_method_metadata(&"AttackBellyFlopGetup");
    il2cpp_init_method_metadata(&"AttackGrabAirL");
    il2cpp_init_method_metadata(&"AttackHitBack");
    il2cpp_init_method_metadata(&"AttackSwingR");
    il2cpp_init_method_metadata(&"DieGround");
    il2cpp_init_method_metadata(&"AttackEatL");
    il2cpp_init_method_metadata(&"AttackGrabAirFarL");
    il2cpp_init_method_metadata(&"AttackBiteL");
    il2cpp_init_method_metadata(&"JumpCrawler");
    il2cpp_init_method_metadata(&"AttackGrabCoreL");
    il2cpp_init_method_metadata(&"CoverNape");
    il2cpp_init_method_metadata(&"AttackStomp");
    il2cpp_init_method_metadata(&"AttackEatR");
    il2cpp_init_method_metadata(&"AttackRockThrow");
    il2cpp_init_method_metadata(&"Land");
    il2cpp_init_method_metadata(&"BlindCrawler");
    il2cpp_init_method_metadata(&"AttackSlapL");
    il2cpp_init_method_metadata(&"AttackGrabHeadBackL");
    il2cpp_init_method_metadata(&"DieCrawler");
    il2cpp_init_method_metadata(&"AttackSlapLowR");
    il2cpp_init_method_metadata(&"Jump");
    il2cpp_init_method_metadata(&"Turn90R");
    il2cpp_init_method_metadata(&"Blind");
    il2cpp_init_method_metadata(&"Turn90L");
    il2cpp_init_method_metadata(&"Stun");
    il2cpp_init_method_metadata(&"AttackSlapHighL");
    il2cpp_init_method_metadata(&"AttackGrabHeadBackR");
    il2cpp_init_method_metadata(&"AttackBiteR");
    il2cpp_init_method_metadata(&"StunLeft");
    il2cpp_init_method_metadata(&"SitIdle");
    il2cpp_init_method_metadata(&"RunCrawler");
    il2cpp_init_method_metadata(&"SitBlind");
    il2cpp_init_method_metadata(&"Turn90RCrawler");
    il2cpp_init_method_metadata(&"AttackGrabHighL");
    il2cpp_init_method_metadata(&"IdleCrawler");
    il2cpp_init_method_metadata(&"AttackHitFace");
    il2cpp_init_method_metadata(&"AttackSlapHighR");
    il2cpp_init_method_metadata(&"AttackGrabHeadFrontL");
    il2cpp_init_method_metadata(&"Turn90LCrawler");
    il2cpp_init_method_metadata(&"AttackGrabAirFarR");
    il2cpp_init_method_metadata(&"DieSit");
    il2cpp_init_method_metadata(&"AttackGrabAirR");
    il2cpp_init_method_metadata(&"Walk");
    il2cpp_init_method_metadata(&"AttackGrabGroundFrontL");
    il2cpp_init_method_metadata(&"SitFall");
    il2cpp_init_method_metadata(&"AttackGrabStomachR");
    il2cpp_init_method_metadata(&"SitDown");
    il2cpp_init_method_metadata(&"AttackGrabGroundFrontR");
    il2cpp_init_method_metadata(&"AttackPunch");
    il2cpp_init_method_metadata(&"EmoteLaugh");
    il2cpp_init_method_metadata(&"ArmHurtL");
    il2cpp_init_method_metadata(&"Idle");
    il2cpp_init_method_metadata(&"AttackPunchCombo");
    il2cpp_init_method_metadata(&"SitUpCrawler");
    il2cpp_init_method_metadata(&"DieBack");
    il2cpp_init_method_metadata(&"Fall");
    il2cpp_init_method_metadata(&"LandCrawler");
    il2cpp_init_method_metadata(&"SprintAbnormal");
    il2cpp_init_method_metadata(&"AttackSlapR");
    il2cpp_init_method_metadata(&"AttackGrabGroundBackR");
    il2cpp_init_method_metadata(&"AttackKick");
    il2cpp_init_method_metadata(&"SitUp");
    il2cpp_init_method_metadata(&"AttackGrabBackR");
    il2cpp_init_method_metadata(&"AttackGrabBackL");
    il2cpp_init_method_metadata(&"AttackGrabHeadFrontR");
    il2cpp_init_method_metadata(&"AttackSlapLowL");
    il2cpp_init_method_metadata(&"EmoteRoar");
    DAT_05703723 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Idle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RunAbnormal",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SprintAbnormal",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RunCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IdleCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"JumpCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FallCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LandCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Walk",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Jump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Fall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Land",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Stun",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"StunLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"StunRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DieBack",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DieFront",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DieGround",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DieCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DieSit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackPunchCombo",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackPunch",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSlam",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackBellyFlop",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackBellyFlopGetup",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackKick",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackStomp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSwingL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSwingR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackBiteF",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackBiteL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackBiteR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabAirFarL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabAirFarR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabAirL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabAirR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabBackL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabBackR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabCoreL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabCoreR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabGroundBackL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabGroundBackR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabGroundFrontL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabGroundFrontR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabHeadBackL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabHeadBackR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabHeadFrontL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabHeadFrontR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabHighL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabHighR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabStomachL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabStomachR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackEatL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackEatR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSlapHighL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSlapHighR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSlapL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSlapR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSlapLowL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSlapLowR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackBrushChestL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackBrushChestR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackHitBack",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackHitFace",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackRockThrow",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackJump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackJumpCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SitIdle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SitIdleCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SitDown",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SitUp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SitUpCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SitFall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SitFallCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Turn90L",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Turn90R",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Turn90LCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Turn90RCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Blind",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SitBlind",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BlindCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ArmHurtL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ArmHurtR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CoverNape",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmoteLaugh",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmoteNod",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmoteShake",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmoteRoar",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0770

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__Idle>g____getter_2_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703670 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|idle");
    DAT_05703670 = '\x01';
  }
  return "Amarture_VER2|idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__RunAbnormal>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__RunAbnormal_g____getter_3_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea07a0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__RunAbnormal>g____getter_3_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703671 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|run.abnormal");
    DAT_05703671 = '\x01';
  }
  return "Amarture_VER2|run.abnormal";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SprintAbnormal>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SprintAbnormal_g____getter_4_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea07d0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__SprintAbnormal>g____getter_4_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703672 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|run.abnormal.1");
    DAT_05703672 = '\x01';
  }
  return "Amarture_VER2|run.abnormal.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__RunCrawler>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__RunCrawler_g____getter_5_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0800

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__RunCrawler>g____getter_5_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703673 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|crawler.run");
    DAT_05703673 = '\x01';
  }
  return "Amarture_VER2|crawler.run";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleCrawler>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__IdleCrawler_g____getter_6_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0830

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__IdleCrawler>g____getter_6_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703674 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|crawler.idle");
    DAT_05703674 = '\x01';
  }
  return "Amarture_VER2|crawler.idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__JumpCrawler>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__JumpCrawler_g____getter_7_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0860

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__JumpCrawler>g____getter_7_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703675 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.crawler.jump.0");
    DAT_05703675 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__FallCrawler>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__FallCrawler_g____getter_8_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0890

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__FallCrawler>g____getter_8_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703676 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.crawler.jump.1");
    DAT_05703676 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__LandCrawler>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__LandCrawler_g____getter_9_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea08c0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__LandCrawler>g____getter_9_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703677 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.crawler.jump.2");
    DAT_05703677 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.2";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_10_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea08f0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__Walk>g____getter_10_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703678 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|run.walk");
    DAT_05703678 = '\x01';
  }
  return "Amarture_VER2|run.walk";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_11_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0920

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__Jump>g____getter_11_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703679 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.jumper.0");
    DAT_05703679 = '\x01';
  }
  return "Amarture_VER2|attack.jumper.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Fall>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_12_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0950

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__Fall>g____getter_12_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570367a == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.jumper.1");
    DAT_0570367a = '\x01';
  }
  return "Amarture_VER2|attack.jumper.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_13_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0980

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__Land>g____getter_13_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570367b == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.jumper.2");
    DAT_0570367b = '\x01';
  }
  return "Amarture_VER2|attack.jumper.2";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Stun>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_14_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea09b0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__Stun>g____getter_14_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570367c == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|hit.eren.L");
    DAT_0570367c = '\x01';
  }
  return "Amarture_VER2|hit.eren.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__StunLeft>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__StunLeft_g____getter_15_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea09e0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__StunLeft>g____getter_15_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570367d == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|hit.eren.L");
    DAT_0570367d = '\x01';
  }
  return "Amarture_VER2|hit.eren.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__StunRight>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__StunRight_g____getter_16_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0a10

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__StunRight>g____getter_16_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570367e == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|hit.eren.R");
    DAT_0570367e = '\x01';
  }
  return "Amarture_VER2|hit.eren.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieBack>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieBack_g____getter_17_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0a40

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__DieBack>g____getter_17_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570367f == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|die.back");
    DAT_0570367f = '\x01';
  }
  return "Amarture_VER2|die.back";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieFront>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieFront_g____getter_18_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0a70

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__DieFront>g____getter_18_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703680 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|die.front");
    DAT_05703680 = '\x01';
  }
  return "Amarture_VER2|die.front";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieGround>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieGround_g____getter_19_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0aa0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__DieGround>g____getter_19_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703681 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|die.ground");
    DAT_05703681 = '\x01';
  }
  return "Amarture_VER2|die.ground";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieCrawler>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieCrawler_g____getter_20_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0ad0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__DieCrawler>g____getter_20_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703682 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|crawler.die");
    DAT_05703682 = '\x01';
  }
  return "Amarture_VER2|crawler.die";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieSit>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieSit_g____getter_21_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0b00

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__DieSit>g____getter_21_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703683 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|sit_die");
    DAT_05703683 = '\x01';
  }
  return "Amarture_VER2|sit_die";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackPunchCombo>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackPunchCombo_g____getter_22_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0b30

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackPunchCombo>g____getter_22_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703684 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.combo");
    DAT_05703684 = '\x01';
  }
  return "Amarture_VER2|attack.combo";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackPunch>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackPunch_g____getter_23_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0b60

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackPunch>g____getter_23_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703685 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.comboPunch");
    DAT_05703685 = '\x01';
  }
  return "Amarture_VER2|attack.comboPunch";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlam>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlam_g____getter_24_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0b90

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackSlam>g____getter_24_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703686 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.front.ground");
    DAT_05703686 = '\x01';
  }
  return "Amarture_VER2|attack.front.ground";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBellyFlop>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBellyFlop_g____getter_25_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0bc0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackBellyFlop>g____getter_25_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703687 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.abnormal.jump");
    DAT_05703687 = '\x01';
  }
  return "Amarture_VER2|attack.abnormal.jump";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBellyFlopGetup>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBellyFlopGetup_g____getter_26_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0bf0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackBellyFlopGetup>g____getter_26_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703688 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.abnormal.getup");
    DAT_05703688 = '\x01';
  }
  return "Amarture_VER2|attack.abnormal.getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackKick>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_27_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0c20

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackKick>g____getter_27_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703689 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.kick");
    DAT_05703689 = '\x01';
  }
  return "Amarture_VER2|attack.kick";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackStomp>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_28_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0c50

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackStomp>g____getter_28_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570368a == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.stomp");
    DAT_0570368a = '\x01';
  }
  return "Amarture_VER2|attack.stomp";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSwingL>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSwingL_g____getter_29_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0c80

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackSwingL>g____getter_29_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570368b == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.swing.l");
    DAT_0570368b = '\x01';
  }
  return "Amarture_VER2|attack.swing.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSwingR>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSwingR_g____getter_30_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0cb0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackSwingR>g____getter_30_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570368c == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.swing.r");
    DAT_0570368c = '\x01';
  }
  return "Amarture_VER2|attack.swing.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBiteF>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBiteF_g____getter_31_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0ce0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackBiteF>g____getter_31_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570368d == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|bite");
    DAT_0570368d = '\x01';
  }
  return "Amarture_VER2|bite";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBiteL>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBiteL_g____getter_32_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0d10

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackBiteL>g____getter_32_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570368e == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|bite.l");
    DAT_0570368e = '\x01';
  }
  return "Amarture_VER2|bite.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBiteR>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBiteR_g____getter_33_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0d40

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackBiteR>g____getter_33_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570368f == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|bite.r");
    DAT_0570368f = '\x01';
  }
  return "Amarture_VER2|bite.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirFarL>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirFarL_g____getter_34_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0d70

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabAirFarL>g____getter_34_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703690 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.air.far.l");
    DAT_05703690 = '\x01';
  }
  return "Amarture_VER2|grab.air.far.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirFarR>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirFarR_g____getter_35_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0da0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabAirFarR>g____getter_35_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703691 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.air.far.r");
    DAT_05703691 = '\x01';
  }
  return "Amarture_VER2|grab.air.far.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirL>g____getter|36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirL_g____getter_36_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0dd0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabAirL>g____getter_36_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703692 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.air.short.l");
    DAT_05703692 = '\x01';
  }
  return "Amarture_VER2|grab.air.short.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirR>g____getter|37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirR_g____getter_37_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0e00

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabAirR>g____getter_37_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703693 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.air.short.r");
    DAT_05703693 = '\x01';
  }
  return "Amarture_VER2|grab.air.short.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBackL>g____getter|38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBackL_g____getter_38_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0e30

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabBackL>g____getter_38_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703694 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.back.l");
    DAT_05703694 = '\x01';
  }
  return "Amarture_VER2|grab.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBackR>g____getter|39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBackR_g____getter_39_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0e60

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabBackR>g____getter_39_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703695 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.back.r");
    DAT_05703695 = '\x01';
  }
  return "Amarture_VER2|grab.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabCoreL>g____getter|40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabCoreL_g____getter_40_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0e90

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabCoreL>g____getter_40_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703696 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.core.L");
    DAT_05703696 = '\x01';
  }
  return "Amarture_VER2|grab.core.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabCoreR>g____getter|41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabCoreR_g____getter_41_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0ec0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabCoreR>g____getter_41_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703697 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.core.R");
    DAT_05703697 = '\x01';
  }
  return "Amarture_VER2|grab.core.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGroundBackL>g____getter|42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundBackL_g____getter_42_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0ef0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabGroundBackL>g____getter_42_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703698 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.ground.back.l");
    DAT_05703698 = '\x01';
  }
  return "Amarture_VER2|grab.ground.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGroundBackR>g____getter|43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundBackR_g____getter_43_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0f20

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabGroundBackR>g____getter_43_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703699 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.ground.back.r");
    DAT_05703699 = '\x01';
  }
  return "Amarture_VER2|grab.ground.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGroundFrontL>g____getter|44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundFrontL_g____getter_44_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0f50

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabGroundFrontL>g____getter_44_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570369a == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.ground.front.l");
    DAT_0570369a = '\x01';
  }
  return "Amarture_VER2|grab.ground.front.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGroundFrontR>g____getter|45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundFrontR_g____getter_45_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0f80

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabGroundFrontR>g____getter_45_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570369b == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.ground.front.r");
    DAT_0570369b = '\x01';
  }
  return "Amarture_VER2|grab.ground.front.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHeadBackL>g____getter|46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadBackL_g____getter_46_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0fb0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabHeadBackL>g____getter_46_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570369c == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.head.back.l");
    DAT_0570369c = '\x01';
  }
  return "Amarture_VER2|grab.head.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHeadBackR>g____getter|47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadBackR_g____getter_47_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea0fe0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabHeadBackR>g____getter_47_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570369d == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.head.back.r");
    DAT_0570369d = '\x01';
  }
  return "Amarture_VER2|grab.head.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHeadFrontL>g____getter|48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadFrontL_g____getter_48_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1010

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabHeadFrontL>g____getter_48_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570369e == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.head.front.1");
    DAT_0570369e = '\x01';
  }
  return "Amarture_VER2|grab.head.front.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHeadFrontR>g____getter|49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadFrontR_g____getter_49_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1040

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabHeadFrontR>g____getter_49_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570369f == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.head.front.r");
    DAT_0570369f = '\x01';
  }
  return "Amarture_VER2|grab.head.front.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHighL>g____getter|50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHighL_g____getter_50_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1070

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabHighL>g____getter_50_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036a0 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.high.l");
    DAT_057036a0 = '\x01';
  }
  return "Amarture_VER2|grab.high.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHighR>g____getter|51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHighR_g____getter_51_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea10a0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabHighR>g____getter_51_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036a1 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.high.r");
    DAT_057036a1 = '\x01';
  }
  return "Amarture_VER2|grab.high.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabStomachL>g____getter|52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabStomachL_g____getter_52_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea10d0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabStomachL>g____getter_52_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036a2 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.stomach.l");
    DAT_057036a2 = '\x01';
  }
  return "Amarture_VER2|grab.stomach.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabStomachR>g____getter|53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabStomachR_g____getter_53_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1100

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabStomachR>g____getter_53_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036a3 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.stomach.r");
    DAT_057036a3 = '\x01';
  }
  return "Amarture_VER2|grab.stomach.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackEatL>g____getter|54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackEatL_g____getter_54_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1130

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackEatL>g____getter_54_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036a4 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|eat.l");
    DAT_057036a4 = '\x01';
  }
  return "Amarture_VER2|eat.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackEatR>g____getter|55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackEatR_g____getter_55_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1160

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackEatR>g____getter_55_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036a5 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|eat.r");
    DAT_057036a5 = '\x01';
  }
  return "Amarture_VER2|eat.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapHighL>g____getter|56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapHighL_g____getter_56_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1190

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackSlapHighL>g____getter_56_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036a6 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.anti.AE.high.l");
    DAT_057036a6 = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.high.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapHighR>g____getter|57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapHighR_g____getter_57_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea11c0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackSlapHighR>g____getter_57_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036a7 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.anti.AE.high.r");
    DAT_057036a7 = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.high.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapL>g____getter|58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapL_g____getter_58_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea11f0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackSlapL>g____getter_58_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036a8 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.anti.AE.l");
    DAT_057036a8 = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapR>g____getter|59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapR_g____getter_59_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1220

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackSlapR>g____getter_59_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036a9 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.anti.AE.r");
    DAT_057036a9 = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapLowL>g____getter|60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapLowL_g____getter_60_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1250

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackSlapLowL>g____getter_60_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036aa == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.anti.AE.low.l");
    DAT_057036aa = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.low.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapLowR>g____getter|61_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapLowR_g____getter_61_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1280

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackSlapLowR>g____getter_61_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036ab == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.anti.AE.low.r");
    DAT_057036ab = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.low.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushChestL>g____getter|62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushChestL_g____getter_62_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea12b0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackBrushChestL>g____getter_62_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036ac == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.chest.L");
    DAT_057036ac = '\x01';
  }
  return "Amarture_VER2|attack.chest.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushChestR>g____getter|63_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushChestR_g____getter_63_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea12e0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackBrushChestR>g____getter_63_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036ad == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.chest.R");
    DAT_057036ad = '\x01';
  }
  return "Amarture_VER2|attack.chest.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackHitBack>g____getter|64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackHitBack_g____getter_64_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1310

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackHitBack>g____getter_64_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036ae == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.slap.back");
    DAT_057036ae = '\x01';
  }
  return "Amarture_VER2|attack.slap.back";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackHitFace>g____getter|65_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackHitFace_g____getter_65_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1340

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackHitFace>g____getter_65_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036af == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.slap.face");
    DAT_057036af = '\x01';
  }
  return "Amarture_VER2|attack.slap.face";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackRockThrow>g____getter|66_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackRockThrow_g____getter_66_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1370

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackRockThrow>g____getter_66_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036b0 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.throw");
    DAT_057036b0 = '\x01';
  }
  return "Amarture_VER2|attack.throw";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackJump>g____getter|67_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackJump_g____getter_67_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea13a0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackJump>g____getter_67_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036b1 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.jumper.0");
    DAT_057036b1 = '\x01';
  }
  return "Amarture_VER2|attack.jumper.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackJumpCrawler>g____getter|68_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackJumpCrawler_g____getter_68_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea13d0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__AttackJumpCrawler>g____getter_68_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036b2 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.crawler.jump.0");
    DAT_057036b2 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitIdle>g____getter|69_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitIdle_g____getter_69_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1400

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__SitIdle>g____getter_69_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036b3 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|sit_idle");
    DAT_057036b3 = '\x01';
  }
  return "Amarture_VER2|sit_idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitIdleCrawler>g____getter|70_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitIdleCrawler_g____getter_70_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1430

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__SitIdleCrawler>g____getter_70_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036b4 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|crawler.sit.idle");
    DAT_057036b4 = '\x01';
  }
  return "Amarture_VER2|crawler.sit.idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitDown>g____getter|71_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitDown_g____getter_71_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1460

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__SitDown>g____getter_71_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036b5 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|sit_down");
    DAT_057036b5 = '\x01';
  }
  return "Amarture_VER2|sit_down";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitUp>g____getter|72_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitUp_g____getter_72_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1490

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__SitUp>g____getter_72_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036b6 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|sit_getup");
    DAT_057036b6 = '\x01';
  }
  return "Amarture_VER2|sit_getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitUpCrawler>g____getter|73_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitUpCrawler_g____getter_73_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea14c0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__SitUpCrawler>g____getter_73_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036b7 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|crawler.getup");
    DAT_057036b7 = '\x01';
  }
  return "Amarture_VER2|crawler.getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitFall>g____getter|74_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitFall_g____getter_74_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea14f0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__SitFall>g____getter_74_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036b8 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|sit_hunt_down");
    DAT_057036b8 = '\x01';
  }
  return "Amarture_VER2|sit_hunt_down";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitFallCrawler>g____getter|75_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitFallCrawler_g____getter_75_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1520

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__SitFallCrawler>g____getter_75_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036b9 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|crawler.hunt.down");
    DAT_057036b9 = '\x01';
  }
  return "Amarture_VER2|crawler.hunt.down";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Turn90L>g____getter|76_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90L_g____getter_76_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1550

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__Turn90L>g____getter_76_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036ba == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|turnaround.L");
    DAT_057036ba = '\x01';
  }
  return "Amarture_VER2|turnaround.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Turn90R>g____getter|77_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90R_g____getter_77_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1580

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__Turn90R>g____getter_77_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036bb == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|turnaround.R");
    DAT_057036bb = '\x01';
  }
  return "Amarture_VER2|turnaround.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Turn90LCrawler>g____getter|78_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90LCrawler_g____getter_78_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea15b0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__Turn90LCrawler>g____getter_78_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036bc == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|crawler.turnaround.L");
    DAT_057036bc = '\x01';
  }
  return "Amarture_VER2|crawler.turnaround.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Turn90RCrawler>g____getter|79_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90RCrawler_g____getter_79_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea15e0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__Turn90RCrawler>g____getter_79_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036bd == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|crawler.turnaround.R");
    DAT_057036bd = '\x01';
  }
  return "Amarture_VER2|crawler.turnaround.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Blind>g____getter|80_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Blind_g____getter_80_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1610

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__Blind>g____getter_80_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036be == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|hit.eye");
    DAT_057036be = '\x01';
  }
  return "Amarture_VER2|hit.eye";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitBlind>g____getter|81_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitBlind_g____getter_81_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1640

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__SitBlind>g____getter_81_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036bf == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|sit_hit_eye");
    DAT_057036bf = '\x01';
  }
  return "Amarture_VER2|sit_hit_eye";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__BlindCrawler>g____getter|82_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__BlindCrawler_g____getter_82_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1670

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__BlindCrawler>g____getter_82_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036c0 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|crawler.hiteyes");
    DAT_057036c0 = '\x01';
  }
  return "Amarture_VER2|crawler.hiteyes";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__ArmHurtL>g____getter|83_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__ArmHurtL_g____getter_83_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea16a0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__ArmHurtL>g____getter_83_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036c1 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|arm_hurt_L");
    DAT_057036c1 = '\x01';
  }
  return "Amarture_VER2|arm_hurt_L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__ArmHurtR>g____getter|84_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__ArmHurtR_g____getter_84_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea16d0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__ArmHurtR>g____getter_84_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036c2 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|arm_hurt_R");
    DAT_057036c2 = '\x01';
  }
  return "Amarture_VER2|arm_hurt_R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__CoverNape>g____getter|85_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__CoverNape_g____getter_85_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1700

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__CoverNape>g____getter_85_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036c3 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|idle.recovery");
    DAT_057036c3 = '\x01';
  }
  return "Amarture_VER2|idle.recovery";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteLaugh>g____getter|86_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteLaugh_g____getter_86_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1730

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__EmoteLaugh>g____getter_86_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036c4 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|laugh");
    DAT_057036c4 = '\x01';
  }
  return "Amarture_VER2|laugh";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteNod>g____getter|87_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteNod_g____getter_87_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1760

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__EmoteNod>g____getter_87_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036c5 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|emote_titan_yes");
    DAT_057036c5 = '\x01';
  }
  return "Amarture_VER2|emote_titan_yes";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteShake>g____getter|88_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteShake_g____getter_88_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea1790

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__EmoteShake>g____getter_88_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036c6 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|emote_titan_no");
    DAT_057036c6 = '\x01';
  }
  return "Amarture_VER2|emote_titan_no";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteRoar>g____getter|89_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteRoar_g____getter_89_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3ea17c0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__<__CreatePropertyBinding__EmoteRoar>g____getter_89_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057036c7 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.scream");
    DAT_057036c7 = '\x01';
  }
  return "Amarture_VER2|attack.scream";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTitanAnimationEnum___ctor (CustomLogic_CustomLogicTitanAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e99220

void CustomLogic_CustomLogicTitanAnimationEnum___ctor
               (CustomLogic_CustomLogicTitanAnimationEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570366f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_0570366f = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Idle
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Idle (const MethodInfo* method);
// 0x3e99290

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Idle(MethodInfo *method)

{
  if (DAT_05703670 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|idle");
    DAT_05703670 = '\x01';
  }
  return "Amarture_VER2|idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_RunAbnormal
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_RunAbnormal (const MethodInfo* method);
// 0x3e992c0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_RunAbnormal(MethodInfo *method)

{
  if (DAT_05703671 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|run.abnormal");
    DAT_05703671 = '\x01';
  }
  return "Amarture_VER2|run.abnormal";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SprintAbnormal
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SprintAbnormal (const MethodInfo* method);
// 0x3e992f0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SprintAbnormal(MethodInfo *method)

{
  if (DAT_05703672 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|run.abnormal.1");
    DAT_05703672 = '\x01';
  }
  return "Amarture_VER2|run.abnormal.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_RunCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_RunCrawler (const MethodInfo* method);
// 0x3e99320

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_RunCrawler(MethodInfo *method)

{
  if (DAT_05703673 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|crawler.run");
    DAT_05703673 = '\x01';
  }
  return "Amarture_VER2|crawler.run";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_IdleCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_IdleCrawler (const MethodInfo* method);
// 0x3e99350

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_IdleCrawler(MethodInfo *method)

{
  if (DAT_05703674 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|crawler.idle");
    DAT_05703674 = '\x01';
  }
  return "Amarture_VER2|crawler.idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_JumpCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_JumpCrawler (const MethodInfo* method);
// 0x3e99380

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_JumpCrawler(MethodInfo *method)

{
  if (DAT_05703675 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.crawler.jump.0");
    DAT_05703675 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_FallCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_FallCrawler (const MethodInfo* method);
// 0x3e993b0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_FallCrawler(MethodInfo *method)

{
  if (DAT_05703676 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.crawler.jump.1");
    DAT_05703676 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_LandCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_LandCrawler (const MethodInfo* method);
// 0x3e993e0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_LandCrawler(MethodInfo *method)

{
  if (DAT_05703677 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.crawler.jump.2");
    DAT_05703677 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.2";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Walk (const MethodInfo* method);
// 0x3e99410

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Walk(MethodInfo *method)

{
  if (DAT_05703678 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|run.walk");
    DAT_05703678 = '\x01';
  }
  return "Amarture_VER2|run.walk";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Jump (const MethodInfo* method);
// 0x3e99440

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Jump(MethodInfo *method)

{
  if (DAT_05703679 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.jumper.0");
    DAT_05703679 = '\x01';
  }
  return "Amarture_VER2|attack.jumper.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Fall
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Fall (const MethodInfo* method);
// 0x3e99470

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Fall(MethodInfo *method)

{
  if (DAT_0570367a == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.jumper.1");
    DAT_0570367a = '\x01';
  }
  return "Amarture_VER2|attack.jumper.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Land (const MethodInfo* method);
// 0x3e994a0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Land(MethodInfo *method)

{
  if (DAT_0570367b == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.jumper.2");
    DAT_0570367b = '\x01';
  }
  return "Amarture_VER2|attack.jumper.2";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Stun
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Stun (const MethodInfo* method);
// 0x3e994d0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Stun(MethodInfo *method)

{
  if (DAT_0570367c == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|hit.eren.L");
    DAT_0570367c = '\x01';
  }
  return "Amarture_VER2|hit.eren.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_StunLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_StunLeft (const MethodInfo* method);
// 0x3e99500

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_StunLeft(MethodInfo *method)

{
  if (DAT_0570367d == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|hit.eren.L");
    DAT_0570367d = '\x01';
  }
  return "Amarture_VER2|hit.eren.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_StunRight
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_StunRight (const MethodInfo* method);
// 0x3e99530

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_StunRight(MethodInfo *method)

{
  if (DAT_0570367e == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|hit.eren.R");
    DAT_0570367e = '\x01';
  }
  return "Amarture_VER2|hit.eren.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieBack
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieBack (const MethodInfo* method);
// 0x3e99560

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieBack(MethodInfo *method)

{
  if (DAT_0570367f == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|die.back");
    DAT_0570367f = '\x01';
  }
  return "Amarture_VER2|die.back";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieFront
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieFront (const MethodInfo* method);
// 0x3e99590

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieFront(MethodInfo *method)

{
  if (DAT_05703680 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|die.front");
    DAT_05703680 = '\x01';
  }
  return "Amarture_VER2|die.front";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieGround
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieGround (const MethodInfo* method);
// 0x3e995c0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieGround(MethodInfo *method)

{
  if (DAT_05703681 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|die.ground");
    DAT_05703681 = '\x01';
  }
  return "Amarture_VER2|die.ground";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieCrawler (const MethodInfo* method);
// 0x3e995f0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieCrawler(MethodInfo *method)

{
  if (DAT_05703682 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|crawler.die");
    DAT_05703682 = '\x01';
  }
  return "Amarture_VER2|crawler.die";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieSit
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieSit (const MethodInfo* method);
// 0x3e99620

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieSit(MethodInfo *method)

{
  if (DAT_05703683 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|sit_die");
    DAT_05703683 = '\x01';
  }
  return "Amarture_VER2|sit_die";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackPunchCombo
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackPunchCombo (const MethodInfo* method);
// 0x3e99650

System_String_o *
CustomLogic_CustomLogicTitanAnimationEnum__get_AttackPunchCombo(MethodInfo *method)

{
  if (DAT_05703684 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.combo");
    DAT_05703684 = '\x01';
  }
  return "Amarture_VER2|attack.combo";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackPunch
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackPunch (const MethodInfo* method);
// 0x3e99680

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackPunch(MethodInfo *method)

{
  if (DAT_05703685 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.comboPunch");
    DAT_05703685 = '\x01';
  }
  return "Amarture_VER2|attack.comboPunch";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlam
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlam (const MethodInfo* method);
// 0x3e996b0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlam(MethodInfo *method)

{
  if (DAT_05703686 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.front.ground");
    DAT_05703686 = '\x01';
  }
  return "Amarture_VER2|attack.front.ground";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBellyFlop
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBellyFlop (const MethodInfo* method);
// 0x3e996e0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBellyFlop(MethodInfo *method)

{
  if (DAT_05703687 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.abnormal.jump");
    DAT_05703687 = '\x01';
  }
  return "Amarture_VER2|attack.abnormal.jump";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBellyFlopGetup
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBellyFlopGetup (const MethodInfo* method);
// 0x3e99710

System_String_o *
CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBellyFlopGetup(MethodInfo *method)

{
  if (DAT_05703688 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.abnormal.getup");
    DAT_05703688 = '\x01';
  }
  return "Amarture_VER2|attack.abnormal.getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackKick
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackKick (const MethodInfo* method);
// 0x3e99740

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackKick(MethodInfo *method)

{
  if (DAT_05703689 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.kick");
    DAT_05703689 = '\x01';
  }
  return "Amarture_VER2|attack.kick";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackStomp
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackStomp (const MethodInfo* method);
// 0x3e99770

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackStomp(MethodInfo *method)

{
  if (DAT_0570368a == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.stomp");
    DAT_0570368a = '\x01';
  }
  return "Amarture_VER2|attack.stomp";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSwingL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSwingL (const MethodInfo* method);
// 0x3e997a0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSwingL(MethodInfo *method)

{
  if (DAT_0570368b == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.swing.l");
    DAT_0570368b = '\x01';
  }
  return "Amarture_VER2|attack.swing.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSwingR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSwingR (const MethodInfo* method);
// 0x3e997d0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSwingR(MethodInfo *method)

{
  if (DAT_0570368c == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.swing.r");
    DAT_0570368c = '\x01';
  }
  return "Amarture_VER2|attack.swing.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBiteF
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteF (const MethodInfo* method);
// 0x3e99800

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteF(MethodInfo *method)

{
  if (DAT_0570368d == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|bite");
    DAT_0570368d = '\x01';
  }
  return "Amarture_VER2|bite";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBiteL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteL (const MethodInfo* method);
// 0x3e99830

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteL(MethodInfo *method)

{
  if (DAT_0570368e == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|bite.l");
    DAT_0570368e = '\x01';
  }
  return "Amarture_VER2|bite.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBiteR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteR (const MethodInfo* method);
// 0x3e99860

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteR(MethodInfo *method)

{
  if (DAT_0570368f == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|bite.r");
    DAT_0570368f = '\x01';
  }
  return "Amarture_VER2|bite.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabAirFarL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirFarL (const MethodInfo* method);
// 0x3e99890

System_String_o *
CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirFarL(MethodInfo *method)

{
  if (DAT_05703690 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.air.far.l");
    DAT_05703690 = '\x01';
  }
  return "Amarture_VER2|grab.air.far.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabAirFarR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirFarR (const MethodInfo* method);
// 0x3e998c0

System_String_o *
CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirFarR(MethodInfo *method)

{
  if (DAT_05703691 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.air.far.r");
    DAT_05703691 = '\x01';
  }
  return "Amarture_VER2|grab.air.far.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabAirL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirL (const MethodInfo* method);
// 0x3e998f0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirL(MethodInfo *method)

{
  if (DAT_05703692 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.air.short.l");
    DAT_05703692 = '\x01';
  }
  return "Amarture_VER2|grab.air.short.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabAirR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirR (const MethodInfo* method);
// 0x3e99920

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirR(MethodInfo *method)

{
  if (DAT_05703693 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.air.short.r");
    DAT_05703693 = '\x01';
  }
  return "Amarture_VER2|grab.air.short.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabBackL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabBackL (const MethodInfo* method);
// 0x3e99950

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabBackL(MethodInfo *method)

{
  if (DAT_05703694 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.back.l");
    DAT_05703694 = '\x01';
  }
  return "Amarture_VER2|grab.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabBackR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabBackR (const MethodInfo* method);
// 0x3e99980

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabBackR(MethodInfo *method)

{
  if (DAT_05703695 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.back.r");
    DAT_05703695 = '\x01';
  }
  return "Amarture_VER2|grab.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabCoreL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabCoreL (const MethodInfo* method);
// 0x3e999b0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabCoreL(MethodInfo *method)

{
  if (DAT_05703696 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.core.L");
    DAT_05703696 = '\x01';
  }
  return "Amarture_VER2|grab.core.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabCoreR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabCoreR (const MethodInfo* method);
// 0x3e999e0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabCoreR(MethodInfo *method)

{
  if (DAT_05703697 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.core.R");
    DAT_05703697 = '\x01';
  }
  return "Amarture_VER2|grab.core.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabGroundBackL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundBackL (const MethodInfo* method);
// 0x3e99a10

System_String_o *
CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundBackL(MethodInfo *method)

{
  if (DAT_05703698 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.ground.back.l");
    DAT_05703698 = '\x01';
  }
  return "Amarture_VER2|grab.ground.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabGroundBackR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundBackR (const MethodInfo* method);
// 0x3e99a40

System_String_o *
CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundBackR(MethodInfo *method)

{
  if (DAT_05703699 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.ground.back.r");
    DAT_05703699 = '\x01';
  }
  return "Amarture_VER2|grab.ground.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabGroundFrontL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundFrontL (const MethodInfo* method);
// 0x3e99a70

System_String_o *
CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundFrontL(MethodInfo *method)

{
  if (DAT_0570369a == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.ground.front.l");
    DAT_0570369a = '\x01';
  }
  return "Amarture_VER2|grab.ground.front.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabGroundFrontR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundFrontR (const MethodInfo* method);
// 0x3e99aa0

System_String_o *
CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundFrontR(MethodInfo *method)

{
  if (DAT_0570369b == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.ground.front.r");
    DAT_0570369b = '\x01';
  }
  return "Amarture_VER2|grab.ground.front.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHeadBackL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadBackL (const MethodInfo* method);
// 0x3e99ad0

System_String_o *
CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadBackL(MethodInfo *method)

{
  if (DAT_0570369c == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.head.back.l");
    DAT_0570369c = '\x01';
  }
  return "Amarture_VER2|grab.head.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHeadBackR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadBackR (const MethodInfo* method);
// 0x3e99b00

System_String_o *
CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadBackR(MethodInfo *method)

{
  if (DAT_0570369d == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.head.back.r");
    DAT_0570369d = '\x01';
  }
  return "Amarture_VER2|grab.head.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHeadFrontL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadFrontL (const MethodInfo* method);
// 0x3e99b30

System_String_o *
CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadFrontL(MethodInfo *method)

{
  if (DAT_0570369e == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.head.front.1");
    DAT_0570369e = '\x01';
  }
  return "Amarture_VER2|grab.head.front.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHeadFrontR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadFrontR (const MethodInfo* method);
// 0x3e99b60

System_String_o *
CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadFrontR(MethodInfo *method)

{
  if (DAT_0570369f == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.head.front.r");
    DAT_0570369f = '\x01';
  }
  return "Amarture_VER2|grab.head.front.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHighL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHighL (const MethodInfo* method);
// 0x3e99b90

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHighL(MethodInfo *method)

{
  if (DAT_057036a0 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.high.l");
    DAT_057036a0 = '\x01';
  }
  return "Amarture_VER2|grab.high.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHighR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHighR (const MethodInfo* method);
// 0x3e99bc0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHighR(MethodInfo *method)

{
  if (DAT_057036a1 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.high.r");
    DAT_057036a1 = '\x01';
  }
  return "Amarture_VER2|grab.high.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabStomachL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabStomachL (const MethodInfo* method);
// 0x3e99bf0

System_String_o *
CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabStomachL(MethodInfo *method)

{
  if (DAT_057036a2 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.stomach.l");
    DAT_057036a2 = '\x01';
  }
  return "Amarture_VER2|grab.stomach.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabStomachR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabStomachR (const MethodInfo* method);
// 0x3e99c20

System_String_o *
CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabStomachR(MethodInfo *method)

{
  if (DAT_057036a3 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|grab.stomach.r");
    DAT_057036a3 = '\x01';
  }
  return "Amarture_VER2|grab.stomach.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackEatL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackEatL (const MethodInfo* method);
// 0x3e99c50

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackEatL(MethodInfo *method)

{
  if (DAT_057036a4 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|eat.l");
    DAT_057036a4 = '\x01';
  }
  return "Amarture_VER2|eat.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackEatR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackEatR (const MethodInfo* method);
// 0x3e99c80

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackEatR(MethodInfo *method)

{
  if (DAT_057036a5 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|eat.r");
    DAT_057036a5 = '\x01';
  }
  return "Amarture_VER2|eat.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapHighL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapHighL (const MethodInfo* method);
// 0x3e99cb0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapHighL(MethodInfo *method)

{
  if (DAT_057036a6 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.anti.AE.high.l");
    DAT_057036a6 = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.high.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapHighR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapHighR (const MethodInfo* method);
// 0x3e99ce0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapHighR(MethodInfo *method)

{
  if (DAT_057036a7 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.anti.AE.high.r");
    DAT_057036a7 = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.high.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapL (const MethodInfo* method);
// 0x3e99d10

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapL(MethodInfo *method)

{
  if (DAT_057036a8 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.anti.AE.l");
    DAT_057036a8 = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapR (const MethodInfo* method);
// 0x3e99d40

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapR(MethodInfo *method)

{
  if (DAT_057036a9 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.anti.AE.r");
    DAT_057036a9 = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapLowL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapLowL (const MethodInfo* method);
// 0x3e99d70

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapLowL(MethodInfo *method)

{
  if (DAT_057036aa == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.anti.AE.low.l");
    DAT_057036aa = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.low.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapLowR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapLowR (const MethodInfo* method);
// 0x3e99da0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapLowR(MethodInfo *method)

{
  if (DAT_057036ab == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.anti.AE.low.r");
    DAT_057036ab = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.low.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBrushChestL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBrushChestL (const MethodInfo* method);
// 0x3e99dd0

System_String_o *
CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBrushChestL(MethodInfo *method)

{
  if (DAT_057036ac == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.chest.L");
    DAT_057036ac = '\x01';
  }
  return "Amarture_VER2|attack.chest.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBrushChestR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBrushChestR (const MethodInfo* method);
// 0x3e99e00

System_String_o *
CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBrushChestR(MethodInfo *method)

{
  if (DAT_057036ad == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.chest.R");
    DAT_057036ad = '\x01';
  }
  return "Amarture_VER2|attack.chest.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackHitBack
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackHitBack (const MethodInfo* method);
// 0x3e99e30

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackHitBack(MethodInfo *method)

{
  if (DAT_057036ae == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.slap.back");
    DAT_057036ae = '\x01';
  }
  return "Amarture_VER2|attack.slap.back";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackHitFace
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackHitFace (const MethodInfo* method);
// 0x3e99e60

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackHitFace(MethodInfo *method)

{
  if (DAT_057036af == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.slap.face");
    DAT_057036af = '\x01';
  }
  return "Amarture_VER2|attack.slap.face";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackRockThrow
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackRockThrow (const MethodInfo* method);
// 0x3e99e90

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackRockThrow(MethodInfo *method)

{
  if (DAT_057036b0 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.throw");
    DAT_057036b0 = '\x01';
  }
  return "Amarture_VER2|attack.throw";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackJump
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackJump (const MethodInfo* method);
// 0x3e99ec0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackJump(MethodInfo *method)

{
  if (DAT_057036b1 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.jumper.0");
    DAT_057036b1 = '\x01';
  }
  return "Amarture_VER2|attack.jumper.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackJumpCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackJumpCrawler (const MethodInfo* method);
// 0x3e99ef0

System_String_o *
CustomLogic_CustomLogicTitanAnimationEnum__get_AttackJumpCrawler(MethodInfo *method)

{
  if (DAT_057036b2 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.crawler.jump.0");
    DAT_057036b2 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitIdle
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitIdle (const MethodInfo* method);
// 0x3e99f20

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitIdle(MethodInfo *method)

{
  if (DAT_057036b3 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|sit_idle");
    DAT_057036b3 = '\x01';
  }
  return "Amarture_VER2|sit_idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitIdleCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitIdleCrawler (const MethodInfo* method);
// 0x3e99f50

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitIdleCrawler(MethodInfo *method)

{
  if (DAT_057036b4 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|crawler.sit.idle");
    DAT_057036b4 = '\x01';
  }
  return "Amarture_VER2|crawler.sit.idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitDown
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitDown (const MethodInfo* method);
// 0x3e99f80

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitDown(MethodInfo *method)

{
  if (DAT_057036b5 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|sit_down");
    DAT_057036b5 = '\x01';
  }
  return "Amarture_VER2|sit_down";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitUp
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitUp (const MethodInfo* method);
// 0x3e99fb0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitUp(MethodInfo *method)

{
  if (DAT_057036b6 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|sit_getup");
    DAT_057036b6 = '\x01';
  }
  return "Amarture_VER2|sit_getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitUpCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitUpCrawler (const MethodInfo* method);
// 0x3e99fe0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitUpCrawler(MethodInfo *method)

{
  if (DAT_057036b7 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|crawler.getup");
    DAT_057036b7 = '\x01';
  }
  return "Amarture_VER2|crawler.getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitFall
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitFall (const MethodInfo* method);
// 0x3e9a010

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitFall(MethodInfo *method)

{
  if (DAT_057036b8 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|sit_hunt_down");
    DAT_057036b8 = '\x01';
  }
  return "Amarture_VER2|sit_hunt_down";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitFallCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitFallCrawler (const MethodInfo* method);
// 0x3e9a040

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitFallCrawler(MethodInfo *method)

{
  if (DAT_057036b9 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|crawler.hunt.down");
    DAT_057036b9 = '\x01';
  }
  return "Amarture_VER2|crawler.hunt.down";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Turn90L
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90L (const MethodInfo* method);
// 0x3e9a070

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90L(MethodInfo *method)

{
  if (DAT_057036ba == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|turnaround.L");
    DAT_057036ba = '\x01';
  }
  return "Amarture_VER2|turnaround.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Turn90R
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90R (const MethodInfo* method);
// 0x3e9a0a0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90R(MethodInfo *method)

{
  if (DAT_057036bb == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|turnaround.R");
    DAT_057036bb = '\x01';
  }
  return "Amarture_VER2|turnaround.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Turn90LCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90LCrawler (const MethodInfo* method);
// 0x3e9a0d0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90LCrawler(MethodInfo *method)

{
  if (DAT_057036bc == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|crawler.turnaround.L");
    DAT_057036bc = '\x01';
  }
  return "Amarture_VER2|crawler.turnaround.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Turn90RCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90RCrawler (const MethodInfo* method);
// 0x3e9a100

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90RCrawler(MethodInfo *method)

{
  if (DAT_057036bd == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|crawler.turnaround.R");
    DAT_057036bd = '\x01';
  }
  return "Amarture_VER2|crawler.turnaround.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Blind
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Blind (const MethodInfo* method);
// 0x3e9a130

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Blind(MethodInfo *method)

{
  if (DAT_057036be == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|hit.eye");
    DAT_057036be = '\x01';
  }
  return "Amarture_VER2|hit.eye";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitBlind
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitBlind (const MethodInfo* method);
// 0x3e9a160

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitBlind(MethodInfo *method)

{
  if (DAT_057036bf == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|sit_hit_eye");
    DAT_057036bf = '\x01';
  }
  return "Amarture_VER2|sit_hit_eye";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_BlindCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_BlindCrawler (const MethodInfo* method);
// 0x3e9a190

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_BlindCrawler(MethodInfo *method)

{
  if (DAT_057036c0 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|crawler.hiteyes");
    DAT_057036c0 = '\x01';
  }
  return "Amarture_VER2|crawler.hiteyes";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_ArmHurtL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_ArmHurtL (const MethodInfo* method);
// 0x3e9a1c0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_ArmHurtL(MethodInfo *method)

{
  if (DAT_057036c1 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|arm_hurt_L");
    DAT_057036c1 = '\x01';
  }
  return "Amarture_VER2|arm_hurt_L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_ArmHurtR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_ArmHurtR (const MethodInfo* method);
// 0x3e9a1f0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_ArmHurtR(MethodInfo *method)

{
  if (DAT_057036c2 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|arm_hurt_R");
    DAT_057036c2 = '\x01';
  }
  return "Amarture_VER2|arm_hurt_R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_CoverNape
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_CoverNape (const MethodInfo* method);
// 0x3e9a220

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_CoverNape(MethodInfo *method)

{
  if (DAT_057036c3 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|idle.recovery");
    DAT_057036c3 = '\x01';
  }
  return "Amarture_VER2|idle.recovery";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_EmoteLaugh
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteLaugh (const MethodInfo* method);
// 0x3e9a250

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteLaugh(MethodInfo *method)

{
  if (DAT_057036c4 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|laugh");
    DAT_057036c4 = '\x01';
  }
  return "Amarture_VER2|laugh";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_EmoteNod
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteNod (const MethodInfo* method);
// 0x3e9a280

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteNod(MethodInfo *method)

{
  if (DAT_057036c5 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|emote_titan_yes");
    DAT_057036c5 = '\x01';
  }
  return "Amarture_VER2|emote_titan_yes";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_EmoteShake
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteShake (const MethodInfo* method);
// 0x3e9a2b0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteShake(MethodInfo *method)

{
  if (DAT_057036c6 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|emote_titan_no");
    DAT_057036c6 = '\x01';
  }
  return "Amarture_VER2|emote_titan_no";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_EmoteRoar
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteRoar (const MethodInfo* method);
// 0x3e9a2e0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteRoar(MethodInfo *method)

{
  if (DAT_057036c7 == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2|attack.scream");
    DAT_057036c7 = '\x01';
  }
  return "Amarture_VER2|attack.scream";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_ClassName (CustomLogic_CustomLogicTitanAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e9a310

System_String_o *
CustomLogic_CustomLogicTitanAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__this,MethodInfo *method)

{
  if (DAT_057036c8 == '\0') {
    il2cpp_init_method_metadata(&"TitanAnimationEnum");
    DAT_057036c8 = '\x01';
  }
  return "TitanAnimationEnum";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTitanAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicTitanAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e9a340

bool_conflict
CustomLogic_CustomLogicTitanAnimationEnum__get_IsAbstract
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTitanAnimationEnum__get_IsStatic (CustomLogic_CustomLogicTitanAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e9a350

bool_conflict
CustomLogic_CustomLogicTitanAnimationEnum__get_IsStatic
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTitanAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTitanAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e9a360

bool_conflict
CustomLogic_CustomLogicTitanAnimationEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


