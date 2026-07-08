// Type: CustomLogic.CustomLogicHumanStateEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHumanStateEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicHumanStateEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHumanStateEnum_o* CustomLogic_CustomLogicHumanStateEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e66530

CustomLogic_CustomLogicHumanStateEnum_o *
CustomLogic_CustomLogicHumanStateEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicHumanStateEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_057031df == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031df = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicHumanStateEnum_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicHumanStateEnum);
      if (DAT_057031cb == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057031cb = '\x01';
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
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicHumanStateEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicHumanStateEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHumanStateEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e66650

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHumanStateEnum_Bindings__CreateMemberBinding
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
  
  if (DAT_057031e0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Run");
    il2cpp_init_method_metadata(&"GroundDodge");
    il2cpp_init_method_metadata(&"Die");
    il2cpp_init_method_metadata(&"SpecialAction");
    il2cpp_init_method_metadata(&"SpecialAttack");
    il2cpp_init_method_metadata(&"Attack");
    il2cpp_init_method_metadata(&"Land");
    il2cpp_init_method_metadata(&"AirDodge");
    il2cpp_init_method_metadata(&"EmoteAction");
    il2cpp_init_method_metadata(&"Stun");
    il2cpp_init_method_metadata(&"WallSlide");
    il2cpp_init_method_metadata(&"Refill");
    il2cpp_init_method_metadata(&"Slide");
    il2cpp_init_method_metadata(&"MountingHorse");
    il2cpp_init_method_metadata(&"Reload");
    il2cpp_init_method_metadata(&"Idle");
    il2cpp_init_method_metadata(&"Grab");
    DAT_057031e0 = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x5d992b42) {
    if (uVar1 < 0x2ea46ab7) {
      if (uVar1 < 0x1a43a2ad) {
        if (uVar1 == 0x47d8d69) {
          bVar2 = System_String__op_Equality(name,"GroundDodge",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057031e3 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GroundDodge_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
              DAT_057031e3 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x1a43a2ac) {
          bVar2 = System_String__op_Equality(name,"Reload",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057031e5 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Reload_g____get);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
              DAT_057031e5 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x21c6d85f) {
        bVar2 = System_String__op_Equality(name,"Grab",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057031e8 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grab_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
            DAT_057031e8 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x2ea46ab6) {
        bVar2 = System_String__op_Equality(name,"WallSlide",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057031f1 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WallSlide_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
            DAT_057031f1 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x3d692a72) {
      if (uVar1 == 0x3cd2b931) {
        bVar2 = System_String__op_Equality(name,"EmoteAction",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057031e9 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteAction_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
            DAT_057031e9 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x3d692a71) {
        bVar2 = System_String__op_Equality(name,"Die",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057031e7 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Die_g____getter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
            DAT_057031e7 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
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
        if (DAT_057031e1 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Idle_g____gette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
          DAT_057031e1 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x5d992b41) {
      bVar2 = System_String__op_Equality(name,"Stun",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057031f0 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Stun_g____gette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
          DAT_057031f0 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xb460940d) {
    if (uVar1 < 0x8ba9331e) {
      if (uVar1 == 0x8ba9331d) {
        bVar2 = System_String__op_Equality(name,"Attack",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057031e2 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Attack_g____get);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
            DAT_057031e2 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x6c198db1) {
        bVar2 = System_String__op_Equality(name,"Refill",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057031e6 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Refill_g____get);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
            DAT_057031e6 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0x8d57e66a) {
      bVar2 = System_String__op_Equality(name,"Run",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057031ed == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Run_g____getter);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
          DAT_057031ed = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xb460940c) {
      bVar2 = System_String__op_Equality(name,"SpecialAttack",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057031ea == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialAttack_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
          DAT_057031ea = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xd92f4bcb) {
    if (uVar1 == 0xc7f8c02e) {
      bVar2 = System_String__op_Equality(name,"AirDodge",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057031e4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AirDodge_g____g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
          DAT_057031e4 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xd92f4bca) {
      bVar2 = System_String__op_Equality(name,"SpecialAction",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057031eb == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialAction_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
          DAT_057031eb = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 == 0xee1682bc) {
    bVar2 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057031ee == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Land_g____gette);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
        DAT_057031ee = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xf972e12b) {
    bVar2 = System_String__op_Equality(name,"MountingHorse",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057031ef == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MountingHorse_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
        DAT_057031ef = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xffc7c086) {
    bVar2 = System_String__op_Equality(name,"Slide",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057031ec == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Slide_g____gett);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
        DAT_057031ec = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicHumanStateEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Idle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Idle (const MethodInfo* method);
// 0x3e66cf0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Idle(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (DAT_057031e1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Idle_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
    DAT_057031e1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Attack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Attack (const MethodInfo* method);
// 0x3e66d90

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Attack(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (DAT_057031e2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Attack_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
    DAT_057031e2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__GroundDodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__GroundDodge (const MethodInfo* method);
// 0x3e66e30

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__GroundDodge
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (DAT_057031e3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GroundDodge_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
    DAT_057031e3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__AirDodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__AirDodge (const MethodInfo* method);
// 0x3e66ed0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__AirDodge
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (DAT_057031e4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AirDodge_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
    DAT_057031e4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Reload
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Reload (const MethodInfo* method);
// 0x3e66f70

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Reload(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (DAT_057031e5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Reload_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
    DAT_057031e5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Refill
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Refill (const MethodInfo* method);
// 0x3e67010

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Refill(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (DAT_057031e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Refill_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
    DAT_057031e6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Die
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Die (const MethodInfo* method);
// 0x3e670b0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Die(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (DAT_057031e7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Die_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
    DAT_057031e7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Grab
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Grab (const MethodInfo* method);
// 0x3e67150

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Grab(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (DAT_057031e8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grab_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
    DAT_057031e8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__EmoteAction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__EmoteAction (const MethodInfo* method);
// 0x3e671f0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__EmoteAction
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (DAT_057031e9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteAction_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
    DAT_057031e9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__SpecialAttack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__SpecialAttack (const MethodInfo* method);
// 0x3e67290

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__SpecialAttack
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (DAT_057031ea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialAttack_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
    DAT_057031ea = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__SpecialAction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__SpecialAction (const MethodInfo* method);
// 0x3e67330

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__SpecialAction
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (DAT_057031eb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialAction_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
    DAT_057031eb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Slide
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Slide (const MethodInfo* method);
// 0x3e673d0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Slide(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (DAT_057031ec == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Slide_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
    DAT_057031ec = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Run
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Run (const MethodInfo* method);
// 0x3e67470

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Run(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (DAT_057031ed == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Run_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
    DAT_057031ed = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x3e67510

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Land(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (DAT_057031ee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Land_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
    DAT_057031ee = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__MountingHorse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__MountingHorse (const MethodInfo* method);
// 0x3e675b0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__MountingHorse
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (DAT_057031ef == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MountingHorse_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
    DAT_057031ef = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Stun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Stun (const MethodInfo* method);
// 0x3e67650

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Stun(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (DAT_057031f0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Stun_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
    DAT_057031f0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__WallSlide
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__WallSlide (const MethodInfo* method);
// 0x3e676f0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__WallSlide
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (DAT_057031f1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WallSlide_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanStateEnum__object);
    DAT_057031f1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanStateEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e67790

void CustomLogic_CustomLogicHumanStateEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057031f2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Run");
    il2cpp_init_method_metadata(&"GroundDodge");
    il2cpp_init_method_metadata(&"Die");
    il2cpp_init_method_metadata(&"SpecialAction");
    il2cpp_init_method_metadata(&"SpecialAttack");
    il2cpp_init_method_metadata(&"Attack");
    il2cpp_init_method_metadata(&"Land");
    il2cpp_init_method_metadata(&"AirDodge");
    il2cpp_init_method_metadata(&"EmoteAction");
    il2cpp_init_method_metadata(&"Stun");
    il2cpp_init_method_metadata(&"WallSlide");
    il2cpp_init_method_metadata(&"Refill");
    il2cpp_init_method_metadata(&"Slide");
    il2cpp_init_method_metadata(&"MountingHorse");
    il2cpp_init_method_metadata(&"Reload");
    il2cpp_init_method_metadata(&"Idle");
    il2cpp_init_method_metadata(&"Grab");
    DAT_057031f2 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Idle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Attack",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GroundDodge",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AirDodge",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Reload",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Refill",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Die",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Grab",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmoteAction",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpecialAttack",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpecialAction",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Slide",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Run",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Land",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MountingHorse",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Stun",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"WallSlide",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x3e67a70

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings__<__CreatePropertyBinding__Idle>g____getter_2_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031f3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031f3 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570351d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_0570351d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Attack>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Attack_g____getter_3_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x3e67b20

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings__<__CreatePropertyBinding__Attack>g____getter_3_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031f4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031f4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570351e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_0570351e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__GroundDodge>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__GroundDodge_g____getter_4_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x3e67bd0

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings__<__CreatePropertyBinding__GroundDodge>g____getter_4_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031f5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031f5 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570351f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_0570351f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__AirDodge>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__AirDodge_g____getter_5_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x3e67c80

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings__<__CreatePropertyBinding__AirDodge>g____getter_5_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031f6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031f6 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703520 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_05703520 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Reload>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Reload_g____getter_6_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x3e67d30

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings__<__CreatePropertyBinding__Reload>g____getter_6_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031f7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031f7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703521 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_05703521 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Refill>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Refill_g____getter_7_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x3e67de0

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings__<__CreatePropertyBinding__Refill>g____getter_7_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031f8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031f8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703522 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_05703522 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Die>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Die_g____getter_8_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x3e67e90

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings__<__CreatePropertyBinding__Die>g____getter_8_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031f9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031f9 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703523 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_05703523 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Grab>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Grab_g____getter_9_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x3e67f40

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings__<__CreatePropertyBinding__Grab>g____getter_9_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031fa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031fa = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703524 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_05703524 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x38);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__EmoteAction>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__EmoteAction_g____getter_10_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x3e67ff0

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings__<__CreatePropertyBinding__EmoteAction>g____getter_10_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031fb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031fb = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703525 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_05703525 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__SpecialAttack>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__SpecialAttack_g____getter_11_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x3e680a0

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings__<__CreatePropertyBinding__SpecialAttack>g____getter_11_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031fc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031fc = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703526 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_05703526 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x48);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__SpecialAction>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__SpecialAction_g____getter_12_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x3e68150

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings__<__CreatePropertyBinding__SpecialAction>g____getter_12_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031fd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031fd = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703527 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_05703527 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x50);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Slide>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Slide_g____getter_13_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x3e68200

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings__<__CreatePropertyBinding__Slide>g____getter_13_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031fe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031fe = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703528 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_05703528 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x58);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Run_g____getter_14_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x3e682b0

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings__<__CreatePropertyBinding__Run>g____getter_14_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031ff == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031ff = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703529 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_05703529 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x60);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Land_g____getter_15_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x3e68360

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings__<__CreatePropertyBinding__Land>g____getter_15_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703200 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_05703200 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570352a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_0570352a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x68);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__MountingHorse>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__MountingHorse_g____getter_16_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x3e68410

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings__<__CreatePropertyBinding__MountingHorse>g____getter_16_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703201 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_05703201 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570352b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_0570352b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x70);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Stun>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_17_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x3e684c0

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings__<__CreatePropertyBinding__Stun>g____getter_17_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703202 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_05703202 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570352c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_0570352c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x78);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__WallSlide>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__WallSlide_g____getter_18_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x3e68570

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings__<__CreatePropertyBinding__WallSlide>g____getter_18_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703203 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_05703203 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570352d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_0570352d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x80);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicHumanStateEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanStateEnum___ctor (CustomLogic_CustomLogicHumanStateEnum_o* __this, const MethodInfo* method);
// 0x3e657e0

void CustomLogic_CustomLogicHumanStateEnum___ctor
               (CustomLogic_CustomLogicHumanStateEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031cb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057031cb = '\x01';
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


// CustomLogic.CustomLogicHumanStateEnum$$get_Idle
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Idle (const MethodInfo* method);
// 0x3e65850

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Idle(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031cc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031cc = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Attack
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Attack (const MethodInfo* method);
// 0x3e658c0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Attack(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031cd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031cd = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_GroundDodge
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_GroundDodge (const MethodInfo* method);
// 0x3e65930

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_GroundDodge(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031ce = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_AirDodge
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_AirDodge (const MethodInfo* method);
// 0x3e659a0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_AirDodge(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031cf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031cf = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Reload
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Reload (const MethodInfo* method);
// 0x3e65a10

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Reload(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031d0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031d0 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Refill
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Refill (const MethodInfo* method);
// 0x3e65a80

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Refill(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031d1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031d1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Die
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Die (const MethodInfo* method);
// 0x3e65af0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Die(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031d2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031d2 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Grab
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Grab (const MethodInfo* method);
// 0x3e65b60

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Grab(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031d3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031d3 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x38);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_EmoteAction
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_EmoteAction (const MethodInfo* method);
// 0x3e65bd0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_EmoteAction(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031d4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_SpecialAttack
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_SpecialAttack (const MethodInfo* method);
// 0x3e65c40

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_SpecialAttack(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031d5 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x48);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_SpecialAction
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_SpecialAction (const MethodInfo* method);
// 0x3e65cb0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_SpecialAction(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031d6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031d6 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x50);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Slide
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Slide (const MethodInfo* method);
// 0x3e65d20

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Slide(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031d7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031d7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x58);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Run
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Run (const MethodInfo* method);
// 0x3e65d90

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Run(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031d8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031d8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x60);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Land (const MethodInfo* method);
// 0x3e65e00

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Land(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031d9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031d9 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x68);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_MountingHorse
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_MountingHorse (const MethodInfo* method);
// 0x3e65e70

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_MountingHorse(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031da == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031da = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x70);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Stun
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Stun (const MethodInfo* method);
// 0x3e65ee0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Stun(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031db == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031db = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x78);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_WallSlide
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_WallSlide (const MethodInfo* method);
// 0x3e65f50

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_WallSlide(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031dc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    DAT_057031dc = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x80);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_ClassName (CustomLogic_CustomLogicHumanStateEnum_o* __this, const MethodInfo* method);
// 0x3e65fc0

System_String_o *
CustomLogic_CustomLogicHumanStateEnum__get_ClassName
          (CustomLogic_CustomLogicHumanStateEnum_o *__this,MethodInfo *method)

{
  if (DAT_057031dd == '\0') {
    il2cpp_init_method_metadata(&"HumanStateEnum");
    DAT_057031dd = '\x01';
  }
  return "HumanStateEnum";
}


// CustomLogic.CustomLogicHumanStateEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHumanStateEnum__get_IsAbstract (CustomLogic_CustomLogicHumanStateEnum_o* __this, const MethodInfo* method);
// 0x3e65ff0

bool_conflict
CustomLogic_CustomLogicHumanStateEnum__get_IsAbstract
          (CustomLogic_CustomLogicHumanStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHumanStateEnum__get_IsStatic (CustomLogic_CustomLogicHumanStateEnum_o* __this, const MethodInfo* method);
// 0x3e66000

bool_conflict
CustomLogic_CustomLogicHumanStateEnum__get_IsStatic
          (CustomLogic_CustomLogicHumanStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHumanStateEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHumanStateEnum_o* __this, const MethodInfo* method);
// 0x3e66010

bool_conflict
CustomLogic_CustomLogicHumanStateEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicHumanStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHumanStateEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanStateEnum___cctor (const MethodInfo* method);
// 0x3e66020

void CustomLogic_CustomLogicHumanStateEnum___cctor(MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Enum_o SStack_1a8;
  undefined4 uStack_198;
  System_Enum_o SStack_190;
  undefined4 uStack_180;
  System_Enum_o SStack_178;
  undefined4 uStack_168;
  System_Enum_o SStack_160;
  undefined4 uStack_150;
  System_Enum_o SStack_148;
  undefined4 uStack_138;
  System_Enum_o SStack_130;
  undefined4 uStack_120;
  System_Enum_o SStack_118;
  undefined4 uStack_108;
  System_Enum_o SStack_100;
  undefined4 uStack_f0;
  System_Enum_o SStack_e8;
  undefined4 uStack_d8;
  System_Enum_o SStack_d0;
  undefined4 uStack_c0;
  System_Enum_o SStack_b8;
  undefined4 uStack_a8;
  System_Enum_o SStack_a0;
  undefined4 uStack_90;
  System_Enum_o SStack_88;
  undefined4 uStack_78;
  System_Enum_o SStack_70;
  undefined4 uStack_60;
  System_Enum_o SStack_58;
  undefined4 uStack_48;
  System_Enum_o SStack_40;
  undefined4 uStack_30;
  System_Enum_o SStack_28;
  undefined4 uStack_18;
  
  if (DAT_057031de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_HumanState);
    DAT_057031de = '\x01';
  }
  SStack_28.klass = TypeInfo_HumanState;
  SStack_28.monitor = (void *)0xffffffffffffffff;
  uStack_18 = 0;
  pSVar2 = System_Enum__ToString(&SStack_28,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) = pSVar2;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8));
  SStack_40.klass = TypeInfo_HumanState;
  SStack_40.monitor = (void *)0xffffffffffffffff;
  uStack_30 = 1;
  pSVar2 = System_Enum__ToString(&SStack_40,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 8);
  SStack_58.klass = TypeInfo_HumanState;
  SStack_58.monitor = (void *)0xffffffffffffffff;
  uStack_48 = 2;
  pSVar2 = System_Enum__ToString(&SStack_58,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x10);
  SStack_70.klass = TypeInfo_HumanState;
  SStack_70.monitor = (void *)0xffffffffffffffff;
  uStack_60 = 3;
  pSVar2 = System_Enum__ToString(&SStack_70,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x18) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x18);
  SStack_88.klass = TypeInfo_HumanState;
  SStack_88.monitor = (void *)0xffffffffffffffff;
  uStack_78 = 4;
  pSVar2 = System_Enum__ToString(&SStack_88,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x20) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x20);
  SStack_a0.klass = TypeInfo_HumanState;
  SStack_a0.monitor = (void *)0xffffffffffffffff;
  uStack_90 = 5;
  pSVar2 = System_Enum__ToString(&SStack_a0,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x28) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x28);
  SStack_b8.klass = TypeInfo_HumanState;
  SStack_b8.monitor = (void *)0xffffffffffffffff;
  uStack_a8 = 6;
  pSVar2 = System_Enum__ToString(&SStack_b8,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x30) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x30);
  SStack_d0.klass = TypeInfo_HumanState;
  SStack_d0.monitor = (void *)0xffffffffffffffff;
  uStack_c0 = 7;
  pSVar2 = System_Enum__ToString(&SStack_d0,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x38) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x38);
  SStack_e8.klass = TypeInfo_HumanState;
  SStack_e8.monitor = (void *)0xffffffffffffffff;
  uStack_d8 = 8;
  pSVar2 = System_Enum__ToString(&SStack_e8,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x40) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x40);
  SStack_100.klass = TypeInfo_HumanState;
  SStack_100.monitor = (void *)0xffffffffffffffff;
  uStack_f0 = 9;
  pSVar2 = System_Enum__ToString(&SStack_100,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x48) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x48);
  SStack_118.klass = TypeInfo_HumanState;
  SStack_118.monitor = (void *)0xffffffffffffffff;
  uStack_108 = 10;
  pSVar2 = System_Enum__ToString(&SStack_118,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x50) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x50);
  SStack_130.klass = TypeInfo_HumanState;
  SStack_130.monitor = (void *)0xffffffffffffffff;
  uStack_120 = 0xb;
  pSVar2 = System_Enum__ToString(&SStack_130,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x58) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x58);
  SStack_148.klass = TypeInfo_HumanState;
  SStack_148.monitor = (void *)0xffffffffffffffff;
  uStack_138 = 0xc;
  pSVar2 = System_Enum__ToString(&SStack_148,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x60) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x60);
  SStack_160.klass = TypeInfo_HumanState;
  SStack_160.monitor = (void *)0xffffffffffffffff;
  uStack_150 = 0xd;
  pSVar2 = System_Enum__ToString(&SStack_160,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x68) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x68);
  SStack_178.klass = TypeInfo_HumanState;
  SStack_178.monitor = (void *)0xffffffffffffffff;
  uStack_168 = 0xe;
  pSVar2 = System_Enum__ToString(&SStack_178,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x70) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x70);
  SStack_190.klass = TypeInfo_HumanState;
  SStack_190.monitor = (void *)0xffffffffffffffff;
  uStack_180 = 0xf;
  pSVar2 = System_Enum__ToString(&SStack_190,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x78) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x78);
  SStack_1a8.klass = TypeInfo_HumanState;
  SStack_1a8.monitor = (void *)0xffffffffffffffff;
  uStack_198 = 0x10;
  pSVar2 = System_Enum__ToString(&SStack_1a8,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x80) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x80,pSVar2);
  return;
}


