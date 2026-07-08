// Type: CustomLogic.CustomLogicSpecialEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicSpecialEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicSpecialEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicSpecialEnum_o* CustomLogic_CustomLogicSpecialEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e93220

CustomLogic_CustomLogicSpecialEnum_o *
CustomLogic_CustomLogicSpecialEnum_Factory__CreateInstance
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
  if (DAT_0570360b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSpecialEnum);
    DAT_0570360b = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicSpecialEnum);
      if (DAT_057035f4 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057035f4 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicSpecialEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicSpecialEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicSpecialEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicSpecialEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e93340

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicSpecialEnum_Bindings__CreateMemberBinding
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
  
  if (DAT_0570360c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Eren");
    il2cpp_init_method_metadata(&"BladeThrow");
    il2cpp_init_method_metadata(&"Smell");
    il2cpp_init_method_metadata(&"Spin3");
    il2cpp_init_method_metadata(&"Escape");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Spin2");
    il2cpp_init_method_metadata(&"Annie");
    il2cpp_init_method_metadata(&"Dance");
    il2cpp_init_method_metadata(&"Distract");
    il2cpp_init_method_metadata(&"Confuse");
    il2cpp_init_method_metadata(&"Switchback");
    il2cpp_init_method_metadata(&"SmokeBomb");
    il2cpp_init_method_metadata(&"Armored");
    il2cpp_init_method_metadata(&"Spin1");
    il2cpp_init_method_metadata(&"Potato");
    il2cpp_init_method_metadata(&"Carry");
    il2cpp_init_method_metadata(&"DownStrike");
    il2cpp_init_method_metadata(&"Stock");
    il2cpp_init_method_metadata(&"Supply");
    il2cpp_init_method_metadata(&"AHSSTwinShot");
    DAT_0570360c = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x50d88c80) {
    if (uVar1 < 0x132fe373) {
      if (uVar1 < 0x23f06bf) {
        if (uVar1 == 0x3f0398) {
          bVar2 = System_String__op_Equality(name,"Spin1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703618 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Spin1_g____gett);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
              DAT_05703618 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x23f06be) {
          bVar2 = System_String__op_Equality(name,"Spin3",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570361a == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Spin3_g____gett);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
              DAT_0570361a = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x33f0851) {
        bVar2 = System_String__op_Equality(name,"Spin2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703619 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Spin2_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
            DAT_05703619 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xfb12e57) {
        bVar2 = System_String__op_Equality(name,"Distract",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703610 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Distract_g____g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
            DAT_05703610 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x132fe372) {
        bVar2 = System_String__op_Equality(name,"Potato",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570360d == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Potato_g____get);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
            DAT_0570360d = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x27e47193) {
      if (uVar1 == 0x184b43d0) {
        bVar2 = System_String__op_Equality(name,"Carry",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703614 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Carry_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
            DAT_05703614 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x27e47192) {
        bVar2 = System_String__op_Equality(name,"Annie",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703620 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Annie_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
            DAT_05703620 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0x2ab69de5) {
      bVar2 = System_String__op_Equality(name,"Armored",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703621 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Armored_g____ge);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
          DAT_05703621 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x304ff7fb) {
      bVar2 = System_String__op_Equality(name,"None",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570361e == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__None_g____gette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
          DAT_0570361e = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x50d88c7f) {
      bVar2 = System_String__op_Equality(name,"DownStrike",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703617 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DownStrike_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
          DAT_05703617 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0x9d6edc06) {
    if (uVar1 < 0x67c7f536) {
      if (uVar1 == 0x548b671e) {
        bVar2 = System_String__op_Equality(name,"Switchback",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703615 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Switchback_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
            DAT_05703615 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x67c7f535) {
        bVar2 = System_String__op_Equality(name,"Stock",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570361d == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Stock_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
            DAT_0570361d = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0x8d87a40b) {
      bVar2 = System_String__op_Equality(name,"BladeThrow",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570361b == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeThrow_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
          DAT_0570361b = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x960fb720) {
      bVar2 = System_String__op_Equality(name,"Smell",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703611 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Smell_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
          DAT_05703611 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x9d6edc05) {
      bVar2 = System_String__op_Equality(name,"Eren",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570361f == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Eren_g____gette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
          DAT_0570361f = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xb7bb7227) {
    if (uVar1 == 0x9fc581fa) {
      bVar2 = System_String__op_Equality(name,"SmokeBomb",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703613 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SmokeBomb_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
          DAT_05703613 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xa499f21e) {
      bVar2 = System_String__op_Equality(name,"Confuse",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703616 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Confuse_g____ge);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
          DAT_05703616 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xb7bb7226) {
      bVar2 = System_String__op_Equality(name,"Escape",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570360e == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Escape_g____get);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
          DAT_0570360e = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 == 0xc7ef102c) {
    bVar2 = System_String__op_Equality(name,"AHSSTwinShot",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570361c == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSTwinShot_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
        DAT_0570361c = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xca0fab3c) {
    bVar2 = System_String__op_Equality(name,"Dance",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570360f == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Dance_g____gett);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
        DAT_0570360f = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xdba7f44e) {
    bVar2 = System_String__op_Equality(name,"Supply",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703612 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Supply_g____get);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
        DAT_05703612 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicSpecialEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Potato
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Potato (const MethodInfo* method);
// 0x3e93b40

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Potato(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (DAT_0570360d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Potato_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
    DAT_0570360d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Escape
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Escape (const MethodInfo* method);
// 0x3e93be0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Escape(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (DAT_0570360e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Escape_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
    DAT_0570360e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Dance
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Dance (const MethodInfo* method);
// 0x3e93c80

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Dance(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (DAT_0570360f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Dance_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
    DAT_0570360f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Distract
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Distract (const MethodInfo* method);
// 0x3e93d20

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Distract(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (DAT_05703610 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Distract_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
    DAT_05703610 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Smell
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Smell (const MethodInfo* method);
// 0x3e93dc0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Smell(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (DAT_05703611 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Smell_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
    DAT_05703611 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Supply
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Supply (const MethodInfo* method);
// 0x3e93e60

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Supply(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (DAT_05703612 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Supply_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
    DAT_05703612 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__SmokeBomb
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__SmokeBomb (const MethodInfo* method);
// 0x3e93f00

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__SmokeBomb(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (DAT_05703613 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SmokeBomb_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
    DAT_05703613 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Carry
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Carry (const MethodInfo* method);
// 0x3e93fa0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Carry(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (DAT_05703614 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Carry_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
    DAT_05703614 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Switchback
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Switchback (const MethodInfo* method);
// 0x3e94040

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Switchback(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (DAT_05703615 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Switchback_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
    DAT_05703615 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Confuse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Confuse (const MethodInfo* method);
// 0x3e940e0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Confuse(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (DAT_05703616 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Confuse_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
    DAT_05703616 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__DownStrike
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__DownStrike (const MethodInfo* method);
// 0x3e94180

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__DownStrike(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (DAT_05703617 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DownStrike_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
    DAT_05703617 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Spin1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Spin1 (const MethodInfo* method);
// 0x3e94220

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Spin1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (DAT_05703618 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Spin1_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
    DAT_05703618 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Spin2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Spin2 (const MethodInfo* method);
// 0x3e942c0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Spin2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (DAT_05703619 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Spin2_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
    DAT_05703619 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Spin3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Spin3 (const MethodInfo* method);
// 0x3e94360

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Spin3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (DAT_0570361a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Spin3_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
    DAT_0570361a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__BladeThrow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__BladeThrow (const MethodInfo* method);
// 0x3e94400

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__BladeThrow(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (DAT_0570361b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeThrow_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
    DAT_0570361b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__AHSSTwinShot
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__AHSSTwinShot (const MethodInfo* method);
// 0x3e944a0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__AHSSTwinShot
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (DAT_0570361c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSTwinShot_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
    DAT_0570361c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Stock
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Stock (const MethodInfo* method);
// 0x3e94540

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Stock(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (DAT_0570361d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Stock_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
    DAT_0570361d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__None
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__None (const MethodInfo* method);
// 0x3e945e0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__None(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (DAT_0570361e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__None_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
    DAT_0570361e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Eren
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Eren (const MethodInfo* method);
// 0x3e94680

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Eren(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (DAT_0570361f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Eren_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
    DAT_0570361f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Annie
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Annie (const MethodInfo* method);
// 0x3e94720

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Annie(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (DAT_05703620 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Annie_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
    DAT_05703620 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Armored
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Armored (const MethodInfo* method);
// 0x3e947c0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Armored(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (DAT_05703621 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Armored_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSpecialEnum__object);
    DAT_05703621 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSpecialEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicSpecialEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e94860

void CustomLogic_CustomLogicSpecialEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703622 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Eren");
    il2cpp_init_method_metadata(&"BladeThrow");
    il2cpp_init_method_metadata(&"Smell");
    il2cpp_init_method_metadata(&"Spin3");
    il2cpp_init_method_metadata(&"Escape");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Spin2");
    il2cpp_init_method_metadata(&"Annie");
    il2cpp_init_method_metadata(&"Dance");
    il2cpp_init_method_metadata(&"Distract");
    il2cpp_init_method_metadata(&"Confuse");
    il2cpp_init_method_metadata(&"Switchback");
    il2cpp_init_method_metadata(&"SmokeBomb");
    il2cpp_init_method_metadata(&"Armored");
    il2cpp_init_method_metadata(&"Spin1");
    il2cpp_init_method_metadata(&"Potato");
    il2cpp_init_method_metadata(&"Carry");
    il2cpp_init_method_metadata(&"DownStrike");
    il2cpp_init_method_metadata(&"Stock");
    il2cpp_init_method_metadata(&"Supply");
    il2cpp_init_method_metadata(&"AHSSTwinShot");
    DAT_05703622 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Potato",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Escape",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Dance",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Distract",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Smell",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Supply",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SmokeBomb",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Carry",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Switchback",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Confuse",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DownStrike",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Spin1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Spin2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Spin3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeThrow",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSTwinShot",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Stock",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"None",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Eren",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Annie",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Armored",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Potato>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Potato_g____getter_2_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x3e94bd0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings__<__CreatePropertyBinding__Potato>g____getter_2_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (DAT_057035f5 == '\0') {
    il2cpp_init_method_metadata(&"Potato");
    DAT_057035f5 = '\x01';
  }
  return "Potato";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Escape>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Escape_g____getter_3_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x3e94c00

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings__<__CreatePropertyBinding__Escape>g____getter_3_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (DAT_057035f6 == '\0') {
    il2cpp_init_method_metadata(&"Escape");
    DAT_057035f6 = '\x01';
  }
  return "Escape";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Dance>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Dance_g____getter_4_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x3e94c30

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings__<__CreatePropertyBinding__Dance>g____getter_4_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (DAT_057035f7 == '\0') {
    il2cpp_init_method_metadata(&"Dance");
    DAT_057035f7 = '\x01';
  }
  return "Dance";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Distract>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Distract_g____getter_5_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x3e94c60

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings__<__CreatePropertyBinding__Distract>g____getter_5_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (DAT_057035f8 == '\0') {
    il2cpp_init_method_metadata(&"Distract");
    DAT_057035f8 = '\x01';
  }
  return "Distract";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Smell>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Smell_g____getter_6_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x3e94c90

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings__<__CreatePropertyBinding__Smell>g____getter_6_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (DAT_057035f9 == '\0') {
    il2cpp_init_method_metadata(&"Smell");
    DAT_057035f9 = '\x01';
  }
  return "Smell";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Supply>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Supply_g____getter_7_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x3e94cc0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings__<__CreatePropertyBinding__Supply>g____getter_7_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (DAT_057035fa == '\0') {
    il2cpp_init_method_metadata(&"Supply");
    DAT_057035fa = '\x01';
  }
  return "Supply";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__SmokeBomb>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__SmokeBomb_g____getter_8_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x3e94cf0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings__<__CreatePropertyBinding__SmokeBomb>g____getter_8_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (DAT_057035fb == '\0') {
    il2cpp_init_method_metadata(&"SmokeBomb");
    DAT_057035fb = '\x01';
  }
  return "SmokeBomb";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Carry>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Carry_g____getter_9_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x3e94d20

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings__<__CreatePropertyBinding__Carry>g____getter_9_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (DAT_057035fc == '\0') {
    il2cpp_init_method_metadata(&"Carry");
    DAT_057035fc = '\x01';
  }
  return "Carry";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Switchback>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Switchback_g____getter_10_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x3e94d50

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings__<__CreatePropertyBinding__Switchback>g____getter_10_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (DAT_057035fd == '\0') {
    il2cpp_init_method_metadata(&"Switchback");
    DAT_057035fd = '\x01';
  }
  return "Switchback";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Confuse>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Confuse_g____getter_11_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x3e94d80

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings__<__CreatePropertyBinding__Confuse>g____getter_11_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (DAT_057035fe == '\0') {
    il2cpp_init_method_metadata(&"Confuse");
    DAT_057035fe = '\x01';
  }
  return "Confuse";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__DownStrike>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__DownStrike_g____getter_12_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x3e94db0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings__<__CreatePropertyBinding__DownStrike>g____getter_12_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (DAT_057035ff == '\0') {
    il2cpp_init_method_metadata(&"DownStrike");
    DAT_057035ff = '\x01';
  }
  return "DownStrike";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Spin1>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Spin1_g____getter_13_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x3e94de0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings__<__CreatePropertyBinding__Spin1>g____getter_13_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703600 == '\0') {
    il2cpp_init_method_metadata(&"Spin1");
    DAT_05703600 = '\x01';
  }
  return "Spin1";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Spin2>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Spin2_g____getter_14_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x3e94e10

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings__<__CreatePropertyBinding__Spin2>g____getter_14_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703601 == '\0') {
    il2cpp_init_method_metadata(&"Spin2");
    DAT_05703601 = '\x01';
  }
  return "Spin2";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Spin3>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Spin3_g____getter_15_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x3e94e40

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings__<__CreatePropertyBinding__Spin3>g____getter_15_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703602 == '\0') {
    il2cpp_init_method_metadata(&"Spin3");
    DAT_05703602 = '\x01';
  }
  return "Spin3";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__BladeThrow>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__BladeThrow_g____getter_16_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x3e94e70

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings__<__CreatePropertyBinding__BladeThrow>g____getter_16_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703603 == '\0') {
    il2cpp_init_method_metadata(&"BladeThrow");
    DAT_05703603 = '\x01';
  }
  return "BladeThrow";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__AHSSTwinShot>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__AHSSTwinShot_g____getter_17_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x3e94ea0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings__<__CreatePropertyBinding__AHSSTwinShot>g____getter_17_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703604 == '\0') {
    il2cpp_init_method_metadata(&"AHSSTwinShot");
    DAT_05703604 = '\x01';
  }
  return "AHSSTwinShot";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Stock>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Stock_g____getter_18_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x3e94ed0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings__<__CreatePropertyBinding__Stock>g____getter_18_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703605 == '\0') {
    il2cpp_init_method_metadata(&"Stock");
    DAT_05703605 = '\x01';
  }
  return "Stock";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__None>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__None_g____getter_19_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x3e94f00

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings__<__CreatePropertyBinding__None>g____getter_19_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703606 == '\0') {
    il2cpp_init_method_metadata(&"None");
    DAT_05703606 = '\x01';
  }
  return "None";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Eren>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Eren_g____getter_20_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x3e94f30

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings__<__CreatePropertyBinding__Eren>g____getter_20_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703607 == '\0') {
    il2cpp_init_method_metadata(&"Eren");
    DAT_05703607 = '\x01';
  }
  return "Eren";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Annie>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Annie_g____getter_21_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x3e94f60

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings__<__CreatePropertyBinding__Annie>g____getter_21_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703608 == '\0') {
    il2cpp_init_method_metadata(&"Annie");
    DAT_05703608 = '\x01';
  }
  return "Annie";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Armored>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Armored_g____getter_22_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x3e94f90

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings__<__CreatePropertyBinding__Armored>g____getter_22_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703609 == '\0') {
    il2cpp_init_method_metadata(&"Armored");
    DAT_05703609 = '\x01';
  }
  return "Armored";
}


// CustomLogic.CustomLogicSpecialEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicSpecialEnum___ctor (CustomLogic_CustomLogicSpecialEnum_o* __this, const MethodInfo* method);
// 0x3e92d60

void CustomLogic_CustomLogicSpecialEnum___ctor
               (CustomLogic_CustomLogicSpecialEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035f4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057035f4 = '\x01';
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


// CustomLogic.CustomLogicSpecialEnum$$get_Potato
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Potato (const MethodInfo* method);
// 0x3e92dd0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Potato(MethodInfo *method)

{
  if (DAT_057035f5 == '\0') {
    il2cpp_init_method_metadata(&"Potato");
    DAT_057035f5 = '\x01';
  }
  return "Potato";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Escape
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Escape (const MethodInfo* method);
// 0x3e92e00

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Escape(MethodInfo *method)

{
  if (DAT_057035f6 == '\0') {
    il2cpp_init_method_metadata(&"Escape");
    DAT_057035f6 = '\x01';
  }
  return "Escape";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Dance
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Dance (const MethodInfo* method);
// 0x3e92e30

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Dance(MethodInfo *method)

{
  if (DAT_057035f7 == '\0') {
    il2cpp_init_method_metadata(&"Dance");
    DAT_057035f7 = '\x01';
  }
  return "Dance";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Distract
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Distract (const MethodInfo* method);
// 0x3e92e60

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Distract(MethodInfo *method)

{
  if (DAT_057035f8 == '\0') {
    il2cpp_init_method_metadata(&"Distract");
    DAT_057035f8 = '\x01';
  }
  return "Distract";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Smell
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Smell (const MethodInfo* method);
// 0x3e92e90

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Smell(MethodInfo *method)

{
  if (DAT_057035f9 == '\0') {
    il2cpp_init_method_metadata(&"Smell");
    DAT_057035f9 = '\x01';
  }
  return "Smell";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Supply
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Supply (const MethodInfo* method);
// 0x3e92ec0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Supply(MethodInfo *method)

{
  if (DAT_057035fa == '\0') {
    il2cpp_init_method_metadata(&"Supply");
    DAT_057035fa = '\x01';
  }
  return "Supply";
}


// CustomLogic.CustomLogicSpecialEnum$$get_SmokeBomb
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_SmokeBomb (const MethodInfo* method);
// 0x3e92ef0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_SmokeBomb(MethodInfo *method)

{
  if (DAT_057035fb == '\0') {
    il2cpp_init_method_metadata(&"SmokeBomb");
    DAT_057035fb = '\x01';
  }
  return "SmokeBomb";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Carry
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Carry (const MethodInfo* method);
// 0x3e92f20

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Carry(MethodInfo *method)

{
  if (DAT_057035fc == '\0') {
    il2cpp_init_method_metadata(&"Carry");
    DAT_057035fc = '\x01';
  }
  return "Carry";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Switchback
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Switchback (const MethodInfo* method);
// 0x3e92f50

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Switchback(MethodInfo *method)

{
  if (DAT_057035fd == '\0') {
    il2cpp_init_method_metadata(&"Switchback");
    DAT_057035fd = '\x01';
  }
  return "Switchback";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Confuse
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Confuse (const MethodInfo* method);
// 0x3e92f80

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Confuse(MethodInfo *method)

{
  if (DAT_057035fe == '\0') {
    il2cpp_init_method_metadata(&"Confuse");
    DAT_057035fe = '\x01';
  }
  return "Confuse";
}


// CustomLogic.CustomLogicSpecialEnum$$get_DownStrike
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_DownStrike (const MethodInfo* method);
// 0x3e92fb0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_DownStrike(MethodInfo *method)

{
  if (DAT_057035ff == '\0') {
    il2cpp_init_method_metadata(&"DownStrike");
    DAT_057035ff = '\x01';
  }
  return "DownStrike";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Spin1
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Spin1 (const MethodInfo* method);
// 0x3e92fe0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Spin1(MethodInfo *method)

{
  if (DAT_05703600 == '\0') {
    il2cpp_init_method_metadata(&"Spin1");
    DAT_05703600 = '\x01';
  }
  return "Spin1";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Spin2
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Spin2 (const MethodInfo* method);
// 0x3e93010

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Spin2(MethodInfo *method)

{
  if (DAT_05703601 == '\0') {
    il2cpp_init_method_metadata(&"Spin2");
    DAT_05703601 = '\x01';
  }
  return "Spin2";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Spin3
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Spin3 (const MethodInfo* method);
// 0x3e93040

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Spin3(MethodInfo *method)

{
  if (DAT_05703602 == '\0') {
    il2cpp_init_method_metadata(&"Spin3");
    DAT_05703602 = '\x01';
  }
  return "Spin3";
}


// CustomLogic.CustomLogicSpecialEnum$$get_BladeThrow
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_BladeThrow (const MethodInfo* method);
// 0x3e93070

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_BladeThrow(MethodInfo *method)

{
  if (DAT_05703603 == '\0') {
    il2cpp_init_method_metadata(&"BladeThrow");
    DAT_05703603 = '\x01';
  }
  return "BladeThrow";
}


// CustomLogic.CustomLogicSpecialEnum$$get_AHSSTwinShot
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_AHSSTwinShot (const MethodInfo* method);
// 0x3e930a0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_AHSSTwinShot(MethodInfo *method)

{
  if (DAT_05703604 == '\0') {
    il2cpp_init_method_metadata(&"AHSSTwinShot");
    DAT_05703604 = '\x01';
  }
  return "AHSSTwinShot";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Stock
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Stock (const MethodInfo* method);
// 0x3e930d0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Stock(MethodInfo *method)

{
  if (DAT_05703605 == '\0') {
    il2cpp_init_method_metadata(&"Stock");
    DAT_05703605 = '\x01';
  }
  return "Stock";
}


// CustomLogic.CustomLogicSpecialEnum$$get_None
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_None (const MethodInfo* method);
// 0x3e93100

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_None(MethodInfo *method)

{
  if (DAT_05703606 == '\0') {
    il2cpp_init_method_metadata(&"None");
    DAT_05703606 = '\x01';
  }
  return "None";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Eren
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Eren (const MethodInfo* method);
// 0x3e93130

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Eren(MethodInfo *method)

{
  if (DAT_05703607 == '\0') {
    il2cpp_init_method_metadata(&"Eren");
    DAT_05703607 = '\x01';
  }
  return "Eren";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Annie
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Annie (const MethodInfo* method);
// 0x3e93160

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Annie(MethodInfo *method)

{
  if (DAT_05703608 == '\0') {
    il2cpp_init_method_metadata(&"Annie");
    DAT_05703608 = '\x01';
  }
  return "Annie";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Armored
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Armored (const MethodInfo* method);
// 0x3e93190

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Armored(MethodInfo *method)

{
  if (DAT_05703609 == '\0') {
    il2cpp_init_method_metadata(&"Armored");
    DAT_05703609 = '\x01';
  }
  return "Armored";
}


// CustomLogic.CustomLogicSpecialEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_ClassName (CustomLogic_CustomLogicSpecialEnum_o* __this, const MethodInfo* method);
// 0x3e931c0

System_String_o *
CustomLogic_CustomLogicSpecialEnum__get_ClassName
          (CustomLogic_CustomLogicSpecialEnum_o *__this,MethodInfo *method)

{
  if (DAT_0570360a == '\0') {
    il2cpp_init_method_metadata(&"SpecialEnum");
    DAT_0570360a = '\x01';
  }
  return "SpecialEnum";
}


// CustomLogic.CustomLogicSpecialEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicSpecialEnum__get_IsAbstract (CustomLogic_CustomLogicSpecialEnum_o* __this, const MethodInfo* method);
// 0x3e931f0

bool_conflict
CustomLogic_CustomLogicSpecialEnum__get_IsAbstract
          (CustomLogic_CustomLogicSpecialEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicSpecialEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicSpecialEnum__get_IsStatic (CustomLogic_CustomLogicSpecialEnum_o* __this, const MethodInfo* method);
// 0x3e93200

bool_conflict
CustomLogic_CustomLogicSpecialEnum__get_IsStatic
          (CustomLogic_CustomLogicSpecialEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicSpecialEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicSpecialEnum__get_InheritBaseMembers (CustomLogic_CustomLogicSpecialEnum_o* __this, const MethodInfo* method);
// 0x3e93210

bool_conflict
CustomLogic_CustomLogicSpecialEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicSpecialEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


