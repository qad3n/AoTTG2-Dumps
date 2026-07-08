// Type: CustomLogic.CustomLogicErenAnimationEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicErenAnimationEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicErenAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicErenAnimationEnum_o* CustomLogic_CustomLogicErenAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e4caa0

CustomLogic_CustomLogicErenAnimationEnum_o *
CustomLogic_CustomLogicErenAnimationEnum_Factory__CreateInstance
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
  if (DAT_05702f63 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicErenAnimationEnum);
    DAT_05702f63 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicErenAnimationEnum);
      if (DAT_05702f51 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702f51 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicErenAnimationEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicErenAnimationEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicErenAnimationEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicErenAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e4cbc0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings__CreateMemberBinding
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
  
  if (DAT_05702f64 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Run");
    il2cpp_init_method_metadata(&"Die");
    il2cpp_init_method_metadata(&"EmoteNod");
    il2cpp_init_method_metadata(&"RockWalk");
    il2cpp_init_method_metadata(&"RockLift");
    il2cpp_init_method_metadata(&"AttackCombo");
    il2cpp_init_method_metadata(&"Land");
    il2cpp_init_method_metadata(&"RockLift001");
    il2cpp_init_method_metadata(&"Jump");
    il2cpp_init_method_metadata(&"Stun");
    il2cpp_init_method_metadata(&"Walk");
    il2cpp_init_method_metadata(&"Idle");
    il2cpp_init_method_metadata(&"Fall");
    il2cpp_init_method_metadata(&"AttackKick");
    il2cpp_init_method_metadata(&"RockFixHole");
    il2cpp_init_method_metadata(&"EmoteRoar");
    DAT_05702f64 = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x5376547a) {
    if (uVar1 < 0x3c572baa) {
      if (uVar1 < 0xff8caa9) {
        if (uVar1 == 0xe1ef32d) {
          bVar2 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702f68 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Jump_g____gette);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
              DAT_05702f68 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0xff8caa8) {
          bVar2 = System_String__op_Equality(name,"RockLift001",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702f72 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RockLift001_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
              DAT_05702f72 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x22ccd730) {
        bVar2 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702f67 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Walk_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
            DAT_05702f67 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x3c572ba9) {
        bVar2 = System_String__op_Equality(name,"RockFixHole",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702f74 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RockFixHole_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
            DAT_05702f74 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x40e2cf22) {
      if (uVar1 == 0x3d692a71) {
        bVar2 = System_String__op_Equality(name,"Die",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702f6b == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Die_g____getter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
            DAT_05702f6b = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x40e2cf21) {
        bVar2 = System_String__op_Equality(name,"RockLift",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702f71 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RockLift_g____g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
            DAT_05702f71 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
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
        if (DAT_05702f65 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Idle_g____gette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
          DAT_05702f65 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x53765479) {
      bVar2 = System_String__op_Equality(name,"AttackCombo",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702f6c == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackCombo_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
          DAT_05702f6c = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xad225086) {
    if (uVar1 < 0x7b00bc81) {
      if (uVar1 == 0x5d992b41) {
        bVar2 = System_String__op_Equality(name,"Stun",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702f6e == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Stun_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
            DAT_05702f6e = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x7b00bc80) {
        bVar2 = System_String__op_Equality(name,"Fall",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702f69 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Fall_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
            DAT_05702f69 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
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
        if (DAT_05702f66 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Run_g____getter);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
          DAT_05702f66 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xad225085) {
      bVar2 = System_String__op_Equality(name,"RockWalk",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702f73 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RockWalk_g____g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
          DAT_05702f73 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xc6f75898) {
    if (uVar1 == 0xc1018924) {
      bVar2 = System_String__op_Equality(name,"EmoteNod",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702f6f == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteNod_g____g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
          DAT_05702f6f = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xc6f75897) {
      bVar2 = System_String__op_Equality(name,"EmoteRoar",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702f70 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteRoar_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
          DAT_05702f70 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
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
      if (DAT_05702f6d == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackKick_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
        DAT_05702f6d = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xee1682bc) {
    bVar2 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702f6a == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Land_g____gette);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
        DAT_05702f6a = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicErenAnimationEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Idle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Idle (const MethodInfo* method);
// 0x3e4d210

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Idle(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (DAT_05702f65 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Idle_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
    DAT_05702f65 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Run
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Run (const MethodInfo* method);
// 0x3e4d2b0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Run(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (DAT_05702f66 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Run_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
    DAT_05702f66 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x3e4d350

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (DAT_05702f67 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Walk_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
    DAT_05702f67 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x3e4d3f0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (DAT_05702f68 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Jump_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
    DAT_05702f68 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Fall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Fall (const MethodInfo* method);
// 0x3e4d490

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Fall(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (DAT_05702f69 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Fall_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
    DAT_05702f69 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x3e4d530

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Land(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (DAT_05702f6a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Land_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
    DAT_05702f6a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Die
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Die (const MethodInfo* method);
// 0x3e4d5d0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Die(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (DAT_05702f6b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Die_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
    DAT_05702f6b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__AttackCombo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__AttackCombo (const MethodInfo* method);
// 0x3e4d670

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__AttackCombo
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (DAT_05702f6c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackCombo_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
    DAT_05702f6c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__AttackKick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__AttackKick (const MethodInfo* method);
// 0x3e4d710

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__AttackKick
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (DAT_05702f6d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackKick_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
    DAT_05702f6d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Stun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Stun (const MethodInfo* method);
// 0x3e4d7b0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Stun(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (DAT_05702f6e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Stun_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
    DAT_05702f6e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteNod
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__EmoteNod (const MethodInfo* method);
// 0x3e4d850

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__EmoteNod
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (DAT_05702f6f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteNod_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
    DAT_05702f6f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteRoar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar (const MethodInfo* method);
// 0x3e4d8f0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (DAT_05702f70 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteRoar_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
    DAT_05702f70 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__RockLift
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockLift (const MethodInfo* method);
// 0x3e4d990

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockLift
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (DAT_05702f71 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RockLift_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
    DAT_05702f71 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__RockLift001
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockLift001 (const MethodInfo* method);
// 0x3e4da30

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockLift001
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (DAT_05702f72 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RockLift001_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
    DAT_05702f72 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__RockWalk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockWalk (const MethodInfo* method);
// 0x3e4dad0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockWalk
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (DAT_05702f73 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RockWalk_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
    DAT_05702f73 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__RockFixHole
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockFixHole (const MethodInfo* method);
// 0x3e4db70

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockFixHole
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (DAT_05702f74 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RockFixHole_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicErenAnimationEnum__object);
    DAT_05702f74 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicErenAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicErenAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e4dc10

void CustomLogic_CustomLogicErenAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702f75 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Run");
    il2cpp_init_method_metadata(&"Die");
    il2cpp_init_method_metadata(&"EmoteNod");
    il2cpp_init_method_metadata(&"RockWalk");
    il2cpp_init_method_metadata(&"RockLift");
    il2cpp_init_method_metadata(&"AttackCombo");
    il2cpp_init_method_metadata(&"Land");
    il2cpp_init_method_metadata(&"RockLift001");
    il2cpp_init_method_metadata(&"Jump");
    il2cpp_init_method_metadata(&"Stun");
    il2cpp_init_method_metadata(&"Walk");
    il2cpp_init_method_metadata(&"Idle");
    il2cpp_init_method_metadata(&"Fall");
    il2cpp_init_method_metadata(&"AttackKick");
    il2cpp_init_method_metadata(&"RockFixHole");
    il2cpp_init_method_metadata(&"EmoteRoar");
    DAT_05702f75 = '\x01';
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
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackCombo",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackKick",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Stun",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmoteNod",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmoteRoar",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RockLift",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RockLift001",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RockWalk",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RockFixHole",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e4ded0

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings__<__CreatePropertyBinding__Idle>g____getter_2_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702f52 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_idle");
    DAT_05702f52 = '\x01';
  }
  return "ErenRig_VER2|et_idle";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_3_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e4df00

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings__<__CreatePropertyBinding__Run>g____getter_3_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702f53 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_run");
    DAT_05702f53 = '\x01';
  }
  return "ErenRig_VER2|et_run";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e4df30

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings__<__CreatePropertyBinding__Walk>g____getter_4_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702f54 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_walk");
    DAT_05702f54 = '\x01';
  }
  return "ErenRig_VER2|et_walk";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_5_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e4df60

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings__<__CreatePropertyBinding__Jump>g____getter_5_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702f55 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_jump_start");
    DAT_05702f55 = '\x01';
  }
  return "ErenRig_VER2|et_jump_start";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Fall>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_6_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e4df90

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings__<__CreatePropertyBinding__Fall>g____getter_6_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702f56 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_jump_air");
    DAT_05702f56 = '\x01';
  }
  return "ErenRig_VER2|et_jump_air";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_7_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e4dfc0

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings__<__CreatePropertyBinding__Land>g____getter_7_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702f57 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_jump_land");
    DAT_05702f57 = '\x01';
  }
  return "ErenRig_VER2|et_jump_land";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Die>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Die_g____getter_8_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e4dff0

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings__<__CreatePropertyBinding__Die>g____getter_8_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702f58 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_die");
    DAT_05702f58 = '\x01';
  }
  return "ErenRig_VER2|et_die";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackCombo>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_9_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e4e020

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings__<__CreatePropertyBinding__AttackCombo>g____getter_9_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702f59 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_attack_combo_full");
    DAT_05702f59 = '\x01';
  }
  return "ErenRig_VER2|et_attack_combo_full";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackKick>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_10_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e4e050

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings__<__CreatePropertyBinding__AttackKick>g____getter_10_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702f5a == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_attack_kick");
    DAT_05702f5a = '\x01';
  }
  return "ErenRig_VER2|et_attack_kick";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Stun>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_11_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e4e080

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings__<__CreatePropertyBinding__Stun>g____getter_11_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702f5b == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_hit_titan");
    DAT_05702f5b = '\x01';
  }
  return "ErenRig_VER2|et_hit_titan";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteNod>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__EmoteNod_g____getter_12_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e4e0b0

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings__<__CreatePropertyBinding__EmoteNod>g____getter_12_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702f5c == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_yes");
    DAT_05702f5c = '\x01';
  }
  return "ErenRig_VER2|et_yes";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteRoar>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__EmoteRoar_g____getter_13_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e4e0e0

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings__<__CreatePropertyBinding__EmoteRoar>g____getter_13_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702f5d == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_born");
    DAT_05702f5d = '\x01';
  }
  return "ErenRig_VER2|et_born";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__RockLift>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockLift_g____getter_14_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e4e110

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings__<__CreatePropertyBinding__RockLift>g____getter_14_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702f5e == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_rock_lift");
    DAT_05702f5e = '\x01';
  }
  return "ErenRig_VER2|et_rock_lift";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__RockLift001>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockLift001_g____getter_15_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e4e140

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings__<__CreatePropertyBinding__RockLift001>g____getter_15_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702f5f == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_rock_lift.001");
    DAT_05702f5f = '\x01';
  }
  return "ErenRig_VER2|et_rock_lift.001";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__RockWalk>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockWalk_g____getter_16_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e4e170

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings__<__CreatePropertyBinding__RockWalk>g____getter_16_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702f60 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_rock_walk");
    DAT_05702f60 = '\x01';
  }
  return "ErenRig_VER2|et_rock_walk";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__RockFixHole>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockFixHole_g____getter_17_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e4e1a0

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings__<__CreatePropertyBinding__RockFixHole>g____getter_17_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702f61 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_rock_fix_hole");
    DAT_05702f61 = '\x01';
  }
  return "ErenRig_VER2|et_rock_fix_hole";
}


// CustomLogic.CustomLogicErenAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicErenAnimationEnum___ctor (CustomLogic_CustomLogicErenAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e4c6d0

void CustomLogic_CustomLogicErenAnimationEnum___ctor
               (CustomLogic_CustomLogicErenAnimationEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f51 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702f51 = '\x01';
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


// CustomLogic.CustomLogicErenAnimationEnum$$get_Idle
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Idle (const MethodInfo* method);
// 0x3e4c740

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Idle(MethodInfo *method)

{
  if (DAT_05702f52 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_idle");
    DAT_05702f52 = '\x01';
  }
  return "ErenRig_VER2|et_idle";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Run
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Run (const MethodInfo* method);
// 0x3e4c770

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Run(MethodInfo *method)

{
  if (DAT_05702f53 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_run");
    DAT_05702f53 = '\x01';
  }
  return "ErenRig_VER2|et_run";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Walk (const MethodInfo* method);
// 0x3e4c7a0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Walk(MethodInfo *method)

{
  if (DAT_05702f54 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_walk");
    DAT_05702f54 = '\x01';
  }
  return "ErenRig_VER2|et_walk";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Jump (const MethodInfo* method);
// 0x3e4c7d0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Jump(MethodInfo *method)

{
  if (DAT_05702f55 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_jump_start");
    DAT_05702f55 = '\x01';
  }
  return "ErenRig_VER2|et_jump_start";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Fall
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Fall (const MethodInfo* method);
// 0x3e4c800

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Fall(MethodInfo *method)

{
  if (DAT_05702f56 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_jump_air");
    DAT_05702f56 = '\x01';
  }
  return "ErenRig_VER2|et_jump_air";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Land (const MethodInfo* method);
// 0x3e4c830

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Land(MethodInfo *method)

{
  if (DAT_05702f57 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_jump_land");
    DAT_05702f57 = '\x01';
  }
  return "ErenRig_VER2|et_jump_land";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Die
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Die (const MethodInfo* method);
// 0x3e4c860

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Die(MethodInfo *method)

{
  if (DAT_05702f58 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_die");
    DAT_05702f58 = '\x01';
  }
  return "ErenRig_VER2|et_die";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_AttackCombo
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_AttackCombo (const MethodInfo* method);
// 0x3e4c890

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_AttackCombo(MethodInfo *method)

{
  if (DAT_05702f59 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_attack_combo_full");
    DAT_05702f59 = '\x01';
  }
  return "ErenRig_VER2|et_attack_combo_full";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_AttackKick
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_AttackKick (const MethodInfo* method);
// 0x3e4c8c0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_AttackKick(MethodInfo *method)

{
  if (DAT_05702f5a == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_attack_kick");
    DAT_05702f5a = '\x01';
  }
  return "ErenRig_VER2|et_attack_kick";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Stun
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Stun (const MethodInfo* method);
// 0x3e4c8f0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Stun(MethodInfo *method)

{
  if (DAT_05702f5b == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_hit_titan");
    DAT_05702f5b = '\x01';
  }
  return "ErenRig_VER2|et_hit_titan";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_EmoteNod
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_EmoteNod (const MethodInfo* method);
// 0x3e4c920

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_EmoteNod(MethodInfo *method)

{
  if (DAT_05702f5c == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_yes");
    DAT_05702f5c = '\x01';
  }
  return "ErenRig_VER2|et_yes";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_EmoteRoar
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_EmoteRoar (const MethodInfo* method);
// 0x3e4c950

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_EmoteRoar(MethodInfo *method)

{
  if (DAT_05702f5d == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_born");
    DAT_05702f5d = '\x01';
  }
  return "ErenRig_VER2|et_born";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_RockLift
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_RockLift (const MethodInfo* method);
// 0x3e4c980

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_RockLift(MethodInfo *method)

{
  if (DAT_05702f5e == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_rock_lift");
    DAT_05702f5e = '\x01';
  }
  return "ErenRig_VER2|et_rock_lift";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_RockLift001
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_RockLift001 (const MethodInfo* method);
// 0x3e4c9b0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_RockLift001(MethodInfo *method)

{
  if (DAT_05702f5f == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_rock_lift.001");
    DAT_05702f5f = '\x01';
  }
  return "ErenRig_VER2|et_rock_lift.001";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_RockWalk
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_RockWalk (const MethodInfo* method);
// 0x3e4c9e0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_RockWalk(MethodInfo *method)

{
  if (DAT_05702f60 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_rock_walk");
    DAT_05702f60 = '\x01';
  }
  return "ErenRig_VER2|et_rock_walk";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_RockFixHole
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_RockFixHole (const MethodInfo* method);
// 0x3e4ca10

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_RockFixHole(MethodInfo *method)

{
  if (DAT_05702f61 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_rock_fix_hole");
    DAT_05702f61 = '\x01';
  }
  return "ErenRig_VER2|et_rock_fix_hole";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_ClassName (CustomLogic_CustomLogicErenAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e4ca40

System_String_o *
CustomLogic_CustomLogicErenAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicErenAnimationEnum_o *__this,MethodInfo *method)

{
  if (DAT_05702f62 == '\0') {
    il2cpp_init_method_metadata(&"ErenAnimationEnum");
    DAT_05702f62 = '\x01';
  }
  return "ErenAnimationEnum";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicErenAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicErenAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e4ca70

bool_conflict
CustomLogic_CustomLogicErenAnimationEnum__get_IsAbstract
          (CustomLogic_CustomLogicErenAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicErenAnimationEnum__get_IsStatic (CustomLogic_CustomLogicErenAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e4ca80

bool_conflict
CustomLogic_CustomLogicErenAnimationEnum__get_IsStatic
          (CustomLogic_CustomLogicErenAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicErenAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicErenAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e4ca90

bool_conflict
CustomLogic_CustomLogicErenAnimationEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicErenAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


