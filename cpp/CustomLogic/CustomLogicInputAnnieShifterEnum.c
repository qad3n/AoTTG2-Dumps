// Type: CustomLogic.CustomLogicInputAnnieShifterEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputAnnieShifterEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicInputAnnieShifterEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputAnnieShifterEnum_o* CustomLogic_CustomLogicInputAnnieShifterEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e68fc0

CustomLogic_CustomLogicInputAnnieShifterEnum_o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicInputAnnieShifterEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05703215 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703215 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicInputAnnieShifterEnum_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicInputAnnieShifterEnum);
      if (DAT_05703204 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05703204 = '\x01';
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
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicInputAnnieShifterEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicInputAnnieShifterEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e690e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings__CreateMemberBinding
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
  
  if (DAT_05703216 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"AttackGrabMid");
    il2cpp_init_method_metadata(&"AttackCombo");
    il2cpp_init_method_metadata(&"AttackStomp");
    il2cpp_init_method_metadata(&"Kick");
    il2cpp_init_method_metadata(&"AttackBrushBack");
    il2cpp_init_method_metadata(&"Jump");
    il2cpp_init_method_metadata(&"AttackSwing");
    il2cpp_init_method_metadata(&"AttackGrabBottom");
    il2cpp_init_method_metadata(&"AttackBite");
    il2cpp_init_method_metadata(&"AttackHead");
    il2cpp_init_method_metadata(&"Walk");
    il2cpp_init_method_metadata(&"AttackGrabUp");
    il2cpp_init_method_metadata(&"AttackBrushHead");
    il2cpp_init_method_metadata(&"AttackBrushFront");
    DAT_05703216 = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x42f9ae8b) {
    if (uVar1 < 0x2cfbaa40) {
      if (uVar1 == 0xe1ef32d) {
        bVar2 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703218 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Jump_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
            DAT_05703218 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x22ccd730) {
        bVar2 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703219 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Walk_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
            DAT_05703219 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x2cfbaa3f) &&
              (bVar2 = System_String__op_Equality(name,"Kick",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703217 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Kick_g____gette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
          DAT_05703217 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x38122e2c) {
      if (uVar1 == 0x371c1522) {
        bVar2 = System_String__op_Equality(name,"AttackStomp",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570321c == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackStomp_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
            DAT_0570321c = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x38122e2b) &&
              (bVar2 = System_String__op_Equality(name,"AttackHead",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570321e == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackHead_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
          DAT_0570321e = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x3acb63d7) {
      bVar2 = System_String__op_Equality(name,"AttackBite",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570321d == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBite_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
          DAT_0570321d = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x42f9ae8a) &&
            (bVar2 = System_String__op_Equality(name,"AttackBrushFront",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703220 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBrushFron);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
        DAT_05703220 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x86ddd849) {
    if (uVar1 == 0x86ddd848) {
      bVar2 = System_String__op_Equality(name,"AttackGrabBottom",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703222 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabBotto);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
          DAT_05703222 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x53765479) {
      bVar2 = System_String__op_Equality(name,"AttackCombo",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570321a == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackCombo_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
          DAT_0570321a = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x76917342) &&
            (bVar2 = System_String__op_Equality(name,"AttackGrabUp",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703224 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabUp_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
        DAT_05703224 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x93e6a9c5) {
    if (uVar1 == 0x92d2a9f1) {
      bVar2 = System_String__op_Equality(name,"AttackSwing",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570321b == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSwing_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
          DAT_0570321b = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x93e6a9c4) &&
            (bVar2 = System_String__op_Equality(name,"AttackBrushBack",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570321f == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBrushBack);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
        DAT_0570321f = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xefa1ddf1) {
    bVar2 = System_String__op_Equality(name,"AttackBrushHead",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703221 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBrushHead);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
        DAT_05703221 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xff226e93) &&
          (bVar2 = System_String__op_Equality(name,"AttackGrabMid",(MethodInfo *)0x0),
          (char)bVar2 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703223 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabMid_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
      DAT_05703223 = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
    System_Func<object__object>___ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicInputAnnieShifterEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__Kick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Kick (const MethodInfo* method);
// 0x3e696d0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Kick
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (DAT_05703217 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Kick_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
    DAT_05703217 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x3e69770

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Jump
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (DAT_05703218 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Jump_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
    DAT_05703218 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x3e69810

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Walk
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (DAT_05703219 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Walk_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
    DAT_05703219 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackCombo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackCombo (const MethodInfo* method);
// 0x3e698b0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackCombo
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (DAT_0570321a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackCombo_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
    DAT_0570321a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackSwing
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackSwing (const MethodInfo* method);
// 0x3e69950

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackSwing
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (DAT_0570321b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSwing_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
    DAT_0570321b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackStomp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackStomp (const MethodInfo* method);
// 0x3e699f0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackStomp
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (DAT_0570321c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackStomp_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
    DAT_0570321c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackBite
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBite (const MethodInfo* method);
// 0x3e69a90

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBite
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (DAT_0570321d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBite_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
    DAT_0570321d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackHead
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackHead (const MethodInfo* method);
// 0x3e69b30

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackHead
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (DAT_0570321e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackHead_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
    DAT_0570321e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackBrushBack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushBack (const MethodInfo* method);
// 0x3e69bd0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushBack
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (DAT_0570321f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBrushBack);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
    DAT_0570321f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackBrushFront
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushFront (const MethodInfo* method);
// 0x3e69c70

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushFront
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (DAT_05703220 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBrushFron);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
    DAT_05703220 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackBrushHead
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushHead (const MethodInfo* method);
// 0x3e69d10

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushHead
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (DAT_05703221 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackBrushHead);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
    DAT_05703221 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackGrabBottom
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabBottom (const MethodInfo* method);
// 0x3e69db0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabBottom
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (DAT_05703222 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabBotto);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
    DAT_05703222 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackGrabMid
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabMid (const MethodInfo* method);
// 0x3e69e50

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabMid
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (DAT_05703223 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabMid_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
    DAT_05703223 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackGrabUp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabUp (const MethodInfo* method);
// 0x3e69ef0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabUp
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (DAT_05703224 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackGrabUp_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
    DAT_05703224 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputAnnieShifterEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEn);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifter);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e69f90

void CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703225 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"AttackGrabMid");
    il2cpp_init_method_metadata(&"AttackCombo");
    il2cpp_init_method_metadata(&"AttackStomp");
    il2cpp_init_method_metadata(&"Kick");
    il2cpp_init_method_metadata(&"AttackBrushBack");
    il2cpp_init_method_metadata(&"Jump");
    il2cpp_init_method_metadata(&"AttackSwing");
    il2cpp_init_method_metadata(&"AttackGrabBottom");
    il2cpp_init_method_metadata(&"AttackBite");
    il2cpp_init_method_metadata(&"AttackHead");
    il2cpp_init_method_metadata(&"Walk");
    il2cpp_init_method_metadata(&"AttackGrabUp");
    il2cpp_init_method_metadata(&"AttackBrushHead");
    il2cpp_init_method_metadata(&"AttackBrushFront");
    DAT_05703225 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Kick",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Jump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Walk",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackCombo",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSwing",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackStomp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackBite",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackHead",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackBrushBack",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackBrushFront",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackBrushHead",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabBottom",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabMid",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackGrabUp",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__Kick>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__Kick_g____getter_2_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x3e6a210

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings__<__CreatePropertyBinding__Kick>g____getter_2_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703226 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703226 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570352e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_0570352e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_3_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x3e6a2c0

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings__<__CreatePropertyBinding__Jump>g____getter_3_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703227 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703227 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570352f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_0570352f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x3e6a370

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings__<__CreatePropertyBinding__Walk>g____getter_4_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703228 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703228 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703530 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703530 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackCombo>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_5_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x3e6a420

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings__<__CreatePropertyBinding__AttackCombo>g____getter_5_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703229 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703229 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703531 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703531 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackSwing>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackSwing_g____getter_6_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x3e6a4d0

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings__<__CreatePropertyBinding__AttackSwing>g____getter_6_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570322a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_0570322a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703532 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703532 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackStomp>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_7_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x3e6a580

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings__<__CreatePropertyBinding__AttackStomp>g____getter_7_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570322b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_0570322b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703533 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703533 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackBite>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBite_g____getter_8_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x3e6a630

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings__<__CreatePropertyBinding__AttackBite>g____getter_8_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570322c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_0570322c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703534 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703534 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackHead>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackHead_g____getter_9_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x3e6a6e0

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings__<__CreatePropertyBinding__AttackHead>g____getter_9_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570322d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_0570322d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703535 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703535 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x38);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackBrushBack>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBrushBack_g____getter_10_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x3e6a790

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings__<__CreatePropertyBinding__AttackBrushBack>g____getter_10_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570322e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_0570322e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703536 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703536 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackBrushFront>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBrushFront_g____getter_11_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x3e6a840

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings__<__CreatePropertyBinding__AttackBrushFront>g____getter_11_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570322f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_0570322f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703537 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703537 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x48);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackBrushHead>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBrushHead_g____getter_12_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x3e6a8f0

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings__<__CreatePropertyBinding__AttackBrushHead>g____getter_12_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703230 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703230 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703538 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703538 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x50);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBottom>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackGrabBottom_g____getter_13_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x3e6a9a0

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings__<__CreatePropertyBinding__AttackGrabBottom>g____getter_13_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703231 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703231 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703539 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703539 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x58);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackGrabMid>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackGrabMid_g____getter_14_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x3e6aa50

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings__<__CreatePropertyBinding__AttackGrabMid>g____getter_14_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703232 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703232 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570353a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_0570353a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x60);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackGrabUp>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackGrabUp_g____getter_15_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x3e6ab00

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings__<__CreatePropertyBinding__AttackGrabUp>g____getter_15_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703233 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703233 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570353b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_0570353b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x68);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputAnnieShifterEnum___ctor (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, const MethodInfo* method);
// 0x3e68620

void CustomLogic_CustomLogicInputAnnieShifterEnum___ctor
               (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703204 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703204 = '\x01';
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


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_Kick
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_Kick (const MethodInfo* method);
// 0x3e68690

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_Kick(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703205 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703205 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_Jump (const MethodInfo* method);
// 0x3e68700

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_Jump(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703206 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703206 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_Walk (const MethodInfo* method);
// 0x3e68770

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_Walk(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703207 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703207 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackCombo
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackCombo (const MethodInfo* method);
// 0x3e687e0

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackCombo(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703208 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703208 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackSwing
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackSwing (const MethodInfo* method);
// 0x3e68850

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackSwing(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703209 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703209 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackStomp
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackStomp (const MethodInfo* method);
// 0x3e688c0

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackStomp(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570320a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_0570320a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackBite
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBite (const MethodInfo* method);
// 0x3e68930

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBite(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570320b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_0570320b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackHead
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackHead (const MethodInfo* method);
// 0x3e689a0

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackHead(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570320c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_0570320c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x38);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackBrushBack
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushBack (const MethodInfo* method);
// 0x3e68a10

System_String_o *
CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushBack(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570320d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_0570320d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackBrushFront
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushFront (const MethodInfo* method);
// 0x3e68a80

System_String_o *
CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushFront(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570320e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_0570320e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x48);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackBrushHead
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushHead (const MethodInfo* method);
// 0x3e68af0

System_String_o *
CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushHead(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570320f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_0570320f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x50);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackGrabBottom
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabBottom (const MethodInfo* method);
// 0x3e68b60

System_String_o *
CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabBottom(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703210 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703210 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x58);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackGrabMid
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabMid (const MethodInfo* method);
// 0x3e68bd0

System_String_o *
CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabMid(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703211 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703211 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x60);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackGrabUp
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabUp (const MethodInfo* method);
// 0x3e68c40

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabUp(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703212 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    DAT_05703212 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x68);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_ClassName (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, const MethodInfo* method);
// 0x3e68cb0

System_String_o *
CustomLogic_CustomLogicInputAnnieShifterEnum__get_ClassName
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__this,MethodInfo *method)

{
  if (DAT_05703213 == '\0') {
    il2cpp_init_method_metadata(&"InputAnnieShifterEnum");
    DAT_05703213 = '\x01';
  }
  return "InputAnnieShifterEnum";
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputAnnieShifterEnum__get_IsAbstract (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, const MethodInfo* method);
// 0x3e68ce0

bool_conflict
CustomLogic_CustomLogicInputAnnieShifterEnum__get_IsAbstract
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputAnnieShifterEnum__get_IsStatic (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, const MethodInfo* method);
// 0x3e68cf0

bool_conflict
CustomLogic_CustomLogicInputAnnieShifterEnum__get_IsStatic
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputAnnieShifterEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, const MethodInfo* method);
// 0x3e68d00

bool_conflict
CustomLogic_CustomLogicInputAnnieShifterEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputAnnieShifterEnum___cctor (const MethodInfo* method);
// 0x3e68d10

void CustomLogic_CustomLogicInputAnnieShifterEnum___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05703214 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    il2cpp_init_method_metadata(&"AnnieShifter/AttackCombo");
    il2cpp_init_method_metadata(&"AnnieShifter/AttackGrabMid");
    il2cpp_init_method_metadata(&"AnnieShifter/Kick");
    il2cpp_init_method_metadata(&"AnnieShifter/AttackHead");
    il2cpp_init_method_metadata(&"AnnieShifter/AttackBrushHead");
    il2cpp_init_method_metadata(&"AnnieShifter/AttackBite");
    il2cpp_init_method_metadata(&"AnnieShifter/Jump");
    il2cpp_init_method_metadata(&"AnnieShifter/AttackBrushFront");
    il2cpp_init_method_metadata(&"AnnieShifter/AttackGrabBottom");
    il2cpp_init_method_metadata(&"AnnieShifter/AttackStomp");
    il2cpp_init_method_metadata(&"AnnieShifter/AttackBrushBack");
    il2cpp_init_method_metadata(&"AnnieShifter/AttackGrabUp");
    il2cpp_init_method_metadata(&"AnnieShifter/AttackSwing");
    il2cpp_init_method_metadata(&"AnnieShifter/Walk");
    DAT_05703214 = '\x01';
  }
  **(undefined8 **)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) = "AnnieShifter/Kick";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8),"AnnieShifter/Kick");
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "AnnieShifter/Jump";
  il2cpp_runtime_glue(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "AnnieShifter/Walk";
  il2cpp_runtime_glue(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "AnnieShifter/AttackCombo";
  il2cpp_runtime_glue(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "AnnieShifter/AttackSwing";
  il2cpp_runtime_glue(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "AnnieShifter/AttackStomp";
  il2cpp_runtime_glue(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "AnnieShifter/AttackBite";
  il2cpp_runtime_glue(lVar1 + 0x30);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x38) = "AnnieShifter/AttackHead";
  il2cpp_runtime_glue(lVar1 + 0x38);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x40) = "AnnieShifter/AttackBrushBack";
  il2cpp_runtime_glue(lVar1 + 0x40);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x48) = "AnnieShifter/AttackBrushFront";
  il2cpp_runtime_glue(lVar1 + 0x48);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x50) = "AnnieShifter/AttackBrushHead";
  il2cpp_runtime_glue(lVar1 + 0x50);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x58) = "AnnieShifter/AttackGrabBottom";
  il2cpp_runtime_glue(lVar1 + 0x58);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x60) = "AnnieShifter/AttackGrabMid";
  il2cpp_runtime_glue(lVar1 + 0x60);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x68) = "AnnieShifter/AttackGrabUp";
  il2cpp_runtime_glue(lVar1 + 0x68);
  return;
}


