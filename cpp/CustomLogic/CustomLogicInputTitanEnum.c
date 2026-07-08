// Type: CustomLogic.CustomLogicInputTitanEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputTitanEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicInputTitanEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputTitanEnum_o* CustomLogic_CustomLogicInputTitanEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e76810

CustomLogic_CustomLogicInputTitanEnum_o *
CustomLogic_CustomLogicInputTitanEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicInputTitanEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05703330 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703330 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicInputTitanEnum);
      if (DAT_0570330e == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_0570330e = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return __this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicInputTitanEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicInputTitanEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputTitanEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e76930

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputTitanEnum_Bindings__CreateMemberBinding
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
  
  if (DAT_05703331 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"AttackBellyFlop");
    il2cpp_init_method_metadata(&"AttackGrabBody");
    il2cpp_init_method_metadata(&"AttackBiteF");
    il2cpp_init_method_metadata(&"Sprint");
    il2cpp_init_method_metadata(&"AttackSlam");
    il2cpp_init_method_metadata(&"AttackHitBack");
    il2cpp_init_method_metadata(&"AttackBiteL");
    il2cpp_init_method_metadata(&"CoverNape1");
    il2cpp_init_method_metadata(&"AttackStomp");
    il2cpp_init_method_metadata(&"Kick");
    il2cpp_init_method_metadata(&"AttackRockThrow");
    il2cpp_init_method_metadata(&"AttackSlapL");
    il2cpp_init_method_metadata(&"AttackSlapLowR");
    il2cpp_init_method_metadata(&"Jump");
    il2cpp_init_method_metadata(&"AttackSlapHighL");
    il2cpp_init_method_metadata(&"AttackSwing");
    il2cpp_init_method_metadata(&"AttackBiteR");
    il2cpp_init_method_metadata(&"AttackHitFace");
    il2cpp_init_method_metadata(&"AttackGrabCore");
    il2cpp_init_method_metadata(&"AttackSlapHighR");
    il2cpp_init_method_metadata(&"AttackBrushChest");
    il2cpp_init_method_metadata(&"AttackGrabAir");
    il2cpp_init_method_metadata(&"Sit");
    il2cpp_init_method_metadata(&"Walk");
    il2cpp_init_method_metadata(&"AttackGrabAirFar");
    il2cpp_init_method_metadata(&"AttackPunch");
    il2cpp_init_method_metadata(&"AttackGrabHead");
    il2cpp_init_method_metadata(&"AttackGrabGround");
    il2cpp_init_method_metadata(&"AttackSlapR");
    il2cpp_init_method_metadata(&"AttackGrabHigh");
    il2cpp_init_method_metadata(&"AttackSlapLowL");
    DAT_05703331 = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x3a2d364f) {
    if (uVar1 < 0x1d298760) {
      if (uVar1 < 0x87de46c) {
        if (uVar1 == 0x3b80da8) {
          bVar2 = System_String__op_Equality(name,"AttackGrabGround",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703349 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabGroun);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
              DAT_05703349 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x4aec3cb) {
          bVar2 = System_String__op_Equality(name,"AttackSlapR",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570333b == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapR_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
              DAT_0570333b = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x87de46b) {
          bVar2 = System_String__op_Equality(name,"AttackPunch",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703338 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackPunch_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
              DAT_05703338 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 < 0x12aed9d6) {
        if (uVar1 == 0xe1ef32d) {
          bVar2 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703333 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Jump_g____gette);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
              DAT_05703333 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x12aed9d5) {
          bVar2 = System_String__op_Equality(name,"AttackSlapL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570333a == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapL_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
              DAT_0570333a = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x132daa5f) {
        bVar2 = System_String__op_Equality(name,"AttackBiteR",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570333f == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBiteR_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
            DAT_0570333f = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x1d29875f) {
        bVar2 = System_String__op_Equality(name,"AttackSlapHighR",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570334d == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapHighR);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
            DAT_0570334d = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x292dcd02) {
      if (uVar1 < 0x22ccd731) {
        if (uVar1 == 0x1f2dbd43) {
          bVar2 = System_String__op_Equality(name,"AttackBiteF",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570333e == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBiteF_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
              DAT_0570333e = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x22ccd730) {
          bVar2 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703335 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Walk_g____gette);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
              DAT_05703335 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x28bc2bff) {
        bVar2 = System_String__op_Equality(name,"Sit",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703334 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Sit_g____getter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
            DAT_05703334 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x292dcd01) {
        bVar2 = System_String__op_Equality(name,"AttackBiteL",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570333d == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBiteL_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
            DAT_0570333d = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x3329aa02) {
      if (uVar1 == 0x2cfbaa3f) {
        bVar2 = System_String__op_Equality(name,"Kick",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703332 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Kick_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
            DAT_05703332 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x3329aa01) {
        bVar2 = System_String__op_Equality(name,"AttackSlapHighL",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570334c == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapHighL);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
            DAT_0570334c = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0x371c1522) {
      bVar2 = System_String__op_Equality(name,"AttackStomp",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703343 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackStomp_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
          DAT_05703343 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x3a2d364e) {
      bVar2 = System_String__op_Equality(name,"AttackBellyFlop",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703339 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBellyFlop);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
          DAT_05703339 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0x8304792a) {
    if (uVar1 < 0x6136bd0e) {
      if (uVar1 < 0x4f638210) {
        if (uVar1 == 0x3f31bd4c) {
          bVar2 = System_String__op_Equality(name,"AttackGrabCore",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703348 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabCore);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
              DAT_05703348 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x4f63820f) {
          bVar2 = System_String__op_Equality(name,"AttackGrabBody",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703347 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabBody);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
              DAT_05703347 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x5aec6cb9) {
        bVar2 = System_String__op_Equality(name,"AttackGrabAir",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703346 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabAir_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
            DAT_05703346 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x6136bd0d) {
        bVar2 = System_String__op_Equality(name,"AttackGrabHead",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570334a == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabHead);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
            DAT_0570334a = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x745f154c) {
      if (uVar1 == 0x6700754b) {
        bVar2 = System_String__op_Equality(name,"AttackHitFace",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703340 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackHitFace_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
            DAT_05703340 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x745f154b) {
        bVar2 = System_String__op_Equality(name,"AttackSlapLowR",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570334f == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapLowR);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
            DAT_0570334f = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
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
        if (DAT_0570334e == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapLowL);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
          DAT_0570334e = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x83047929) {
      bVar2 = System_String__op_Equality(name,"CoverNape1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703337 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CoverNape1_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
          DAT_05703337 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xb502d8c1) {
    if (uVar1 < 0x92d2a9f2) {
      if (uVar1 == 0x838656ac) {
        bVar2 = System_String__op_Equality(name,"AttackSlam",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703342 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlam_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
            DAT_05703342 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x92d2a9f1) {
        bVar2 = System_String__op_Equality(name,"AttackSwing",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703344 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSwing_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
            DAT_05703344 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0x9ed36c5b) {
      bVar2 = System_String__op_Equality(name,"AttackGrabHigh",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570334b == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabHigh);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
          DAT_0570334b = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xb502d8c0) {
      bVar2 = System_String__op_Equality(name,"AttackBrushChest",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703350 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBrushChes);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
          DAT_05703350 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xe8476a12) {
    if (uVar1 == 0xc65e5944) {
      bVar2 = System_String__op_Equality(name,"AttackRockThrow",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570333c == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackRockThrow);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
          DAT_0570333c = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xe8476a11) {
      bVar2 = System_String__op_Equality(name,"AttackHitBack",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703341 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackHitBack_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
          DAT_05703341 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 == 0xe943dc75) {
    bVar2 = System_String__op_Equality(name,"Sprint",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703336 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Sprint_g____get);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
        DAT_05703336 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xeda35f22) {
    bVar2 = System_String__op_Equality(name,"AttackGrabAirFar",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703345 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabAirFa);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
        DAT_05703345 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicInputTitanEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Kick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Kick (const MethodInfo* method);
// 0x3e774f0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Kick(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_05703332 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Kick_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_05703332 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x3e77590

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_05703333 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Jump_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_05703333 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Sit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Sit (const MethodInfo* method);
// 0x3e77630

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Sit(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_05703334 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Sit_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_05703334 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x3e776d0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_05703335 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Walk_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_05703335 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Sprint
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Sprint (const MethodInfo* method);
// 0x3e77770

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Sprint(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_05703336 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Sprint_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_05703336 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__CoverNape1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__CoverNape1 (const MethodInfo* method);
// 0x3e77810

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__CoverNape1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_05703337 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CoverNape1_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_05703337 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackPunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackPunch (const MethodInfo* method);
// 0x3e778b0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackPunch
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_05703338 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackPunch_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_05703338 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBellyFlop
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBellyFlop (const MethodInfo* method);
// 0x3e77950

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBellyFlop
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_05703339 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBellyFlop);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_05703339 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapL (const MethodInfo* method);
// 0x3e779f0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_0570333a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapL_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_0570333a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapR (const MethodInfo* method);
// 0x3e77a90

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_0570333b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapR_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_0570333b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackRockThrow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackRockThrow (const MethodInfo* method);
// 0x3e77b30

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackRockThrow
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_0570333c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackRockThrow);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_0570333c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBiteL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteL (const MethodInfo* method);
// 0x3e77bd0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_0570333d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBiteL_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_0570333d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBiteF
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteF (const MethodInfo* method);
// 0x3e77c70

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteF
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_0570333e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBiteF_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_0570333e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBiteR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteR (const MethodInfo* method);
// 0x3e77d10

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_0570333f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBiteR_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_0570333f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackHitFace
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackHitFace (const MethodInfo* method);
// 0x3e77db0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackHitFace
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_05703340 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackHitFace_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_05703340 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackHitBack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackHitBack (const MethodInfo* method);
// 0x3e77e50

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackHitBack
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_05703341 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackHitBack_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_05703341 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlam
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlam (const MethodInfo* method);
// 0x3e77ef0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlam
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_05703342 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlam_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_05703342 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackStomp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackStomp (const MethodInfo* method);
// 0x3e77f90

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackStomp
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_05703343 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackStomp_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_05703343 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSwing
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSwing (const MethodInfo* method);
// 0x3e78030

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSwing
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_05703344 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSwing_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_05703344 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirFar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabAirFar (const MethodInfo* method);
// 0x3e780d0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabAirFar
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_05703345 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabAirFa);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_05703345 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabAir (const MethodInfo* method);
// 0x3e78170

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabAir
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_05703346 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabAir_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_05703346 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabBody
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabBody (const MethodInfo* method);
// 0x3e78210

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabBody
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_05703347 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabBody);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_05703347 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabCore
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabCore (const MethodInfo* method);
// 0x3e782b0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabCore
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_05703348 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabCore);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_05703348 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabGround
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabGround (const MethodInfo* method);
// 0x3e78350

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabGround
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_05703349 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabGroun);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_05703349 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabHead
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabHead (const MethodInfo* method);
// 0x3e783f0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabHead
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_0570334a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabHead);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_0570334a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabHigh
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabHigh (const MethodInfo* method);
// 0x3e78490

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabHigh
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_0570334b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabHigh);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_0570334b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapHighL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapHighL (const MethodInfo* method);
// 0x3e78530

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapHighL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_0570334c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapHighL);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_0570334c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapHighR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapHighR (const MethodInfo* method);
// 0x3e785d0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapHighR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_0570334d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapHighR);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_0570334d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapLowL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapLowL (const MethodInfo* method);
// 0x3e78670

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapLowL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_0570334e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapLowL);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_0570334e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapLowR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapLowR (const MethodInfo* method);
// 0x3e78710

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapLowR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_0570334f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSlapLowR);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_0570334f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBrushChest
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBrushChest (const MethodInfo* method);
// 0x3e787b0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBrushChest
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (DAT_05703350 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBrushChes);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputTitanEnum__object);
    DAT_05703350 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputTitanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputTitanEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e78850

void CustomLogic_CustomLogicInputTitanEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703351 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"AttackBellyFlop");
    il2cpp_init_method_metadata(&"AttackGrabBody");
    il2cpp_init_method_metadata(&"AttackBiteF");
    il2cpp_init_method_metadata(&"Sprint");
    il2cpp_init_method_metadata(&"AttackSlam");
    il2cpp_init_method_metadata(&"AttackHitBack");
    il2cpp_init_method_metadata(&"AttackBiteL");
    il2cpp_init_method_metadata(&"CoverNape1");
    il2cpp_init_method_metadata(&"AttackStomp");
    il2cpp_init_method_metadata(&"Kick");
    il2cpp_init_method_metadata(&"AttackRockThrow");
    il2cpp_init_method_metadata(&"AttackSlapL");
    il2cpp_init_method_metadata(&"AttackSlapLowR");
    il2cpp_init_method_metadata(&"Jump");
    il2cpp_init_method_metadata(&"AttackSlapHighL");
    il2cpp_init_method_metadata(&"AttackSwing");
    il2cpp_init_method_metadata(&"AttackBiteR");
    il2cpp_init_method_metadata(&"AttackHitFace");
    il2cpp_init_method_metadata(&"AttackGrabCore");
    il2cpp_init_method_metadata(&"AttackSlapHighR");
    il2cpp_init_method_metadata(&"AttackBrushChest");
    il2cpp_init_method_metadata(&"AttackGrabAir");
    il2cpp_init_method_metadata(&"Sit");
    il2cpp_init_method_metadata(&"Walk");
    il2cpp_init_method_metadata(&"AttackGrabAirFar");
    il2cpp_init_method_metadata(&"AttackPunch");
    il2cpp_init_method_metadata(&"AttackGrabHead");
    il2cpp_init_method_metadata(&"AttackGrabGround");
    il2cpp_init_method_metadata(&"AttackSlapR");
    il2cpp_init_method_metadata(&"AttackGrabHigh");
    il2cpp_init_method_metadata(&"AttackSlapLowL");
    DAT_05703351 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Kick",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Jump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Sit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Walk",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Sprint",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CoverNape1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackPunch",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackBellyFlop",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSlapL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSlapR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackRockThrow",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackBiteL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackBiteF",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackBiteR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackHitFace",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackHitBack",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSlam",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackStomp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSwing",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabAirFar",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabAir",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabBody",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabCore",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabGround",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabHead",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabHigh",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSlapHighL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSlapHighR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSlapLowL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSlapLowR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackBrushChest",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Kick>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Kick_g____getter_2_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e78d00

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__Kick>g____getter_2_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703352 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703352 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703577 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703577 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_3_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e78db0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__Jump>g____getter_3_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703353 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703353 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703578 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703578 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Sit>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Sit_g____getter_4_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e78e60

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__Sit>g____getter_4_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703354 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703354 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703579 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703579 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_5_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e78f10

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__Walk>g____getter_5_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703355 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703355 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570357a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570357a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Sprint>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Sprint_g____getter_6_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e78fc0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__Sprint>g____getter_6_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703356 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703356 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570357b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570357b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__CoverNape1>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__CoverNape1_g____getter_7_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e79070

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__CoverNape1>g____getter_7_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703357 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703357 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570357c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570357c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackPunch>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackPunch_g____getter_8_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e79120

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackPunch>g____getter_8_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703358 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703358 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570357d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570357d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBellyFlop>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBellyFlop_g____getter_9_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e791d0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackBellyFlop>g____getter_9_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703359 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703359 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570357e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570357e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x38);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapL>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapL_g____getter_10_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e79280

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackSlapL>g____getter_10_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570335a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570335a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570357f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570357f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapR>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapR_g____getter_11_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e79330

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackSlapR>g____getter_11_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570335b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570335b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703580 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703580 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x48);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackRockThrow>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackRockThrow_g____getter_12_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e793e0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackRockThrow>g____getter_12_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570335c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570335c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703581 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703581 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x50);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBiteL>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBiteL_g____getter_13_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e79490

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackBiteL>g____getter_13_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570335d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570335d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703582 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703582 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x58);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBiteF>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBiteF_g____getter_14_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e79540

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackBiteF>g____getter_14_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570335e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570335e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703583 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703583 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x60);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBiteR>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBiteR_g____getter_15_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e795f0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackBiteR>g____getter_15_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570335f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570335f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703584 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703584 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x68);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackHitFace>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackHitFace_g____getter_16_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e796a0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackHitFace>g____getter_16_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703360 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703360 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703585 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703585 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x70);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackHitBack>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackHitBack_g____getter_17_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e79750

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackHitBack>g____getter_17_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703361 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703361 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703586 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703586 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x78);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlam>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlam_g____getter_18_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e79800

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackSlam>g____getter_18_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703362 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703362 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703587 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703587 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x80);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackStomp>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_19_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e798b0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackStomp>g____getter_19_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703363 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703363 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703588 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703588 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x88);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSwing>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSwing_g____getter_20_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e79960

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackSwing>g____getter_20_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703364 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703364 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703589 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703589 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x90);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirFar>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabAirFar_g____getter_21_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e79a10

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackGrabAirFar>g____getter_21_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703365 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703365 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570358a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570358a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x98);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAir>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabAir_g____getter_22_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e79ac0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackGrabAir>g____getter_22_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703366 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703366 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570358b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570358b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xa0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBody>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabBody_g____getter_23_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e79b70

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackGrabBody>g____getter_23_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703367 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703367 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570358c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570358c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xa8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabCore>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabCore_g____getter_24_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e79c20

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackGrabCore>g____getter_24_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703368 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703368 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570358d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570358d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xb0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xb0);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGround>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabGround_g____getter_25_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e79cd0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackGrabGround>g____getter_25_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703369 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570358e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570358e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xb8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xb8);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHead>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabHead_g____getter_26_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e79d80

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackGrabHead>g____getter_26_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570336a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570336a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570358f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570358f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xc0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xc0);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHigh>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabHigh_g____getter_27_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e79e30

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackGrabHigh>g____getter_27_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570336b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570336b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703590 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703590 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 200);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 200);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapHighL>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapHighL_g____getter_28_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e79ee0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackSlapHighL>g____getter_28_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570336c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570336c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703591 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703591 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xd0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xd0);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapHighR>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapHighR_g____getter_29_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e79f90

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackSlapHighR>g____getter_29_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570336d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570336d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703592 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703592 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xd8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xd8);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapLowL>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapLowL_g____getter_30_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e7a040

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackSlapLowL>g____getter_30_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570336e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570336e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703593 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703593 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xe0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xe0);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapLowR>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapLowR_g____getter_31_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e7a0f0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackSlapLowR>g____getter_31_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570336f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570336f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703594 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703594 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xe8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xe8);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBrushChest>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBrushChest_g____getter_32_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x3e7a1a0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings__<__CreatePropertyBinding__AttackBrushChest>g____getter_32_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703370 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703370 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703595 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703595 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xf0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xf0);
}


// CustomLogic.CustomLogicInputTitanEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputTitanEnum___ctor (CustomLogic_CustomLogicInputTitanEnum_o* __this, const MethodInfo* method);
// 0x3e753b0

void CustomLogic_CustomLogicInputTitanEnum___ctor
               (CustomLogic_CustomLogicInputTitanEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570330e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_0570330e = '\x01';
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


// CustomLogic.CustomLogicInputTitanEnum$$get_Kick
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_Kick (const MethodInfo* method);
// 0x3e75420

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_Kick(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570330f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570330f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_Jump (const MethodInfo* method);
// 0x3e75490

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_Jump(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703310 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703310 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_Sit
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_Sit (const MethodInfo* method);
// 0x3e75500

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_Sit(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703311 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703311 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_Walk (const MethodInfo* method);
// 0x3e75570

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_Walk(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703312 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703312 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_Sprint
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_Sprint (const MethodInfo* method);
// 0x3e755e0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_Sprint(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703313 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703313 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_CoverNape1
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_CoverNape1 (const MethodInfo* method);
// 0x3e75650

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_CoverNape1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703314 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703314 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackPunch
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackPunch (const MethodInfo* method);
// 0x3e756c0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackPunch(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703315 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703315 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackBellyFlop
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackBellyFlop (const MethodInfo* method);
// 0x3e75730

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackBellyFlop(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703316 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703316 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x38);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapL
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapL (const MethodInfo* method);
// 0x3e757a0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapL(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703317 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703317 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapR
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapR (const MethodInfo* method);
// 0x3e75810

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapR(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703318 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703318 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x48);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackRockThrow
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackRockThrow (const MethodInfo* method);
// 0x3e75880

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackRockThrow(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703319 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703319 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x50);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackBiteL
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteL (const MethodInfo* method);
// 0x3e758f0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteL(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570331a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570331a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x58);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackBiteF
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteF (const MethodInfo* method);
// 0x3e75960

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteF(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570331b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570331b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x60);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackBiteR
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteR (const MethodInfo* method);
// 0x3e759d0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteR(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570331c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570331c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x68);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackHitFace
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackHitFace (const MethodInfo* method);
// 0x3e75a40

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackHitFace(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570331d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570331d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x70);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackHitBack
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackHitBack (const MethodInfo* method);
// 0x3e75ab0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackHitBack(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570331e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570331e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x78);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlam
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlam (const MethodInfo* method);
// 0x3e75b20

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlam(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570331f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570331f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x80);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackStomp
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackStomp (const MethodInfo* method);
// 0x3e75b90

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackStomp(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703320 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703320 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x88);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSwing
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSwing (const MethodInfo* method);
// 0x3e75c00

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSwing(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703321 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703321 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x90);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabAirFar
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabAirFar (const MethodInfo* method);
// 0x3e75c70

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabAirFar(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703322 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703322 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x98);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabAir
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabAir (const MethodInfo* method);
// 0x3e75ce0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabAir(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703323 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703323 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xa0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabBody
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabBody (const MethodInfo* method);
// 0x3e75d50

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabBody(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703324 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703324 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xa8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabCore
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabCore (const MethodInfo* method);
// 0x3e75dc0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabCore(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703325 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703325 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xb0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xb0);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabGround
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabGround (const MethodInfo* method);
// 0x3e75e30

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabGround(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703326 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703326 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xb8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xb8);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabHead
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabHead (const MethodInfo* method);
// 0x3e75ea0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabHead(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703327 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703327 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xc0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xc0);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabHigh
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabHigh (const MethodInfo* method);
// 0x3e75f10

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabHigh(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703328 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703328 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 200);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 200);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapHighL
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapHighL (const MethodInfo* method);
// 0x3e75f80

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapHighL(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703329 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_05703329 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xd0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xd0);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapHighR
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapHighR (const MethodInfo* method);
// 0x3e75ff0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapHighR(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570332a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570332a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xd8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xd8);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapLowL
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapLowL (const MethodInfo* method);
// 0x3e76060

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapLowL(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570332b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570332b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xe0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xe0);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapLowR
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapLowR (const MethodInfo* method);
// 0x3e760d0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapLowR(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570332c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570332c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xe8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xe8);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackBrushChest
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackBrushChest (const MethodInfo* method);
// 0x3e76140

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackBrushChest(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570332d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    DAT_0570332d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xf0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xf0);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_ClassName (CustomLogic_CustomLogicInputTitanEnum_o* __this, const MethodInfo* method);
// 0x3e761b0

System_String_o *
CustomLogic_CustomLogicInputTitanEnum__get_ClassName
          (CustomLogic_CustomLogicInputTitanEnum_o *__this,MethodInfo *method)

{
  if (DAT_0570332e == '\0') {
    il2cpp_init_method_metadata(&"InputTitanEnum");
    DAT_0570332e = '\x01';
  }
  return "InputTitanEnum";
}


// CustomLogic.CustomLogicInputTitanEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputTitanEnum__get_IsAbstract (CustomLogic_CustomLogicInputTitanEnum_o* __this, const MethodInfo* method);
// 0x3e761e0

bool_conflict
CustomLogic_CustomLogicInputTitanEnum__get_IsAbstract
          (CustomLogic_CustomLogicInputTitanEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputTitanEnum__get_IsStatic (CustomLogic_CustomLogicInputTitanEnum_o* __this, const MethodInfo* method);
// 0x3e761f0

bool_conflict
CustomLogic_CustomLogicInputTitanEnum__get_IsStatic
          (CustomLogic_CustomLogicInputTitanEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputTitanEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputTitanEnum_o* __this, const MethodInfo* method);
// 0x3e76200

bool_conflict
CustomLogic_CustomLogicInputTitanEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicInputTitanEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputTitanEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputTitanEnum___cctor (const MethodInfo* method);
// 0x3e76210

void CustomLogic_CustomLogicInputTitanEnum___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_0570332f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputTitanEnum);
    il2cpp_init_method_metadata(&"Titan/AttackSwing");
    il2cpp_init_method_metadata(&"Titan/AttackHitFace");
    il2cpp_init_method_metadata(&"Titan/AttackGrabHead");
    il2cpp_init_method_metadata(&"Titan/AttackBrushChest");
    il2cpp_init_method_metadata(&"Titan/AttackPunch");
    il2cpp_init_method_metadata(&"Titan/AttackBiteR");
    il2cpp_init_method_metadata(&"Titan/Kick");
    il2cpp_init_method_metadata(&"Titan/AttackSlapR");
    il2cpp_init_method_metadata(&"Titan/Sprint");
    il2cpp_init_method_metadata(&"Titan/AttackSlapHighL");
    il2cpp_init_method_metadata(&"Titan/AttackGrabHigh");
    il2cpp_init_method_metadata(&"Titan/AttackBellyFlop");
    il2cpp_init_method_metadata(&"Titan/AttackBiteL");
    il2cpp_init_method_metadata(&"Titan/AttackGrabAir");
    il2cpp_init_method_metadata(&"Titan/AttackSlapHighR");
    il2cpp_init_method_metadata(&"Titan/AttackSlapLowL");
    il2cpp_init_method_metadata(&"Titan/AttackGrabCore");
    il2cpp_init_method_metadata(&"Titan/AttackSlapL");
    il2cpp_init_method_metadata(&"Titan/AttackGrabAirFar");
    il2cpp_init_method_metadata(&"Titan/AttackSlam");
    il2cpp_init_method_metadata(&"Titan/Walk");
    il2cpp_init_method_metadata(&"Titan/Sit");
    il2cpp_init_method_metadata(&"Titan/CoverNape1");
    il2cpp_init_method_metadata(&"Titan/AttackGrabBody");
    il2cpp_init_method_metadata(&"Titan/AttackStomp");
    il2cpp_init_method_metadata(&"Titan/AttackHitBack");
    il2cpp_init_method_metadata(&"Titan/AttackBiteF");
    il2cpp_init_method_metadata(&"Titan/AttackRockThrow");
    il2cpp_init_method_metadata(&"Titan/AttackSlapLowR");
    il2cpp_init_method_metadata(&"Titan/AttackGrabGround");
    il2cpp_init_method_metadata(&"Titan/Jump");
    DAT_0570332f = '\x01';
  }
  **(undefined8 **)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) = "Titan/Kick";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8),"Titan/Kick");
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Titan/Jump";
  il2cpp_runtime_glue(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Titan/Sit";
  il2cpp_runtime_glue(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "Titan/Walk";
  il2cpp_runtime_glue(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "Titan/Sprint";
  il2cpp_runtime_glue(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "Titan/CoverNape1";
  il2cpp_runtime_glue(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "Titan/AttackPunch";
  il2cpp_runtime_glue(lVar1 + 0x30);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x38) = "Titan/AttackBellyFlop";
  il2cpp_runtime_glue(lVar1 + 0x38);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x40) = "Titan/AttackSlapL";
  il2cpp_runtime_glue(lVar1 + 0x40);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x48) = "Titan/AttackSlapR";
  il2cpp_runtime_glue(lVar1 + 0x48);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x50) = "Titan/AttackRockThrow";
  il2cpp_runtime_glue(lVar1 + 0x50);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x58) = "Titan/AttackBiteL";
  il2cpp_runtime_glue(lVar1 + 0x58);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x60) = "Titan/AttackBiteF";
  il2cpp_runtime_glue(lVar1 + 0x60);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x68) = "Titan/AttackBiteR";
  il2cpp_runtime_glue(lVar1 + 0x68);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x70) = "Titan/AttackHitFace";
  il2cpp_runtime_glue(lVar1 + 0x70);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x78) = "Titan/AttackHitBack";
  il2cpp_runtime_glue(lVar1 + 0x78);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x80) = "Titan/AttackSlam";
  il2cpp_runtime_glue(lVar1 + 0x80);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x88) = "Titan/AttackStomp";
  il2cpp_runtime_glue(lVar1 + 0x88);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x90) = "Titan/AttackSwing";
  il2cpp_runtime_glue(lVar1 + 0x90);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x98) = "Titan/AttackGrabAirFar";
  il2cpp_runtime_glue(lVar1 + 0x98);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xa0) = "Titan/AttackGrabAir";
  il2cpp_runtime_glue(lVar1 + 0xa0);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xa8) = "Titan/AttackGrabBody";
  il2cpp_runtime_glue(lVar1 + 0xa8);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xb0) = "Titan/AttackGrabCore";
  il2cpp_runtime_glue(lVar1 + 0xb0);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xb8) = "Titan/AttackGrabGround";
  il2cpp_runtime_glue(lVar1 + 0xb8);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xc0) = "Titan/AttackGrabHead";
  il2cpp_runtime_glue(lVar1 + 0xc0);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 200) = "Titan/AttackGrabHigh";
  il2cpp_runtime_glue(lVar1 + 200);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xd0) = "Titan/AttackSlapHighL";
  il2cpp_runtime_glue(lVar1 + 0xd0);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xd8) = "Titan/AttackSlapHighR";
  il2cpp_runtime_glue(lVar1 + 0xd8);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xe0) = "Titan/AttackSlapLowL";
  il2cpp_runtime_glue(lVar1 + 0xe0);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xe8) = "Titan/AttackSlapLowR";
  il2cpp_runtime_glue(lVar1 + 0xe8);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xf0) = "Titan/AttackBrushChest";
  il2cpp_runtime_glue(lVar1 + 0xf0);
  return;
}


