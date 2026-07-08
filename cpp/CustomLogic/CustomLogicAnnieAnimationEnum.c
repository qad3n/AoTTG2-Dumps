// Type: CustomLogic.CustomLogicAnnieAnimationEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAnnieAnimationEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicAnnieAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAnnieAnimationEnum_o* CustomLogic_CustomLogicAnnieAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e40d10

CustomLogic_CustomLogicAnnieAnimationEnum_o *
CustomLogic_CustomLogicAnnieAnimationEnum_Factory__CreateInstance
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
  if (DAT_05702e90 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicAnnieAnimationEnum);
    DAT_05702e90 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicAnnieAnimationEnum);
      if (DAT_05702e6c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702e6c = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicAnnieAnimationEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicAnnieAnimationEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicAnnieAnimationEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e40e30

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__CreateMemberBinding
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
  
  if (DAT_05702e91 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Run");
    il2cpp_init_method_metadata(&"EmoteWave");
    il2cpp_init_method_metadata(&"AttackGrabBottomLeft");
    il2cpp_init_method_metadata(&"Die");
    il2cpp_init_method_metadata(&"AttackBrushHeadL");
    il2cpp_init_method_metadata(&"AttackComboBlind");
    il2cpp_init_method_metadata(&"AttackCombo");
    il2cpp_init_method_metadata(&"AttackBrushFrontL");
    il2cpp_init_method_metadata(&"AttackBrushHeadR");
    il2cpp_init_method_metadata(&"EmoteTaunt");
    il2cpp_init_method_metadata(&"AttackStomp");
    il2cpp_init_method_metadata(&"AttackGrabBottomRight");
    il2cpp_init_method_metadata(&"Land");
    il2cpp_init_method_metadata(&"AttackGrabUpLeft");
    il2cpp_init_method_metadata(&"AttackGrabMidRight");
    il2cpp_init_method_metadata(&"AttackBrushBack");
    il2cpp_init_method_metadata(&"Jump");
    il2cpp_init_method_metadata(&"Stun");
    il2cpp_init_method_metadata(&"AttackSwing");
    il2cpp_init_method_metadata(&"EmoteSalute");
    il2cpp_init_method_metadata(&"SitIdle");
    il2cpp_init_method_metadata(&"AttackBite");
    il2cpp_init_method_metadata(&"AttackHead");
    il2cpp_init_method_metadata(&"AttackGrabUpRight");
    il2cpp_init_method_metadata(&"Walk");
    il2cpp_init_method_metadata(&"SitFall");
    il2cpp_init_method_metadata(&"AttackGrabUp");
    il2cpp_init_method_metadata(&"AttackBrushFrontR");
    il2cpp_init_method_metadata(&"Idle");
    il2cpp_init_method_metadata(&"Fall");
    il2cpp_init_method_metadata(&"AttackKick");
    il2cpp_init_method_metadata(&"SitUp");
    il2cpp_init_method_metadata(&"AttackGrabMidLeft");
    il2cpp_init_method_metadata(&"EmoteRoar");
    DAT_05702e91 = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x5376547a) {
    if (uVar1 < 0x350e21b3) {
      if (uVar1 < 0x12a6a2bb) {
        if (uVar1 < 0xab017f0) {
          if (uVar1 == 0x228de11) {
            bVar2 = System_String__op_Equality(name,"EmoteTaunt",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05702eb1 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteTaunt_g);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
                DAT_05702eb1 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0xab017ef) {
            bVar2 = System_String__op_Equality(name,"AttackGrabUpLeft",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05702eaa == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabUpLef);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
                DAT_05702eaa = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
        }
        else if (uVar1 == 0xe1ef32d) {
          bVar2 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702e95 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Jump_g____gette);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
              DAT_05702e95 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x12a6a2ba) {
          bVar2 = System_String__op_Equality(name,"AttackGrabBottomRight",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702ea6 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabBotto);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
              DAT_05702ea6 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 < 0x2cfd24da) {
        if (uVar1 == 0x22ccd730) {
          bVar2 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702e94 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Walk_g____gette);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
              DAT_05702e94 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x2cfd24d9) {
          bVar2 = System_String__op_Equality(name,"AttackGrabBottomLeft",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702ea5 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabBotto);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
              DAT_05702ea5 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x324d8372) {
        bVar2 = System_String__op_Equality(name,"EmoteWave",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702eb2 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteWave_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
            DAT_05702eb2 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x350e21b2) {
        bVar2 = System_String__op_Equality(name,"AttackBrushFrontL",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702ea1 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBrushFron);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
            DAT_05702ea1 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x3d692a72) {
      if (uVar1 < 0x38122e2c) {
        if (uVar1 == 0x371c1522) {
          bVar2 = System_String__op_Equality(name,"AttackStomp",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702ead == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackStomp_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
              DAT_05702ead = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x38122e2b) {
          bVar2 = System_String__op_Equality(name,"AttackHead",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702eae == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackHead_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
              DAT_05702eae = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x3acb63d7) {
        bVar2 = System_String__op_Equality(name,"AttackBite",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702eaf == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBite_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
            DAT_05702eaf = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x3d692a71) {
        bVar2 = System_String__op_Equality(name,"Die",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702e98 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Die_g____getter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
            DAT_05702e98 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x45516aab) {
      if (uVar1 == 0x44831a08) {
        bVar2 = System_String__op_Equality(name,"AttackComboBlind",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702e9e == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackComboBlin);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
            DAT_05702e9e = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x45516aaa) {
        bVar2 = System_String__op_Equality(name,"SitUp",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702e9c == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SitUp_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
            DAT_05702e9c = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0x45aa17b3) {
      bVar2 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702e92 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Idle_g____gette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
          DAT_05702e92 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x470e3e08) {
      bVar2 = System_String__op_Equality(name,"AttackBrushFrontR",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702ea2 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBrushFron);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
          DAT_05702ea2 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x53765479) {
      bVar2 = System_String__op_Equality(name,"AttackCombo",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702e9d == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackCombo_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
          DAT_05702e9d = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0x93e6a9c5) {
    if (uVar1 < 0x8006ece1) {
      if (uVar1 < 0x76917343) {
        if (uVar1 == 0x5d992b41) {
          bVar2 = System_String__op_Equality(name,"Stun",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702e99 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Stun_g____gette);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
              DAT_05702e99 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x76917342) {
          bVar2 = System_String__op_Equality(name,"AttackGrabUp",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702ea9 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabUp_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
              DAT_05702ea9 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x8006ece0) {
        bVar2 = System_String__op_Equality(name,"AttackGrabUpRight",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702eab == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabUpRig);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
            DAT_05702eab = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x7b00bc80) {
        bVar2 = System_String__op_Equality(name,"Fall",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702e96 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Fall_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
            DAT_05702e96 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x912e23bf) {
      if (uVar1 == 0x8d57e66a) {
        bVar2 = System_String__op_Equality(name,"Run",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702e93 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Run_g____getter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
            DAT_05702e93 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x912e23be) {
        bVar2 = System_String__op_Equality(name,"SitFall",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702e9a == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SitFall_g____ge);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
            DAT_05702e9a = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0x92d2a9f1) {
      bVar2 = System_String__op_Equality(name,"AttackSwing",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702e9f == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSwing_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
          DAT_05702e9f = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x93e6a9c4) {
      bVar2 = System_String__op_Equality(name,"AttackBrushBack",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702ea0 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBrushBack);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
          DAT_05702ea0 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xc8f30ee8) {
    if (uVar1 < 0xc35fd7d4) {
      if (uVar1 == 0xbd457b0a) {
        bVar2 = System_String__op_Equality(name,"AttackGrabMidLeft",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702ea7 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabMidLe);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
            DAT_05702ea7 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xc35fd7d3) {
        bVar2 = System_String__op_Equality(name,"EmoteSalute",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702eb0 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteSalute_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
            DAT_05702eb0 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0xc6f75897) {
      bVar2 = System_String__op_Equality(name,"EmoteRoar",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702eb3 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteRoar_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
          DAT_05702eb3 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xc8f30ee7) {
      bVar2 = System_String__op_Equality(name,"AttackKick",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702eac == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackKick_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
          DAT_05702eac = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xe308a058) {
    if (uVar1 == 0xdecfe799) {
      bVar2 = System_String__op_Equality(name,"AttackBrushHeadR",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702ea4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBrushHead);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
          DAT_05702ea4 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xe308a057) {
      bVar2 = System_String__op_Equality(name,"AttackGrabMidRight",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702ea8 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabMidRi);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
          DAT_05702ea8 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 == 0xe6b2342d) {
    bVar2 = System_String__op_Equality(name,"SitIdle",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702e9b == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SitIdle_g____ge);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
        DAT_05702e9b = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xee1682bc) {
    bVar2 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702e97 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Land_g____gette);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
        DAT_05702e97 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xf8d01087) {
    bVar2 = System_String__op_Equality(name,"AttackBrushHeadL",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702ea3 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBrushHead);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
        DAT_05702ea3 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicAnnieAnimationEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Idle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Idle (const MethodInfo* method);
// 0x3e41b00

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Idle
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702e92 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Idle_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702e92 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Run
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Run (const MethodInfo* method);
// 0x3e41ba0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Run(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702e93 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Run_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702e93 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x3e41c40

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Walk
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702e94 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Walk_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702e94 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x3e41ce0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Jump
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702e95 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Jump_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702e95 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Fall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Fall (const MethodInfo* method);
// 0x3e41d80

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Fall
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702e96 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Fall_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702e96 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x3e41e20

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Land
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702e97 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Land_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702e97 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Die
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Die (const MethodInfo* method);
// 0x3e41ec0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Die(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702e98 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Die_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702e98 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Stun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Stun (const MethodInfo* method);
// 0x3e41f60

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Stun
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702e99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Stun_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702e99 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__SitFall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__SitFall (const MethodInfo* method);
// 0x3e42000

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__SitFall
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702e9a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SitFall_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702e9a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__SitIdle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__SitIdle (const MethodInfo* method);
// 0x3e420a0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__SitIdle
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702e9b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SitIdle_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702e9b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__SitUp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__SitUp (const MethodInfo* method);
// 0x3e42140

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__SitUp
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702e9c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SitUp_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702e9c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackCombo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackCombo (const MethodInfo* method);
// 0x3e421e0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackCombo
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702e9d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackCombo_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702e9d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackComboBlind
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackComboBlind (const MethodInfo* method);
// 0x3e42280

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackComboBlind
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702e9e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackComboBlin);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702e9e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSwing
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackSwing (const MethodInfo* method);
// 0x3e42320

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackSwing
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702e9f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSwing_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702e9f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushBack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushBack (const MethodInfo* method);
// 0x3e423c0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushBack
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702ea0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBrushBack);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702ea0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushFrontL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushFrontL (const MethodInfo* method);
// 0x3e42460

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushFrontL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702ea1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBrushFron);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702ea1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushFrontR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushFrontR (const MethodInfo* method);
// 0x3e42500

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushFrontR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702ea2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBrushFron);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702ea2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushHeadL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushHeadL (const MethodInfo* method);
// 0x3e425a0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushHeadL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702ea3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBrushHead);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702ea3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushHeadR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushHeadR (const MethodInfo* method);
// 0x3e42640

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushHeadR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702ea4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBrushHead);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702ea4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabBottomLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBottomLeft (const MethodInfo* method);
// 0x3e426e0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBottomLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702ea5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabBotto);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702ea5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabBottomRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBottomRight (const MethodInfo* method);
// 0x3e42780

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBottomRight
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702ea6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabBotto);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702ea6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabMidLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabMidLeft (const MethodInfo* method);
// 0x3e42820

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabMidLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702ea7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabMidLe);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702ea7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabMidRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabMidRight (const MethodInfo* method);
// 0x3e428c0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabMidRight
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702ea8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabMidRi);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702ea8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabUp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabUp (const MethodInfo* method);
// 0x3e42960

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabUp
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702ea9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabUp_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702ea9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabUpLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabUpLeft (const MethodInfo* method);
// 0x3e42a00

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabUpLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702eaa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabUpLef);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702eaa = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabUpRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabUpRight (const MethodInfo* method);
// 0x3e42aa0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabUpRight
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702eab == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabUpRig);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702eab = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackKick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackKick (const MethodInfo* method);
// 0x3e42b40

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackKick
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702eac == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackKick_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702eac = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackStomp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackStomp (const MethodInfo* method);
// 0x3e42be0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackStomp
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702ead == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackStomp_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702ead = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackHead
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackHead (const MethodInfo* method);
// 0x3e42c80

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackHead
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702eae == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackHead_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702eae = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBite
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBite (const MethodInfo* method);
// 0x3e42d20

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBite
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702eaf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBite_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702eaf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteSalute
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteSalute (const MethodInfo* method);
// 0x3e42dc0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteSalute
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702eb0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteSalute_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702eb0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteTaunt
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteTaunt (const MethodInfo* method);
// 0x3e42e60

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteTaunt
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702eb1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteTaunt_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702eb1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteWave
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteWave (const MethodInfo* method);
// 0x3e42f00

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteWave
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702eb2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteWave_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702eb2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteRoar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar (const MethodInfo* method);
// 0x3e42fa0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this;
  
  if (DAT_05702eb3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteRoar_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
    DAT_05702eb3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnnieAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnnieAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e43040

void CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702eb4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Run");
    il2cpp_init_method_metadata(&"EmoteWave");
    il2cpp_init_method_metadata(&"AttackGrabBottomLeft");
    il2cpp_init_method_metadata(&"Die");
    il2cpp_init_method_metadata(&"AttackBrushHeadL");
    il2cpp_init_method_metadata(&"AttackComboBlind");
    il2cpp_init_method_metadata(&"AttackCombo");
    il2cpp_init_method_metadata(&"AttackBrushFrontL");
    il2cpp_init_method_metadata(&"AttackBrushHeadR");
    il2cpp_init_method_metadata(&"EmoteTaunt");
    il2cpp_init_method_metadata(&"AttackStomp");
    il2cpp_init_method_metadata(&"AttackGrabBottomRight");
    il2cpp_init_method_metadata(&"Land");
    il2cpp_init_method_metadata(&"AttackGrabUpLeft");
    il2cpp_init_method_metadata(&"AttackGrabMidRight");
    il2cpp_init_method_metadata(&"AttackBrushBack");
    il2cpp_init_method_metadata(&"Jump");
    il2cpp_init_method_metadata(&"Stun");
    il2cpp_init_method_metadata(&"AttackSwing");
    il2cpp_init_method_metadata(&"EmoteSalute");
    il2cpp_init_method_metadata(&"SitIdle");
    il2cpp_init_method_metadata(&"AttackBite");
    il2cpp_init_method_metadata(&"AttackHead");
    il2cpp_init_method_metadata(&"AttackGrabUpRight");
    il2cpp_init_method_metadata(&"Walk");
    il2cpp_init_method_metadata(&"SitFall");
    il2cpp_init_method_metadata(&"AttackGrabUp");
    il2cpp_init_method_metadata(&"AttackBrushFrontR");
    il2cpp_init_method_metadata(&"Idle");
    il2cpp_init_method_metadata(&"Fall");
    il2cpp_init_method_metadata(&"AttackKick");
    il2cpp_init_method_metadata(&"SitUp");
    il2cpp_init_method_metadata(&"AttackGrabMidLeft");
    il2cpp_init_method_metadata(&"EmoteRoar");
    DAT_05702eb4 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Idle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Run",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Walk",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Jump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Fall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Land",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Die",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Stun",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SitFall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SitIdle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SitUp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackCombo",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackComboBlind",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSwing",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackBrushBack",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackBrushFrontL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackBrushFrontR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackBrushHeadL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackBrushHeadR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabBottomLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabBottomRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabMidLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabMidRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabUp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabUpLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabUpRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackKick",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackStomp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackHead",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackBite",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmoteSalute",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmoteTaunt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmoteWave",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmoteRoar",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43550

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__Idle>g____getter_2_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e6d == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_idle");
    DAT_05702e6d = '\x01';
  }
  return "Armature_FemT|ft_idle";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_3_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43580

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__Run>g____getter_3_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e6e == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_run");
    DAT_05702e6e = '\x01';
  }
  return "Armature_FemT|ft_run";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e435b0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__Walk>g____getter_4_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e6f == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_walk");
    DAT_05702e6f = '\x01';
  }
  return "Armature_FemT|ft_walk";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_5_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e435e0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__Jump>g____getter_5_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e70 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_jump_start");
    DAT_05702e70 = '\x01';
  }
  return "Armature_FemT|ft_jump_start";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Fall>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_6_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43610

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__Fall>g____getter_6_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e71 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_jump_air");
    DAT_05702e71 = '\x01';
  }
  return "Armature_FemT|ft_jump_air";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_7_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43640

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__Land>g____getter_7_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e72 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_jump_land");
    DAT_05702e72 = '\x01';
  }
  return "Armature_FemT|ft_jump_land";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Die>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Die_g____getter_8_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43670

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__Die>g____getter_8_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e73 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_die_shifter");
    DAT_05702e73 = '\x01';
  }
  return "Armature_FemT|ft_die_shifter";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Stun>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_9_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e436a0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__Stun>g____getter_9_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e74 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_hit_titan");
    DAT_05702e74 = '\x01';
  }
  return "Armature_FemT|ft_hit_titan";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__SitFall>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__SitFall_g____getter_10_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e436d0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__SitFall>g____getter_10_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e75 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_legHurt");
    DAT_05702e75 = '\x01';
  }
  return "Armature_FemT|ft_legHurt";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__SitIdle>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__SitIdle_g____getter_11_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43700

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__SitIdle>g____getter_11_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e76 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_legHurt_loop");
    DAT_05702e76 = '\x01';
  }
  return "Armature_FemT|ft_legHurt_loop";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__SitUp>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__SitUp_g____getter_12_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43730

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__SitUp>g____getter_12_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e77 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_legHurt_getup");
    DAT_05702e77 = '\x01';
  }
  return "Armature_FemT|ft_legHurt_getup";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackCombo>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_13_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43760

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__AttackCombo>g____getter_13_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e78 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_combo_full");
    DAT_05702e78 = '\x01';
  }
  return "Armature_FemT|ft_attack_combo_full";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackComboBlind>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackComboBlind_g____getter_14_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43790

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__AttackComboBlind>g____getter_14_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e79 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_combo_blind_full");
    DAT_05702e79 = '\x01';
  }
  return "Armature_FemT|ft_attack_combo_blind_full";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSwing>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackSwing_g____getter_15_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e437c0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__AttackSwing>g____getter_15_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e7a == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_front");
    DAT_05702e7a = '\x01';
  }
  return "Armature_FemT|ft_attack_front";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushBack>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushBack_g____getter_16_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e437f0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__AttackBrushBack>g____getter_16_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e7b == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_sweep_back");
    DAT_05702e7b = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_back";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushFrontL>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushFrontL_g____getter_17_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43820

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__AttackBrushFrontL>g____getter_17_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e7c == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_sweep_front_left");
    DAT_05702e7c = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_front_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushFrontR>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushFrontR_g____getter_18_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43850

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__AttackBrushFrontR>g____getter_18_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e7d == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_sweep_front_right");
    DAT_05702e7d = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_front_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushHeadL>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushHeadL_g____getter_19_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43880

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__AttackBrushHeadL>g____getter_19_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e7e == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_sweep_head_b_l");
    DAT_05702e7e = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_head_b_l";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushHeadR>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushHeadR_g____getter_20_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e438b0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__AttackBrushHeadR>g____getter_20_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e7f == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_sweep_head_b_r");
    DAT_05702e7f = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_head_b_r";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBottomLeft>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBottomLeft_g____getter_21_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e438e0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabBottomLeft>g____getter_21_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e80 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_grab_bottom_left");
    DAT_05702e80 = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_bottom_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBottomRight>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBottomRight_g____getter_22_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43910

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabBottomRight>g____getter_22_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e81 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_grab_bottom_right");
    DAT_05702e81 = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_bottom_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabMidLeft>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabMidLeft_g____getter_23_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43940

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabMidLeft>g____getter_23_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e82 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_grab_mid_left");
    DAT_05702e82 = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_mid_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabMidRight>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabMidRight_g____getter_24_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43970

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabMidRight>g____getter_24_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e83 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_grab_mid_right");
    DAT_05702e83 = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_mid_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabUp>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabUp_g____getter_25_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e439a0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabUp>g____getter_25_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e84 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_grab_up");
    DAT_05702e84 = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_up";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabUpLeft>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabUpLeft_g____getter_26_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e439d0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabUpLeft>g____getter_26_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e85 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_grab_up_left");
    DAT_05702e85 = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_up_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabUpRight>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabUpRight_g____getter_27_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43a00

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__AttackGrabUpRight>g____getter_27_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e86 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_grab_up_right");
    DAT_05702e86 = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_up_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackKick>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_28_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43a30

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__AttackKick>g____getter_28_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e87 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_sweep");
    DAT_05702e87 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackStomp>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_29_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43a60

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__AttackStomp>g____getter_29_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e88 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_core");
    DAT_05702e88 = '\x01';
  }
  return "Armature_FemT|ft_attack_core";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackHead>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackHead_g____getter_30_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43a90

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__AttackHead>g____getter_30_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e89 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_head");
    DAT_05702e89 = '\x01';
  }
  return "Armature_FemT|ft_attack_head";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBite>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBite_g____getter_31_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43ac0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__AttackBite>g____getter_31_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e8a == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_bite");
    DAT_05702e8a = '\x01';
  }
  return "Armature_FemT|ft_attack_bite";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteSalute>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__EmoteSalute_g____getter_32_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43af0

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__EmoteSalute>g____getter_32_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e8b == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_emote_salute");
    DAT_05702e8b = '\x01';
  }
  return "Armature_FemT|ft_emote_salute";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteTaunt>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__EmoteTaunt_g____getter_33_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43b20

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__EmoteTaunt>g____getter_33_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e8c == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_emote_taunt");
    DAT_05702e8c = '\x01';
  }
  return "Armature_FemT|ft_emote_taunt";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteWave>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__EmoteWave_g____getter_34_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43b50

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__EmoteWave>g____getter_34_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e8d == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_emote_wave");
    DAT_05702e8d = '\x01';
  }
  return "Armature_FemT|ft_emote_wave";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteRoar>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__EmoteRoar_g____getter_35_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e43b80

Il2CppObject *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__<__CreatePropertyBinding__EmoteRoar>g____getter_35_0
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702e8e == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_mad1");
    DAT_05702e8e = '\x01';
  }
  return "Armature_FemT|ft_mad1";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnnieAnimationEnum___ctor (CustomLogic_CustomLogicAnnieAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e405e0

void CustomLogic_CustomLogicAnnieAnimationEnum___ctor
               (CustomLogic_CustomLogicAnnieAnimationEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702e6c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702e6c = '\x01';
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


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Idle
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Idle (const MethodInfo* method);
// 0x3e40650

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Idle(MethodInfo *method)

{
  if (DAT_05702e6d == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_idle");
    DAT_05702e6d = '\x01';
  }
  return "Armature_FemT|ft_idle";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Run
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Run (const MethodInfo* method);
// 0x3e40680

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Run(MethodInfo *method)

{
  if (DAT_05702e6e == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_run");
    DAT_05702e6e = '\x01';
  }
  return "Armature_FemT|ft_run";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Walk (const MethodInfo* method);
// 0x3e406b0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Walk(MethodInfo *method)

{
  if (DAT_05702e6f == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_walk");
    DAT_05702e6f = '\x01';
  }
  return "Armature_FemT|ft_walk";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Jump (const MethodInfo* method);
// 0x3e406e0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Jump(MethodInfo *method)

{
  if (DAT_05702e70 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_jump_start");
    DAT_05702e70 = '\x01';
  }
  return "Armature_FemT|ft_jump_start";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Fall
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Fall (const MethodInfo* method);
// 0x3e40710

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Fall(MethodInfo *method)

{
  if (DAT_05702e71 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_jump_air");
    DAT_05702e71 = '\x01';
  }
  return "Armature_FemT|ft_jump_air";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Land (const MethodInfo* method);
// 0x3e40740

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Land(MethodInfo *method)

{
  if (DAT_05702e72 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_jump_land");
    DAT_05702e72 = '\x01';
  }
  return "Armature_FemT|ft_jump_land";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Die
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Die (const MethodInfo* method);
// 0x3e40770

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Die(MethodInfo *method)

{
  if (DAT_05702e73 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_die_shifter");
    DAT_05702e73 = '\x01';
  }
  return "Armature_FemT|ft_die_shifter";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Stun
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Stun (const MethodInfo* method);
// 0x3e407a0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Stun(MethodInfo *method)

{
  if (DAT_05702e74 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_hit_titan");
    DAT_05702e74 = '\x01';
  }
  return "Armature_FemT|ft_hit_titan";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_SitFall
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_SitFall (const MethodInfo* method);
// 0x3e407d0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_SitFall(MethodInfo *method)

{
  if (DAT_05702e75 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_legHurt");
    DAT_05702e75 = '\x01';
  }
  return "Armature_FemT|ft_legHurt";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_SitIdle
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_SitIdle (const MethodInfo* method);
// 0x3e40800

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_SitIdle(MethodInfo *method)

{
  if (DAT_05702e76 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_legHurt_loop");
    DAT_05702e76 = '\x01';
  }
  return "Armature_FemT|ft_legHurt_loop";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_SitUp
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_SitUp (const MethodInfo* method);
// 0x3e40830

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_SitUp(MethodInfo *method)

{
  if (DAT_05702e77 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_legHurt_getup");
    DAT_05702e77 = '\x01';
  }
  return "Armature_FemT|ft_legHurt_getup";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackCombo
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackCombo (const MethodInfo* method);
// 0x3e40860

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackCombo(MethodInfo *method)

{
  if (DAT_05702e78 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_combo_full");
    DAT_05702e78 = '\x01';
  }
  return "Armature_FemT|ft_attack_combo_full";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackComboBlind
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackComboBlind (const MethodInfo* method);
// 0x3e40890

System_String_o *
CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackComboBlind(MethodInfo *method)

{
  if (DAT_05702e79 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_combo_blind_full");
    DAT_05702e79 = '\x01';
  }
  return "Armature_FemT|ft_attack_combo_blind_full";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackSwing
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackSwing (const MethodInfo* method);
// 0x3e408c0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackSwing(MethodInfo *method)

{
  if (DAT_05702e7a == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_front");
    DAT_05702e7a = '\x01';
  }
  return "Armature_FemT|ft_attack_front";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBrushBack
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushBack (const MethodInfo* method);
// 0x3e408f0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushBack(MethodInfo *method)

{
  if (DAT_05702e7b == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_sweep_back");
    DAT_05702e7b = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_back";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBrushFrontL
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushFrontL (const MethodInfo* method);
// 0x3e40920

System_String_o *
CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushFrontL(MethodInfo *method)

{
  if (DAT_05702e7c == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_sweep_front_left");
    DAT_05702e7c = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_front_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBrushFrontR
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushFrontR (const MethodInfo* method);
// 0x3e40950

System_String_o *
CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushFrontR(MethodInfo *method)

{
  if (DAT_05702e7d == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_sweep_front_right");
    DAT_05702e7d = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_front_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBrushHeadL
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushHeadL (const MethodInfo* method);
// 0x3e40980

System_String_o *
CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushHeadL(MethodInfo *method)

{
  if (DAT_05702e7e == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_sweep_head_b_l");
    DAT_05702e7e = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_head_b_l";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBrushHeadR
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushHeadR (const MethodInfo* method);
// 0x3e409b0

System_String_o *
CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushHeadR(MethodInfo *method)

{
  if (DAT_05702e7f == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_sweep_head_b_r");
    DAT_05702e7f = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_head_b_r";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabBottomLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabBottomLeft (const MethodInfo* method);
// 0x3e409e0

System_String_o *
CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabBottomLeft(MethodInfo *method)

{
  if (DAT_05702e80 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_grab_bottom_left");
    DAT_05702e80 = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_bottom_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabBottomRight
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabBottomRight (const MethodInfo* method);
// 0x3e40a10

System_String_o *
CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabBottomRight(MethodInfo *method)

{
  if (DAT_05702e81 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_grab_bottom_right");
    DAT_05702e81 = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_bottom_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabMidLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabMidLeft (const MethodInfo* method);
// 0x3e40a40

System_String_o *
CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabMidLeft(MethodInfo *method)

{
  if (DAT_05702e82 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_grab_mid_left");
    DAT_05702e82 = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_mid_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabMidRight
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabMidRight (const MethodInfo* method);
// 0x3e40a70

System_String_o *
CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabMidRight(MethodInfo *method)

{
  if (DAT_05702e83 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_grab_mid_right");
    DAT_05702e83 = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_mid_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabUp
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabUp (const MethodInfo* method);
// 0x3e40aa0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabUp(MethodInfo *method)

{
  if (DAT_05702e84 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_grab_up");
    DAT_05702e84 = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_up";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabUpLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabUpLeft (const MethodInfo* method);
// 0x3e40ad0

System_String_o *
CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabUpLeft(MethodInfo *method)

{
  if (DAT_05702e85 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_grab_up_left");
    DAT_05702e85 = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_up_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabUpRight
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabUpRight (const MethodInfo* method);
// 0x3e40b00

System_String_o *
CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabUpRight(MethodInfo *method)

{
  if (DAT_05702e86 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_grab_up_right");
    DAT_05702e86 = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_up_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackKick
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackKick (const MethodInfo* method);
// 0x3e40b30

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackKick(MethodInfo *method)

{
  if (DAT_05702e87 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_sweep");
    DAT_05702e87 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackStomp
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackStomp (const MethodInfo* method);
// 0x3e40b60

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackStomp(MethodInfo *method)

{
  if (DAT_05702e88 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_core");
    DAT_05702e88 = '\x01';
  }
  return "Armature_FemT|ft_attack_core";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackHead
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackHead (const MethodInfo* method);
// 0x3e40b90

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackHead(MethodInfo *method)

{
  if (DAT_05702e89 == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_head");
    DAT_05702e89 = '\x01';
  }
  return "Armature_FemT|ft_attack_head";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBite
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBite (const MethodInfo* method);
// 0x3e40bc0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBite(MethodInfo *method)

{
  if (DAT_05702e8a == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_attack_bite");
    DAT_05702e8a = '\x01';
  }
  return "Armature_FemT|ft_attack_bite";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_EmoteSalute
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteSalute (const MethodInfo* method);
// 0x3e40bf0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteSalute(MethodInfo *method)

{
  if (DAT_05702e8b == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_emote_salute");
    DAT_05702e8b = '\x01';
  }
  return "Armature_FemT|ft_emote_salute";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_EmoteTaunt
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteTaunt (const MethodInfo* method);
// 0x3e40c20

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteTaunt(MethodInfo *method)

{
  if (DAT_05702e8c == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_emote_taunt");
    DAT_05702e8c = '\x01';
  }
  return "Armature_FemT|ft_emote_taunt";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_EmoteWave
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteWave (const MethodInfo* method);
// 0x3e40c50

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteWave(MethodInfo *method)

{
  if (DAT_05702e8d == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_emote_wave");
    DAT_05702e8d = '\x01';
  }
  return "Armature_FemT|ft_emote_wave";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_EmoteRoar
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteRoar (const MethodInfo* method);
// 0x3e40c80

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteRoar(MethodInfo *method)

{
  if (DAT_05702e8e == '\0') {
    il2cpp_init_method_metadata(&"Armature_FemT|ft_mad1");
    DAT_05702e8e = '\x01';
  }
  return "Armature_FemT|ft_mad1";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_ClassName (CustomLogic_CustomLogicAnnieAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e40cb0

System_String_o *
CustomLogic_CustomLogicAnnieAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__this,MethodInfo *method)

{
  if (DAT_05702e8f == '\0') {
    il2cpp_init_method_metadata(&"AnnieAnimationEnum");
    DAT_05702e8f = '\x01';
  }
  return "AnnieAnimationEnum";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAnnieAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicAnnieAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e40ce0

bool_conflict
CustomLogic_CustomLogicAnnieAnimationEnum__get_IsAbstract
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAnnieAnimationEnum__get_IsStatic (CustomLogic_CustomLogicAnnieAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e40cf0

bool_conflict
CustomLogic_CustomLogicAnnieAnimationEnum__get_IsStatic
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAnnieAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicAnnieAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e40d00

bool_conflict
CustomLogic_CustomLogicAnnieAnimationEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


