// Type: CustomLogic.CustomLogicAnnieAnimationEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAnnieAnimationEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicAnnieAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAnnieAnimationEnum_o* CustomLogic_CustomLogicAnnieAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4146fe0

CustomLogic_CustomLogicAnnieAnimationEnum_o *
CustomLogic_CustomLogicAnnieAnimationEnum_Factory__CreateInstance
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
  CustomLogic_CustomLogicAnnieAnimationEnum_o *pCVar9;
  undefined8 **ppuVar10;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057acbc8 == '\0') {
    pSStack_20 = (System_String_o *)0x4146ffc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAnnieAnimationEnum);
    g_data_057acbc8 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4147077;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4147026;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicAnnieAnimationEnum);
    if (g_data_057acba4 == '\0') {
      pSStack_20 = (System_String_o *)0x414703e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057acba4 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x414705d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4147067;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicAnnieAnimationEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x414707f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4147092;
  pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41470a1;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicAnnieAnimationEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x41470b0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x41470c0;
  pSVar3 = System_String__Concat_3af7150(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41470cf;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x41470d7;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSStack_20 = (System_String_o *)0x41470e7;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar3,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41470f3;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicAnnieAnimationEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x41470fe;
  pSVar7 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar3;
  if (g_data_057acbc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Run");
    il2cpp_runtime_helper_023445d0(&"EmoteWave");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBottomLeft");
    il2cpp_runtime_helper_023445d0(&"Die");
    il2cpp_runtime_helper_023445d0(&"AttackBrushHeadL");
    il2cpp_runtime_helper_023445d0(&"AttackComboBlind");
    il2cpp_runtime_helper_023445d0(&"AttackCombo");
    il2cpp_runtime_helper_023445d0(&"AttackBrushFrontL");
    il2cpp_runtime_helper_023445d0(&"AttackBrushHeadR");
    il2cpp_runtime_helper_023445d0(&"EmoteTaunt");
    il2cpp_runtime_helper_023445d0(&"AttackStomp");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBottomRight");
    il2cpp_runtime_helper_023445d0(&"Land");
    il2cpp_runtime_helper_023445d0(&"AttackGrabUpLeft");
    il2cpp_runtime_helper_023445d0(&"AttackGrabMidRight");
    il2cpp_runtime_helper_023445d0(&"AttackBrushBack");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"Stun");
    il2cpp_runtime_helper_023445d0(&"AttackSwing");
    il2cpp_runtime_helper_023445d0(&"EmoteSalute");
    il2cpp_runtime_helper_023445d0(&"SitIdle");
    il2cpp_runtime_helper_023445d0(&"AttackBite");
    il2cpp_runtime_helper_023445d0(&"AttackHead");
    il2cpp_runtime_helper_023445d0(&"AttackGrabUpRight");
    il2cpp_runtime_helper_023445d0(&"Walk");
    il2cpp_runtime_helper_023445d0(&"SitFall");
    il2cpp_runtime_helper_023445d0(&"AttackGrabUp");
    il2cpp_runtime_helper_023445d0(&"AttackBrushFrontR");
    il2cpp_runtime_helper_023445d0(&"Idle");
    il2cpp_runtime_helper_023445d0(&"Fall");
    il2cpp_runtime_helper_023445d0(&"AttackKick");
    il2cpp_runtime_helper_023445d0(&"SitUp");
    il2cpp_runtime_helper_023445d0(&"AttackGrabMidLeft");
    il2cpp_runtime_helper_023445d0(&"EmoteRoar");
    g_data_057acbc9 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar7,(MethodInfo *)0x0);
  if (uVar1 < 0x5376547a) {
    if (uVar1 < 0x350e21b3) {
      if (uVar1 < 0x12a6a2bb) {
        if (uVar1 < 0xab017f0) {
          if (uVar1 == 0x228de11) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"EmoteTaunt",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057acbe9 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteTaunt_g____getter_3);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
                g_data_057acbe9 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
              return pCVar9;
            }
          }
          else if (uVar1 == 0xab017ef) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabUpLeft",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057acbe2 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabUpLeft_g____ge);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
                g_data_057acbe2 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
              return pCVar9;
            }
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
            if (g_data_057acbcd == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_5_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
              g_data_057acbcd = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x12a6a2ba) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabBottomRight",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acbde == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabBottomRight_g);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
              g_data_057acbde = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 < 0x2cfd24da) {
        if (uVar1 == 0x22ccd730) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Walk",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acbcc == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Walk_g____getter_4_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
              g_data_057acbcc = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x2cfd24d9) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabBottomLeft",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acbdd == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabBottomLeft_g);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
              g_data_057acbdd = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x324d8372) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"EmoteWave",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acbea == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteWave_g____getter_34);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            g_data_057acbea = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x350e21b2) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackBrushFrontL",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acbd9 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushFrontL_g____g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            g_data_057acbd9 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x3d692a72) {
      if (uVar1 < 0x38122e2c) {
        if (uVar1 == 0x371c1522) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackStomp",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acbe5 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackStomp_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
              g_data_057acbe5 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x38122e2b) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackHead",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acbe6 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackHead_g____getter_3);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
              g_data_057acbe6 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x3acb63d7) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackBite",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acbe7 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBite_g____getter_3);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            g_data_057acbe7 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x3d692a71) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Die",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acbd0 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Die_g____getter_8_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            g_data_057acbd0 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x45516aab) {
      if (uVar1 == 0x44831a08) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackComboBlind",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acbd6 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackComboBlind_g____ge);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            g_data_057acbd6 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
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
          if (g_data_057acbd4 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitUp_g____getter_12_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            g_data_057acbd4 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          return pCVar9;
        }
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
        goto CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Idle;
      }
    }
    else if (uVar1 == 0x470e3e08) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackBrushFrontR",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acbda == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushFrontR_g____g);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          g_data_057acbda = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x53765479) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackCombo",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acbd5 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackCombo_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          g_data_057acbd5 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0x93e6a9c5) {
    if (uVar1 < 0x8006ece1) {
      if (uVar1 < 0x76917343) {
        if (uVar1 == 0x5d992b41) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Stun",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acbd1 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stun_g____getter_9_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
              g_data_057acbd1 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x76917342) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabUp",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acbe1 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabUp_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
              g_data_057acbe1 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x8006ece0) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabUpRight",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acbe3 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabUpRight_g____g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            g_data_057acbe3 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
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
          if (g_data_057acbce == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Fall_g____getter_6_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            g_data_057acbce = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x912e23bf) {
      if (uVar1 == 0x8d57e66a) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Run",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acbcb == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Run_g____getter_3_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            g_data_057acbcb = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
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
          if (g_data_057acbd2 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitFall_g____getter_10_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            g_data_057acbd2 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 == 0x92d2a9f1) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackSwing",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acbd7 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSwing_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          g_data_057acbd7 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x93e6a9c4) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackBrushBack",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acbd8 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushBack_g____get);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          g_data_057acbd8 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xc8f30ee8) {
    if (uVar1 < 0xc35fd7d4) {
      if (uVar1 == 0xbd457b0a) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabMidLeft",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acbdf == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabMidLeft_g____g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            g_data_057acbdf = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0xc35fd7d3) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"EmoteSalute",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acbe8 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteSalute_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            g_data_057acbe8 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          return pCVar9;
        }
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
        if (g_data_057acbeb == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteRoar_g____getter_35);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          g_data_057acbeb = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        return pCVar9;
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
        if (g_data_057acbe4 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackKick_g____getter_2);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          g_data_057acbe4 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xe308a058) {
    if (uVar1 == 0xdecfe799) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackBrushHeadR",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acbdc == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushHeadR_g____ge);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          g_data_057acbdc = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xe308a057) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackGrabMidRight",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acbe0 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabMidRight_g);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          g_data_057acbe0 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        return pCVar9;
      }
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
      if (g_data_057acbd3 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitIdle_g____getter_11_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        g_data_057acbd3 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
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
      if (g_data_057acbcf == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Land_g____getter_7_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        g_data_057acbcf = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
      return pCVar9;
    }
  }
  else if (uVar1 == 0xf8d01087) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackBrushHeadL",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057acbdb == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushHeadL_g____ge);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        g_data_057acbdb = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
      return pCVar9;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicAnnieAnimationEnum not found");
  pSVar3 = System_String__Concat_3af7150(pSVar3,(System_String_o *)pSVar7,pSVar4,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,pSVar3,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar7,uVar5);
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Idle:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar3;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar7;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar6;
  if (g_data_057acbca == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4147de9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle_g____getter_2_0);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4147df5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4147e01;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4147e0d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbca = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4147e23;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4147e3c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4147e4b;
  pCVar9 = (CustomLogic_CustomLogicAnnieAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4147e65;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return pCVar9;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4147100

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__CreateMemberBinding
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
  
  if (g_data_057acbc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Run");
    il2cpp_runtime_helper_023445d0(&"EmoteWave");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBottomLeft");
    il2cpp_runtime_helper_023445d0(&"Die");
    il2cpp_runtime_helper_023445d0(&"AttackBrushHeadL");
    il2cpp_runtime_helper_023445d0(&"AttackComboBlind");
    il2cpp_runtime_helper_023445d0(&"AttackCombo");
    il2cpp_runtime_helper_023445d0(&"AttackBrushFrontL");
    il2cpp_runtime_helper_023445d0(&"AttackBrushHeadR");
    il2cpp_runtime_helper_023445d0(&"EmoteTaunt");
    il2cpp_runtime_helper_023445d0(&"AttackStomp");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBottomRight");
    il2cpp_runtime_helper_023445d0(&"Land");
    il2cpp_runtime_helper_023445d0(&"AttackGrabUpLeft");
    il2cpp_runtime_helper_023445d0(&"AttackGrabMidRight");
    il2cpp_runtime_helper_023445d0(&"AttackBrushBack");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"Stun");
    il2cpp_runtime_helper_023445d0(&"AttackSwing");
    il2cpp_runtime_helper_023445d0(&"EmoteSalute");
    il2cpp_runtime_helper_023445d0(&"SitIdle");
    il2cpp_runtime_helper_023445d0(&"AttackBite");
    il2cpp_runtime_helper_023445d0(&"AttackHead");
    il2cpp_runtime_helper_023445d0(&"AttackGrabUpRight");
    il2cpp_runtime_helper_023445d0(&"Walk");
    il2cpp_runtime_helper_023445d0(&"SitFall");
    il2cpp_runtime_helper_023445d0(&"AttackGrabUp");
    il2cpp_runtime_helper_023445d0(&"AttackBrushFrontR");
    il2cpp_runtime_helper_023445d0(&"Idle");
    il2cpp_runtime_helper_023445d0(&"Fall");
    il2cpp_runtime_helper_023445d0(&"AttackKick");
    il2cpp_runtime_helper_023445d0(&"SitUp");
    il2cpp_runtime_helper_023445d0(&"AttackGrabMidLeft");
    il2cpp_runtime_helper_023445d0(&"EmoteRoar");
    g_data_057acbc9 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x5376547a) {
    if (uVar1 < 0x350e21b3) {
      if (uVar1 < 0x12a6a2bb) {
        if (uVar1 < 0xab017f0) {
          if (uVar1 == 0x228de11) {
            bVar2 = System_String__op_Equality(name,"EmoteTaunt",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057acbe9 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteTaunt_g____getter_3);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
                g_data_057acbe9 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if ((uVar1 == 0xab017ef) &&
                  (bVar2 = System_String__op_Equality(name,"AttackGrabUpLeft",(MethodInfo *)0x0),
                  (char)bVar2 != '\0')) {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acbe2 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabUpLeft_g____ge);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
              g_data_057acbe2 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
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
            if (g_data_057acbcd == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_5_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
              g_data_057acbcd = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x12a6a2ba) &&
                (bVar2 = System_String__op_Equality(name,"AttackGrabBottomRight",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acbde == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabBottomRight_g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            g_data_057acbde = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 < 0x2cfd24da) {
        if (uVar1 == 0x22ccd730) {
          bVar2 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acbcc == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Walk_g____getter_4_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
              g_data_057acbcc = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x2cfd24d9) &&
                (bVar2 = System_String__op_Equality(name,"AttackGrabBottomLeft",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acbdd == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabBottomLeft_g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            g_data_057acbdd = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x324d8372) {
        bVar2 = System_String__op_Equality(name,"EmoteWave",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acbea == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteWave_g____getter_34);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            g_data_057acbea = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x350e21b2) &&
              (bVar2 = System_String__op_Equality(name,"AttackBrushFrontL",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acbd9 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushFrontL_g____g);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          g_data_057acbd9 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x3d692a72) {
      if (uVar1 < 0x38122e2c) {
        if (uVar1 == 0x371c1522) {
          bVar2 = System_String__op_Equality(name,"AttackStomp",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acbe5 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackStomp_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
              g_data_057acbe5 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x38122e2b) &&
                (bVar2 = System_String__op_Equality(name,"AttackHead",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acbe6 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackHead_g____getter_3);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            g_data_057acbe6 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x3acb63d7) {
        bVar2 = System_String__op_Equality(name,"AttackBite",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acbe7 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBite_g____getter_3);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            g_data_057acbe7 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x3d692a71) &&
              (bVar2 = System_String__op_Equality(name,"Die",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acbd0 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Die_g____getter_8_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          g_data_057acbd0 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x45516aab) {
      if (uVar1 == 0x44831a08) {
        bVar2 = System_String__op_Equality(name,"AttackComboBlind",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acbd6 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackComboBlind_g____ge);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            g_data_057acbd6 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x45516aaa) &&
              (bVar2 = System_String__op_Equality(name,"SitUp",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acbd4 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitUp_g____getter_12_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          g_data_057acbd4 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x45aa17b3) {
      bVar2 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar4 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar4 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        goto CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Idle;
      }
    }
    else if (uVar1 == 0x470e3e08) {
      bVar2 = System_String__op_Equality(name,"AttackBrushFrontR",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acbda == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushFrontR_g____g);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          g_data_057acbda = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x53765479) &&
            (bVar2 = System_String__op_Equality(name,"AttackCombo",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acbd5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackCombo_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        g_data_057acbd5 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x93e6a9c5) {
    if (uVar1 < 0x8006ece1) {
      if (uVar1 < 0x76917343) {
        if (uVar1 == 0x5d992b41) {
          bVar2 = System_String__op_Equality(name,"Stun",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acbd1 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stun_g____getter_9_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
              g_data_057acbd1 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x76917342) &&
                (bVar2 = System_String__op_Equality(name,"AttackGrabUp",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acbe1 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabUp_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            g_data_057acbe1 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x8006ece0) {
        bVar2 = System_String__op_Equality(name,"AttackGrabUpRight",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acbe3 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabUpRight_g____g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            g_data_057acbe3 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
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
        if (g_data_057acbce == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Fall_g____getter_6_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          g_data_057acbce = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x912e23bf) {
      if (uVar1 == 0x8d57e66a) {
        bVar2 = System_String__op_Equality(name,"Run",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acbcb == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Run_g____getter_3_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            g_data_057acbcb = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x912e23be) &&
              (bVar2 = System_String__op_Equality(name,"SitFall",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acbd2 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitFall_g____getter_10_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          g_data_057acbd2 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x92d2a9f1) {
      bVar2 = System_String__op_Equality(name,"AttackSwing",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acbd7 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSwing_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          g_data_057acbd7 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x93e6a9c4) &&
            (bVar2 = System_String__op_Equality(name,"AttackBrushBack",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acbd8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushBack_g____get);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        g_data_057acbd8 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xc8f30ee8) {
    if (uVar1 < 0xc35fd7d4) {
      if (uVar1 == 0xbd457b0a) {
        bVar2 = System_String__op_Equality(name,"AttackGrabMidLeft",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acbdf == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabMidLeft_g____g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
            g_data_057acbdf = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0xc35fd7d3) &&
              (bVar2 = System_String__op_Equality(name,"EmoteSalute",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acbe8 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteSalute_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          g_data_057acbe8 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xc6f75897) {
      bVar2 = System_String__op_Equality(name,"EmoteRoar",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acbeb == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteRoar_g____getter_35);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          g_data_057acbeb = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xc8f30ee7) &&
            (bVar2 = System_String__op_Equality(name,"AttackKick",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acbe4 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackKick_g____getter_2);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        g_data_057acbe4 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xe308a058) {
    if (uVar1 == 0xdecfe799) {
      bVar2 = System_String__op_Equality(name,"AttackBrushHeadR",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acbdc == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushHeadR_g____ge);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
          g_data_057acbdc = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xe308a057) &&
            (bVar2 = System_String__op_Equality(name,"AttackGrabMidRight",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acbe0 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabMidRight_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        g_data_057acbe0 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xe6b2342d) {
    bVar2 = System_String__op_Equality(name,"SitIdle",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acbd3 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitIdle_g____getter_11_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        g_data_057acbd3 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xee1682bc) {
    bVar2 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acbcf == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Land_g____getter_7_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
        g_data_057acbcf = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xf8d01087) &&
          (bVar2 = System_String__op_Equality(name,"AttackBrushHeadL",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057acbdb == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushHeadL_g____ge);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
      g_data_057acbdb = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    System_Func_object__object____ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicAnnieAnimationEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Idle:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar4;
  if (g_data_057acbca == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4147de9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4147df5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4147e01;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4147e0d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbca = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4147e23;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4147e3c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4147e4b;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4147e65;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Idle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Idle (const MethodInfo* method);
// 0x4147dd0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Idle(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbca == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbca = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Run
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Run (const MethodInfo* method);
// 0x4147e70

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Run(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbcb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Run_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbcb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x4147f10

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbcc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Walk_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbcc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x4147fb0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbcd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbcd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Fall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Fall (const MethodInfo* method);
// 0x4148050

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Fall(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbce == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Fall_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbce = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x41480f0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Land(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbcf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Land_g____getter_7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbcf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Die
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Die (const MethodInfo* method);
// 0x4148190

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Die(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbd0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Die_g____getter_8_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbd0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Stun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Stun (const MethodInfo* method);
// 0x4148230

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Stun(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbd1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stun_g____getter_9_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbd1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__SitFall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__SitFall (const MethodInfo* method);
// 0x41482d0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__SitFall(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitFall_g____getter_10_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbd2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__SitIdle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__SitIdle (const MethodInfo* method);
// 0x4148370

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__SitIdle(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbd3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitIdle_g____getter_11_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbd3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__SitUp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__SitUp (const MethodInfo* method);
// 0x4148410

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__SitUp(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbd4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SitUp_g____getter_12_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbd4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackCombo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackCombo (const MethodInfo* method);
// 0x41484b0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackCombo(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbd5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackCombo_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbd5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackComboBlind
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackComboBlind (const MethodInfo* method);
// 0x4148550

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackComboBlind
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbd6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackComboBlind_g____ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbd6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSwing
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackSwing (const MethodInfo* method);
// 0x41485f0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackSwing(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbd7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSwing_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbd7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushBack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushBack (const MethodInfo* method);
// 0x4148690

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushBack
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbd8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushBack_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbd8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushFrontL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushFrontL (const MethodInfo* method);
// 0x4148730

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushFrontL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbd9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushFrontL_g____g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbd9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushFrontR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushFrontR (const MethodInfo* method);
// 0x41487d0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushFrontR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbda == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushFrontR_g____g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbda = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushHeadL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushHeadL (const MethodInfo* method);
// 0x4148870

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushHeadL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbdb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushHeadL_g____ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbdb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushHeadR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushHeadR (const MethodInfo* method);
// 0x4148910

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushHeadR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbdc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushHeadR_g____ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbdc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabBottomLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBottomLeft (const MethodInfo* method);
// 0x41489b0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBottomLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbdd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabBottomLeft_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbdd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabBottomRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBottomRight (const MethodInfo* method);
// 0x4148a50

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBottomRight
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbde == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabBottomRight_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbde = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabMidLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabMidLeft (const MethodInfo* method);
// 0x4148af0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabMidLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbdf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabMidLeft_g____g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbdf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabMidRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabMidRight (const MethodInfo* method);
// 0x4148b90

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabMidRight
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbe0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabMidRight_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbe0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabUp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabUp (const MethodInfo* method);
// 0x4148c30

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabUp(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbe1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabUp_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbe1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabUpLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabUpLeft (const MethodInfo* method);
// 0x4148cd0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabUpLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbe2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabUpLeft_g____ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbe2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabUpRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabUpRight (const MethodInfo* method);
// 0x4148d70

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabUpRight
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbe3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabUpRight_g____g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbe3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackKick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackKick (const MethodInfo* method);
// 0x4148e10

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackKick(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbe4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackKick_g____getter_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbe4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackStomp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackStomp (const MethodInfo* method);
// 0x4148eb0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackStomp(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbe5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackStomp_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbe5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackHead
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackHead (const MethodInfo* method);
// 0x4148f50

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackHead(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbe6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackHead_g____getter_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbe6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBite
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBite (const MethodInfo* method);
// 0x4148ff0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBite(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbe7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBite_g____getter_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbe7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteSalute
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteSalute (const MethodInfo* method);
// 0x4149090

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteSalute(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbe8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteSalute_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbe8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteTaunt
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteTaunt (const MethodInfo* method);
// 0x4149130

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteTaunt(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbe9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteTaunt_g____getter_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbe9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteWave
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteWave (const MethodInfo* method);
// 0x41491d0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteWave(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteWave_g____getter_34);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbea = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteRoar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar (const MethodInfo* method);
// 0x4149270

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (g_data_057acbeb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteRoar_g____getter_35);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
    g_data_057acbeb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAnnieAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x4149310

void CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057acbec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Run");
    il2cpp_runtime_helper_023445d0(&"EmoteWave");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBottomLeft");
    il2cpp_runtime_helper_023445d0(&"Die");
    il2cpp_runtime_helper_023445d0(&"AttackBrushHeadL");
    il2cpp_runtime_helper_023445d0(&"AttackComboBlind");
    il2cpp_runtime_helper_023445d0(&"AttackCombo");
    il2cpp_runtime_helper_023445d0(&"AttackBrushFrontL");
    il2cpp_runtime_helper_023445d0(&"AttackBrushHeadR");
    il2cpp_runtime_helper_023445d0(&"EmoteTaunt");
    il2cpp_runtime_helper_023445d0(&"AttackStomp");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBottomRight");
    il2cpp_runtime_helper_023445d0(&"Land");
    il2cpp_runtime_helper_023445d0(&"AttackGrabUpLeft");
    il2cpp_runtime_helper_023445d0(&"AttackGrabMidRight");
    il2cpp_runtime_helper_023445d0(&"AttackBrushBack");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"Stun");
    il2cpp_runtime_helper_023445d0(&"AttackSwing");
    il2cpp_runtime_helper_023445d0(&"EmoteSalute");
    il2cpp_runtime_helper_023445d0(&"SitIdle");
    il2cpp_runtime_helper_023445d0(&"AttackBite");
    il2cpp_runtime_helper_023445d0(&"AttackHead");
    il2cpp_runtime_helper_023445d0(&"AttackGrabUpRight");
    il2cpp_runtime_helper_023445d0(&"Walk");
    il2cpp_runtime_helper_023445d0(&"SitFall");
    il2cpp_runtime_helper_023445d0(&"AttackGrabUp");
    il2cpp_runtime_helper_023445d0(&"AttackBrushFrontR");
    il2cpp_runtime_helper_023445d0(&"Idle");
    il2cpp_runtime_helper_023445d0(&"Fall");
    il2cpp_runtime_helper_023445d0(&"AttackKick");
    il2cpp_runtime_helper_023445d0(&"SitUp");
    il2cpp_runtime_helper_023445d0(&"AttackGrabMidLeft");
    il2cpp_runtime_helper_023445d0(&"EmoteRoar");
    g_data_057acbec = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Idle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Run",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Walk",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Jump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Fall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Land",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Die",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Stun",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SitFall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SitIdle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SitUp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackCombo",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackComboBlind",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackSwing",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackBrushBack",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackBrushFrontL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackBrushFrontR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackBrushHeadL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackBrushHeadR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabBottomLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabBottomRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabMidLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabMidRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabUp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabUpLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabUpRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackKick",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackStomp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackHead",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackBite",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"EmoteSalute",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"EmoteTaunt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"EmoteWave",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"EmoteRoar",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057acba5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_idle");
    g_data_057acba5 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149820

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acba5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_idle");
    g_data_057acba5 = '\x01';
  }
  return "Armature_FemT|ft_idle";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_3_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149850

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_3_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acba6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_run");
    g_data_057acba6 = '\x01';
  }
  return "Armature_FemT|ft_run";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149880

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acba7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_walk");
    g_data_057acba7 = '\x01';
  }
  return "Armature_FemT|ft_walk";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_5_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x41498b0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_5_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acba8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_jump_start");
    g_data_057acba8 = '\x01';
  }
  return "Armature_FemT|ft_jump_start";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Fall>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_6_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x41498e0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_6_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acba9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_jump_air");
    g_data_057acba9 = '\x01';
  }
  return "Armature_FemT|ft_jump_air";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_7_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149910

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_7_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbaa == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_jump_land");
    g_data_057acbaa = '\x01';
  }
  return "Armature_FemT|ft_jump_land";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Die>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Die_g____getter_8_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149940

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Die_g____getter_8_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbab == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_die_shifter");
    g_data_057acbab = '\x01';
  }
  return "Armature_FemT|ft_die_shifter";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Stun>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_9_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149970

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_9_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbac == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_hit_titan");
    g_data_057acbac = '\x01';
  }
  return "Armature_FemT|ft_hit_titan";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__SitFall>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__SitFall_g____getter_10_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x41499a0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__SitFall_g____getter_10_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbad == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_legHurt");
    g_data_057acbad = '\x01';
  }
  return "Armature_FemT|ft_legHurt";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__SitIdle>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__SitIdle_g____getter_11_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x41499d0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__SitIdle_g____getter_11_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbae == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_legHurt_loop");
    g_data_057acbae = '\x01';
  }
  return "Armature_FemT|ft_legHurt_loop";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__SitUp>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__SitUp_g____getter_12_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149a00

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__SitUp_g____getter_12_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbaf == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_legHurt_getup");
    g_data_057acbaf = '\x01';
  }
  return "Armature_FemT|ft_legHurt_getup";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackCombo>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_13_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149a30

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_13_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbb0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_combo_full");
    g_data_057acbb0 = '\x01';
  }
  return "Armature_FemT|ft_attack_combo_full";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackComboBlind>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackComboBlind_g____getter_14_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149a60

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackComboBlind_g____getter_14_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_combo_blind_full");
    g_data_057acbb1 = '\x01';
  }
  return "Armature_FemT|ft_attack_combo_blind_full";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSwing>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackSwing_g____getter_15_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149a90

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackSwing_g____getter_15_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbb2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_front");
    g_data_057acbb2 = '\x01';
  }
  return "Armature_FemT|ft_attack_front";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushBack>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushBack_g____getter_16_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149ac0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushBack_g____getter_16_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_sweep_back");
    g_data_057acbb3 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_back";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushFrontL>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushFrontL_g____getter_17_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149af0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushFrontL_g____getter_17_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_sweep_front_left");
    g_data_057acbb4 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_front_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushFrontR>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushFrontR_g____getter_18_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149b20

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushFrontR_g____getter_18_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_sweep_front_right");
    g_data_057acbb5 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_front_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushHeadL>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushHeadL_g____getter_19_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149b50

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushHeadL_g____getter_19_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_sweep_head_b_l");
    g_data_057acbb6 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_head_b_l";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushHeadR>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushHeadR_g____getter_20_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149b80

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushHeadR_g____getter_20_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_sweep_head_b_r");
    g_data_057acbb7 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_head_b_r";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBottomLeft>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBottomLeft_g____getter_21_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149bb0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBottomLeft_g____getter_21_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_grab_bottom_left");
    g_data_057acbb8 = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_bottom_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBottomRight>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBottomRight_g____getter_22_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149be0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBottomRight_g____getter_22_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_grab_bottom_right");
    g_data_057acbb9 = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_bottom_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabMidLeft>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabMidLeft_g____getter_23_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149c10

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabMidLeft_g____getter_23_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbba == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_grab_mid_left");
    g_data_057acbba = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_mid_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabMidRight>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabMidRight_g____getter_24_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149c40

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabMidRight_g____getter_24_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbbb == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_grab_mid_right");
    g_data_057acbbb = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_mid_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabUp>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabUp_g____getter_25_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149c70

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabUp_g____getter_25_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbbc == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_grab_up");
    g_data_057acbbc = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_up";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabUpLeft>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabUpLeft_g____getter_26_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149ca0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabUpLeft_g____getter_26_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbbd == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_grab_up_left");
    g_data_057acbbd = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_up_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabUpRight>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabUpRight_g____getter_27_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149cd0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabUpRight_g____getter_27_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbbe == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_grab_up_right");
    g_data_057acbbe = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_up_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackKick>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_28_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149d00

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_28_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbbf == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_sweep");
    g_data_057acbbf = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackStomp>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_29_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149d30

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_29_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbc0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_core");
    g_data_057acbc0 = '\x01';
  }
  return "Armature_FemT|ft_attack_core";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackHead>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackHead_g____getter_30_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149d60

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackHead_g____getter_30_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbc1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_head");
    g_data_057acbc1 = '\x01';
  }
  return "Armature_FemT|ft_attack_head";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBite>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBite_g____getter_31_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149d90

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBite_g____getter_31_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbc2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_bite");
    g_data_057acbc2 = '\x01';
  }
  return "Armature_FemT|ft_attack_bite";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteSalute>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__EmoteSalute_g____getter_32_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149dc0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__EmoteSalute_g____getter_32_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_emote_salute");
    g_data_057acbc3 = '\x01';
  }
  return "Armature_FemT|ft_emote_salute";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteTaunt>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__EmoteTaunt_g____getter_33_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149df0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__EmoteTaunt_g____getter_33_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_emote_taunt");
    g_data_057acbc4 = '\x01';
  }
  return "Armature_FemT|ft_emote_taunt";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteWave>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__EmoteWave_g____getter_34_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149e20

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__EmoteWave_g____getter_34_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbc5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_emote_wave");
    g_data_057acbc5 = '\x01';
  }
  return "Armature_FemT|ft_emote_wave";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteRoar>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__EmoteRoar_g____getter_35_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x4149e50

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__EmoteRoar_g____getter_35_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acbc6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_mad1");
    g_data_057acbc6 = '\x01';
  }
  return "Armature_FemT|ft_mad1";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnnieAnimationEnum___ctor (CustomLogic_CustomLogicAnnieAnimationEnum_o* __this, const MethodInfo* method);
// 0x41468b0

void CustomLogic_CustomLogicAnnieAnimationEnum___ctor
               (CustomLogic_CustomLogicAnnieAnimationEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acba4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057acba4 = '\x01';
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


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Idle
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Idle (const MethodInfo* method);
// 0x4146920

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Idle(MethodInfo *method)

{
  if (g_data_057acba5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_idle");
    g_data_057acba5 = '\x01';
  }
  return "Armature_FemT|ft_idle";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Run
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Run (const MethodInfo* method);
// 0x4146950

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Run(MethodInfo *method)

{
  if (g_data_057acba6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_run");
    g_data_057acba6 = '\x01';
  }
  return "Armature_FemT|ft_run";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Walk (const MethodInfo* method);
// 0x4146980

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Walk(MethodInfo *method)

{
  if (g_data_057acba7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_walk");
    g_data_057acba7 = '\x01';
  }
  return "Armature_FemT|ft_walk";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Jump (const MethodInfo* method);
// 0x41469b0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Jump(MethodInfo *method)

{
  if (g_data_057acba8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_jump_start");
    g_data_057acba8 = '\x01';
  }
  return "Armature_FemT|ft_jump_start";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Fall
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Fall (const MethodInfo* method);
// 0x41469e0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Fall(MethodInfo *method)

{
  if (g_data_057acba9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_jump_air");
    g_data_057acba9 = '\x01';
  }
  return "Armature_FemT|ft_jump_air";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Land (const MethodInfo* method);
// 0x4146a10

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Land(MethodInfo *method)

{
  if (g_data_057acbaa == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_jump_land");
    g_data_057acbaa = '\x01';
  }
  return "Armature_FemT|ft_jump_land";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Die
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Die (const MethodInfo* method);
// 0x4146a40

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Die(MethodInfo *method)

{
  if (g_data_057acbab == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_die_shifter");
    g_data_057acbab = '\x01';
  }
  return "Armature_FemT|ft_die_shifter";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Stun
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Stun (const MethodInfo* method);
// 0x4146a70

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Stun(MethodInfo *method)

{
  if (g_data_057acbac == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_hit_titan");
    g_data_057acbac = '\x01';
  }
  return "Armature_FemT|ft_hit_titan";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_SitFall
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_SitFall (const MethodInfo* method);
// 0x4146aa0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_SitFall(MethodInfo *method)

{
  if (g_data_057acbad == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_legHurt");
    g_data_057acbad = '\x01';
  }
  return "Armature_FemT|ft_legHurt";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_SitIdle
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_SitIdle (const MethodInfo* method);
// 0x4146ad0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_SitIdle(MethodInfo *method)

{
  if (g_data_057acbae == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_legHurt_loop");
    g_data_057acbae = '\x01';
  }
  return "Armature_FemT|ft_legHurt_loop";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_SitUp
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_SitUp (const MethodInfo* method);
// 0x4146b00

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_SitUp(MethodInfo *method)

{
  if (g_data_057acbaf == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_legHurt_getup");
    g_data_057acbaf = '\x01';
  }
  return "Armature_FemT|ft_legHurt_getup";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackCombo
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackCombo (const MethodInfo* method);
// 0x4146b30

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackCombo(MethodInfo *method)

{
  if (g_data_057acbb0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_combo_full");
    g_data_057acbb0 = '\x01';
  }
  return "Armature_FemT|ft_attack_combo_full";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackComboBlind
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackComboBlind (const MethodInfo* method);
// 0x4146b60

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackComboBlind(MethodInfo *method)

{
  if (g_data_057acbb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_combo_blind_full");
    g_data_057acbb1 = '\x01';
  }
  return "Armature_FemT|ft_attack_combo_blind_full";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackSwing
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackSwing (const MethodInfo* method);
// 0x4146b90

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackSwing(MethodInfo *method)

{
  if (g_data_057acbb2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_front");
    g_data_057acbb2 = '\x01';
  }
  return "Armature_FemT|ft_attack_front";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBrushBack
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushBack (const MethodInfo* method);
// 0x4146bc0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushBack(MethodInfo *method)

{
  if (g_data_057acbb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_sweep_back");
    g_data_057acbb3 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_back";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBrushFrontL
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushFrontL (const MethodInfo* method);
// 0x4146bf0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushFrontL(MethodInfo *method)

{
  if (g_data_057acbb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_sweep_front_left");
    g_data_057acbb4 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_front_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBrushFrontR
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushFrontR (const MethodInfo* method);
// 0x4146c20

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushFrontR(MethodInfo *method)

{
  if (g_data_057acbb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_sweep_front_right");
    g_data_057acbb5 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_front_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBrushHeadL
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushHeadL (const MethodInfo* method);
// 0x4146c50

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushHeadL(MethodInfo *method)

{
  if (g_data_057acbb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_sweep_head_b_l");
    g_data_057acbb6 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_head_b_l";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBrushHeadR
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushHeadR (const MethodInfo* method);
// 0x4146c80

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushHeadR(MethodInfo *method)

{
  if (g_data_057acbb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_sweep_head_b_r");
    g_data_057acbb7 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_head_b_r";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabBottomLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabBottomLeft (const MethodInfo* method);
// 0x4146cb0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabBottomLeft(MethodInfo *method)

{
  if (g_data_057acbb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_grab_bottom_left");
    g_data_057acbb8 = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_bottom_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabBottomRight
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabBottomRight (const MethodInfo* method);
// 0x4146ce0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabBottomRight(MethodInfo *method)

{
  if (g_data_057acbb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_grab_bottom_right");
    g_data_057acbb9 = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_bottom_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabMidLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabMidLeft (const MethodInfo* method);
// 0x4146d10

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabMidLeft(MethodInfo *method)

{
  if (g_data_057acbba == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_grab_mid_left");
    g_data_057acbba = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_mid_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabMidRight
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabMidRight (const MethodInfo* method);
// 0x4146d40

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabMidRight(MethodInfo *method)

{
  if (g_data_057acbbb == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_grab_mid_right");
    g_data_057acbbb = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_mid_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabUp
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabUp (const MethodInfo* method);
// 0x4146d70

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabUp(MethodInfo *method)

{
  if (g_data_057acbbc == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_grab_up");
    g_data_057acbbc = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_up";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabUpLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabUpLeft (const MethodInfo* method);
// 0x4146da0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabUpLeft(MethodInfo *method)

{
  if (g_data_057acbbd == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_grab_up_left");
    g_data_057acbbd = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_up_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabUpRight
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabUpRight (const MethodInfo* method);
// 0x4146dd0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabUpRight(MethodInfo *method)

{
  if (g_data_057acbbe == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_grab_up_right");
    g_data_057acbbe = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_up_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackKick
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackKick (const MethodInfo* method);
// 0x4146e00

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackKick(MethodInfo *method)

{
  if (g_data_057acbbf == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_sweep");
    g_data_057acbbf = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackStomp
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackStomp (const MethodInfo* method);
// 0x4146e30

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackStomp(MethodInfo *method)

{
  if (g_data_057acbc0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_core");
    g_data_057acbc0 = '\x01';
  }
  return "Armature_FemT|ft_attack_core";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackHead
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackHead (const MethodInfo* method);
// 0x4146e60

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackHead(MethodInfo *method)

{
  if (g_data_057acbc1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_head");
    g_data_057acbc1 = '\x01';
  }
  return "Armature_FemT|ft_attack_head";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBite
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBite (const MethodInfo* method);
// 0x4146e90

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBite(MethodInfo *method)

{
  if (g_data_057acbc2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_attack_bite");
    g_data_057acbc2 = '\x01';
  }
  return "Armature_FemT|ft_attack_bite";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_EmoteSalute
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteSalute (const MethodInfo* method);
// 0x4146ec0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteSalute(MethodInfo *method)

{
  if (g_data_057acbc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_emote_salute");
    g_data_057acbc3 = '\x01';
  }
  return "Armature_FemT|ft_emote_salute";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_EmoteTaunt
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteTaunt (const MethodInfo* method);
// 0x4146ef0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteTaunt(MethodInfo *method)

{
  if (g_data_057acbc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_emote_taunt");
    g_data_057acbc4 = '\x01';
  }
  return "Armature_FemT|ft_emote_taunt";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_EmoteWave
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteWave (const MethodInfo* method);
// 0x4146f20

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteWave(MethodInfo *method)

{
  if (g_data_057acbc5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_emote_wave");
    g_data_057acbc5 = '\x01';
  }
  return "Armature_FemT|ft_emote_wave";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_EmoteRoar
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteRoar (const MethodInfo* method);
// 0x4146f50

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteRoar(MethodInfo *method)

{
  if (g_data_057acbc6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT|ft_mad1");
    g_data_057acbc6 = '\x01';
  }
  return "Armature_FemT|ft_mad1";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_ClassName (CustomLogic_CustomLogicAnnieAnimationEnum_o* __this, const MethodInfo* method);
// 0x4146f80

System_String_o *
CustomLogic_CustomLogicAnnieAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__this,MethodInfo *method)

{
  if (g_data_057acbc7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AnnieAnimationEnum");
    g_data_057acbc7 = '\x01';
  }
  return "AnnieAnimationEnum";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAnnieAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicAnnieAnimationEnum_o* __this, const MethodInfo* method);
// 0x4146fb0

bool_conflict
CustomLogic_CustomLogicAnnieAnimationEnum__get_IsAbstract
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAnnieAnimationEnum__get_IsStatic (CustomLogic_CustomLogicAnnieAnimationEnum_o* __this, const MethodInfo* method);
// 0x4146fc0

bool_conflict
CustomLogic_CustomLogicAnnieAnimationEnum__get_IsStatic
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAnnieAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicAnnieAnimationEnum_o* __this, const MethodInfo* method);
// 0x4146fd0

bool_conflict
CustomLogic_CustomLogicAnnieAnimationEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


