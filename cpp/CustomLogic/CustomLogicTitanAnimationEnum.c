// Type: CustomLogic.CustomLogicTitanAnimationEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTitanAnimationEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTitanAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTitanAnimationEnum_o* CustomLogic_CustomLogicTitanAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x419f410

CustomLogic_CustomLogicTitanAnimationEnum_o *
CustomLogic_CustomLogicTitanAnimationEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  uint32_t uVar1;
  bool_conflict bVar2;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  undefined8 uVar5;
  System_ArgumentException_o *__this_00;
  undefined8 *puVar6;
  System_ArgumentException_o *pSVar7;
  System_Func_T__object__o *pSVar8;
  CustomLogic_CustomLogicTitanAnimationEnum_o *pCVar9;
  undefined8 **ppuVar10;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad3dc == '\0') {
    pSStack_20 = (System_String_o *)0x419f42c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTitanAnimationEnum);
    g_data_057ad3dc = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x419f4a7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x419f456;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicTitanAnimationEnum);
    if (g_data_057ad382 == '\0') {
      pSStack_20 = (System_String_o *)0x419f46e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad382 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x419f48d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x419f497;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicTitanAnimationEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x419f4af;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x419f4c2;
  pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x419f4d1;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicTitanAnimationEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x419f4e0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x419f4f0;
  pSVar3 = System_String__Concat_3af7150(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x419f4ff;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x419f507;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSStack_20 = (System_String_o *)0x419f517;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar3,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x419f523;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicTitanAnimationEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x419f52e;
  pSVar7 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar3;
  if (g_data_057ad3dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundBackL");
    il2cpp_runtime_helper_023445d0(&"AttackBellyFlop");
    il2cpp_runtime_helper_023445d0(&"StunRight");
    il2cpp_runtime_helper_023445d0(&"FallCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestL");
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabCoreR");
    il2cpp_runtime_helper_023445d0(&"AttackBiteF");
    il2cpp_runtime_helper_023445d0(&"ArmHurtR");
    il2cpp_runtime_helper_023445d0(&"AttackJumpCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighR");
    il2cpp_runtime_helper_023445d0(&"SitIdleCrawler");
    il2cpp_runtime_helper_023445d0(&"EmoteNod");
    il2cpp_runtime_helper_023445d0(&"AttackSlam");
    il2cpp_runtime_helper_023445d0(&"AttackSwingL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabStomachL");
    il2cpp_runtime_helper_023445d0(&"AttackJump");
    il2cpp_runtime_helper_023445d0(&"EmoteShake");
    il2cpp_runtime_helper_023445d0(&"SitFallCrawler");
    il2cpp_runtime_helper_023445d0(&"RunAbnormal");
    il2cpp_runtime_helper_023445d0(&"DieFront");
    il2cpp_runtime_helper_023445d0(&"AttackBellyFlopGetup");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirL");
    il2cpp_runtime_helper_023445d0(&"AttackHitBack");
    il2cpp_runtime_helper_023445d0(&"AttackSwingR");
    il2cpp_runtime_helper_023445d0(&"DieGround");
    il2cpp_runtime_helper_023445d0(&"AttackEatL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirFarL");
    il2cpp_runtime_helper_023445d0(&"AttackBiteL");
    il2cpp_runtime_helper_023445d0(&"JumpCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackGrabCoreL");
    il2cpp_runtime_helper_023445d0(&"CoverNape");
    il2cpp_runtime_helper_023445d0(&"AttackStomp");
    il2cpp_runtime_helper_023445d0(&"AttackEatR");
    il2cpp_runtime_helper_023445d0(&"AttackRockThrow");
    il2cpp_runtime_helper_023445d0(&"Land");
    il2cpp_runtime_helper_023445d0(&"BlindCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackSlapL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadBackL");
    il2cpp_runtime_helper_023445d0(&"DieCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackSlapLowR");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"Turn90R");
    il2cpp_runtime_helper_023445d0(&"Blind");
    il2cpp_runtime_helper_023445d0(&"Turn90L");
    il2cpp_runtime_helper_023445d0(&"Stun");
    il2cpp_runtime_helper_023445d0(&"AttackSlapHighL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadBackR");
    il2cpp_runtime_helper_023445d0(&"AttackBiteR");
    il2cpp_runtime_helper_023445d0(&"StunLeft");
    il2cpp_runtime_helper_023445d0(&"SitIdle");
    il2cpp_runtime_helper_023445d0(&"RunCrawler");
    il2cpp_runtime_helper_023445d0(&"SitBlind");
    il2cpp_runtime_helper_023445d0(&"Turn90RCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighL");
    il2cpp_runtime_helper_023445d0(&"IdleCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackHitFace");
    il2cpp_runtime_helper_023445d0(&"AttackSlapHighR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadFrontL");
    il2cpp_runtime_helper_023445d0(&"Turn90LCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirFarR");
    il2cpp_runtime_helper_023445d0(&"DieSit");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirR");
    il2cpp_runtime_helper_023445d0(&"Walk");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundFrontL");
    il2cpp_runtime_helper_023445d0(&"SitFall");
    il2cpp_runtime_helper_023445d0(&"AttackGrabStomachR");
    il2cpp_runtime_helper_023445d0(&"SitDown");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundFrontR");
    il2cpp_runtime_helper_023445d0(&"AttackPunch");
    il2cpp_runtime_helper_023445d0(&"EmoteLaugh");
    il2cpp_runtime_helper_023445d0(&"ArmHurtL");
    il2cpp_runtime_helper_023445d0(&"Idle");
    il2cpp_runtime_helper_023445d0(&"AttackPunchCombo");
    il2cpp_runtime_helper_023445d0(&"SitUpCrawler");
    il2cpp_runtime_helper_023445d0(&"DieBack");
    il2cpp_runtime_helper_023445d0(&"Fall");
    il2cpp_runtime_helper_023445d0(&"LandCrawler");
    il2cpp_runtime_helper_023445d0(&"SprintAbnormal");
    il2cpp_runtime_helper_023445d0(&"AttackSlapR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundBackR");
    il2cpp_runtime_helper_023445d0(&"AttackKick");
    il2cpp_runtime_helper_023445d0(&"SitUp");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBackR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBackL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadFrontR");
    il2cpp_runtime_helper_023445d0(&"AttackSlapLowL");
    il2cpp_runtime_helper_023445d0(&"EmoteRoar");
    g_data_057ad3dd = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar7,(MethodInfo *)0x0);
  if (uVar1 < 0x7cdffe18) {
    if (uVar1 < 0x3a2d364f) {
      if (uVar1 < 0x132daa60) {
        if (uVar1 < 0xcb00c2e) {
          if (uVar1 < 0x87de46c) {
            if (uVar1 == 0x4aec3cb) {
              bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackSlapR",(MethodInfo *)0x0);
              if ((char)bVar2 != '\0') {
                puVar6 = &TypeInfo_Bindings;
                if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                  puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
                }
                puStack_30 = puVar6;
                if (g_data_057ad417 == '\0') {
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapR_g____getter);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                  g_data_057ad417 = '\x01';
                }
                pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                System_Func_object__object____ctor();
                pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                CustomLogic_CLPropertyBinding_object____ctor
                          ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,
                           (System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                return pCVar9;
              }
            }
            else if (uVar1 == 0x87de46b) {
              bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackPunch",(MethodInfo *)0x0);
              if ((char)bVar2 != '\0') {
                puVar6 = &TypeInfo_Bindings;
                if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                  puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
                }
                puStack_30 = puVar6;
                if (g_data_057ad3f3 == '\0') {
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackPunch_g____getter);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                  g_data_057ad3f3 = '\x01';
                }
                pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                System_Func_object__object____ctor();
                pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                CustomLogic_CLPropertyBinding_object____ctor
                          ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,
                           (System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                return pCVar9;
              }
            }
          }
          else if (uVar1 == 0xa250c8c) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"DieFront",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ad3ee == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DieFront_g____getter_18);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                g_data_057ad3ee = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              return pCVar9;
            }
          }
          else if (uVar1 == 0xb04c157) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabGroundFrontR",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ad409 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabGroundFrontR_g);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                g_data_057ad409 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              return pCVar9;
            }
          }
          else if (uVar1 == 0xcb00c2d) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabGroundBackL",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ad406 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabGroundBackL_g);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                g_data_057ad406 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              return pCVar9;
            }
          }
        }
        else if (uVar1 < 0xfd3122c) {
          if (uVar1 == 0xd2f75f1) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabAirR",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ad401 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabAirR_g____gett);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                g_data_057ad401 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              return pCVar9;
            }
          }
          else if (uVar1 == 0xe1ef32d) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Jump",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ad3e7 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_11_0);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                g_data_057ad3e7 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              return pCVar9;
            }
          }
          else if (uVar1 == 0xfd3122b) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabHighR",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ad40f == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHighR_g____get);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                g_data_057ad40f = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              return pCVar9;
            }
          }
        }
        else if (uVar1 == 0x1104cac9) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabGroundFrontL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad408 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabGroundFrontL_g);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad408 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x12aed9d5) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackSlapL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad416 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapL_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad416 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x132daa5f) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackBiteR",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad3fd == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBiteR_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad3fd = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 < 0x22ccd731) {
        if (uVar1 < 0x1d298760) {
          if (uVar1 == 0x172f85af) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabAirL",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ad400 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabAirL_g____gett);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                g_data_057ad400 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              return pCVar9;
            }
          }
          else if (uVar1 == 0x1d29875f) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackSlapHighR",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ad415 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapHighR_g____get);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                g_data_057ad415 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              return pCVar9;
            }
          }
        }
        else if (uVar1 == 0x1dd32835) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabHighL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad40e == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHighL_g____get);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad40e = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x1f2dbd43) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackBiteF",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad3fb == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBiteF_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad3fb = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x22ccd730) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Walk",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad3e6 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Walk_g____getter_10_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad3e6 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 < 0x292dcd02) {
        if (uVar1 == 0x25093a4c) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"ArmHurtL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad42f == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ArmHurtL_g____getter_83);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad42f = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x27bb25ca) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SitFallCrawler",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad427 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitFallCrawler_g____gett);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad427 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x292dcd01) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackBiteL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad3fc == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBiteL_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad3fc = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x3329aa01) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackSlapHighL",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad414 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapHighL_g____get);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad414 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x371c1522) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackStomp",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad3f8 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackStomp_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3f8 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x3a2d364e) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackBellyFlop",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad3f5 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBellyFlop_g____get);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3f5 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x5d992b42) {
      if (uVar1 < 0x425a9db8) {
        if (uVar1 < 0x3d9daaed) {
          if (uVar1 == 0x3b095cee) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"ArmHurtR",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ad430 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ArmHurtR_g____getter_84);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                g_data_057ad430 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              return pCVar9;
            }
          }
          else if (uVar1 == 0x3d9daaec) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"StunLeft",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ad3eb == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__StunLeft_g____getter_15);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                g_data_057ad3eb = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              return pCVar9;
            }
          }
        }
        else if (uVar1 == 0x3db5a1bf) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"EmoteShake",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad434 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteShake_g____getter_8);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad434 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x3fd565eb) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"DieSit",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad3f1 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DieSit_g____getter_21_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad3f1 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x425a9db7) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackBellyFlopGetup",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad3f6 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBellyFlopGetup_g);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad3f6 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 < 0x45aa17b4) {
        if (uVar1 == 0x426f593c) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"EmoteLaugh",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad432 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteLaugh_g____getter_8);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad432 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x45516aaa) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SitUp",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad424 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitUp_g____getter_72_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad424 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x45aa17b3) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Idle",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            ppuVar10 = (undefined8 **)&uStack_18;
            pSVar7 = pSStack_28;
            pSVar3 = pSStack_20;
            goto CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Idle;
          }
        }
      }
      else if (uVar1 == 0x518c7bc2) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"DieGround",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad3ef == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DieGround_g____getter_19);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3ef = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x54623468) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"FallCrawler",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad3e4 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FallCrawler_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3e4 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x5d992b41) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Stun",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad3ea == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stun_g____getter_14_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3ea = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x717ed71c) {
      if (uVar1 < 0x6700754c) {
        if (uVar1 == 0x5f7ebac5) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Turn90L",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad428 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Turn90L_g____getter_76_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad428 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x6700754b) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackHitFace",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad41d == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackHitFace_g____gette);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad41d = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x69fd27f6) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"RunAbnormal",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad3df == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RunAbnormal_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3df = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x70cfd606) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"RunCrawler",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad3e1 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RunCrawler_g____getter_5);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3e1 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x717ed71b) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Turn90R",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad429 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Turn90R_g____getter_77_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad429 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x7b00bc81) {
      if (uVar1 == 0x729a03b7) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackJumpCrawler",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad420 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackJumpCrawler_g____g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad420 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x745f154b) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackSlapLowR",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad419 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapLowR_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad419 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x7b00bc80) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Fall",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad3e8 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Fall_g____getter_12_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3e8 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 == 0x7b128cf9) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"StunRight",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad3ec == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__StunRight_g____getter_16);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad3ec = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x7b4c8700) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabCoreL",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad404 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabCoreL_g____get);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad404 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x7cdffe17) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Turn90LCrawler",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad42a == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Turn90LCrawler_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad42a = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xac717d26) {
    if (uVar1 < 0x882f3d51) {
      if (uVar1 < 0x838656ad) {
        if (uVar1 < 0x7ee23ea7) {
          if (uVar1 == 0x7e4b9533) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackEatL",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ad412 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackEatL_g____getter_5);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                g_data_057ad412 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              return pCVar9;
            }
          }
          else if (uVar1 == 0x7ee23ea6) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabHeadFrontR",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ad40d == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHeadFrontR_g);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                g_data_057ad40d = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              return pCVar9;
            }
          }
        }
        else if (uVar1 == 0x825f2b55) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackSlapLowL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad418 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapLowL_g____gett);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad418 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x838656ac) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackSlam",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad3f4 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlam_g____getter_2);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad3f4 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x7f7ae464) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackBrushChestL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad41a == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushChestL_g____g);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad41a = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 < 0x862f3a2b) {
        if (uVar1 == 0x84fc6844) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabBackL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad402 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabBackL_g____get);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad402 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x857aedd6) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackBrushChestR",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad41b == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushChestR_g____g);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad41b = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x862f3a2a) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabAirFarL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad3fe == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabAirFarL_g____g);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad3fe = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x86827373) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"DieCrawler",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad3f0 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DieCrawler_g____getter_2);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3f0 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x87b6990b) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SitDown",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad423 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitDown_g____getter_71_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad423 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x882f3d50) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabAirFarR",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad3ff == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabAirFarR_g____g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3ff = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x994cb63b) {
      if (uVar1 < 0x912e23bf) {
        if (uVar1 == 0x8afc71b6) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabBackR",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad403 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabBackR_g____get);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad403 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x912e23be) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SitFall",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad426 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitFall_g____getter_74_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad426 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x972856bf) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SitIdleCrawler",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad422 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitIdleCrawler_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad422 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x98e26794) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabHeadFrontL",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad40c == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHeadFrontL_g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad40c = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x994cb63a) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabCoreR",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad405 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabCoreR_g____get);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad405 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0xa47f6adf) {
      if (uVar1 == 0x99ca44b9) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"IdleCrawler",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad3e2 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IdleCrawler_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3e2 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x9c4bc46d) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackEatR",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad413 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackEatR_g____getter_5);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad413 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0xa47f6ade) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"DieBack",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad3ed == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DieBack_g____getter_17_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3ed = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 == 0xa9381ee1) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Turn90RCrawler",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad42b == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Turn90RCrawler_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad42b = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xaa02d909) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SprintAbnormal",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad3e0 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SprintAbnormal_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad3e0 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xac717d25) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackJump",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad41f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackJump_g____getter_6);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad41f = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xd514eb77) {
    if (uVar1 < 0xc2cea647) {
      if (uVar1 < 0xbe6b9bc0) {
        if (uVar1 == 0xb8819b82) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SitBlind",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad42d == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitBlind_g____getter_81);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad42d = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0xbe6b9bbf) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"JumpCrawler",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad3e3 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__JumpCrawler_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad3e3 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0xc0fd15a3) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackPunchCombo",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad3f2 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackPunchCombo_g____ge);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3f2 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0xc1018924) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"EmoteNod",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad433 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteNod_g____getter_87);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad433 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0xc2cea646) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SitUpCrawler",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad425 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitUpCrawler_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad425 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0xc6f75898) {
      if (uVar1 == 0xc4a10b99) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackSwingR",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad3fa == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSwingR_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3fa = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0xc65e5944) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackRockThrow",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad41e == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackRockThrow_g____get);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad41e = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0xc6f75897) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"EmoteRoar",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad435 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteRoar_g____getter_89);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad435 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 == 0xc8f30ee7) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackKick",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad3f7 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackKick_g____getter_2);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad3f7 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xcf14e204) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabStomachL",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad410 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabStomachL_g);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad410 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xd514eb76) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabStomachR",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad411 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabStomachR_g);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad411 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xe6b2342e) {
    if (uVar1 < 0xd8f110d5) {
      if (uVar1 == 0xd5e03fe2) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"CoverNape",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad431 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CoverNape_g____getter_85);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad431 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0xd8f110d4) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"LandCrawler",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad3e5 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LandCrawler_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3e5 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 == 0xdea13487) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackSwingL",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad3f9 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSwingL_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad3f9 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xe4d66f54) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Blind",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad42c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Blind_g____getter_80_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad42c = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xe6b2342d) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SitIdle",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad421 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitIdle_g____getter_69_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad421 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xee1682bd) {
    if (uVar1 == 0xe8476a11) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackHitBack",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad41c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackHitBack_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad41c = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xe89df278) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabHeadBackR",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad40b == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHeadBackR_g);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad40b = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xee1682bc) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Land",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad3e9 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Land_g____getter_13_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad3e9 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 == 0xeeafdcf3) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabGroundBackR",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad407 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabGroundBackR_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        g_data_057ad407 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
      return pCVar9;
    }
  }
  else if (uVar1 == 0xf69e0882) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabHeadBackL",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad40a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHeadBackL_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        g_data_057ad40a = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
      return pCVar9;
    }
  }
  else if (uVar1 == 0xfd07560c) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BlindCrawler",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad42e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BlindCrawler_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        g_data_057ad42e = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
      return pCVar9;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicTitanAnimationEnum not found");
  pSVar3 = System_String__Concat_3af7150(pSVar3,(System_String_o *)pSVar7,pSVar4,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,pSVar3,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar7,uVar5);
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Idle:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar3;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar7;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar6;
  if (g_data_057ad3de == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41a1519;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle_g____getter_2_0);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41a1525;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41a1531;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41a153d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3de = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41a1553;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41a156c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41a157b;
  pCVar9 = (CustomLogic_CustomLogicTitanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41a1595;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return pCVar9;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x419f530

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  uint32_t uVar1;
  bool_conflict bVar2;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar3;
  undefined8 *puVar4;
  System_Func_T__object__o *pSVar5;
  CustomLogic_CLPropertyBinding_T__o *pCVar6;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 *puStack_18;
  
  if (g_data_057ad3dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundBackL");
    il2cpp_runtime_helper_023445d0(&"AttackBellyFlop");
    il2cpp_runtime_helper_023445d0(&"StunRight");
    il2cpp_runtime_helper_023445d0(&"FallCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestL");
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabCoreR");
    il2cpp_runtime_helper_023445d0(&"AttackBiteF");
    il2cpp_runtime_helper_023445d0(&"ArmHurtR");
    il2cpp_runtime_helper_023445d0(&"AttackJumpCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighR");
    il2cpp_runtime_helper_023445d0(&"SitIdleCrawler");
    il2cpp_runtime_helper_023445d0(&"EmoteNod");
    il2cpp_runtime_helper_023445d0(&"AttackSlam");
    il2cpp_runtime_helper_023445d0(&"AttackSwingL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabStomachL");
    il2cpp_runtime_helper_023445d0(&"AttackJump");
    il2cpp_runtime_helper_023445d0(&"EmoteShake");
    il2cpp_runtime_helper_023445d0(&"SitFallCrawler");
    il2cpp_runtime_helper_023445d0(&"RunAbnormal");
    il2cpp_runtime_helper_023445d0(&"DieFront");
    il2cpp_runtime_helper_023445d0(&"AttackBellyFlopGetup");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirL");
    il2cpp_runtime_helper_023445d0(&"AttackHitBack");
    il2cpp_runtime_helper_023445d0(&"AttackSwingR");
    il2cpp_runtime_helper_023445d0(&"DieGround");
    il2cpp_runtime_helper_023445d0(&"AttackEatL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirFarL");
    il2cpp_runtime_helper_023445d0(&"AttackBiteL");
    il2cpp_runtime_helper_023445d0(&"JumpCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackGrabCoreL");
    il2cpp_runtime_helper_023445d0(&"CoverNape");
    il2cpp_runtime_helper_023445d0(&"AttackStomp");
    il2cpp_runtime_helper_023445d0(&"AttackEatR");
    il2cpp_runtime_helper_023445d0(&"AttackRockThrow");
    il2cpp_runtime_helper_023445d0(&"Land");
    il2cpp_runtime_helper_023445d0(&"BlindCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackSlapL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadBackL");
    il2cpp_runtime_helper_023445d0(&"DieCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackSlapLowR");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"Turn90R");
    il2cpp_runtime_helper_023445d0(&"Blind");
    il2cpp_runtime_helper_023445d0(&"Turn90L");
    il2cpp_runtime_helper_023445d0(&"Stun");
    il2cpp_runtime_helper_023445d0(&"AttackSlapHighL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadBackR");
    il2cpp_runtime_helper_023445d0(&"AttackBiteR");
    il2cpp_runtime_helper_023445d0(&"StunLeft");
    il2cpp_runtime_helper_023445d0(&"SitIdle");
    il2cpp_runtime_helper_023445d0(&"RunCrawler");
    il2cpp_runtime_helper_023445d0(&"SitBlind");
    il2cpp_runtime_helper_023445d0(&"Turn90RCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighL");
    il2cpp_runtime_helper_023445d0(&"IdleCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackHitFace");
    il2cpp_runtime_helper_023445d0(&"AttackSlapHighR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadFrontL");
    il2cpp_runtime_helper_023445d0(&"Turn90LCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirFarR");
    il2cpp_runtime_helper_023445d0(&"DieSit");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirR");
    il2cpp_runtime_helper_023445d0(&"Walk");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundFrontL");
    il2cpp_runtime_helper_023445d0(&"SitFall");
    il2cpp_runtime_helper_023445d0(&"AttackGrabStomachR");
    il2cpp_runtime_helper_023445d0(&"SitDown");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundFrontR");
    il2cpp_runtime_helper_023445d0(&"AttackPunch");
    il2cpp_runtime_helper_023445d0(&"EmoteLaugh");
    il2cpp_runtime_helper_023445d0(&"ArmHurtL");
    il2cpp_runtime_helper_023445d0(&"Idle");
    il2cpp_runtime_helper_023445d0(&"AttackPunchCombo");
    il2cpp_runtime_helper_023445d0(&"SitUpCrawler");
    il2cpp_runtime_helper_023445d0(&"DieBack");
    il2cpp_runtime_helper_023445d0(&"Fall");
    il2cpp_runtime_helper_023445d0(&"LandCrawler");
    il2cpp_runtime_helper_023445d0(&"SprintAbnormal");
    il2cpp_runtime_helper_023445d0(&"AttackSlapR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundBackR");
    il2cpp_runtime_helper_023445d0(&"AttackKick");
    il2cpp_runtime_helper_023445d0(&"SitUp");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBackR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBackL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadFrontR");
    il2cpp_runtime_helper_023445d0(&"AttackSlapLowL");
    il2cpp_runtime_helper_023445d0(&"EmoteRoar");
    g_data_057ad3dd = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x7cdffe18) {
    if (uVar1 < 0x3a2d364f) {
      if (uVar1 < 0x132daa60) {
        if (uVar1 < 0xcb00c2e) {
          if (uVar1 < 0x87de46c) {
            if (uVar1 == 0x4aec3cb) {
              bVar2 = System_String__op_Equality(name,"AttackSlapR",(MethodInfo *)0x0);
              if ((char)bVar2 != '\0') {
                puStack_18 = &TypeInfo_Bindings;
                if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                  puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
                }
                if (g_data_057ad417 == '\0') {
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapR_g____getter);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                  g_data_057ad417 = '\x01';
                }
                pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                System_Func_object__object____ctor();
                pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                CustomLogic_CLPropertyBinding_object____ctor
                          (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                return (CustomLogic_ICLMemberBinding_o *)pCVar6;
              }
            }
            else if ((uVar1 == 0x87de46b) &&
                    (bVar2 = System_String__op_Equality(name,"AttackPunch",(MethodInfo *)0x0),
                    (char)bVar2 != '\0')) {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057ad3f3 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackPunch_g____getter);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                g_data_057ad3f3 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0xa250c8c) {
            bVar2 = System_String__op_Equality(name,"DieFront",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057ad3ee == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DieFront_g____getter_18);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                g_data_057ad3ee = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0xb04c157) {
            bVar2 = System_String__op_Equality(name,"AttackGrabGroundFrontR",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057ad409 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabGroundFrontR_g);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                g_data_057ad409 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if ((uVar1 == 0xcb00c2d) &&
                  (bVar2 = System_String__op_Equality(name,"AttackGrabGroundBackL",(MethodInfo *)0x0),
                  (char)bVar2 != '\0')) {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad406 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabGroundBackL_g);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad406 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 < 0xfd3122c) {
          if (uVar1 == 0xd2f75f1) {
            bVar2 = System_String__op_Equality(name,"AttackGrabAirR",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057ad401 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabAirR_g____gett);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                g_data_057ad401 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0xe1ef32d) {
            bVar2 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057ad3e7 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_11_0);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                g_data_057ad3e7 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if ((uVar1 == 0xfd3122b) &&
                  (bVar2 = System_String__op_Equality(name,"AttackGrabHighR",(MethodInfo *)0x0),
                  (char)bVar2 != '\0')) {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad40f == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHighR_g____get);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad40f = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x1104cac9) {
          bVar2 = System_String__op_Equality(name,"AttackGrabGroundFrontL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad408 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabGroundFrontL_g);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad408 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x12aed9d5) {
          bVar2 = System_String__op_Equality(name,"AttackSlapL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad416 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapL_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad416 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x132daa5f) &&
                (bVar2 = System_String__op_Equality(name,"AttackBiteR",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad3fd == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBiteR_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3fd = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 < 0x22ccd731) {
        if (uVar1 < 0x1d298760) {
          if (uVar1 == 0x172f85af) {
            bVar2 = System_String__op_Equality(name,"AttackGrabAirL",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057ad400 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabAirL_g____gett);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                g_data_057ad400 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if ((uVar1 == 0x1d29875f) &&
                  (bVar2 = System_String__op_Equality(name,"AttackSlapHighR",(MethodInfo *)0x0),
                  (char)bVar2 != '\0')) {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad415 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapHighR_g____get);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad415 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x1dd32835) {
          bVar2 = System_String__op_Equality(name,"AttackGrabHighL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad40e == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHighL_g____get);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad40e = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x1f2dbd43) {
          bVar2 = System_String__op_Equality(name,"AttackBiteF",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad3fb == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBiteF_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad3fb = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x22ccd730) &&
                (bVar2 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad3e6 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Walk_g____getter_10_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3e6 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 < 0x292dcd02) {
        if (uVar1 == 0x25093a4c) {
          bVar2 = System_String__op_Equality(name,"ArmHurtL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad42f == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ArmHurtL_g____getter_83);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad42f = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x27bb25ca) {
          bVar2 = System_String__op_Equality(name,"SitFallCrawler",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad427 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitFallCrawler_g____gett);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad427 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x292dcd01) &&
                (bVar2 = System_String__op_Equality(name,"AttackBiteL",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad3fc == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBiteL_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3fc = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x3329aa01) {
        bVar2 = System_String__op_Equality(name,"AttackSlapHighL",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad414 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapHighL_g____get);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad414 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x371c1522) {
        bVar2 = System_String__op_Equality(name,"AttackStomp",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad3f8 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackStomp_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3f8 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x3a2d364e) &&
              (bVar2 = System_String__op_Equality(name,"AttackBellyFlop",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad3f5 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBellyFlop_g____get);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad3f5 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x5d992b42) {
      if (uVar1 < 0x425a9db8) {
        if (uVar1 < 0x3d9daaed) {
          if (uVar1 == 0x3b095cee) {
            bVar2 = System_String__op_Equality(name,"ArmHurtR",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057ad430 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ArmHurtR_g____getter_84);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                g_data_057ad430 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if ((uVar1 == 0x3d9daaec) &&
                  (bVar2 = System_String__op_Equality(name,"StunLeft",(MethodInfo *)0x0),
                  (char)bVar2 != '\0')) {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad3eb == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__StunLeft_g____getter_15);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad3eb = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x3db5a1bf) {
          bVar2 = System_String__op_Equality(name,"EmoteShake",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad434 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteShake_g____getter_8);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad434 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x3fd565eb) {
          bVar2 = System_String__op_Equality(name,"DieSit",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad3f1 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DieSit_g____getter_21_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad3f1 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x425a9db7) &&
                (bVar2 = System_String__op_Equality(name,"AttackBellyFlopGetup",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad3f6 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBellyFlopGetup_g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3f6 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 < 0x45aa17b4) {
        if (uVar1 == 0x426f593c) {
          bVar2 = System_String__op_Equality(name,"EmoteLaugh",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad432 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteLaugh_g____getter_8);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad432 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x45516aaa) {
          bVar2 = System_String__op_Equality(name,"SitUp",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad424 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitUp_g____getter_72_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad424 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x45aa17b3) &&
                (bVar2 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puVar4 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar4 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          goto CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Idle;
        }
      }
      else if (uVar1 == 0x518c7bc2) {
        bVar2 = System_String__op_Equality(name,"DieGround",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad3ef == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DieGround_g____getter_19);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3ef = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x54623468) {
        bVar2 = System_String__op_Equality(name,"FallCrawler",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad3e4 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FallCrawler_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3e4 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x5d992b41) &&
              (bVar2 = System_String__op_Equality(name,"Stun",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad3ea == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stun_g____getter_14_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad3ea = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x717ed71c) {
      if (uVar1 < 0x6700754c) {
        if (uVar1 == 0x5f7ebac5) {
          bVar2 = System_String__op_Equality(name,"Turn90L",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad428 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Turn90L_g____getter_76_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad428 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x6700754b) &&
                (bVar2 = System_String__op_Equality(name,"AttackHitFace",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad41d == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackHitFace_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad41d = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x69fd27f6) {
        bVar2 = System_String__op_Equality(name,"RunAbnormal",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad3df == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RunAbnormal_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3df = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x70cfd606) {
        bVar2 = System_String__op_Equality(name,"RunCrawler",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad3e1 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RunCrawler_g____getter_5);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3e1 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x717ed71b) &&
              (bVar2 = System_String__op_Equality(name,"Turn90R",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad429 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Turn90R_g____getter_77_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad429 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x7b00bc81) {
      if (uVar1 == 0x729a03b7) {
        bVar2 = System_String__op_Equality(name,"AttackJumpCrawler",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad420 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackJumpCrawler_g____g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad420 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x745f154b) {
        bVar2 = System_String__op_Equality(name,"AttackSlapLowR",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad419 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapLowR_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad419 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x7b00bc80) &&
              (bVar2 = System_String__op_Equality(name,"Fall",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad3e8 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Fall_g____getter_12_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad3e8 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x7b128cf9) {
      bVar2 = System_String__op_Equality(name,"StunRight",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad3ec == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__StunRight_g____getter_16);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad3ec = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x7b4c8700) {
      bVar2 = System_String__op_Equality(name,"AttackGrabCoreL",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad404 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabCoreL_g____get);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad404 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x7cdffe17) &&
            (bVar2 = System_String__op_Equality(name,"Turn90LCrawler",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad42a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Turn90LCrawler_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        g_data_057ad42a = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xac717d26) {
    if (uVar1 < 0x882f3d51) {
      if (uVar1 < 0x838656ad) {
        if (uVar1 < 0x7ee23ea7) {
          if (uVar1 == 0x7e4b9533) {
            bVar2 = System_String__op_Equality(name,"AttackEatL",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057ad412 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackEatL_g____getter_5);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
                g_data_057ad412 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if ((uVar1 == 0x7ee23ea6) &&
                  (bVar2 = System_String__op_Equality(name,"AttackGrabHeadFrontR",(MethodInfo *)0x0),
                  (char)bVar2 != '\0')) {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad40d == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHeadFrontR_g);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad40d = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x825f2b55) {
          bVar2 = System_String__op_Equality(name,"AttackSlapLowL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad418 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapLowL_g____gett);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad418 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x838656ac) {
          bVar2 = System_String__op_Equality(name,"AttackSlam",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad3f4 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlam_g____getter_2);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad3f4 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x7f7ae464) &&
                (bVar2 = System_String__op_Equality(name,"AttackBrushChestL",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad41a == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushChestL_g____g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad41a = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 < 0x862f3a2b) {
        if (uVar1 == 0x84fc6844) {
          bVar2 = System_String__op_Equality(name,"AttackGrabBackL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad402 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabBackL_g____get);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad402 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x857aedd6) {
          bVar2 = System_String__op_Equality(name,"AttackBrushChestR",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad41b == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushChestR_g____g);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad41b = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x862f3a2a) &&
                (bVar2 = System_String__op_Equality(name,"AttackGrabAirFarL",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad3fe == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabAirFarL_g____g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3fe = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x86827373) {
        bVar2 = System_String__op_Equality(name,"DieCrawler",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad3f0 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DieCrawler_g____getter_2);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3f0 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x87b6990b) {
        bVar2 = System_String__op_Equality(name,"SitDown",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad423 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitDown_g____getter_71_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad423 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x882f3d50) &&
              (bVar2 = System_String__op_Equality(name,"AttackGrabAirFarR",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad3ff == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabAirFarR_g____g);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad3ff = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x994cb63b) {
      if (uVar1 < 0x912e23bf) {
        if (uVar1 == 0x8afc71b6) {
          bVar2 = System_String__op_Equality(name,"AttackGrabBackR",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad403 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabBackR_g____get);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad403 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x912e23be) &&
                (bVar2 = System_String__op_Equality(name,"SitFall",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad426 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitFall_g____getter_74_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad426 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x972856bf) {
        bVar2 = System_String__op_Equality(name,"SitIdleCrawler",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad422 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitIdleCrawler_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad422 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x98e26794) {
        bVar2 = System_String__op_Equality(name,"AttackGrabHeadFrontL",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad40c == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHeadFrontL_g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad40c = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x994cb63a) &&
              (bVar2 = System_String__op_Equality(name,"AttackGrabCoreR",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad405 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabCoreR_g____get);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad405 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0xa47f6adf) {
      if (uVar1 == 0x99ca44b9) {
        bVar2 = System_String__op_Equality(name,"IdleCrawler",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad3e2 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IdleCrawler_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3e2 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x9c4bc46d) {
        bVar2 = System_String__op_Equality(name,"AttackEatR",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad413 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackEatR_g____getter_5);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad413 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0xa47f6ade) &&
              (bVar2 = System_String__op_Equality(name,"DieBack",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad3ed == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DieBack_g____getter_17_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad3ed = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xa9381ee1) {
      bVar2 = System_String__op_Equality(name,"Turn90RCrawler",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad42b == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Turn90RCrawler_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad42b = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xaa02d909) {
      bVar2 = System_String__op_Equality(name,"SprintAbnormal",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad3e0 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SprintAbnormal_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad3e0 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xac717d25) &&
            (bVar2 = System_String__op_Equality(name,"AttackJump",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad41f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackJump_g____getter_6);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        g_data_057ad41f = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xd514eb77) {
    if (uVar1 < 0xc2cea647) {
      if (uVar1 < 0xbe6b9bc0) {
        if (uVar1 == 0xb8819b82) {
          bVar2 = System_String__op_Equality(name,"SitBlind",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad42d == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitBlind_g____getter_81);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
              g_data_057ad42d = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0xbe6b9bbf) &&
                (bVar2 = System_String__op_Equality(name,"JumpCrawler",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad3e3 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__JumpCrawler_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3e3 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xc0fd15a3) {
        bVar2 = System_String__op_Equality(name,"AttackPunchCombo",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad3f2 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackPunchCombo_g____ge);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3f2 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xc1018924) {
        bVar2 = System_String__op_Equality(name,"EmoteNod",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad433 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteNod_g____getter_87);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad433 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0xc2cea646) &&
              (bVar2 = System_String__op_Equality(name,"SitUpCrawler",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad425 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitUpCrawler_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad425 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0xc6f75898) {
      if (uVar1 == 0xc4a10b99) {
        bVar2 = System_String__op_Equality(name,"AttackSwingR",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad3fa == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSwingR_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad3fa = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xc65e5944) {
        bVar2 = System_String__op_Equality(name,"AttackRockThrow",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad41e == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackRockThrow_g____get);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad41e = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0xc6f75897) &&
              (bVar2 = System_String__op_Equality(name,"EmoteRoar",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad435 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteRoar_g____getter_89);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad435 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xc8f30ee7) {
      bVar2 = System_String__op_Equality(name,"AttackKick",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad3f7 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackKick_g____getter_2);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad3f7 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xcf14e204) {
      bVar2 = System_String__op_Equality(name,"AttackGrabStomachL",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad410 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabStomachL_g);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad410 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xd514eb76) &&
            (bVar2 = System_String__op_Equality(name,"AttackGrabStomachR",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad411 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabStomachR_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        g_data_057ad411 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xe6b2342e) {
    if (uVar1 < 0xd8f110d5) {
      if (uVar1 == 0xd5e03fe2) {
        bVar2 = System_String__op_Equality(name,"CoverNape",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad431 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CoverNape_g____getter_85);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
            g_data_057ad431 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0xd8f110d4) &&
              (bVar2 = System_String__op_Equality(name,"LandCrawler",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad3e5 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LandCrawler_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad3e5 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xdea13487) {
      bVar2 = System_String__op_Equality(name,"AttackSwingL",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad3f9 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSwingL_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad3f9 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xe4d66f54) {
      bVar2 = System_String__op_Equality(name,"Blind",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad42c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Blind_g____getter_80_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad42c = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xe6b2342d) &&
            (bVar2 = System_String__op_Equality(name,"SitIdle",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad421 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitIdle_g____getter_69_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        g_data_057ad421 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xee1682bd) {
    if (uVar1 == 0xe8476a11) {
      bVar2 = System_String__op_Equality(name,"AttackHitBack",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad41c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackHitBack_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad41c = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xe89df278) {
      bVar2 = System_String__op_Equality(name,"AttackGrabHeadBackR",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad40b == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHeadBackR_g);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
          g_data_057ad40b = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xee1682bc) &&
            (bVar2 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad3e9 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Land_g____getter_13_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        g_data_057ad3e9 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xeeafdcf3) {
    bVar2 = System_String__op_Equality(name,"AttackGrabGroundBackR",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad407 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabGroundBackR_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        g_data_057ad407 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xf69e0882) {
    bVar2 = System_String__op_Equality(name,"AttackGrabHeadBackL",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad40a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHeadBackL_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
        g_data_057ad40a = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xfd07560c) &&
          (bVar2 = System_String__op_Equality(name,"BlindCrawler",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ad42e == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BlindCrawler_g____getter);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
      g_data_057ad42e = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    System_Func_object__object____ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicTitanAnimationEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Idle:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar4;
  if (g_data_057ad3de == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41a1519;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41a1525;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41a1531;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41a153d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3de = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41a1553;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41a156c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41a157b;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41a1595;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Idle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Idle (const MethodInfo* method);
// 0x41a1500

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Idle(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3de == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3de = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__RunAbnormal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__RunAbnormal (const MethodInfo* method);
// 0x41a15a0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__RunAbnormal(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3df == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RunAbnormal_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3df = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SprintAbnormal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SprintAbnormal (const MethodInfo* method);
// 0x41a1640

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SprintAbnormal
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SprintAbnormal_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3e0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__RunCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__RunCrawler (const MethodInfo* method);
// 0x41a16e0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__RunCrawler(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3e1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RunCrawler_g____getter_5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3e1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__IdleCrawler (const MethodInfo* method);
// 0x41a1780

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__IdleCrawler(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IdleCrawler_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3e2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__JumpCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__JumpCrawler (const MethodInfo* method);
// 0x41a1820

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__JumpCrawler(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__JumpCrawler_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3e3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__FallCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__FallCrawler (const MethodInfo* method);
// 0x41a18c0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__FallCrawler(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FallCrawler_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3e4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__LandCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__LandCrawler (const MethodInfo* method);
// 0x41a1960

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__LandCrawler(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LandCrawler_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3e5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x41a1a00

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Walk_g____getter_10_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3e6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x41a1aa0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_11_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3e7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Fall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Fall (const MethodInfo* method);
// 0x41a1b40

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Fall(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Fall_g____getter_12_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3e8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x41a1be0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Land(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Land_g____getter_13_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3e9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Stun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Stun (const MethodInfo* method);
// 0x41a1c80

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Stun(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stun_g____getter_14_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3ea = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__StunLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__StunLeft (const MethodInfo* method);
// 0x41a1d20

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__StunLeft(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3eb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__StunLeft_g____getter_15);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3eb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__StunRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__StunRight (const MethodInfo* method);
// 0x41a1dc0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__StunRight(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3ec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__StunRight_g____getter_16);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3ec = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieBack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieBack (const MethodInfo* method);
// 0x41a1e60

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieBack(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DieBack_g____getter_17_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3ed = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieFront
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieFront (const MethodInfo* method);
// 0x41a1f00

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieFront(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3ee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DieFront_g____getter_18);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3ee = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieGround
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieGround (const MethodInfo* method);
// 0x41a1fa0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieGround(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DieGround_g____getter_19);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3ef = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieCrawler (const MethodInfo* method);
// 0x41a2040

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieCrawler(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DieCrawler_g____getter_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3f0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieSit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieSit (const MethodInfo* method);
// 0x41a20e0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__DieSit(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DieSit_g____getter_21_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3f1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackPunchCombo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackPunchCombo (const MethodInfo* method);
// 0x41a2180

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackPunchCombo
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackPunchCombo_g____ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3f2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackPunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackPunch (const MethodInfo* method);
// 0x41a2220

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackPunch(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackPunch_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3f3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlam
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlam (const MethodInfo* method);
// 0x41a22c0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlam(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlam_g____getter_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3f4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBellyFlop
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBellyFlop (const MethodInfo* method);
// 0x41a2360

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBellyFlop
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBellyFlop_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3f5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBellyFlopGetup
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBellyFlopGetup (const MethodInfo* method);
// 0x41a2400

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBellyFlopGetup
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBellyFlopGetup_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3f6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackKick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackKick (const MethodInfo* method);
// 0x41a24a0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackKick(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackKick_g____getter_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3f7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackStomp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackStomp (const MethodInfo* method);
// 0x41a2540

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackStomp(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackStomp_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3f8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSwingL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSwingL (const MethodInfo* method);
// 0x41a25e0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSwingL(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSwingL_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3f9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSwingR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSwingR (const MethodInfo* method);
// 0x41a2680

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSwingR(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSwingR_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3fa = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBiteF
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteF (const MethodInfo* method);
// 0x41a2720

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteF(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3fb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBiteF_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3fb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBiteL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteL (const MethodInfo* method);
// 0x41a27c0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteL(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3fc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBiteL_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3fc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBiteR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteR (const MethodInfo* method);
// 0x41a2860

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBiteR(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3fd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBiteR_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3fd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirFarL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirFarL (const MethodInfo* method);
// 0x41a2900

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirFarL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3fe == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabAirFarL_g____g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3fe = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirFarR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirFarR (const MethodInfo* method);
// 0x41a29a0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirFarR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad3ff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabAirFarR_g____g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad3ff = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirL (const MethodInfo* method);
// 0x41a2a40

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad400 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabAirL_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad400 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirR (const MethodInfo* method);
// 0x41a2ae0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabAirR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad401 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabAirR_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad401 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabBackL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBackL (const MethodInfo* method);
// 0x41a2b80

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBackL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad402 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabBackL_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad402 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabBackR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBackR (const MethodInfo* method);
// 0x41a2c20

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBackR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad403 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabBackR_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad403 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabCoreL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabCoreL (const MethodInfo* method);
// 0x41a2cc0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabCoreL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad404 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabCoreL_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad404 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabCoreR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabCoreR (const MethodInfo* method);
// 0x41a2d60

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabCoreR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad405 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabCoreR_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad405 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabGroundBackL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundBackL (const MethodInfo* method);
// 0x41a2e00

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundBackL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad406 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabGroundBackL_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad406 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabGroundBackR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundBackR (const MethodInfo* method);
// 0x41a2ea0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundBackR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad407 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabGroundBackR_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad407 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabGroundFrontL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundFrontL (const MethodInfo* method);
// 0x41a2f40

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundFrontL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad408 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabGroundFrontL_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad408 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabGroundFrontR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundFrontR (const MethodInfo* method);
// 0x41a2fe0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabGroundFrontR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad409 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabGroundFrontR_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad409 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHeadBackL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadBackL (const MethodInfo* method);
// 0x41a3080

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadBackL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad40a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHeadBackL_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad40a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHeadBackR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadBackR (const MethodInfo* method);
// 0x41a3120

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadBackR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad40b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHeadBackR_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad40b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHeadFrontL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadFrontL (const MethodInfo* method);
// 0x41a31c0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadFrontL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad40c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHeadFrontL_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad40c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHeadFrontR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadFrontR (const MethodInfo* method);
// 0x41a3260

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHeadFrontR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad40d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHeadFrontR_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad40d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHighL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHighL (const MethodInfo* method);
// 0x41a3300

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHighL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad40e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHighL_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad40e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHighR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHighR (const MethodInfo* method);
// 0x41a33a0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabHighR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad40f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHighR_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad40f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabStomachL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabStomachL (const MethodInfo* method);
// 0x41a3440

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabStomachL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad410 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabStomachL_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad410 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabStomachR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabStomachR (const MethodInfo* method);
// 0x41a34e0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabStomachR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad411 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabStomachR_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad411 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackEatL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackEatL (const MethodInfo* method);
// 0x41a3580

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackEatL(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad412 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackEatL_g____getter_5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad412 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackEatR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackEatR (const MethodInfo* method);
// 0x41a3620

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackEatR(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad413 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackEatR_g____getter_5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad413 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapHighL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapHighL (const MethodInfo* method);
// 0x41a36c0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapHighL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad414 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapHighL_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad414 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapHighR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapHighR (const MethodInfo* method);
// 0x41a3760

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapHighR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad415 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapHighR_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad415 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapL (const MethodInfo* method);
// 0x41a3800

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapL(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad416 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapL_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad416 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapR (const MethodInfo* method);
// 0x41a38a0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapR(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad417 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapR_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad417 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapLowL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapLowL (const MethodInfo* method);
// 0x41a3940

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapLowL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad418 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapLowL_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad418 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapLowR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapLowR (const MethodInfo* method);
// 0x41a39e0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackSlapLowR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad419 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapLowR_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad419 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushChestL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushChestL (const MethodInfo* method);
// 0x41a3a80

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushChestL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad41a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushChestL_g____g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad41a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushChestR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushChestR (const MethodInfo* method);
// 0x41a3b20

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushChestR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad41b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushChestR_g____g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad41b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackHitBack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackHitBack (const MethodInfo* method);
// 0x41a3bc0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackHitBack(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad41c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackHitBack_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad41c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackHitFace
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackHitFace (const MethodInfo* method);
// 0x41a3c60

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackHitFace(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad41d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackHitFace_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad41d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackRockThrow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackRockThrow (const MethodInfo* method);
// 0x41a3d00

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackRockThrow
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad41e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackRockThrow_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad41e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackJump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackJump (const MethodInfo* method);
// 0x41a3da0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackJump(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad41f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackJump_g____getter_6);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad41f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackJumpCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackJumpCrawler (const MethodInfo* method);
// 0x41a3e40

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__AttackJumpCrawler
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad420 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackJumpCrawler_g____g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad420 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitIdle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitIdle (const MethodInfo* method);
// 0x41a3ee0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitIdle(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad421 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitIdle_g____getter_69_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad421 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitIdleCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitIdleCrawler (const MethodInfo* method);
// 0x41a3f80

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitIdleCrawler
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad422 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitIdleCrawler_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad422 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitDown
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitDown (const MethodInfo* method);
// 0x41a4020

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitDown(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad423 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitDown_g____getter_71_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad423 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitUp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitUp (const MethodInfo* method);
// 0x41a40c0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitUp(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad424 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitUp_g____getter_72_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad424 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitUpCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitUpCrawler (const MethodInfo* method);
// 0x41a4160

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitUpCrawler(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad425 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitUpCrawler_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad425 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitFall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitFall (const MethodInfo* method);
// 0x41a4200

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitFall(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad426 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitFall_g____getter_74_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad426 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitFallCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitFallCrawler (const MethodInfo* method);
// 0x41a42a0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitFallCrawler
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad427 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitFallCrawler_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad427 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Turn90L
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90L (const MethodInfo* method);
// 0x41a4340

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90L(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad428 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Turn90L_g____getter_76_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad428 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Turn90R
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90R (const MethodInfo* method);
// 0x41a43e0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90R(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad429 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Turn90R_g____getter_77_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad429 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Turn90LCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90LCrawler (const MethodInfo* method);
// 0x41a4480

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90LCrawler
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad42a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Turn90LCrawler_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad42a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Turn90RCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90RCrawler (const MethodInfo* method);
// 0x41a4520

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Turn90RCrawler
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad42b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Turn90RCrawler_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad42b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Blind
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Blind (const MethodInfo* method);
// 0x41a45c0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__Blind(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad42c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Blind_g____getter_80_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad42c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitBlind
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitBlind (const MethodInfo* method);
// 0x41a4660

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__SitBlind(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad42d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitBlind_g____getter_81);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad42d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__BlindCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__BlindCrawler (const MethodInfo* method);
// 0x41a4700

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__BlindCrawler(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad42e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BlindCrawler_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad42e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__ArmHurtL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__ArmHurtL (const MethodInfo* method);
// 0x41a47a0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__ArmHurtL(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad42f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ArmHurtL_g____getter_83);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad42f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__ArmHurtR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__ArmHurtR (const MethodInfo* method);
// 0x41a4840

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__ArmHurtR(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad430 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ArmHurtR_g____getter_84);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad430 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__CoverNape
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__CoverNape (const MethodInfo* method);
// 0x41a48e0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__CoverNape(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad431 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CoverNape_g____getter_85);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad431 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteLaugh
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteLaugh (const MethodInfo* method);
// 0x41a4980

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteLaugh(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad432 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteLaugh_g____getter_8);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad432 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteNod
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteNod (const MethodInfo* method);
// 0x41a4a20

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteNod(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad433 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteNod_g____getter_87);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad433 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteShake
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteShake (const MethodInfo* method);
// 0x41a4ac0

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteShake(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad434 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteShake_g____getter_8);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad434 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteRoar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o* CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar (const MethodInfo* method);
// 0x41a4b60

CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *__this;
  
  if (g_data_057ad435 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteRoar_g____getter_89);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
    g_data_057ad435 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTitanAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x41a4c00

void CustomLogic_CustomLogicTitanAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ad436 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundBackL");
    il2cpp_runtime_helper_023445d0(&"AttackBellyFlop");
    il2cpp_runtime_helper_023445d0(&"StunRight");
    il2cpp_runtime_helper_023445d0(&"FallCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestL");
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabCoreR");
    il2cpp_runtime_helper_023445d0(&"AttackBiteF");
    il2cpp_runtime_helper_023445d0(&"ArmHurtR");
    il2cpp_runtime_helper_023445d0(&"AttackJumpCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighR");
    il2cpp_runtime_helper_023445d0(&"SitIdleCrawler");
    il2cpp_runtime_helper_023445d0(&"EmoteNod");
    il2cpp_runtime_helper_023445d0(&"AttackSlam");
    il2cpp_runtime_helper_023445d0(&"AttackSwingL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabStomachL");
    il2cpp_runtime_helper_023445d0(&"AttackJump");
    il2cpp_runtime_helper_023445d0(&"EmoteShake");
    il2cpp_runtime_helper_023445d0(&"SitFallCrawler");
    il2cpp_runtime_helper_023445d0(&"RunAbnormal");
    il2cpp_runtime_helper_023445d0(&"DieFront");
    il2cpp_runtime_helper_023445d0(&"AttackBellyFlopGetup");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirL");
    il2cpp_runtime_helper_023445d0(&"AttackHitBack");
    il2cpp_runtime_helper_023445d0(&"AttackSwingR");
    il2cpp_runtime_helper_023445d0(&"DieGround");
    il2cpp_runtime_helper_023445d0(&"AttackEatL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirFarL");
    il2cpp_runtime_helper_023445d0(&"AttackBiteL");
    il2cpp_runtime_helper_023445d0(&"JumpCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackGrabCoreL");
    il2cpp_runtime_helper_023445d0(&"CoverNape");
    il2cpp_runtime_helper_023445d0(&"AttackStomp");
    il2cpp_runtime_helper_023445d0(&"AttackEatR");
    il2cpp_runtime_helper_023445d0(&"AttackRockThrow");
    il2cpp_runtime_helper_023445d0(&"Land");
    il2cpp_runtime_helper_023445d0(&"BlindCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackSlapL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadBackL");
    il2cpp_runtime_helper_023445d0(&"DieCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackSlapLowR");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"Turn90R");
    il2cpp_runtime_helper_023445d0(&"Blind");
    il2cpp_runtime_helper_023445d0(&"Turn90L");
    il2cpp_runtime_helper_023445d0(&"Stun");
    il2cpp_runtime_helper_023445d0(&"AttackSlapHighL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadBackR");
    il2cpp_runtime_helper_023445d0(&"AttackBiteR");
    il2cpp_runtime_helper_023445d0(&"StunLeft");
    il2cpp_runtime_helper_023445d0(&"SitIdle");
    il2cpp_runtime_helper_023445d0(&"RunCrawler");
    il2cpp_runtime_helper_023445d0(&"SitBlind");
    il2cpp_runtime_helper_023445d0(&"Turn90RCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighL");
    il2cpp_runtime_helper_023445d0(&"IdleCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackHitFace");
    il2cpp_runtime_helper_023445d0(&"AttackSlapHighR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadFrontL");
    il2cpp_runtime_helper_023445d0(&"Turn90LCrawler");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirFarR");
    il2cpp_runtime_helper_023445d0(&"DieSit");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirR");
    il2cpp_runtime_helper_023445d0(&"Walk");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundFrontL");
    il2cpp_runtime_helper_023445d0(&"SitFall");
    il2cpp_runtime_helper_023445d0(&"AttackGrabStomachR");
    il2cpp_runtime_helper_023445d0(&"SitDown");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundFrontR");
    il2cpp_runtime_helper_023445d0(&"AttackPunch");
    il2cpp_runtime_helper_023445d0(&"EmoteLaugh");
    il2cpp_runtime_helper_023445d0(&"ArmHurtL");
    il2cpp_runtime_helper_023445d0(&"Idle");
    il2cpp_runtime_helper_023445d0(&"AttackPunchCombo");
    il2cpp_runtime_helper_023445d0(&"SitUpCrawler");
    il2cpp_runtime_helper_023445d0(&"DieBack");
    il2cpp_runtime_helper_023445d0(&"Fall");
    il2cpp_runtime_helper_023445d0(&"LandCrawler");
    il2cpp_runtime_helper_023445d0(&"SprintAbnormal");
    il2cpp_runtime_helper_023445d0(&"AttackSlapR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundBackR");
    il2cpp_runtime_helper_023445d0(&"AttackKick");
    il2cpp_runtime_helper_023445d0(&"SitUp");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBackR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBackL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadFrontR");
    il2cpp_runtime_helper_023445d0(&"AttackSlapLowL");
    il2cpp_runtime_helper_023445d0(&"EmoteRoar");
    g_data_057ad436 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Idle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"RunAbnormal",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SprintAbnormal",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"RunCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"IdleCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"JumpCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"FallCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"LandCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Walk",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Jump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Fall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Land",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Stun",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"StunLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"StunRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"DieBack",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"DieFront",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"DieGround",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"DieCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"DieSit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackPunchCombo",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackPunch",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackSlam",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackBellyFlop",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackBellyFlopGetup",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackKick",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackStomp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackSwingL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackSwingR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackBiteF",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackBiteL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackBiteR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabAirFarL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabAirFarR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabAirL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabAirR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabBackL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabBackR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabCoreL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabCoreR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabGroundBackL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabGroundBackR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabGroundFrontL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabGroundFrontR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabHeadBackL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabHeadBackR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabHeadFrontL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabHeadFrontR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabHighL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabHighR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabStomachL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabStomachR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackEatL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackEatR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackSlapHighL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackSlapHighR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackSlapL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackSlapR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackSlapLowL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackSlapLowR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackBrushChestL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackBrushChestR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackHitBack",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackHitFace",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackRockThrow",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackJump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackJumpCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SitIdle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SitIdleCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SitDown",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SitUp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SitUpCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SitFall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SitFallCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Turn90L",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Turn90R",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Turn90LCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Turn90RCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Blind",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SitBlind",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BlindCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ArmHurtL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ArmHurtR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"CoverNape",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"EmoteLaugh",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"EmoteNod",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"EmoteShake",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"EmoteRoar",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad383 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|idle");
    g_data_057ad383 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5810

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad383 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|idle");
    g_data_057ad383 = '\x01';
  }
  return "Amarture_VER2|idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__RunAbnormal>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__RunAbnormal_g____getter_3_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5840

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__RunAbnormal_g____getter_3_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad384 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|run.abnormal");
    g_data_057ad384 = '\x01';
  }
  return "Amarture_VER2|run.abnormal";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SprintAbnormal>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SprintAbnormal_g____getter_4_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5870

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SprintAbnormal_g____getter_4_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad385 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|run.abnormal.1");
    g_data_057ad385 = '\x01';
  }
  return "Amarture_VER2|run.abnormal.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__RunCrawler>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__RunCrawler_g____getter_5_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a58a0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__RunCrawler_g____getter_5_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad386 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|crawler.run");
    g_data_057ad386 = '\x01';
  }
  return "Amarture_VER2|crawler.run";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleCrawler>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__IdleCrawler_g____getter_6_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a58d0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__IdleCrawler_g____getter_6_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad387 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|crawler.idle");
    g_data_057ad387 = '\x01';
  }
  return "Amarture_VER2|crawler.idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__JumpCrawler>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__JumpCrawler_g____getter_7_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5900

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__JumpCrawler_g____getter_7_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad388 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.crawler.jump.0");
    g_data_057ad388 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__FallCrawler>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__FallCrawler_g____getter_8_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5930

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__FallCrawler_g____getter_8_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad389 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.crawler.jump.1");
    g_data_057ad389 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__LandCrawler>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__LandCrawler_g____getter_9_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5960

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__LandCrawler_g____getter_9_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad38a == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.crawler.jump.2");
    g_data_057ad38a = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.2";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_10_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5990

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_10_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad38b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|run.walk");
    g_data_057ad38b = '\x01';
  }
  return "Amarture_VER2|run.walk";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_11_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a59c0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_11_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad38c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.jumper.0");
    g_data_057ad38c = '\x01';
  }
  return "Amarture_VER2|attack.jumper.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Fall>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_12_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a59f0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_12_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad38d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.jumper.1");
    g_data_057ad38d = '\x01';
  }
  return "Amarture_VER2|attack.jumper.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_13_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5a20

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_13_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad38e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.jumper.2");
    g_data_057ad38e = '\x01';
  }
  return "Amarture_VER2|attack.jumper.2";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Stun>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_14_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5a50

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_14_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad38f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|hit.eren.L");
    g_data_057ad38f = '\x01';
  }
  return "Amarture_VER2|hit.eren.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__StunLeft>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__StunLeft_g____getter_15_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5a80

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__StunLeft_g____getter_15_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad390 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|hit.eren.L");
    g_data_057ad390 = '\x01';
  }
  return "Amarture_VER2|hit.eren.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__StunRight>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__StunRight_g____getter_16_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5ab0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__StunRight_g____getter_16_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad391 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|hit.eren.R");
    g_data_057ad391 = '\x01';
  }
  return "Amarture_VER2|hit.eren.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieBack>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieBack_g____getter_17_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5ae0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieBack_g____getter_17_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad392 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|die.back");
    g_data_057ad392 = '\x01';
  }
  return "Amarture_VER2|die.back";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieFront>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieFront_g____getter_18_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5b10

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieFront_g____getter_18_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad393 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|die.front");
    g_data_057ad393 = '\x01';
  }
  return "Amarture_VER2|die.front";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieGround>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieGround_g____getter_19_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5b40

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieGround_g____getter_19_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad394 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|die.ground");
    g_data_057ad394 = '\x01';
  }
  return "Amarture_VER2|die.ground";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieCrawler>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieCrawler_g____getter_20_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5b70

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieCrawler_g____getter_20_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad395 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|crawler.die");
    g_data_057ad395 = '\x01';
  }
  return "Amarture_VER2|crawler.die";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieSit>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieSit_g____getter_21_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5ba0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__DieSit_g____getter_21_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad396 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|sit_die");
    g_data_057ad396 = '\x01';
  }
  return "Amarture_VER2|sit_die";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackPunchCombo>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackPunchCombo_g____getter_22_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5bd0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackPunchCombo_g____getter_22_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad397 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.combo");
    g_data_057ad397 = '\x01';
  }
  return "Amarture_VER2|attack.combo";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackPunch>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackPunch_g____getter_23_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5c00

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackPunch_g____getter_23_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad398 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.comboPunch");
    g_data_057ad398 = '\x01';
  }
  return "Amarture_VER2|attack.comboPunch";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlam>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlam_g____getter_24_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5c30

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlam_g____getter_24_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad399 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.front.ground");
    g_data_057ad399 = '\x01';
  }
  return "Amarture_VER2|attack.front.ground";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBellyFlop>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBellyFlop_g____getter_25_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5c60

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBellyFlop_g____getter_25_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad39a == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.abnormal.jump");
    g_data_057ad39a = '\x01';
  }
  return "Amarture_VER2|attack.abnormal.jump";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBellyFlopGetup>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBellyFlopGetup_g____getter_26_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5c90

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBellyFlopGetup_g____getter_26_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad39b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.abnormal.getup");
    g_data_057ad39b = '\x01';
  }
  return "Amarture_VER2|attack.abnormal.getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackKick>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_27_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5cc0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_27_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad39c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.kick");
    g_data_057ad39c = '\x01';
  }
  return "Amarture_VER2|attack.kick";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackStomp>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_28_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5cf0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_28_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad39d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.stomp");
    g_data_057ad39d = '\x01';
  }
  return "Amarture_VER2|attack.stomp";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSwingL>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSwingL_g____getter_29_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5d20

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSwingL_g____getter_29_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad39e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.swing.l");
    g_data_057ad39e = '\x01';
  }
  return "Amarture_VER2|attack.swing.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSwingR>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSwingR_g____getter_30_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5d50

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSwingR_g____getter_30_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad39f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.swing.r");
    g_data_057ad39f = '\x01';
  }
  return "Amarture_VER2|attack.swing.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBiteF>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBiteF_g____getter_31_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5d80

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBiteF_g____getter_31_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|bite");
    g_data_057ad3a0 = '\x01';
  }
  return "Amarture_VER2|bite";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBiteL>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBiteL_g____getter_32_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5db0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBiteL_g____getter_32_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|bite.l");
    g_data_057ad3a1 = '\x01';
  }
  return "Amarture_VER2|bite.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBiteR>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBiteR_g____getter_33_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5de0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBiteR_g____getter_33_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|bite.r");
    g_data_057ad3a2 = '\x01';
  }
  return "Amarture_VER2|bite.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirFarL>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirFarL_g____getter_34_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5e10

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirFarL_g____getter_34_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.air.far.l");
    g_data_057ad3a3 = '\x01';
  }
  return "Amarture_VER2|grab.air.far.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirFarR>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirFarR_g____getter_35_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5e40

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirFarR_g____getter_35_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.air.far.r");
    g_data_057ad3a4 = '\x01';
  }
  return "Amarture_VER2|grab.air.far.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirL>g____getter|36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirL_g____getter_36_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5e70

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirL_g____getter_36_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.air.short.l");
    g_data_057ad3a5 = '\x01';
  }
  return "Amarture_VER2|grab.air.short.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirR>g____getter|37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirR_g____getter_37_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5ea0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabAirR_g____getter_37_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.air.short.r");
    g_data_057ad3a6 = '\x01';
  }
  return "Amarture_VER2|grab.air.short.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBackL>g____getter|38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBackL_g____getter_38_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5ed0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBackL_g____getter_38_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.back.l");
    g_data_057ad3a7 = '\x01';
  }
  return "Amarture_VER2|grab.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBackR>g____getter|39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBackR_g____getter_39_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5f00

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBackR_g____getter_39_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.back.r");
    g_data_057ad3a8 = '\x01';
  }
  return "Amarture_VER2|grab.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabCoreL>g____getter|40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabCoreL_g____getter_40_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5f30

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabCoreL_g____getter_40_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.core.L");
    g_data_057ad3a9 = '\x01';
  }
  return "Amarture_VER2|grab.core.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabCoreR>g____getter|41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabCoreR_g____getter_41_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5f60

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabCoreR_g____getter_41_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3aa == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.core.R");
    g_data_057ad3aa = '\x01';
  }
  return "Amarture_VER2|grab.core.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGroundBackL>g____getter|42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundBackL_g____getter_42_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5f90

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundBackL_g____getter_42_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3ab == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.ground.back.l");
    g_data_057ad3ab = '\x01';
  }
  return "Amarture_VER2|grab.ground.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGroundBackR>g____getter|43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundBackR_g____getter_43_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5fc0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundBackR_g____getter_43_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3ac == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.ground.back.r");
    g_data_057ad3ac = '\x01';
  }
  return "Amarture_VER2|grab.ground.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGroundFrontL>g____getter|44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundFrontL_g____getter_44_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a5ff0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundFrontL_g____getter_44_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3ad == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.ground.front.l");
    g_data_057ad3ad = '\x01';
  }
  return "Amarture_VER2|grab.ground.front.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGroundFrontR>g____getter|45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundFrontR_g____getter_45_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6020

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabGroundFrontR_g____getter_45_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3ae == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.ground.front.r");
    g_data_057ad3ae = '\x01';
  }
  return "Amarture_VER2|grab.ground.front.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHeadBackL>g____getter|46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadBackL_g____getter_46_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6050

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadBackL_g____getter_46_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3af == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.head.back.l");
    g_data_057ad3af = '\x01';
  }
  return "Amarture_VER2|grab.head.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHeadBackR>g____getter|47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadBackR_g____getter_47_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6080

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadBackR_g____getter_47_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.head.back.r");
    g_data_057ad3b0 = '\x01';
  }
  return "Amarture_VER2|grab.head.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHeadFrontL>g____getter|48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadFrontL_g____getter_48_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a60b0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadFrontL_g____getter_48_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.head.front.1");
    g_data_057ad3b1 = '\x01';
  }
  return "Amarture_VER2|grab.head.front.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHeadFrontR>g____getter|49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadFrontR_g____getter_49_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a60e0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHeadFrontR_g____getter_49_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.head.front.r");
    g_data_057ad3b2 = '\x01';
  }
  return "Amarture_VER2|grab.head.front.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHighL>g____getter|50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHighL_g____getter_50_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6110

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHighL_g____getter_50_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.high.l");
    g_data_057ad3b3 = '\x01';
  }
  return "Amarture_VER2|grab.high.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHighR>g____getter|51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHighR_g____getter_51_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6140

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabHighR_g____getter_51_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.high.r");
    g_data_057ad3b4 = '\x01';
  }
  return "Amarture_VER2|grab.high.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabStomachL>g____getter|52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabStomachL_g____getter_52_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6170

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabStomachL_g____getter_52_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.stomach.l");
    g_data_057ad3b5 = '\x01';
  }
  return "Amarture_VER2|grab.stomach.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabStomachR>g____getter|53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabStomachR_g____getter_53_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a61a0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabStomachR_g____getter_53_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.stomach.r");
    g_data_057ad3b6 = '\x01';
  }
  return "Amarture_VER2|grab.stomach.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackEatL>g____getter|54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackEatL_g____getter_54_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a61d0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackEatL_g____getter_54_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|eat.l");
    g_data_057ad3b7 = '\x01';
  }
  return "Amarture_VER2|eat.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackEatR>g____getter|55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackEatR_g____getter_55_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6200

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackEatR_g____getter_55_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|eat.r");
    g_data_057ad3b8 = '\x01';
  }
  return "Amarture_VER2|eat.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapHighL>g____getter|56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapHighL_g____getter_56_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6230

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapHighL_g____getter_56_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.anti.AE.high.l");
    g_data_057ad3b9 = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.high.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapHighR>g____getter|57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapHighR_g____getter_57_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6260

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapHighR_g____getter_57_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3ba == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.anti.AE.high.r");
    g_data_057ad3ba = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.high.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapL>g____getter|58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapL_g____getter_58_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6290

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapL_g____getter_58_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3bb == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.anti.AE.l");
    g_data_057ad3bb = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapR>g____getter|59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapR_g____getter_59_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a62c0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapR_g____getter_59_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3bc == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.anti.AE.r");
    g_data_057ad3bc = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapLowL>g____getter|60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapLowL_g____getter_60_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a62f0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapLowL_g____getter_60_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3bd == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.anti.AE.low.l");
    g_data_057ad3bd = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.low.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapLowR>g____getter|61_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapLowR_g____getter_61_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6320

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackSlapLowR_g____getter_61_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3be == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.anti.AE.low.r");
    g_data_057ad3be = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.low.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushChestL>g____getter|62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushChestL_g____getter_62_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6350

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushChestL_g____getter_62_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3bf == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.chest.L");
    g_data_057ad3bf = '\x01';
  }
  return "Amarture_VER2|attack.chest.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushChestR>g____getter|63_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushChestR_g____getter_63_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6380

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushChestR_g____getter_63_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.chest.R");
    g_data_057ad3c0 = '\x01';
  }
  return "Amarture_VER2|attack.chest.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackHitBack>g____getter|64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackHitBack_g____getter_64_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a63b0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackHitBack_g____getter_64_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.slap.back");
    g_data_057ad3c1 = '\x01';
  }
  return "Amarture_VER2|attack.slap.back";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackHitFace>g____getter|65_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackHitFace_g____getter_65_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a63e0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackHitFace_g____getter_65_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.slap.face");
    g_data_057ad3c2 = '\x01';
  }
  return "Amarture_VER2|attack.slap.face";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackRockThrow>g____getter|66_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackRockThrow_g____getter_66_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6410

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackRockThrow_g____getter_66_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.throw");
    g_data_057ad3c3 = '\x01';
  }
  return "Amarture_VER2|attack.throw";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackJump>g____getter|67_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackJump_g____getter_67_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6440

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackJump_g____getter_67_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.jumper.0");
    g_data_057ad3c4 = '\x01';
  }
  return "Amarture_VER2|attack.jumper.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackJumpCrawler>g____getter|68_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackJumpCrawler_g____getter_68_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6470

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__AttackJumpCrawler_g____getter_68_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.crawler.jump.0");
    g_data_057ad3c5 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitIdle>g____getter|69_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitIdle_g____getter_69_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a64a0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitIdle_g____getter_69_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|sit_idle");
    g_data_057ad3c6 = '\x01';
  }
  return "Amarture_VER2|sit_idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitIdleCrawler>g____getter|70_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitIdleCrawler_g____getter_70_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a64d0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitIdleCrawler_g____getter_70_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|crawler.sit.idle");
    g_data_057ad3c7 = '\x01';
  }
  return "Amarture_VER2|crawler.sit.idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitDown>g____getter|71_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitDown_g____getter_71_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6500

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitDown_g____getter_71_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|sit_down");
    g_data_057ad3c8 = '\x01';
  }
  return "Amarture_VER2|sit_down";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitUp>g____getter|72_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitUp_g____getter_72_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6530

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitUp_g____getter_72_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|sit_getup");
    g_data_057ad3c9 = '\x01';
  }
  return "Amarture_VER2|sit_getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitUpCrawler>g____getter|73_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitUpCrawler_g____getter_73_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6560

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitUpCrawler_g____getter_73_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3ca == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|crawler.getup");
    g_data_057ad3ca = '\x01';
  }
  return "Amarture_VER2|crawler.getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitFall>g____getter|74_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitFall_g____getter_74_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6590

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitFall_g____getter_74_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3cb == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|sit_hunt_down");
    g_data_057ad3cb = '\x01';
  }
  return "Amarture_VER2|sit_hunt_down";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitFallCrawler>g____getter|75_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitFallCrawler_g____getter_75_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a65c0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitFallCrawler_g____getter_75_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3cc == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|crawler.hunt.down");
    g_data_057ad3cc = '\x01';
  }
  return "Amarture_VER2|crawler.hunt.down";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Turn90L>g____getter|76_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90L_g____getter_76_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a65f0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90L_g____getter_76_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3cd == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|turnaround.L");
    g_data_057ad3cd = '\x01';
  }
  return "Amarture_VER2|turnaround.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Turn90R>g____getter|77_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90R_g____getter_77_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6620

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90R_g____getter_77_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3ce == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|turnaround.R");
    g_data_057ad3ce = '\x01';
  }
  return "Amarture_VER2|turnaround.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Turn90LCrawler>g____getter|78_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90LCrawler_g____getter_78_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6650

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90LCrawler_g____getter_78_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3cf == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|crawler.turnaround.L");
    g_data_057ad3cf = '\x01';
  }
  return "Amarture_VER2|crawler.turnaround.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Turn90RCrawler>g____getter|79_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90RCrawler_g____getter_79_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6680

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Turn90RCrawler_g____getter_79_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|crawler.turnaround.R");
    g_data_057ad3d0 = '\x01';
  }
  return "Amarture_VER2|crawler.turnaround.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Blind>g____getter|80_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Blind_g____getter_80_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a66b0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__Blind_g____getter_80_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|hit.eye");
    g_data_057ad3d1 = '\x01';
  }
  return "Amarture_VER2|hit.eye";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitBlind>g____getter|81_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitBlind_g____getter_81_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a66e0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__SitBlind_g____getter_81_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|sit_hit_eye");
    g_data_057ad3d2 = '\x01';
  }
  return "Amarture_VER2|sit_hit_eye";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__BlindCrawler>g____getter|82_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__BlindCrawler_g____getter_82_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6710

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__BlindCrawler_g____getter_82_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|crawler.hiteyes");
    g_data_057ad3d3 = '\x01';
  }
  return "Amarture_VER2|crawler.hiteyes";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__ArmHurtL>g____getter|83_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__ArmHurtL_g____getter_83_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6740

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__ArmHurtL_g____getter_83_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3d4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|arm_hurt_L");
    g_data_057ad3d4 = '\x01';
  }
  return "Amarture_VER2|arm_hurt_L";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__ArmHurtR>g____getter|84_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__ArmHurtR_g____getter_84_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6770

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__ArmHurtR_g____getter_84_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|arm_hurt_R");
    g_data_057ad3d5 = '\x01';
  }
  return "Amarture_VER2|arm_hurt_R";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__CoverNape>g____getter|85_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__CoverNape_g____getter_85_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a67a0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__CoverNape_g____getter_85_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|idle.recovery");
    g_data_057ad3d6 = '\x01';
  }
  return "Amarture_VER2|idle.recovery";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteLaugh>g____getter|86_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteLaugh_g____getter_86_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a67d0

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteLaugh_g____getter_86_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|laugh");
    g_data_057ad3d7 = '\x01';
  }
  return "Amarture_VER2|laugh";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteNod>g____getter|87_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteNod_g____getter_87_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6800

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteNod_g____getter_87_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|emote_titan_yes");
    g_data_057ad3d8 = '\x01';
  }
  return "Amarture_VER2|emote_titan_yes";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteShake>g____getter|88_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteShake_g____getter_88_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6830

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteShake_g____getter_88_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3d9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|emote_titan_no");
    g_data_057ad3d9 = '\x01';
  }
  return "Amarture_VER2|emote_titan_no";
}


// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteRoar>g____getter|89_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteRoar_g____getter_89_0 (CustomLogic_CustomLogicTitanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41a6860

Il2CppObject *
CustomLogic_CustomLogicTitanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteRoar_g____getter_89_0
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad3da == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.scream");
    g_data_057ad3da = '\x01';
  }
  return "Amarture_VER2|attack.scream";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTitanAnimationEnum___ctor (CustomLogic_CustomLogicTitanAnimationEnum_o* __this, const MethodInfo* method);
// 0x419e2c0

void CustomLogic_CustomLogicTitanAnimationEnum___ctor
               (CustomLogic_CustomLogicTitanAnimationEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad382 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad382 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Idle
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Idle (const MethodInfo* method);
// 0x419e330

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Idle(MethodInfo *method)

{
  if (g_data_057ad383 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|idle");
    g_data_057ad383 = '\x01';
  }
  return "Amarture_VER2|idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_RunAbnormal
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_RunAbnormal (const MethodInfo* method);
// 0x419e360

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_RunAbnormal(MethodInfo *method)

{
  if (g_data_057ad384 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|run.abnormal");
    g_data_057ad384 = '\x01';
  }
  return "Amarture_VER2|run.abnormal";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SprintAbnormal
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SprintAbnormal (const MethodInfo* method);
// 0x419e390

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SprintAbnormal(MethodInfo *method)

{
  if (g_data_057ad385 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|run.abnormal.1");
    g_data_057ad385 = '\x01';
  }
  return "Amarture_VER2|run.abnormal.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_RunCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_RunCrawler (const MethodInfo* method);
// 0x419e3c0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_RunCrawler(MethodInfo *method)

{
  if (g_data_057ad386 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|crawler.run");
    g_data_057ad386 = '\x01';
  }
  return "Amarture_VER2|crawler.run";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_IdleCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_IdleCrawler (const MethodInfo* method);
// 0x419e3f0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_IdleCrawler(MethodInfo *method)

{
  if (g_data_057ad387 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|crawler.idle");
    g_data_057ad387 = '\x01';
  }
  return "Amarture_VER2|crawler.idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_JumpCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_JumpCrawler (const MethodInfo* method);
// 0x419e420

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_JumpCrawler(MethodInfo *method)

{
  if (g_data_057ad388 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.crawler.jump.0");
    g_data_057ad388 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_FallCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_FallCrawler (const MethodInfo* method);
// 0x419e450

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_FallCrawler(MethodInfo *method)

{
  if (g_data_057ad389 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.crawler.jump.1");
    g_data_057ad389 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_LandCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_LandCrawler (const MethodInfo* method);
// 0x419e480

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_LandCrawler(MethodInfo *method)

{
  if (g_data_057ad38a == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.crawler.jump.2");
    g_data_057ad38a = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.2";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Walk (const MethodInfo* method);
// 0x419e4b0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Walk(MethodInfo *method)

{
  if (g_data_057ad38b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|run.walk");
    g_data_057ad38b = '\x01';
  }
  return "Amarture_VER2|run.walk";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Jump (const MethodInfo* method);
// 0x419e4e0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Jump(MethodInfo *method)

{
  if (g_data_057ad38c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.jumper.0");
    g_data_057ad38c = '\x01';
  }
  return "Amarture_VER2|attack.jumper.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Fall
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Fall (const MethodInfo* method);
// 0x419e510

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Fall(MethodInfo *method)

{
  if (g_data_057ad38d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.jumper.1");
    g_data_057ad38d = '\x01';
  }
  return "Amarture_VER2|attack.jumper.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Land (const MethodInfo* method);
// 0x419e540

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Land(MethodInfo *method)

{
  if (g_data_057ad38e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.jumper.2");
    g_data_057ad38e = '\x01';
  }
  return "Amarture_VER2|attack.jumper.2";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Stun
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Stun (const MethodInfo* method);
// 0x419e570

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Stun(MethodInfo *method)

{
  if (g_data_057ad38f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|hit.eren.L");
    g_data_057ad38f = '\x01';
  }
  return "Amarture_VER2|hit.eren.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_StunLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_StunLeft (const MethodInfo* method);
// 0x419e5a0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_StunLeft(MethodInfo *method)

{
  if (g_data_057ad390 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|hit.eren.L");
    g_data_057ad390 = '\x01';
  }
  return "Amarture_VER2|hit.eren.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_StunRight
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_StunRight (const MethodInfo* method);
// 0x419e5d0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_StunRight(MethodInfo *method)

{
  if (g_data_057ad391 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|hit.eren.R");
    g_data_057ad391 = '\x01';
  }
  return "Amarture_VER2|hit.eren.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieBack
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieBack (const MethodInfo* method);
// 0x419e600

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieBack(MethodInfo *method)

{
  if (g_data_057ad392 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|die.back");
    g_data_057ad392 = '\x01';
  }
  return "Amarture_VER2|die.back";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieFront
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieFront (const MethodInfo* method);
// 0x419e630

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieFront(MethodInfo *method)

{
  if (g_data_057ad393 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|die.front");
    g_data_057ad393 = '\x01';
  }
  return "Amarture_VER2|die.front";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieGround
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieGround (const MethodInfo* method);
// 0x419e660

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieGround(MethodInfo *method)

{
  if (g_data_057ad394 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|die.ground");
    g_data_057ad394 = '\x01';
  }
  return "Amarture_VER2|die.ground";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieCrawler (const MethodInfo* method);
// 0x419e690

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieCrawler(MethodInfo *method)

{
  if (g_data_057ad395 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|crawler.die");
    g_data_057ad395 = '\x01';
  }
  return "Amarture_VER2|crawler.die";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_DieSit
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_DieSit (const MethodInfo* method);
// 0x419e6c0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_DieSit(MethodInfo *method)

{
  if (g_data_057ad396 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|sit_die");
    g_data_057ad396 = '\x01';
  }
  return "Amarture_VER2|sit_die";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackPunchCombo
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackPunchCombo (const MethodInfo* method);
// 0x419e6f0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackPunchCombo(MethodInfo *method)

{
  if (g_data_057ad397 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.combo");
    g_data_057ad397 = '\x01';
  }
  return "Amarture_VER2|attack.combo";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackPunch
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackPunch (const MethodInfo* method);
// 0x419e720

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackPunch(MethodInfo *method)

{
  if (g_data_057ad398 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.comboPunch");
    g_data_057ad398 = '\x01';
  }
  return "Amarture_VER2|attack.comboPunch";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlam
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlam (const MethodInfo* method);
// 0x419e750

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlam(MethodInfo *method)

{
  if (g_data_057ad399 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.front.ground");
    g_data_057ad399 = '\x01';
  }
  return "Amarture_VER2|attack.front.ground";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBellyFlop
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBellyFlop (const MethodInfo* method);
// 0x419e780

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBellyFlop(MethodInfo *method)

{
  if (g_data_057ad39a == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.abnormal.jump");
    g_data_057ad39a = '\x01';
  }
  return "Amarture_VER2|attack.abnormal.jump";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBellyFlopGetup
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBellyFlopGetup (const MethodInfo* method);
// 0x419e7b0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBellyFlopGetup(MethodInfo *method)

{
  if (g_data_057ad39b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.abnormal.getup");
    g_data_057ad39b = '\x01';
  }
  return "Amarture_VER2|attack.abnormal.getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackKick
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackKick (const MethodInfo* method);
// 0x419e7e0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackKick(MethodInfo *method)

{
  if (g_data_057ad39c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.kick");
    g_data_057ad39c = '\x01';
  }
  return "Amarture_VER2|attack.kick";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackStomp
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackStomp (const MethodInfo* method);
// 0x419e810

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackStomp(MethodInfo *method)

{
  if (g_data_057ad39d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.stomp");
    g_data_057ad39d = '\x01';
  }
  return "Amarture_VER2|attack.stomp";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSwingL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSwingL (const MethodInfo* method);
// 0x419e840

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSwingL(MethodInfo *method)

{
  if (g_data_057ad39e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.swing.l");
    g_data_057ad39e = '\x01';
  }
  return "Amarture_VER2|attack.swing.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSwingR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSwingR (const MethodInfo* method);
// 0x419e870

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSwingR(MethodInfo *method)

{
  if (g_data_057ad39f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.swing.r");
    g_data_057ad39f = '\x01';
  }
  return "Amarture_VER2|attack.swing.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBiteF
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteF (const MethodInfo* method);
// 0x419e8a0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteF(MethodInfo *method)

{
  if (g_data_057ad3a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|bite");
    g_data_057ad3a0 = '\x01';
  }
  return "Amarture_VER2|bite";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBiteL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteL (const MethodInfo* method);
// 0x419e8d0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteL(MethodInfo *method)

{
  if (g_data_057ad3a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|bite.l");
    g_data_057ad3a1 = '\x01';
  }
  return "Amarture_VER2|bite.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBiteR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteR (const MethodInfo* method);
// 0x419e900

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBiteR(MethodInfo *method)

{
  if (g_data_057ad3a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|bite.r");
    g_data_057ad3a2 = '\x01';
  }
  return "Amarture_VER2|bite.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabAirFarL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirFarL (const MethodInfo* method);
// 0x419e930

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirFarL(MethodInfo *method)

{
  if (g_data_057ad3a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.air.far.l");
    g_data_057ad3a3 = '\x01';
  }
  return "Amarture_VER2|grab.air.far.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabAirFarR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirFarR (const MethodInfo* method);
// 0x419e960

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirFarR(MethodInfo *method)

{
  if (g_data_057ad3a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.air.far.r");
    g_data_057ad3a4 = '\x01';
  }
  return "Amarture_VER2|grab.air.far.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabAirL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirL (const MethodInfo* method);
// 0x419e990

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirL(MethodInfo *method)

{
  if (g_data_057ad3a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.air.short.l");
    g_data_057ad3a5 = '\x01';
  }
  return "Amarture_VER2|grab.air.short.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabAirR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirR (const MethodInfo* method);
// 0x419e9c0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabAirR(MethodInfo *method)

{
  if (g_data_057ad3a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.air.short.r");
    g_data_057ad3a6 = '\x01';
  }
  return "Amarture_VER2|grab.air.short.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabBackL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabBackL (const MethodInfo* method);
// 0x419e9f0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabBackL(MethodInfo *method)

{
  if (g_data_057ad3a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.back.l");
    g_data_057ad3a7 = '\x01';
  }
  return "Amarture_VER2|grab.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabBackR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabBackR (const MethodInfo* method);
// 0x419ea20

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabBackR(MethodInfo *method)

{
  if (g_data_057ad3a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.back.r");
    g_data_057ad3a8 = '\x01';
  }
  return "Amarture_VER2|grab.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabCoreL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabCoreL (const MethodInfo* method);
// 0x419ea50

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabCoreL(MethodInfo *method)

{
  if (g_data_057ad3a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.core.L");
    g_data_057ad3a9 = '\x01';
  }
  return "Amarture_VER2|grab.core.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabCoreR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabCoreR (const MethodInfo* method);
// 0x419ea80

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabCoreR(MethodInfo *method)

{
  if (g_data_057ad3aa == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.core.R");
    g_data_057ad3aa = '\x01';
  }
  return "Amarture_VER2|grab.core.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabGroundBackL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundBackL (const MethodInfo* method);
// 0x419eab0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundBackL(MethodInfo *method)

{
  if (g_data_057ad3ab == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.ground.back.l");
    g_data_057ad3ab = '\x01';
  }
  return "Amarture_VER2|grab.ground.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabGroundBackR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundBackR (const MethodInfo* method);
// 0x419eae0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundBackR(MethodInfo *method)

{
  if (g_data_057ad3ac == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.ground.back.r");
    g_data_057ad3ac = '\x01';
  }
  return "Amarture_VER2|grab.ground.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabGroundFrontL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundFrontL (const MethodInfo* method);
// 0x419eb10

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundFrontL(MethodInfo *method)

{
  if (g_data_057ad3ad == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.ground.front.l");
    g_data_057ad3ad = '\x01';
  }
  return "Amarture_VER2|grab.ground.front.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabGroundFrontR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundFrontR (const MethodInfo* method);
// 0x419eb40

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabGroundFrontR(MethodInfo *method)

{
  if (g_data_057ad3ae == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.ground.front.r");
    g_data_057ad3ae = '\x01';
  }
  return "Amarture_VER2|grab.ground.front.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHeadBackL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadBackL (const MethodInfo* method);
// 0x419eb70

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadBackL(MethodInfo *method)

{
  if (g_data_057ad3af == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.head.back.l");
    g_data_057ad3af = '\x01';
  }
  return "Amarture_VER2|grab.head.back.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHeadBackR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadBackR (const MethodInfo* method);
// 0x419eba0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadBackR(MethodInfo *method)

{
  if (g_data_057ad3b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.head.back.r");
    g_data_057ad3b0 = '\x01';
  }
  return "Amarture_VER2|grab.head.back.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHeadFrontL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadFrontL (const MethodInfo* method);
// 0x419ebd0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadFrontL(MethodInfo *method)

{
  if (g_data_057ad3b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.head.front.1");
    g_data_057ad3b1 = '\x01';
  }
  return "Amarture_VER2|grab.head.front.1";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHeadFrontR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadFrontR (const MethodInfo* method);
// 0x419ec00

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHeadFrontR(MethodInfo *method)

{
  if (g_data_057ad3b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.head.front.r");
    g_data_057ad3b2 = '\x01';
  }
  return "Amarture_VER2|grab.head.front.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHighL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHighL (const MethodInfo* method);
// 0x419ec30

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHighL(MethodInfo *method)

{
  if (g_data_057ad3b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.high.l");
    g_data_057ad3b3 = '\x01';
  }
  return "Amarture_VER2|grab.high.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHighR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHighR (const MethodInfo* method);
// 0x419ec60

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabHighR(MethodInfo *method)

{
  if (g_data_057ad3b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.high.r");
    g_data_057ad3b4 = '\x01';
  }
  return "Amarture_VER2|grab.high.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabStomachL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabStomachL (const MethodInfo* method);
// 0x419ec90

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabStomachL(MethodInfo *method)

{
  if (g_data_057ad3b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.stomach.l");
    g_data_057ad3b5 = '\x01';
  }
  return "Amarture_VER2|grab.stomach.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabStomachR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabStomachR (const MethodInfo* method);
// 0x419ecc0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackGrabStomachR(MethodInfo *method)

{
  if (g_data_057ad3b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|grab.stomach.r");
    g_data_057ad3b6 = '\x01';
  }
  return "Amarture_VER2|grab.stomach.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackEatL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackEatL (const MethodInfo* method);
// 0x419ecf0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackEatL(MethodInfo *method)

{
  if (g_data_057ad3b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|eat.l");
    g_data_057ad3b7 = '\x01';
  }
  return "Amarture_VER2|eat.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackEatR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackEatR (const MethodInfo* method);
// 0x419ed20

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackEatR(MethodInfo *method)

{
  if (g_data_057ad3b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|eat.r");
    g_data_057ad3b8 = '\x01';
  }
  return "Amarture_VER2|eat.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapHighL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapHighL (const MethodInfo* method);
// 0x419ed50

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapHighL(MethodInfo *method)

{
  if (g_data_057ad3b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.anti.AE.high.l");
    g_data_057ad3b9 = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.high.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapHighR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapHighR (const MethodInfo* method);
// 0x419ed80

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapHighR(MethodInfo *method)

{
  if (g_data_057ad3ba == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.anti.AE.high.r");
    g_data_057ad3ba = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.high.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapL (const MethodInfo* method);
// 0x419edb0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapL(MethodInfo *method)

{
  if (g_data_057ad3bb == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.anti.AE.l");
    g_data_057ad3bb = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapR (const MethodInfo* method);
// 0x419ede0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapR(MethodInfo *method)

{
  if (g_data_057ad3bc == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.anti.AE.r");
    g_data_057ad3bc = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapLowL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapLowL (const MethodInfo* method);
// 0x419ee10

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapLowL(MethodInfo *method)

{
  if (g_data_057ad3bd == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.anti.AE.low.l");
    g_data_057ad3bd = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.low.l";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapLowR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapLowR (const MethodInfo* method);
// 0x419ee40

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackSlapLowR(MethodInfo *method)

{
  if (g_data_057ad3be == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.anti.AE.low.r");
    g_data_057ad3be = '\x01';
  }
  return "Amarture_VER2|attack.anti.AE.low.r";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBrushChestL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBrushChestL (const MethodInfo* method);
// 0x419ee70

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBrushChestL(MethodInfo *method)

{
  if (g_data_057ad3bf == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.chest.L");
    g_data_057ad3bf = '\x01';
  }
  return "Amarture_VER2|attack.chest.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBrushChestR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBrushChestR (const MethodInfo* method);
// 0x419eea0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackBrushChestR(MethodInfo *method)

{
  if (g_data_057ad3c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.chest.R");
    g_data_057ad3c0 = '\x01';
  }
  return "Amarture_VER2|attack.chest.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackHitBack
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackHitBack (const MethodInfo* method);
// 0x419eed0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackHitBack(MethodInfo *method)

{
  if (g_data_057ad3c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.slap.back");
    g_data_057ad3c1 = '\x01';
  }
  return "Amarture_VER2|attack.slap.back";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackHitFace
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackHitFace (const MethodInfo* method);
// 0x419ef00

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackHitFace(MethodInfo *method)

{
  if (g_data_057ad3c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.slap.face");
    g_data_057ad3c2 = '\x01';
  }
  return "Amarture_VER2|attack.slap.face";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackRockThrow
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackRockThrow (const MethodInfo* method);
// 0x419ef30

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackRockThrow(MethodInfo *method)

{
  if (g_data_057ad3c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.throw");
    g_data_057ad3c3 = '\x01';
  }
  return "Amarture_VER2|attack.throw";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackJump
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackJump (const MethodInfo* method);
// 0x419ef60

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackJump(MethodInfo *method)

{
  if (g_data_057ad3c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.jumper.0");
    g_data_057ad3c4 = '\x01';
  }
  return "Amarture_VER2|attack.jumper.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackJumpCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_AttackJumpCrawler (const MethodInfo* method);
// 0x419ef90

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_AttackJumpCrawler(MethodInfo *method)

{
  if (g_data_057ad3c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.crawler.jump.0");
    g_data_057ad3c5 = '\x01';
  }
  return "Amarture_VER2|attack.crawler.jump.0";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitIdle
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitIdle (const MethodInfo* method);
// 0x419efc0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitIdle(MethodInfo *method)

{
  if (g_data_057ad3c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|sit_idle");
    g_data_057ad3c6 = '\x01';
  }
  return "Amarture_VER2|sit_idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitIdleCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitIdleCrawler (const MethodInfo* method);
// 0x419eff0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitIdleCrawler(MethodInfo *method)

{
  if (g_data_057ad3c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|crawler.sit.idle");
    g_data_057ad3c7 = '\x01';
  }
  return "Amarture_VER2|crawler.sit.idle";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitDown
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitDown (const MethodInfo* method);
// 0x419f020

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitDown(MethodInfo *method)

{
  if (g_data_057ad3c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|sit_down");
    g_data_057ad3c8 = '\x01';
  }
  return "Amarture_VER2|sit_down";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitUp
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitUp (const MethodInfo* method);
// 0x419f050

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitUp(MethodInfo *method)

{
  if (g_data_057ad3c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|sit_getup");
    g_data_057ad3c9 = '\x01';
  }
  return "Amarture_VER2|sit_getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitUpCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitUpCrawler (const MethodInfo* method);
// 0x419f080

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitUpCrawler(MethodInfo *method)

{
  if (g_data_057ad3ca == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|crawler.getup");
    g_data_057ad3ca = '\x01';
  }
  return "Amarture_VER2|crawler.getup";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitFall
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitFall (const MethodInfo* method);
// 0x419f0b0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitFall(MethodInfo *method)

{
  if (g_data_057ad3cb == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|sit_hunt_down");
    g_data_057ad3cb = '\x01';
  }
  return "Amarture_VER2|sit_hunt_down";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitFallCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitFallCrawler (const MethodInfo* method);
// 0x419f0e0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitFallCrawler(MethodInfo *method)

{
  if (g_data_057ad3cc == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|crawler.hunt.down");
    g_data_057ad3cc = '\x01';
  }
  return "Amarture_VER2|crawler.hunt.down";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Turn90L
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90L (const MethodInfo* method);
// 0x419f110

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90L(MethodInfo *method)

{
  if (g_data_057ad3cd == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|turnaround.L");
    g_data_057ad3cd = '\x01';
  }
  return "Amarture_VER2|turnaround.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Turn90R
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90R (const MethodInfo* method);
// 0x419f140

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90R(MethodInfo *method)

{
  if (g_data_057ad3ce == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|turnaround.R");
    g_data_057ad3ce = '\x01';
  }
  return "Amarture_VER2|turnaround.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Turn90LCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90LCrawler (const MethodInfo* method);
// 0x419f170

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90LCrawler(MethodInfo *method)

{
  if (g_data_057ad3cf == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|crawler.turnaround.L");
    g_data_057ad3cf = '\x01';
  }
  return "Amarture_VER2|crawler.turnaround.L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Turn90RCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90RCrawler (const MethodInfo* method);
// 0x419f1a0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Turn90RCrawler(MethodInfo *method)

{
  if (g_data_057ad3d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|crawler.turnaround.R");
    g_data_057ad3d0 = '\x01';
  }
  return "Amarture_VER2|crawler.turnaround.R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_Blind
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_Blind (const MethodInfo* method);
// 0x419f1d0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_Blind(MethodInfo *method)

{
  if (g_data_057ad3d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|hit.eye");
    g_data_057ad3d1 = '\x01';
  }
  return "Amarture_VER2|hit.eye";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_SitBlind
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_SitBlind (const MethodInfo* method);
// 0x419f200

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_SitBlind(MethodInfo *method)

{
  if (g_data_057ad3d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|sit_hit_eye");
    g_data_057ad3d2 = '\x01';
  }
  return "Amarture_VER2|sit_hit_eye";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_BlindCrawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_BlindCrawler (const MethodInfo* method);
// 0x419f230

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_BlindCrawler(MethodInfo *method)

{
  if (g_data_057ad3d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|crawler.hiteyes");
    g_data_057ad3d3 = '\x01';
  }
  return "Amarture_VER2|crawler.hiteyes";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_ArmHurtL
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_ArmHurtL (const MethodInfo* method);
// 0x419f260

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_ArmHurtL(MethodInfo *method)

{
  if (g_data_057ad3d4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|arm_hurt_L");
    g_data_057ad3d4 = '\x01';
  }
  return "Amarture_VER2|arm_hurt_L";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_ArmHurtR
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_ArmHurtR (const MethodInfo* method);
// 0x419f290

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_ArmHurtR(MethodInfo *method)

{
  if (g_data_057ad3d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|arm_hurt_R");
    g_data_057ad3d5 = '\x01';
  }
  return "Amarture_VER2|arm_hurt_R";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_CoverNape
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_CoverNape (const MethodInfo* method);
// 0x419f2c0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_CoverNape(MethodInfo *method)

{
  if (g_data_057ad3d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|idle.recovery");
    g_data_057ad3d6 = '\x01';
  }
  return "Amarture_VER2|idle.recovery";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_EmoteLaugh
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteLaugh (const MethodInfo* method);
// 0x419f2f0

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteLaugh(MethodInfo *method)

{
  if (g_data_057ad3d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|laugh");
    g_data_057ad3d7 = '\x01';
  }
  return "Amarture_VER2|laugh";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_EmoteNod
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteNod (const MethodInfo* method);
// 0x419f320

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteNod(MethodInfo *method)

{
  if (g_data_057ad3d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|emote_titan_yes");
    g_data_057ad3d8 = '\x01';
  }
  return "Amarture_VER2|emote_titan_yes";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_EmoteShake
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteShake (const MethodInfo* method);
// 0x419f350

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteShake(MethodInfo *method)

{
  if (g_data_057ad3d9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|emote_titan_no");
    g_data_057ad3d9 = '\x01';
  }
  return "Amarture_VER2|emote_titan_no";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_EmoteRoar
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteRoar (const MethodInfo* method);
// 0x419f380

System_String_o * CustomLogic_CustomLogicTitanAnimationEnum__get_EmoteRoar(MethodInfo *method)

{
  if (g_data_057ad3da == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2|attack.scream");
    g_data_057ad3da = '\x01';
  }
  return "Amarture_VER2|attack.scream";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanAnimationEnum__get_ClassName (CustomLogic_CustomLogicTitanAnimationEnum_o* __this, const MethodInfo* method);
// 0x419f3b0

System_String_o *
CustomLogic_CustomLogicTitanAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad3db == '\0') {
    il2cpp_runtime_helper_023445d0(&"TitanAnimationEnum");
    g_data_057ad3db = '\x01';
  }
  return "TitanAnimationEnum";
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTitanAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicTitanAnimationEnum_o* __this, const MethodInfo* method);
// 0x419f3e0

bool_conflict
CustomLogic_CustomLogicTitanAnimationEnum__get_IsAbstract
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTitanAnimationEnum__get_IsStatic (CustomLogic_CustomLogicTitanAnimationEnum_o* __this, const MethodInfo* method);
// 0x419f3f0

bool_conflict
CustomLogic_CustomLogicTitanAnimationEnum__get_IsStatic
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTitanAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTitanAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTitanAnimationEnum_o* __this, const MethodInfo* method);
// 0x419f400

bool_conflict
CustomLogic_CustomLogicTitanAnimationEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicTitanAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


