// Type: CustomLogic.CustomLogicInputInteractionEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputInteractionEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicInputInteractionEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputInteractionEnum_o* CustomLogic_CustomLogicInputInteractionEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e730f0

CustomLogic_CustomLogicInputInteractionEnum_o *
CustomLogic_CustomLogicInputInteractionEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicInputInteractionEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_057032e7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032e7 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicInputInteractionEnum_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicInputInteractionEnum);
      if (DAT_057032d2 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057032d2 = '\x01';
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
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicInputInteractionEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicInputInteractionEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputInteractionEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e73210

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings__CreateMemberBinding
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
  
  if (DAT_057032e8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"EmoteMenu");
    il2cpp_init_method_metadata(&"QuickSelect5");
    il2cpp_init_method_metadata(&"ItemMenu");
    il2cpp_init_method_metadata(&"MenuNext");
    il2cpp_init_method_metadata(&"Function1");
    il2cpp_init_method_metadata(&"QuickSelect2");
    il2cpp_init_method_metadata(&"Interact");
    il2cpp_init_method_metadata(&"Function4");
    il2cpp_init_method_metadata(&"QuickSelect1");
    il2cpp_init_method_metadata(&"QuickSelect3");
    il2cpp_init_method_metadata(&"Interact2");
    il2cpp_init_method_metadata(&"QuickSelect4");
    il2cpp_init_method_metadata(&"QuickSelect8");
    il2cpp_init_method_metadata(&"Interact3");
    il2cpp_init_method_metadata(&"Function2");
    il2cpp_init_method_metadata(&"Function3");
    il2cpp_init_method_metadata(&"QuickSelect6");
    il2cpp_init_method_metadata(&"QuickSelect7");
    DAT_057032e8 = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x93a28290) {
    if (uVar1 < 0x6b01bab5) {
      if (uVar1 < 0x5f8e9555) {
        if (uVar1 == 0x1e2eb9ef) {
          bVar2 = System_String__op_Equality(name,"Interact",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057032e9 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Interact_g____g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
              DAT_057032e9 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x5f8e9554) {
          bVar2 = System_String__op_Equality(name,"Interact3",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057032eb == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Interact3_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
              DAT_057032eb = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x608e96e7) {
        bVar2 = System_String__op_Equality(name,"Interact2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057032ea == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Interact2_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
            DAT_057032ea = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x6b01bab4) {
        bVar2 = System_String__op_Equality(name,"EmoteMenu",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057032ed == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteMenu_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
            DAT_057032ed = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x8fa27c44) {
      if (uVar1 == 0x8ea27ab0) {
        bVar2 = System_String__op_Equality(name,"QuickSelect4",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057032f2 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuickSelect4_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
            DAT_057032f2 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x8fa27c43) {
        bVar2 = System_String__op_Equality(name,"QuickSelect5",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057032f3 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuickSelect5_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
            DAT_057032f3 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0x90a27dd6) {
      bVar2 = System_String__op_Equality(name,"QuickSelect6",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057032f4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuickSelect6_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
          DAT_057032f4 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x91a27f69) {
      bVar2 = System_String__op_Equality(name,"QuickSelect7",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057032f5 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuickSelect7_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
          DAT_057032f5 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x93a2828f) {
      bVar2 = System_String__op_Equality(name,"QuickSelect1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057032ef == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuickSelect1_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
          DAT_057032ef = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xa7d7f889) {
    if (uVar1 < 0x95a285b6) {
      if (uVar1 == 0x94a28422) {
        bVar2 = System_String__op_Equality(name,"QuickSelect2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057032f0 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuickSelect2_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
            DAT_057032f0 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x95a285b5) {
        bVar2 = System_String__op_Equality(name,"QuickSelect3",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057032f1 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuickSelect3_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
            DAT_057032f1 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0x9aa28d94) {
      bVar2 = System_String__op_Equality(name,"QuickSelect8",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057032f6 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuickSelect8_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
          DAT_057032f6 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xa7d7f888) {
      bVar2 = System_String__op_Equality(name,"Function1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057032f7 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Function1_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
          DAT_057032f7 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xaad7fd42) {
    if (uVar1 == 0xa9d7fbae) {
      bVar2 = System_String__op_Equality(name,"Function3",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057032f9 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Function3_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
          DAT_057032f9 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xaad7fd41) {
      bVar2 = System_String__op_Equality(name,"Function2",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057032f8 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Function2_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
          DAT_057032f8 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 == 0xacd80067) {
    bVar2 = System_String__op_Equality(name,"Function4",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057032fa == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Function4_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
        DAT_057032fa = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xf092cb97) {
    bVar2 = System_String__op_Equality(name,"MenuNext",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057032ee == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MenuNext_g____g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
        DAT_057032ee = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xf32eba39) {
    bVar2 = System_String__op_Equality(name,"ItemMenu",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057032ec == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ItemMenu_g____g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
        DAT_057032ec = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicInputInteractionEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Interact
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact (const MethodInfo* method);
// 0x3e73910

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (DAT_057032e9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Interact_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
    DAT_057032e9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Interact2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact2 (const MethodInfo* method);
// 0x3e739b0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (DAT_057032ea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Interact2_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
    DAT_057032ea = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Interact3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact3 (const MethodInfo* method);
// 0x3e73a50

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact3
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (DAT_057032eb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Interact3_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
    DAT_057032eb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__ItemMenu
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__ItemMenu (const MethodInfo* method);
// 0x3e73af0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__ItemMenu
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (DAT_057032ec == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ItemMenu_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
    DAT_057032ec = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__EmoteMenu
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__EmoteMenu (const MethodInfo* method);
// 0x3e73b90

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__EmoteMenu
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (DAT_057032ed == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteMenu_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
    DAT_057032ed = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__MenuNext
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__MenuNext (const MethodInfo* method);
// 0x3e73c30

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__MenuNext
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (DAT_057032ee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MenuNext_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
    DAT_057032ee = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect1 (const MethodInfo* method);
// 0x3e73cd0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (DAT_057032ef == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuickSelect1_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
    DAT_057032ef = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect2 (const MethodInfo* method);
// 0x3e73d70

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (DAT_057032f0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuickSelect2_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
    DAT_057032f0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect3 (const MethodInfo* method);
// 0x3e73e10

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect3
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (DAT_057032f1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuickSelect3_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
    DAT_057032f1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect4 (const MethodInfo* method);
// 0x3e73eb0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect4
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (DAT_057032f2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuickSelect4_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
    DAT_057032f2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect5 (const MethodInfo* method);
// 0x3e73f50

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect5
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (DAT_057032f3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuickSelect5_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
    DAT_057032f3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect6 (const MethodInfo* method);
// 0x3e73ff0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect6
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (DAT_057032f4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuickSelect6_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
    DAT_057032f4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect7 (const MethodInfo* method);
// 0x3e74090

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect7
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (DAT_057032f5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuickSelect7_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
    DAT_057032f5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect8 (const MethodInfo* method);
// 0x3e74130

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect8
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (DAT_057032f6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuickSelect8_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
    DAT_057032f6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Function1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function1 (const MethodInfo* method);
// 0x3e741d0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (DAT_057032f7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Function1_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
    DAT_057032f7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Function2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function2 (const MethodInfo* method);
// 0x3e74270

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (DAT_057032f8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Function2_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
    DAT_057032f8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Function3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function3 (const MethodInfo* method);
// 0x3e74310

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function3
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (DAT_057032f9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Function3_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
    DAT_057032f9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Function4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function4 (const MethodInfo* method);
// 0x3e743b0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function4
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (DAT_057032fa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Function4_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputInteractionEnum__object);
    DAT_057032fa = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputInteractionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionE);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputInteractionEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e74450

void CustomLogic_CustomLogicInputInteractionEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057032fb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"EmoteMenu");
    il2cpp_init_method_metadata(&"QuickSelect5");
    il2cpp_init_method_metadata(&"ItemMenu");
    il2cpp_init_method_metadata(&"MenuNext");
    il2cpp_init_method_metadata(&"Function1");
    il2cpp_init_method_metadata(&"QuickSelect2");
    il2cpp_init_method_metadata(&"Interact");
    il2cpp_init_method_metadata(&"Function4");
    il2cpp_init_method_metadata(&"QuickSelect1");
    il2cpp_init_method_metadata(&"QuickSelect3");
    il2cpp_init_method_metadata(&"Interact2");
    il2cpp_init_method_metadata(&"QuickSelect4");
    il2cpp_init_method_metadata(&"QuickSelect8");
    il2cpp_init_method_metadata(&"Interact3");
    il2cpp_init_method_metadata(&"Function2");
    il2cpp_init_method_metadata(&"Function3");
    il2cpp_init_method_metadata(&"QuickSelect6");
    il2cpp_init_method_metadata(&"QuickSelect7");
    DAT_057032fb = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Interact",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Interact2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Interact3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ItemMenu",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmoteMenu",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MenuNext",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"QuickSelect1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"QuickSelect2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"QuickSelect3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"QuickSelect4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"QuickSelect5",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"QuickSelect6",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"QuickSelect7",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"QuickSelect8",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Function1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Function2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Function3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Function4",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Interact>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Interact_g____getter_2_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x3e74750

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings__<__CreatePropertyBinding__Interact>g____getter_2_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032fc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032fc = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703565 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_05703565 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Interact2>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Interact2_g____getter_3_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x3e74800

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings__<__CreatePropertyBinding__Interact2>g____getter_3_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032fd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032fd = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703566 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_05703566 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Interact3>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Interact3_g____getter_4_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x3e748b0

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings__<__CreatePropertyBinding__Interact3>g____getter_4_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032fe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032fe = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703567 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_05703567 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__ItemMenu>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__ItemMenu_g____getter_5_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x3e74960

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings__<__CreatePropertyBinding__ItemMenu>g____getter_5_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032ff == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032ff = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703568 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_05703568 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__EmoteMenu>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__EmoteMenu_g____getter_6_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x3e74a10

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings__<__CreatePropertyBinding__EmoteMenu>g____getter_6_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703300 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_05703300 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703569 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_05703569 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__MenuNext>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__MenuNext_g____getter_7_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x3e74ac0

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings__<__CreatePropertyBinding__MenuNext>g____getter_7_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703301 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_05703301 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570356a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_0570356a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect1>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect1_g____getter_8_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x3e74b70

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings__<__CreatePropertyBinding__QuickSelect1>g____getter_8_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703302 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_05703302 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570356b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_0570356b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect2>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect2_g____getter_9_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x3e74c20

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings__<__CreatePropertyBinding__QuickSelect2>g____getter_9_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703303 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_05703303 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570356c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_0570356c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x38);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect3>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect3_g____getter_10_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x3e74cd0

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings__<__CreatePropertyBinding__QuickSelect3>g____getter_10_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703304 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_05703304 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570356d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_0570356d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect4>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect4_g____getter_11_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x3e74d80

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings__<__CreatePropertyBinding__QuickSelect4>g____getter_11_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703305 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_05703305 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570356e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_0570356e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x48);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect5>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect5_g____getter_12_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x3e74e30

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings__<__CreatePropertyBinding__QuickSelect5>g____getter_12_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703306 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_05703306 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570356f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_0570356f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x50);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect6>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect6_g____getter_13_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x3e74ee0

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings__<__CreatePropertyBinding__QuickSelect6>g____getter_13_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703307 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_05703307 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703570 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_05703570 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x58);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect7>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect7_g____getter_14_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x3e74f90

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings__<__CreatePropertyBinding__QuickSelect7>g____getter_14_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703308 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_05703308 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703571 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_05703571 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x60);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect8>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect8_g____getter_15_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x3e75040

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings__<__CreatePropertyBinding__QuickSelect8>g____getter_15_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703309 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_05703309 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703572 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_05703572 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x68);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Function1>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function1_g____getter_16_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x3e750f0

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings__<__CreatePropertyBinding__Function1>g____getter_16_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570330a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_0570330a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703573 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_05703573 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x70);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Function2>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function2_g____getter_17_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x3e751a0

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings__<__CreatePropertyBinding__Function2>g____getter_17_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570330b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_0570330b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703574 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_05703574 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x78);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Function3>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function3_g____getter_18_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x3e75250

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings__<__CreatePropertyBinding__Function3>g____getter_18_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570330c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_0570330c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703575 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_05703575 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x80);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Function4>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function4_g____getter_19_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x3e75300

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings__<__CreatePropertyBinding__Function4>g____getter_19_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570330d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_0570330d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703576 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_05703576 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x88);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicInputInteractionEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputInteractionEnum___ctor (CustomLogic_CustomLogicInputInteractionEnum_o* __this, const MethodInfo* method);
// 0x3e724d0

void CustomLogic_CustomLogicInputInteractionEnum___ctor
               (CustomLogic_CustomLogicInputInteractionEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032d2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057032d2 = '\x01';
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


// CustomLogic.CustomLogicInputInteractionEnum$$get_Interact
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Interact (const MethodInfo* method);
// 0x3e72540

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Interact(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032d3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032d3 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Interact2
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Interact2 (const MethodInfo* method);
// 0x3e725b0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Interact2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032d4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Interact3
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Interact3 (const MethodInfo* method);
// 0x3e72620

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Interact3(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032d5 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_ItemMenu
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_ItemMenu (const MethodInfo* method);
// 0x3e72690

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_ItemMenu(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032d6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032d6 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_EmoteMenu
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_EmoteMenu (const MethodInfo* method);
// 0x3e72700

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_EmoteMenu(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032d7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032d7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_MenuNext
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_MenuNext (const MethodInfo* method);
// 0x3e72770

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_MenuNext(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032d8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032d8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect1
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect1 (const MethodInfo* method);
// 0x3e727e0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032d9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032d9 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect2
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect2 (const MethodInfo* method);
// 0x3e72850

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032da == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032da = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x38);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect3
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect3 (const MethodInfo* method);
// 0x3e728c0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect3(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032db == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032db = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect4
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect4 (const MethodInfo* method);
// 0x3e72930

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect4(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032dc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032dc = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x48);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect5
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect5 (const MethodInfo* method);
// 0x3e729a0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect5(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032dd = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x50);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect6
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect6 (const MethodInfo* method);
// 0x3e72a10

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect6(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032de = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x58);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect7
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect7 (const MethodInfo* method);
// 0x3e72a80

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect7(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032df == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032df = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x60);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect8
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect8 (const MethodInfo* method);
// 0x3e72af0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect8(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032e0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032e0 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x68);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Function1
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Function1 (const MethodInfo* method);
// 0x3e72b60

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Function1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032e1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032e1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x70);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Function2
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Function2 (const MethodInfo* method);
// 0x3e72bd0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Function2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032e2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032e2 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x78);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Function3
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Function3 (const MethodInfo* method);
// 0x3e72c40

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Function3(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032e3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032e3 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x80);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Function4
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Function4 (const MethodInfo* method);
// 0x3e72cb0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Function4(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057032e4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    DAT_057032e4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x88);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_ClassName (CustomLogic_CustomLogicInputInteractionEnum_o* __this, const MethodInfo* method);
// 0x3e72d20

System_String_o *
CustomLogic_CustomLogicInputInteractionEnum__get_ClassName
          (CustomLogic_CustomLogicInputInteractionEnum_o *__this,MethodInfo *method)

{
  if (DAT_057032e5 == '\0') {
    il2cpp_init_method_metadata(&"InputInteractionEnum");
    DAT_057032e5 = '\x01';
  }
  return "InputInteractionEnum";
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputInteractionEnum__get_IsAbstract (CustomLogic_CustomLogicInputInteractionEnum_o* __this, const MethodInfo* method);
// 0x3e72d50

bool_conflict
CustomLogic_CustomLogicInputInteractionEnum__get_IsAbstract
          (CustomLogic_CustomLogicInputInteractionEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputInteractionEnum__get_IsStatic (CustomLogic_CustomLogicInputInteractionEnum_o* __this, const MethodInfo* method);
// 0x3e72d60

bool_conflict
CustomLogic_CustomLogicInputInteractionEnum__get_IsStatic
          (CustomLogic_CustomLogicInputInteractionEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputInteractionEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputInteractionEnum_o* __this, const MethodInfo* method);
// 0x3e72d70

bool_conflict
CustomLogic_CustomLogicInputInteractionEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicInputInteractionEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputInteractionEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputInteractionEnum___cctor (const MethodInfo* method);
// 0x3e72d80

void CustomLogic_CustomLogicInputInteractionEnum___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_057032e6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputInteractionEnum);
    il2cpp_init_method_metadata(&"Interaction/QuickSelect3");
    il2cpp_init_method_metadata(&"Interaction/Interact");
    il2cpp_init_method_metadata(&"Interaction/Interact3");
    il2cpp_init_method_metadata(&"Interaction/Function3");
    il2cpp_init_method_metadata(&"Interaction/MenuNext");
    il2cpp_init_method_metadata(&"Interaction/QuickSelect4");
    il2cpp_init_method_metadata(&"Interaction/QuickSelect8");
    il2cpp_init_method_metadata(&"Interaction/QuickSelect1");
    il2cpp_init_method_metadata(&"Interaction/ItemMenu");
    il2cpp_init_method_metadata(&"Interaction/EmoteMenu");
    il2cpp_init_method_metadata(&"Interaction/QuickSelect5");
    il2cpp_init_method_metadata(&"Interaction/QuickSelect2");
    il2cpp_init_method_metadata(&"Interaction/Function1");
    il2cpp_init_method_metadata(&"Interaction/Function2");
    il2cpp_init_method_metadata(&"Interaction/QuickSelect6");
    il2cpp_init_method_metadata(&"Interaction/Interact2");
    il2cpp_init_method_metadata(&"Interaction/QuickSelect7");
    il2cpp_init_method_metadata(&"Interaction/Function4");
    DAT_057032e6 = '\x01';
  }
  **(undefined8 **)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) = "Interaction/Interact";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8),"Interaction/Interact");
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Interaction/Interact2";
  il2cpp_runtime_glue(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Interaction/Interact3";
  il2cpp_runtime_glue(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "Interaction/ItemMenu";
  il2cpp_runtime_glue(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "Interaction/EmoteMenu";
  il2cpp_runtime_glue(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "Interaction/MenuNext";
  il2cpp_runtime_glue(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "Interaction/QuickSelect1";
  il2cpp_runtime_glue(lVar1 + 0x30);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x38) = "Interaction/QuickSelect2";
  il2cpp_runtime_glue(lVar1 + 0x38);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x40) = "Interaction/QuickSelect3";
  il2cpp_runtime_glue(lVar1 + 0x40);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x48) = "Interaction/QuickSelect4";
  il2cpp_runtime_glue(lVar1 + 0x48);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x50) = "Interaction/QuickSelect5";
  il2cpp_runtime_glue(lVar1 + 0x50);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x58) = "Interaction/QuickSelect6";
  il2cpp_runtime_glue(lVar1 + 0x58);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x60) = "Interaction/QuickSelect7";
  il2cpp_runtime_glue(lVar1 + 0x60);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x68) = "Interaction/QuickSelect8";
  il2cpp_runtime_glue(lVar1 + 0x68);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x70) = "Interaction/Function1";
  il2cpp_runtime_glue(lVar1 + 0x70);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x78) = "Interaction/Function2";
  il2cpp_runtime_glue(lVar1 + 0x78);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x80) = "Interaction/Function3";
  il2cpp_runtime_glue(lVar1 + 0x80);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x88) = "Interaction/Function4";
  il2cpp_runtime_glue(lVar1 + 0x88);
  return;
}


