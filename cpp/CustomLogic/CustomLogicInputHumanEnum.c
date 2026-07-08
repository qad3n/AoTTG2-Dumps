// Type: CustomLogic.CustomLogicInputHumanEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputHumanEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicInputHumanEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputHumanEnum_o* CustomLogic_CustomLogicInputHumanEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e70740

CustomLogic_CustomLogicInputHumanEnum_o *
CustomLogic_CustomLogicInputHumanEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicInputHumanEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_057032b1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032b1 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicInputHumanEnum_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicInputHumanEnum);
      if (DAT_0570329f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_0570329f = '\x01';
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
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicInputHumanEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicInputHumanEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputHumanEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e70860

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputHumanEnum_Bindings__CreateMemberBinding
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
  
  if (DAT_057032b2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"HorseWalk");
    il2cpp_init_method_metadata(&"AttackSpecial");
    il2cpp_init_method_metadata(&"Jump");
    il2cpp_init_method_metadata(&"Dash");
    il2cpp_init_method_metadata(&"HookLeft");
    il2cpp_init_method_metadata(&"Dodge");
    il2cpp_init_method_metadata(&"HookBoth");
    il2cpp_init_method_metadata(&"ReelOut");
    il2cpp_init_method_metadata(&"HorseJump");
    il2cpp_init_method_metadata(&"AttackDefault");
    il2cpp_init_method_metadata(&"Reload");
    il2cpp_init_method_metadata(&"NapeLock");
    il2cpp_init_method_metadata(&"ReelIn");
    il2cpp_init_method_metadata(&"HorseMount");
    il2cpp_init_method_metadata(&"HookRight");
    DAT_057032b2 = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x540059f0) {
    if (uVar1 < 0x1a43a2ad) {
      if (uVar1 == 0xe1ef32d) {
        bVar2 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057032bc == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Jump_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
            DAT_057032bc = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x16ed547a) {
        bVar2 = System_String__op_Equality(name,"ReelIn",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057032b9 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ReelIn_g____get);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
            DAT_057032b9 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x1a43a2ac) &&
              (bVar2 = System_String__op_Equality(name,"Reload",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057032bd == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Reload_g____get);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
          DAT_057032bd = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x2e485539) {
      if (uVar1 == 0x1a5c64b6) {
        bVar2 = System_String__op_Equality(name,"AttackDefault",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057032b3 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackDefault_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
            DAT_057032b3 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x2e485538) &&
              (bVar2 = System_String__op_Equality(name,"NapeLock",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057032c1 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NapeLock_g____g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
          DAT_057032c1 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x41bc24a7) {
      bVar2 = System_String__op_Equality(name,"HookLeft",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057032b5 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HookLeft_g____g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
          DAT_057032b5 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x540059ef) &&
            (bVar2 = System_String__op_Equality(name,"HorseWalk",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057032bf == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HorseWalk_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
        DAT_057032bf = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x8f5fbe99) {
    if (uVar1 < 0x68597616) {
      if (uVar1 == 0x5be800ee) {
        bVar2 = System_String__op_Equality(name,"HorseJump",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057032c0 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HorseJump_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
            DAT_057032c0 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x68597615) &&
              (bVar2 = System_String__op_Equality(name,"Dash",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057032b8 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Dash_g____gette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
          DAT_057032b8 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x8f5fbe98) {
      bVar2 = System_String__op_Equality(name,"AttackSpecial",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057032b4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSpecial_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
          DAT_057032b4 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x77f33158) &&
            (bVar2 = System_String__op_Equality(name,"HookRight",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057032b6 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HookRight_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
        DAT_057032b6 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xc52547e8) {
    if (uVar1 == 0xa114d213) {
      bVar2 = System_String__op_Equality(name,"ReelOut",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057032ba == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ReelOut_g____ge);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
          DAT_057032ba = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xc52547e7) &&
            (bVar2 = System_String__op_Equality(name,"HorseMount",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057032be == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HorseMount_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
        DAT_057032be = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xf526d670) {
    bVar2 = System_String__op_Equality(name,"Dodge",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057032bb == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Dodge_g____gett);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
        DAT_057032bb = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xf8af8641) &&
          (bVar2 = System_String__op_Equality(name,"HookBoth",(MethodInfo *)0x0),
          (char)bVar2 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057032b7 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HookBoth_g____g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
      DAT_057032b7 = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
    System_Func<object__object>___ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicInputHumanEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__AttackDefault
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__AttackDefault (const MethodInfo* method);
// 0x3e70e80

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__AttackDefault
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (DAT_057032b3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackDefault_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
    DAT_057032b3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__AttackSpecial
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__AttackSpecial (const MethodInfo* method);
// 0x3e70f20

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__AttackSpecial
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (DAT_057032b4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSpecial_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
    DAT_057032b4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HookLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookLeft (const MethodInfo* method);
// 0x3e70fc0

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (DAT_057032b5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HookLeft_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
    DAT_057032b5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HookRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookRight (const MethodInfo* method);
// 0x3e71060

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookRight
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (DAT_057032b6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HookRight_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
    DAT_057032b6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HookBoth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookBoth (const MethodInfo* method);
// 0x3e71100

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookBoth
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (DAT_057032b7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HookBoth_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
    DAT_057032b7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Dash
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Dash (const MethodInfo* method);
// 0x3e711a0

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Dash(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (DAT_057032b8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Dash_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
    DAT_057032b8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__ReelIn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__ReelIn (const MethodInfo* method);
// 0x3e71240

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__ReelIn(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (DAT_057032b9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ReelIn_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
    DAT_057032b9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__ReelOut
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__ReelOut (const MethodInfo* method);
// 0x3e712e0

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__ReelOut(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (DAT_057032ba == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ReelOut_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
    DAT_057032ba = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Dodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Dodge (const MethodInfo* method);
// 0x3e71380

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Dodge(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (DAT_057032bb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Dodge_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
    DAT_057032bb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x3e71420

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (DAT_057032bc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Jump_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
    DAT_057032bc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Reload
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Reload (const MethodInfo* method);
// 0x3e714c0

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Reload(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (DAT_057032bd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Reload_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
    DAT_057032bd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HorseMount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseMount (const MethodInfo* method);
// 0x3e71560

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseMount
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (DAT_057032be == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HorseMount_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
    DAT_057032be = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HorseWalk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseWalk (const MethodInfo* method);
// 0x3e71600

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseWalk
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (DAT_057032bf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HorseWalk_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
    DAT_057032bf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HorseJump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseJump (const MethodInfo* method);
// 0x3e716a0

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseJump
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (DAT_057032c0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HorseJump_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
    DAT_057032c0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__NapeLock
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__NapeLock (const MethodInfo* method);
// 0x3e71740

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__NapeLock
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (DAT_057032c1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NapeLock_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputHumanEnum__object);
    DAT_057032c1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputHumanEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputHumanEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e717e0

void CustomLogic_CustomLogicInputHumanEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057032c2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"HorseWalk");
    il2cpp_init_method_metadata(&"AttackSpecial");
    il2cpp_init_method_metadata(&"Jump");
    il2cpp_init_method_metadata(&"Dash");
    il2cpp_init_method_metadata(&"HookLeft");
    il2cpp_init_method_metadata(&"Dodge");
    il2cpp_init_method_metadata(&"HookBoth");
    il2cpp_init_method_metadata(&"ReelOut");
    il2cpp_init_method_metadata(&"HorseJump");
    il2cpp_init_method_metadata(&"AttackDefault");
    il2cpp_init_method_metadata(&"Reload");
    il2cpp_init_method_metadata(&"NapeLock");
    il2cpp_init_method_metadata(&"ReelIn");
    il2cpp_init_method_metadata(&"HorseMount");
    il2cpp_init_method_metadata(&"HookRight");
    DAT_057032c2 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackDefault",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSpecial",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HookLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HookRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HookBoth",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Dash",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ReelIn",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ReelOut",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Dodge",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Jump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Reload",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HorseMount",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HorseWalk",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HorseJump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"NapeLock",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__AttackDefault>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__AttackDefault_g____getter_2_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x3e71a80

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings__<__CreatePropertyBinding__AttackDefault>g____getter_2_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032c3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032c3 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703556 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_05703556 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__AttackSpecial>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__AttackSpecial_g____getter_3_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x3e71b30

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings__<__CreatePropertyBinding__AttackSpecial>g____getter_3_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032c4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032c4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703557 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_05703557 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HookLeft>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HookLeft_g____getter_4_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x3e71be0

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings__<__CreatePropertyBinding__HookLeft>g____getter_4_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032c5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032c5 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703558 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_05703558 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HookRight>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HookRight_g____getter_5_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x3e71c90

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings__<__CreatePropertyBinding__HookRight>g____getter_5_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032c6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032c6 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703559 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_05703559 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HookBoth>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HookBoth_g____getter_6_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x3e71d40

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings__<__CreatePropertyBinding__HookBoth>g____getter_6_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032c7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032c7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570355a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_0570355a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Dash>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Dash_g____getter_7_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x3e71df0

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings__<__CreatePropertyBinding__Dash>g____getter_7_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032c8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032c8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570355b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_0570355b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__ReelIn>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__ReelIn_g____getter_8_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x3e71ea0

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings__<__CreatePropertyBinding__ReelIn>g____getter_8_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032c9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032c9 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570355c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_0570355c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__ReelOut>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__ReelOut_g____getter_9_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x3e71f50

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings__<__CreatePropertyBinding__ReelOut>g____getter_9_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032ca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032ca = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570355d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_0570355d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x38);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Dodge>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Dodge_g____getter_10_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x3e72000

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings__<__CreatePropertyBinding__Dodge>g____getter_10_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032cb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032cb = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570355e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_0570355e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_11_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x3e720b0

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings__<__CreatePropertyBinding__Jump>g____getter_11_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032cc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032cc = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570355f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_0570355f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x48);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Reload>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Reload_g____getter_12_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x3e72160

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings__<__CreatePropertyBinding__Reload>g____getter_12_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032cd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032cd = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703560 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_05703560 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x50);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HorseMount>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HorseMount_g____getter_13_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x3e72210

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings__<__CreatePropertyBinding__HorseMount>g____getter_13_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032ce = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703561 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_05703561 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x58);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HorseWalk>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HorseWalk_g____getter_14_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x3e722c0

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings__<__CreatePropertyBinding__HorseWalk>g____getter_14_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032cf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032cf = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703562 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_05703562 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x60);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HorseJump>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HorseJump_g____getter_15_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x3e72370

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings__<__CreatePropertyBinding__HorseJump>g____getter_15_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032d0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032d0 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703563 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_05703563 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x68);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__NapeLock>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__NapeLock_g____getter_16_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x3e72420

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings__<__CreatePropertyBinding__NapeLock>g____getter_16_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032d1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032d1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703564 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_05703564 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x70);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicInputHumanEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputHumanEnum___ctor (CustomLogic_CustomLogicInputHumanEnum_o* __this, const MethodInfo* method);
// 0x3e6fd00

void CustomLogic_CustomLogicInputHumanEnum___ctor
               (CustomLogic_CustomLogicInputHumanEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570329f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_0570329f = '\x01';
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


// CustomLogic.CustomLogicInputHumanEnum$$get_AttackDefault
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_AttackDefault (const MethodInfo* method);
// 0x3e6fd70

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_AttackDefault(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032a0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032a0 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_AttackSpecial
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_AttackSpecial (const MethodInfo* method);
// 0x3e6fde0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_AttackSpecial(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032a1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032a1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HookLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HookLeft (const MethodInfo* method);
// 0x3e6fe50

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HookLeft(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032a2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032a2 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HookRight
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HookRight (const MethodInfo* method);
// 0x3e6fec0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HookRight(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032a3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032a3 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HookBoth
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HookBoth (const MethodInfo* method);
// 0x3e6ff30

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HookBoth(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032a4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032a4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_Dash
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_Dash (const MethodInfo* method);
// 0x3e6ffa0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_Dash(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032a5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032a5 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_ReelIn
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_ReelIn (const MethodInfo* method);
// 0x3e70010

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_ReelIn(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032a6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032a6 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_ReelOut
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_ReelOut (const MethodInfo* method);
// 0x3e70080

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_ReelOut(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032a7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032a7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x38);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_Dodge
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_Dodge (const MethodInfo* method);
// 0x3e700f0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_Dodge(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032a8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032a8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_Jump (const MethodInfo* method);
// 0x3e70160

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_Jump(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032a9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032a9 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x48);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_Reload
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_Reload (const MethodInfo* method);
// 0x3e701d0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_Reload(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032aa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032aa = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x50);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HorseMount
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HorseMount (const MethodInfo* method);
// 0x3e70240

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HorseMount(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032ab == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032ab = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x58);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HorseWalk
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HorseWalk (const MethodInfo* method);
// 0x3e702b0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HorseWalk(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032ac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032ac = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x60);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HorseJump
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HorseJump (const MethodInfo* method);
// 0x3e70320

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HorseJump(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032ad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032ad = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x68);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_NapeLock
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_NapeLock (const MethodInfo* method);
// 0x3e70390

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_NapeLock(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032ae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    DAT_057032ae = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x70);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_ClassName (CustomLogic_CustomLogicInputHumanEnum_o* __this, const MethodInfo* method);
// 0x3e70400

System_String_o *
CustomLogic_CustomLogicInputHumanEnum__get_ClassName
          (CustomLogic_CustomLogicInputHumanEnum_o *__this,MethodInfo *method)

{
  if (DAT_057032af == '\0') {
    il2cpp_init_method_metadata(&"InputHumanEnum");
    DAT_057032af = '\x01';
  }
  return "InputHumanEnum";
}


// CustomLogic.CustomLogicInputHumanEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputHumanEnum__get_IsAbstract (CustomLogic_CustomLogicInputHumanEnum_o* __this, const MethodInfo* method);
// 0x3e70430

bool_conflict
CustomLogic_CustomLogicInputHumanEnum__get_IsAbstract
          (CustomLogic_CustomLogicInputHumanEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputHumanEnum__get_IsStatic (CustomLogic_CustomLogicInputHumanEnum_o* __this, const MethodInfo* method);
// 0x3e70440

bool_conflict
CustomLogic_CustomLogicInputHumanEnum__get_IsStatic
          (CustomLogic_CustomLogicInputHumanEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputHumanEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputHumanEnum_o* __this, const MethodInfo* method);
// 0x3e70450

bool_conflict
CustomLogic_CustomLogicInputHumanEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicInputHumanEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputHumanEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputHumanEnum___cctor (const MethodInfo* method);
// 0x3e70460

void CustomLogic_CustomLogicInputHumanEnum___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_057032b0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputHumanEnum);
    il2cpp_init_method_metadata(&"Human/AttackSpecial");
    il2cpp_init_method_metadata(&"Human/HookBoth");
    il2cpp_init_method_metadata(&"Human/HorseJump");
    il2cpp_init_method_metadata(&"Human/Dodge");
    il2cpp_init_method_metadata(&"Human/ReelOut");
    il2cpp_init_method_metadata(&"Human/HookLeft");
    il2cpp_init_method_metadata(&"Human/HookRight");
    il2cpp_init_method_metadata(&"Human/Dash");
    il2cpp_init_method_metadata(&"Human/HorseWalk");
    il2cpp_init_method_metadata(&"Human/Jump");
    il2cpp_init_method_metadata(&"Human/NapeLock");
    il2cpp_init_method_metadata(&"Human/AttackDefault");
    il2cpp_init_method_metadata(&"Human/HorseMount");
    il2cpp_init_method_metadata(&"Human/ReelIn");
    il2cpp_init_method_metadata(&"Human/Reload");
    DAT_057032b0 = '\x01';
  }
  **(undefined8 **)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) = "Human/AttackDefault";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8),"Human/AttackDefault");
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Human/AttackSpecial";
  il2cpp_runtime_glue(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Human/HookLeft";
  il2cpp_runtime_glue(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "Human/HookRight";
  il2cpp_runtime_glue(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "Human/HookBoth";
  il2cpp_runtime_glue(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "Human/Dash";
  il2cpp_runtime_glue(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "Human/ReelIn";
  il2cpp_runtime_glue(lVar1 + 0x30);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x38) = "Human/ReelOut";
  il2cpp_runtime_glue(lVar1 + 0x38);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x40) = "Human/Dodge";
  il2cpp_runtime_glue(lVar1 + 0x40);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x48) = "Human/Jump";
  il2cpp_runtime_glue(lVar1 + 0x48);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x50) = "Human/Reload";
  il2cpp_runtime_glue(lVar1 + 0x50);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x58) = "Human/HorseMount";
  il2cpp_runtime_glue(lVar1 + 0x58);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x60) = "Human/HorseWalk";
  il2cpp_runtime_glue(lVar1 + 0x60);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x68) = "Human/HorseJump";
  il2cpp_runtime_glue(lVar1 + 0x68);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x70) = "Human/NapeLock";
  il2cpp_runtime_glue(lVar1 + 0x70);
  return;
}


