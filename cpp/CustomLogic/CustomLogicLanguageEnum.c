// Type: CustomLogic.CustomLogicLanguageEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLanguageEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicLanguageEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLanguageEnum_o* CustomLogic_CustomLogicLanguageEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e7b160

CustomLogic_CustomLogicLanguageEnum_o *
CustomLogic_CustomLogicLanguageEnum_Factory__CreateInstance
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
  if (DAT_05703391 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLanguageEnum);
    DAT_05703391 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLanguageEnum);
      if (DAT_0570337c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_0570337c = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicLanguageEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicLanguageEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicLanguageEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLanguageEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e7b280

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLanguageEnum_Bindings__CreateMemberBinding
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
  
  if (DAT_05703392 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Czech");
    il2cpp_init_method_metadata(&"Turkish");
    il2cpp_init_method_metadata(&"Russian");
    il2cpp_init_method_metadata(&"Spanish");
    il2cpp_init_method_metadata(&"TraditionalChinese");
    il2cpp_init_method_metadata(&"Italian");
    il2cpp_init_method_metadata(&"Japanese");
    il2cpp_init_method_metadata(&"German");
    il2cpp_init_method_metadata(&"BrazilianPortuguese");
    il2cpp_init_method_metadata(&"Indonesian");
    il2cpp_init_method_metadata(&"Dutch");
    il2cpp_init_method_metadata(&"Chinese");
    il2cpp_init_method_metadata(&"Polish");
    il2cpp_init_method_metadata(&"Arabic");
    il2cpp_init_method_metadata(&"Ukrainian");
    il2cpp_init_method_metadata(&"English");
    il2cpp_init_method_metadata(&"Korean");
    il2cpp_init_method_metadata(&"Greek");
    il2cpp_init_method_metadata(&"French");
    DAT_05703392 = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0xa4f06666) {
    if (uVar1 < 0x47592387) {
      if (uVar1 < 0x1b9ae0bc) {
        if (uVar1 == 0x11100833) {
          bVar2 = System_String__op_Equality(name,"German",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570339a == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__German_g____get);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
              DAT_0570339a = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x1b9ae0bb) {
          bVar2 = System_String__op_Equality(name,"English",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703398 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__English_g____ge);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
              DAT_05703398 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x3342300c) {
        bVar2 = System_String__op_Equality(name,"Czech",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703396 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Czech_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
            DAT_05703396 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x47592386) {
        bVar2 = System_String__op_Equality(name,"Russian",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057033a1 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Russian_g____ge);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
            DAT_057033a1 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x7cbd6ca6) {
      if (uVar1 == 0x4fbe5a5d) {
        bVar2 = System_String__op_Equality(name,"Ukrainian",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057033a5 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Ukrainian_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
            DAT_057033a5 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x7cbd6ca5) {
        bVar2 = System_String__op_Equality(name,"French",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703399 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__French_g____get);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
            DAT_05703399 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0x940c2e0a) {
      bVar2 = System_String__op_Equality(name,"Japanese",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570339e == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Japanese_g____g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
          DAT_0570339e = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xa4f06665) {
      bVar2 = System_String__op_Equality(name,"TraditionalChinese",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057033a3 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TraditionalChin);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
          DAT_057033a3 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x7e11ec68) {
      bVar2 = System_String__op_Equality(name,"Chinese",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703395 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Chinese_g____ge);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
          DAT_05703395 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xb819825c) {
    if (uVar1 < 0xaaf50d6d) {
      if (uVar1 == 0xa653c2a3) {
        bVar2 = System_String__op_Equality(name,"Greek",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570339b == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Greek_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
            DAT_0570339b = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xaaf50d6c) {
        bVar2 = System_String__op_Equality(name,"Polish",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057033a0 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Polish_g____get);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
            DAT_057033a0 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0xad70bf21) {
      bVar2 = System_String__op_Equality(name,"Korean",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570339f == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Korean_g____get);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
          DAT_0570339f = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xb297e9d1) {
      bVar2 = System_String__op_Equality(name,"Dutch",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703397 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Dutch_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
          DAT_05703397 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xb819825b) {
      bVar2 = System_String__op_Equality(name,"Spanish",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057033a2 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Spanish_g____ge);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
          DAT_057033a2 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xc1122286) {
    if (uVar1 == 0xb94e7b5b) {
      bVar2 = System_String__op_Equality(name,"Turkish",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057033a4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Turkish_g____ge);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
          DAT_057033a4 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xc1122285) {
      bVar2 = System_String__op_Equality(name,"Indonesian",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570339c == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Indonesian_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
          DAT_0570339c = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 == 0xd5499884) {
    bVar2 = System_String__op_Equality(name,"BrazilianPortuguese",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703394 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BrazilianPortug);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
        DAT_05703394 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xf039952b) {
    bVar2 = System_String__op_Equality(name,"Italian",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570339d == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Italian_g____ge);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
        DAT_0570339d = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xd7e15c29) {
    bVar2 = System_String__op_Equality(name,"Arabic",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703393 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Arabic_g____get);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
        DAT_05703393 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicLanguageEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Arabic
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Arabic (const MethodInfo* method);
// 0x3e7b9d0

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Arabic(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (DAT_05703393 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Arabic_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
    DAT_05703393 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__BrazilianPortuguese
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__BrazilianPortuguese (const MethodInfo* method);
// 0x3e7ba70

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__BrazilianPortuguese
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (DAT_05703394 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BrazilianPortug);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
    DAT_05703394 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Chinese
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Chinese (const MethodInfo* method);
// 0x3e7bb10

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Chinese(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (DAT_05703395 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Chinese_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
    DAT_05703395 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Czech
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Czech (const MethodInfo* method);
// 0x3e7bbb0

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Czech(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (DAT_05703396 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Czech_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
    DAT_05703396 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Dutch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Dutch (const MethodInfo* method);
// 0x3e7bc50

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Dutch(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (DAT_05703397 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Dutch_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
    DAT_05703397 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__English
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__English (const MethodInfo* method);
// 0x3e7bcf0

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__English(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (DAT_05703398 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__English_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
    DAT_05703398 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__French
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__French (const MethodInfo* method);
// 0x3e7bd90

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__French(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (DAT_05703399 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__French_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
    DAT_05703399 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__German
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__German (const MethodInfo* method);
// 0x3e7be30

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__German(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (DAT_0570339a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__German_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
    DAT_0570339a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Greek
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Greek (const MethodInfo* method);
// 0x3e7bed0

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Greek(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (DAT_0570339b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Greek_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
    DAT_0570339b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Indonesian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Indonesian (const MethodInfo* method);
// 0x3e7bf70

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Indonesian
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (DAT_0570339c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Indonesian_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
    DAT_0570339c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Italian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Italian (const MethodInfo* method);
// 0x3e7c010

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Italian(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (DAT_0570339d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Italian_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
    DAT_0570339d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Japanese
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Japanese (const MethodInfo* method);
// 0x3e7c0b0

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Japanese(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (DAT_0570339e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Japanese_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
    DAT_0570339e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Korean
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Korean (const MethodInfo* method);
// 0x3e7c150

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Korean(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (DAT_0570339f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Korean_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
    DAT_0570339f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Polish
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Polish (const MethodInfo* method);
// 0x3e7c1f0

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Polish(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (DAT_057033a0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Polish_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
    DAT_057033a0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Russian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Russian (const MethodInfo* method);
// 0x3e7c290

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Russian(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (DAT_057033a1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Russian_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
    DAT_057033a1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Spanish
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Spanish (const MethodInfo* method);
// 0x3e7c330

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Spanish(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (DAT_057033a2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Spanish_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
    DAT_057033a2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__TraditionalChinese
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__TraditionalChinese (const MethodInfo* method);
// 0x3e7c3d0

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__TraditionalChinese
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (DAT_057033a3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TraditionalChin);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
    DAT_057033a3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Turkish
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Turkish (const MethodInfo* method);
// 0x3e7c470

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Turkish(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (DAT_057033a4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Turkish_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
    DAT_057033a4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Ukrainian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Ukrainian (const MethodInfo* method);
// 0x3e7c510

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Ukrainian(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (DAT_057033a5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Ukrainian_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLanguageEnum__object);
    DAT_057033a5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLanguageEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLanguageEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e7c5b0

void CustomLogic_CustomLogicLanguageEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057033a6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Czech");
    il2cpp_init_method_metadata(&"Turkish");
    il2cpp_init_method_metadata(&"Russian");
    il2cpp_init_method_metadata(&"Spanish");
    il2cpp_init_method_metadata(&"TraditionalChinese");
    il2cpp_init_method_metadata(&"Italian");
    il2cpp_init_method_metadata(&"Japanese");
    il2cpp_init_method_metadata(&"German");
    il2cpp_init_method_metadata(&"BrazilianPortuguese");
    il2cpp_init_method_metadata(&"Indonesian");
    il2cpp_init_method_metadata(&"Dutch");
    il2cpp_init_method_metadata(&"Chinese");
    il2cpp_init_method_metadata(&"Polish");
    il2cpp_init_method_metadata(&"Arabic");
    il2cpp_init_method_metadata(&"Ukrainian");
    il2cpp_init_method_metadata(&"English");
    il2cpp_init_method_metadata(&"Korean");
    il2cpp_init_method_metadata(&"Greek");
    il2cpp_init_method_metadata(&"French");
    DAT_057033a6 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Arabic",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BrazilianPortuguese",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Chinese",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Czech",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Dutch",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"English",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"French",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"German",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Greek",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Indonesian",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Italian",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Japanese",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Korean",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Polish",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Russian",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Spanish",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TraditionalChinese",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Turkish",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Ukrainian",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Arabic>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Arabic_g____getter_2_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x3e7c8e0

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings__<__CreatePropertyBinding__Arabic>g____getter_2_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570337d == '\0') {
    il2cpp_init_method_metadata(&"\x627\x644\x639\x631\x628\x64a\x629");
    DAT_0570337d = '\x01';
  }
  return "\x627\x644\x639\x631\x628\x64a\x629";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__BrazilianPortuguese>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__BrazilianPortuguese_g____getter_3_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x3e7c910

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings__<__CreatePropertyBinding__BrazilianPortuguese>g____getter_3_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570337e == '\0') {
    il2cpp_init_method_metadata(&"PT-BR");
    DAT_0570337e = '\x01';
  }
  return "PT-BR";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Chinese>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Chinese_g____getter_4_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x3e7c940

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings__<__CreatePropertyBinding__Chinese>g____getter_4_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570337f == '\0') {
    il2cpp_init_method_metadata(&"\x7b80\x4f53\x4e2d\x6587");
    DAT_0570337f = '\x01';
  }
  return "\x7b80\x4f53\x4e2d\x6587";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Czech>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Czech_g____getter_5_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x3e7c970

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings__<__CreatePropertyBinding__Czech>g____getter_5_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703380 == '\0') {
    il2cpp_init_method_metadata(&"\x10ce\x161tina");
    DAT_05703380 = '\x01';
  }
  return "\x10ce\x161tina";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Dutch>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Dutch_g____getter_6_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x3e7c9a0

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings__<__CreatePropertyBinding__Dutch>g____getter_6_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703381 == '\0') {
    il2cpp_init_method_metadata(&"Dutch");
    DAT_05703381 = '\x01';
  }
  return "Dutch";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__English>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__English_g____getter_7_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x3e7c9d0

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings__<__CreatePropertyBinding__English>g____getter_7_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703382 == '\0') {
    il2cpp_init_method_metadata(&"English");
    DAT_05703382 = '\x01';
  }
  return "English";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__French>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__French_g____getter_8_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x3e7ca00

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings__<__CreatePropertyBinding__French>g____getter_8_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703383 == '\0') {
    il2cpp_init_method_metadata(&"Fran\xe7ais");
    DAT_05703383 = '\x01';
  }
  return "Fran\xe7ais";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__German>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__German_g____getter_9_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x3e7ca30

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings__<__CreatePropertyBinding__German>g____getter_9_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703384 == '\0') {
    il2cpp_init_method_metadata(&"Deutsch");
    DAT_05703384 = '\x01';
  }
  return "Deutsch";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Greek>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Greek_g____getter_10_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x3e7ca60

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings__<__CreatePropertyBinding__Greek>g____getter_10_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703385 == '\0') {
    il2cpp_init_method_metadata(&"\x395\x3bb\x3bb\x3b7\x3bd\x3b9\x3ba\x3ac");
    DAT_05703385 = '\x01';
  }
  return "\x395\x3bb\x3bb\x3b7\x3bd\x3b9\x3ba\x3ac";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Indonesian>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Indonesian_g____getter_11_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x3e7ca90

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings__<__CreatePropertyBinding__Indonesian>g____getter_11_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703386 == '\0') {
    il2cpp_init_method_metadata(&"Indonesian");
    DAT_05703386 = '\x01';
  }
  return "Indonesian";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Italian>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Italian_g____getter_12_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x3e7cac0

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings__<__CreatePropertyBinding__Italian>g____getter_12_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703387 == '\0') {
    il2cpp_init_method_metadata(&"Italiano");
    DAT_05703387 = '\x01';
  }
  return "Italiano";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Japanese>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Japanese_g____getter_13_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x3e7caf0

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings__<__CreatePropertyBinding__Japanese>g____getter_13_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703388 == '\0') {
    il2cpp_init_method_metadata(&"\x65e5\x672c\x8a9e");
    DAT_05703388 = '\x01';
  }
  return "\x65e5\x672c\x8a9e";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Korean>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Korean_g____getter_14_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x3e7cb20

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings__<__CreatePropertyBinding__Korean>g____getter_14_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703389 == '\0') {
    il2cpp_init_method_metadata(&"\xd55c\xad6d\xc5b4");
    DAT_05703389 = '\x01';
  }
  return "\xd55c\xad6d\xc5b4";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Polish>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Polish_g____getter_15_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x3e7cb50

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings__<__CreatePropertyBinding__Polish>g____getter_15_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570338a == '\0') {
    il2cpp_init_method_metadata(&"Polski");
    DAT_0570338a = '\x01';
  }
  return "Polski";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Russian>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Russian_g____getter_16_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x3e7cb80

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings__<__CreatePropertyBinding__Russian>g____getter_16_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570338b == '\0') {
    il2cpp_init_method_metadata(&"Russian");
    DAT_0570338b = '\x01';
  }
  return "Russian";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Spanish>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Spanish_g____getter_17_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x3e7cbb0

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings__<__CreatePropertyBinding__Spanish>g____getter_17_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570338c == '\0') {
    il2cpp_init_method_metadata(&"Espa\xf1ol");
    DAT_0570338c = '\x01';
  }
  return "Espa\xf1ol";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__TraditionalChinese>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__TraditionalChinese_g____getter_18_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x3e7cbe0

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings__<__CreatePropertyBinding__TraditionalChinese>g____getter_18_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570338d == '\0') {
    il2cpp_init_method_metadata(&"\x7e41\x9ad4\x4e2d\x6587");
    DAT_0570338d = '\x01';
  }
  return "\x7e41\x9ad4\x4e2d\x6587";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Turkish>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Turkish_g____getter_19_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x3e7cc10

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings__<__CreatePropertyBinding__Turkish>g____getter_19_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570338e == '\0') {
    il2cpp_init_method_metadata(&"T\xfcrk\xe7e");
    DAT_0570338e = '\x01';
  }
  return "T\xfcrk\xe7e";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Ukrainian>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Ukrainian_g____getter_20_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x3e7cc40

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings__<__CreatePropertyBinding__Ukrainian>g____getter_20_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570338f == '\0') {
    il2cpp_init_method_metadata(&"\x423\x43a\x440\x430\x457\x43d\x441\x44c\x43a\x430");
    DAT_0570338f = '\x01';
  }
  return "\x423\x43a\x440\x430\x457\x43d\x441\x44c\x43a\x430";
}


// CustomLogic.CustomLogicLanguageEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicLanguageEnum___ctor (CustomLogic_CustomLogicLanguageEnum_o* __this, const MethodInfo* method);
// 0x3e7ad00

void CustomLogic_CustomLogicLanguageEnum___ctor
               (CustomLogic_CustomLogicLanguageEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570337c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_0570337c = '\x01';
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


// CustomLogic.CustomLogicLanguageEnum$$get_Arabic
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Arabic (const MethodInfo* method);
// 0x3e7ad70

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Arabic(MethodInfo *method)

{
  if (DAT_0570337d == '\0') {
    il2cpp_init_method_metadata(&"\x627\x644\x639\x631\x628\x64a\x629");
    DAT_0570337d = '\x01';
  }
  return "\x627\x644\x639\x631\x628\x64a\x629";
}


// CustomLogic.CustomLogicLanguageEnum$$get_BrazilianPortuguese
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_BrazilianPortuguese (const MethodInfo* method);
// 0x3e7ada0

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_BrazilianPortuguese(MethodInfo *method)

{
  if (DAT_0570337e == '\0') {
    il2cpp_init_method_metadata(&"PT-BR");
    DAT_0570337e = '\x01';
  }
  return "PT-BR";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Chinese
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Chinese (const MethodInfo* method);
// 0x3e7add0

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Chinese(MethodInfo *method)

{
  if (DAT_0570337f == '\0') {
    il2cpp_init_method_metadata(&"\x7b80\x4f53\x4e2d\x6587");
    DAT_0570337f = '\x01';
  }
  return "\x7b80\x4f53\x4e2d\x6587";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Czech
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Czech (const MethodInfo* method);
// 0x3e7ae00

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Czech(MethodInfo *method)

{
  if (DAT_05703380 == '\0') {
    il2cpp_init_method_metadata(&"\x10ce\x161tina");
    DAT_05703380 = '\x01';
  }
  return "\x10ce\x161tina";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Dutch
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Dutch (const MethodInfo* method);
// 0x3e7ae30

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Dutch(MethodInfo *method)

{
  if (DAT_05703381 == '\0') {
    il2cpp_init_method_metadata(&"Dutch");
    DAT_05703381 = '\x01';
  }
  return "Dutch";
}


// CustomLogic.CustomLogicLanguageEnum$$get_English
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_English (const MethodInfo* method);
// 0x3e7ae60

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_English(MethodInfo *method)

{
  if (DAT_05703382 == '\0') {
    il2cpp_init_method_metadata(&"English");
    DAT_05703382 = '\x01';
  }
  return "English";
}


// CustomLogic.CustomLogicLanguageEnum$$get_French
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_French (const MethodInfo* method);
// 0x3e7ae90

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_French(MethodInfo *method)

{
  if (DAT_05703383 == '\0') {
    il2cpp_init_method_metadata(&"Fran\xe7ais");
    DAT_05703383 = '\x01';
  }
  return "Fran\xe7ais";
}


// CustomLogic.CustomLogicLanguageEnum$$get_German
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_German (const MethodInfo* method);
// 0x3e7aec0

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_German(MethodInfo *method)

{
  if (DAT_05703384 == '\0') {
    il2cpp_init_method_metadata(&"Deutsch");
    DAT_05703384 = '\x01';
  }
  return "Deutsch";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Greek
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Greek (const MethodInfo* method);
// 0x3e7aef0

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Greek(MethodInfo *method)

{
  if (DAT_05703385 == '\0') {
    il2cpp_init_method_metadata(&"\x395\x3bb\x3bb\x3b7\x3bd\x3b9\x3ba\x3ac");
    DAT_05703385 = '\x01';
  }
  return "\x395\x3bb\x3bb\x3b7\x3bd\x3b9\x3ba\x3ac";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Indonesian
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Indonesian (const MethodInfo* method);
// 0x3e7af20

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Indonesian(MethodInfo *method)

{
  if (DAT_05703386 == '\0') {
    il2cpp_init_method_metadata(&"Indonesian");
    DAT_05703386 = '\x01';
  }
  return "Indonesian";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Italian
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Italian (const MethodInfo* method);
// 0x3e7af50

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Italian(MethodInfo *method)

{
  if (DAT_05703387 == '\0') {
    il2cpp_init_method_metadata(&"Italiano");
    DAT_05703387 = '\x01';
  }
  return "Italiano";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Japanese
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Japanese (const MethodInfo* method);
// 0x3e7af80

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Japanese(MethodInfo *method)

{
  if (DAT_05703388 == '\0') {
    il2cpp_init_method_metadata(&"\x65e5\x672c\x8a9e");
    DAT_05703388 = '\x01';
  }
  return "\x65e5\x672c\x8a9e";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Korean
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Korean (const MethodInfo* method);
// 0x3e7afb0

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Korean(MethodInfo *method)

{
  if (DAT_05703389 == '\0') {
    il2cpp_init_method_metadata(&"\xd55c\xad6d\xc5b4");
    DAT_05703389 = '\x01';
  }
  return "\xd55c\xad6d\xc5b4";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Polish
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Polish (const MethodInfo* method);
// 0x3e7afe0

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Polish(MethodInfo *method)

{
  if (DAT_0570338a == '\0') {
    il2cpp_init_method_metadata(&"Polski");
    DAT_0570338a = '\x01';
  }
  return "Polski";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Russian
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Russian (const MethodInfo* method);
// 0x3e7b010

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Russian(MethodInfo *method)

{
  if (DAT_0570338b == '\0') {
    il2cpp_init_method_metadata(&"Russian");
    DAT_0570338b = '\x01';
  }
  return "Russian";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Spanish
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Spanish (const MethodInfo* method);
// 0x3e7b040

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Spanish(MethodInfo *method)

{
  if (DAT_0570338c == '\0') {
    il2cpp_init_method_metadata(&"Espa\xf1ol");
    DAT_0570338c = '\x01';
  }
  return "Espa\xf1ol";
}


// CustomLogic.CustomLogicLanguageEnum$$get_TraditionalChinese
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese (const MethodInfo* method);
// 0x3e7b070

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese(MethodInfo *method)

{
  if (DAT_0570338d == '\0') {
    il2cpp_init_method_metadata(&"\x7e41\x9ad4\x4e2d\x6587");
    DAT_0570338d = '\x01';
  }
  return "\x7e41\x9ad4\x4e2d\x6587";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Turkish
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Turkish (const MethodInfo* method);
// 0x3e7b0a0

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Turkish(MethodInfo *method)

{
  if (DAT_0570338e == '\0') {
    il2cpp_init_method_metadata(&"T\xfcrk\xe7e");
    DAT_0570338e = '\x01';
  }
  return "T\xfcrk\xe7e";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Ukrainian
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Ukrainian (const MethodInfo* method);
// 0x3e7b0d0

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Ukrainian(MethodInfo *method)

{
  if (DAT_0570338f == '\0') {
    il2cpp_init_method_metadata(&"\x423\x43a\x440\x430\x457\x43d\x441\x44c\x43a\x430");
    DAT_0570338f = '\x01';
  }
  return "\x423\x43a\x440\x430\x457\x43d\x441\x44c\x43a\x430";
}


// CustomLogic.CustomLogicLanguageEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_ClassName (CustomLogic_CustomLogicLanguageEnum_o* __this, const MethodInfo* method);
// 0x3e7b100

System_String_o *
CustomLogic_CustomLogicLanguageEnum__get_ClassName
          (CustomLogic_CustomLogicLanguageEnum_o *__this,MethodInfo *method)

{
  if (DAT_05703390 == '\0') {
    il2cpp_init_method_metadata(&"LanguageEnum");
    DAT_05703390 = '\x01';
  }
  return "LanguageEnum";
}


// CustomLogic.CustomLogicLanguageEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLanguageEnum__get_IsAbstract (CustomLogic_CustomLogicLanguageEnum_o* __this, const MethodInfo* method);
// 0x3e7b130

bool_conflict
CustomLogic_CustomLogicLanguageEnum__get_IsAbstract
          (CustomLogic_CustomLogicLanguageEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLanguageEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLanguageEnum__get_IsStatic (CustomLogic_CustomLogicLanguageEnum_o* __this, const MethodInfo* method);
// 0x3e7b140

bool_conflict
CustomLogic_CustomLogicLanguageEnum__get_IsStatic
          (CustomLogic_CustomLogicLanguageEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLanguageEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLanguageEnum__get_InheritBaseMembers (CustomLogic_CustomLogicLanguageEnum_o* __this, const MethodInfo* method);
// 0x3e7b150

bool_conflict
CustomLogic_CustomLogicLanguageEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicLanguageEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


