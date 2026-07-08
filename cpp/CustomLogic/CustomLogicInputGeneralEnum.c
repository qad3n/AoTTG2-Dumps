// Type: CustomLogic.CustomLogicInputGeneralEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputGeneralEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicInputGeneralEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputGeneralEnum_o* CustomLogic_CustomLogicInputGeneralEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e6d310

CustomLogic_CustomLogicInputGeneralEnum_o *
CustomLogic_CustomLogicInputGeneralEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicInputGeneralEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05703270 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703270 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicInputGeneralEnum);
      if (DAT_05703257 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05703257 = '\x01';
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
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicInputGeneralEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicInputGeneralEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputGeneralEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e6d430

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__CreateMemberBinding
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
  
  if (DAT_05703271 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Right");
    il2cpp_init_method_metadata(&"SpectatePreviousPlayer");
    il2cpp_init_method_metadata(&"ToggleMap");
    il2cpp_init_method_metadata(&"Down");
    il2cpp_init_method_metadata(&"HideCursor");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"PushToTalk");
    il2cpp_init_method_metadata(&"HideUI");
    il2cpp_init_method_metadata(&"Forward");
    il2cpp_init_method_metadata(&"SpectateNextPlayer");
    il2cpp_init_method_metadata(&"ChangeCharacter");
    il2cpp_init_method_metadata(&"RestartGame");
    il2cpp_init_method_metadata(&"Chat");
    il2cpp_init_method_metadata(&"Up");
    il2cpp_init_method_metadata(&"DebugWindow");
    il2cpp_init_method_metadata(&"Pause");
    il2cpp_init_method_metadata(&"Left");
    il2cpp_init_method_metadata(&"Modifier");
    il2cpp_init_method_metadata(&"ChangeCamera");
    il2cpp_init_method_metadata(&"ToggleScoreboard");
    il2cpp_init_method_metadata(&"Autorun");
    il2cpp_init_method_metadata(&"SkipCutscene");
    DAT_05703271 = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x86de76b7) {
    if (uVar1 < 0x2279d8cc) {
      if (uVar1 < 0xf7c56a9) {
        if (uVar1 == 0x7e09cc2) {
          bVar2 = System_String__op_Equality(name,"SkipCutscene",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703285 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SkipCutscene_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
              DAT_05703285 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0xf7c56a8) {
          bVar2 = System_String__op_Equality(name,"ChangeCharacter",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570327b == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ChangeCharacter);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
              DAT_0570327b = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x145dfac4) {
        bVar2 = System_String__op_Equality(name,"DebugWindow",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703287 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DebugWindow_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
            DAT_05703287 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x1e9e9f85) {
        bVar2 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703275 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Right_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
            DAT_05703275 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x2279d8cb) {
        bVar2 = System_String__op_Equality(name,"Chat",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570327f == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Chat_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
            DAT_0570327f = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x496ac1c7) {
      if (uVar1 == 0x42f35940) {
        bVar2 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703276 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Up_g____getter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
            DAT_05703276 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x44f9bf2d) {
        bVar2 = System_String__op_Equality(name,"Pause",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570327a == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Pause_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
            DAT_0570327a = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x496ac1c6) {
        bVar2 = System_String__op_Equality(name,"RestartGame",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570327c == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RestartGame_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
            DAT_0570327c = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0x8134b193) {
      bVar2 = System_String__op_Equality(name,"HideUI",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703286 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HideUI_g____get);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
          DAT_05703286 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x86de76b6) {
      bVar2 = System_String__op_Equality(name,"SpectateNextPlayer",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703284 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpectateNextPla);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
          DAT_05703284 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x4c33ceaa) {
      bVar2 = System_String__op_Equality(name,"PushToTalk",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703280 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PushToTalk_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
          DAT_05703280 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0x9cd60e68) {
    if (uVar1 < 0x896ac890) {
      if (uVar1 == 0x88ce65f6) {
        bVar2 = System_String__op_Equality(name,"ChangeCamera",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703281 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ChangeCamera_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
            DAT_05703281 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x896ac88f) {
        bVar2 = System_String__op_Equality(name,"Autorun",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703279 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Autorun_g____ge);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
            DAT_05703279 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0x92773890) {
      bVar2 = System_String__op_Equality(name,"Left",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703274 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Left_g____gette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
          DAT_05703274 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x9c35923b) {
      bVar2 = System_String__op_Equality(name,"ToggleScoreboard",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570327d == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ToggleScoreboar);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
          DAT_0570327d = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x9cd60e67) {
      bVar2 = System_String__op_Equality(name,"HideCursor",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703282 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HideCursor_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
          DAT_05703282 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xcfea99f2) {
    if (uVar1 == 0xa4995035) {
      bVar2 = System_String__op_Equality(name,"Down",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703277 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Down_g____gette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
          DAT_05703277 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xc2954bc2) {
      bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703273 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Back_g____gette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
          DAT_05703273 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xcfea99f1) {
      bVar2 = System_String__op_Equality(name,"ToggleMap",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570327e == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ToggleMap_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
          DAT_0570327e = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 == 0xd31e770e) {
    bVar2 = System_String__op_Equality(name,"SpectatePreviousPlayer",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703283 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpectatePreviou);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
        DAT_05703283 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xe713b670) {
    bVar2 = System_String__op_Equality(name,"Modifier",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703278 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Modifier_g____g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
        DAT_05703278 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xe50883ba) {
    bVar2 = System_String__op_Equality(name,"Forward",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703272 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Forward_g____ge);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
        DAT_05703272 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicInputGeneralEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Forward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Forward (const MethodInfo* method);
// 0x3e6dc90

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Forward
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (DAT_05703272 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Forward_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
    DAT_05703272 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Back
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Back (const MethodInfo* method);
// 0x3e6dd30

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Back(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (DAT_05703273 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Back_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
    DAT_05703273 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Left
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Left (const MethodInfo* method);
// 0x3e6ddd0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Left(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (DAT_05703274 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Left_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
    DAT_05703274 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x3e6de70

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (DAT_05703275 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Right_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
    DAT_05703275 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x3e6df10

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (DAT_05703276 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Up_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
    DAT_05703276 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Down
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Down (const MethodInfo* method);
// 0x3e6dfb0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Down(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (DAT_05703277 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Down_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
    DAT_05703277 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Modifier
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Modifier (const MethodInfo* method);
// 0x3e6e050

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Modifier
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (DAT_05703278 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Modifier_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
    DAT_05703278 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Autorun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Autorun (const MethodInfo* method);
// 0x3e6e0f0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Autorun
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (DAT_05703279 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Autorun_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
    DAT_05703279 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Pause
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Pause (const MethodInfo* method);
// 0x3e6e190

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Pause(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (DAT_0570327a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Pause_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
    DAT_0570327a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ChangeCharacter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ChangeCharacter (const MethodInfo* method);
// 0x3e6e230

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ChangeCharacter
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (DAT_0570327b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ChangeCharacter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
    DAT_0570327b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__RestartGame
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__RestartGame (const MethodInfo* method);
// 0x3e6e2d0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__RestartGame
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (DAT_0570327c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RestartGame_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
    DAT_0570327c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ToggleScoreboard
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ToggleScoreboard (const MethodInfo* method);
// 0x3e6e370

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ToggleScoreboard
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (DAT_0570327d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ToggleScoreboar);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
    DAT_0570327d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ToggleMap
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ToggleMap (const MethodInfo* method);
// 0x3e6e410

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ToggleMap
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (DAT_0570327e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ToggleMap_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
    DAT_0570327e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Chat
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Chat (const MethodInfo* method);
// 0x3e6e4b0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Chat(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (DAT_0570327f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Chat_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
    DAT_0570327f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__PushToTalk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__PushToTalk (const MethodInfo* method);
// 0x3e6e550

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__PushToTalk
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (DAT_05703280 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PushToTalk_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
    DAT_05703280 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ChangeCamera
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ChangeCamera (const MethodInfo* method);
// 0x3e6e5f0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ChangeCamera
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (DAT_05703281 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ChangeCamera_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
    DAT_05703281 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__HideCursor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideCursor (const MethodInfo* method);
// 0x3e6e690

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideCursor
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (DAT_05703282 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HideCursor_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
    DAT_05703282 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__SpectatePreviousPlayer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SpectatePreviousPlayer (const MethodInfo* method);
// 0x3e6e730

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SpectatePreviousPlayer
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (DAT_05703283 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpectatePreviou);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
    DAT_05703283 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__SpectateNextPlayer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SpectateNextPlayer (const MethodInfo* method);
// 0x3e6e7d0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SpectateNextPlayer
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (DAT_05703284 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpectateNextPla);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
    DAT_05703284 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__SkipCutscene
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SkipCutscene (const MethodInfo* method);
// 0x3e6e870

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SkipCutscene
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (DAT_05703285 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SkipCutscene_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
    DAT_05703285 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__HideUI
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideUI (const MethodInfo* method);
// 0x3e6e910

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideUI
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (DAT_05703286 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HideUI_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
    DAT_05703286 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__DebugWindow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__DebugWindow (const MethodInfo* method);
// 0x3e6e9b0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__DebugWindow
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (DAT_05703287 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DebugWindow_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputGeneralEnum__object);
    DAT_05703287 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputGeneralEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputGeneralEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e6ea50

void CustomLogic_CustomLogicInputGeneralEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703288 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Right");
    il2cpp_init_method_metadata(&"SpectatePreviousPlayer");
    il2cpp_init_method_metadata(&"ToggleMap");
    il2cpp_init_method_metadata(&"Down");
    il2cpp_init_method_metadata(&"HideCursor");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"PushToTalk");
    il2cpp_init_method_metadata(&"HideUI");
    il2cpp_init_method_metadata(&"Forward");
    il2cpp_init_method_metadata(&"SpectateNextPlayer");
    il2cpp_init_method_metadata(&"ChangeCharacter");
    il2cpp_init_method_metadata(&"RestartGame");
    il2cpp_init_method_metadata(&"Chat");
    il2cpp_init_method_metadata(&"Up");
    il2cpp_init_method_metadata(&"DebugWindow");
    il2cpp_init_method_metadata(&"Pause");
    il2cpp_init_method_metadata(&"Left");
    il2cpp_init_method_metadata(&"Modifier");
    il2cpp_init_method_metadata(&"ChangeCamera");
    il2cpp_init_method_metadata(&"ToggleScoreboard");
    il2cpp_init_method_metadata(&"Autorun");
    il2cpp_init_method_metadata(&"SkipCutscene");
    DAT_05703288 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Forward",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Back",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Left",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Right",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Up",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Down",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Modifier",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Autorun",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Pause",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ChangeCharacter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RestartGame",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ToggleScoreboard",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ToggleMap",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Chat",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PushToTalk",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ChangeCamera",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HideCursor",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpectatePreviousPlayer",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpectateNextPlayer",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SkipCutscene",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HideUI",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DebugWindow",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Forward>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Forward_g____getter_2_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x3e6ede0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__<__CreatePropertyBinding__Forward>g____getter_2_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703289 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703289 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703540 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703540 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Back>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Back_g____getter_3_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x3e6ee90

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__<__CreatePropertyBinding__Back>g____getter_3_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570328a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570328a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703541 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703541 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Left>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Left_g____getter_4_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x3e6ef40

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__<__CreatePropertyBinding__Left>g____getter_4_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570328b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570328b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703542 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703542 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Right>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Right_g____getter_5_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x3e6eff0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__<__CreatePropertyBinding__Right>g____getter_5_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570328c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570328c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703543 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703543 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Up>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Up_g____getter_6_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x3e6f0a0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__<__CreatePropertyBinding__Up>g____getter_6_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570328d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570328d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703544 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703544 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Down>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Down_g____getter_7_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x3e6f150

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__<__CreatePropertyBinding__Down>g____getter_7_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570328e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570328e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703545 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703545 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Modifier>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Modifier_g____getter_8_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x3e6f200

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__<__CreatePropertyBinding__Modifier>g____getter_8_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570328f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570328f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703546 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703546 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Autorun>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Autorun_g____getter_9_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x3e6f2b0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__<__CreatePropertyBinding__Autorun>g____getter_9_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703290 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703290 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703547 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703547 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x38);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Pause>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Pause_g____getter_10_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x3e6f360

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__<__CreatePropertyBinding__Pause>g____getter_10_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703291 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703291 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703548 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703548 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ChangeCharacter>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ChangeCharacter_g____getter_11_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x3e6f410

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__<__CreatePropertyBinding__ChangeCharacter>g____getter_11_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703292 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703292 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703549 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703549 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x48);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__RestartGame>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__RestartGame_g____getter_12_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x3e6f4c0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__<__CreatePropertyBinding__RestartGame>g____getter_12_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703293 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703293 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570354a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570354a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x50);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ToggleScoreboard>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ToggleScoreboard_g____getter_13_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x3e6f570

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__<__CreatePropertyBinding__ToggleScoreboard>g____getter_13_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703294 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703294 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570354b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570354b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x58);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ToggleMap>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ToggleMap_g____getter_14_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x3e6f620

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__<__CreatePropertyBinding__ToggleMap>g____getter_14_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703295 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703295 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570354c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570354c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x60);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Chat>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Chat_g____getter_15_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x3e6f6d0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__<__CreatePropertyBinding__Chat>g____getter_15_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703296 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703296 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570354d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570354d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x68);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__PushToTalk>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__PushToTalk_g____getter_16_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x3e6f780

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__<__CreatePropertyBinding__PushToTalk>g____getter_16_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703297 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703297 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570354e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570354e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x70);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ChangeCamera>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ChangeCamera_g____getter_17_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x3e6f830

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__<__CreatePropertyBinding__ChangeCamera>g____getter_17_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703298 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703298 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570354f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570354f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x78);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__HideCursor>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__HideCursor_g____getter_18_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x3e6f8e0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__<__CreatePropertyBinding__HideCursor>g____getter_18_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703299 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703299 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703550 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703550 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x80);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__SpectatePreviousPlayer>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__SpectatePreviousPlayer_g____getter_19_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x3e6f990

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__<__CreatePropertyBinding__SpectatePreviousPlayer>g____getter_19_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570329a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570329a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703551 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703551 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x88);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__SpectateNextPlayer>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__SpectateNextPlayer_g____getter_20_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x3e6fa40

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__<__CreatePropertyBinding__SpectateNextPlayer>g____getter_20_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570329b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570329b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703552 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703552 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x90);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__SkipCutscene>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__SkipCutscene_g____getter_21_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x3e6faf0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__<__CreatePropertyBinding__SkipCutscene>g____getter_21_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570329c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570329c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703553 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703553 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x98);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__HideUI>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__HideUI_g____getter_22_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x3e6fba0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__<__CreatePropertyBinding__HideUI>g____getter_22_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570329d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570329d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703554 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703554 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0xa0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__DebugWindow>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__DebugWindow_g____getter_23_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x3e6fc50

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__<__CreatePropertyBinding__DebugWindow>g____getter_23_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570329e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570329e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703555 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703555 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0xa8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicInputGeneralEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputGeneralEnum___ctor (CustomLogic_CustomLogicInputGeneralEnum_o* __this, const MethodInfo* method);
// 0x3e6c470

void CustomLogic_CustomLogicInputGeneralEnum___ctor
               (CustomLogic_CustomLogicInputGeneralEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703257 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703257 = '\x01';
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


// CustomLogic.CustomLogicInputGeneralEnum$$get_Forward
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Forward (const MethodInfo* method);
// 0x3e6c4e0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Forward(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703258 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703258 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Back
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Back (const MethodInfo* method);
// 0x3e6c550

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Back(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703259 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703259 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Left
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Left (const MethodInfo* method);
// 0x3e6c5c0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Left(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570325a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570325a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Right
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Right (const MethodInfo* method);
// 0x3e6c630

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Right(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570325b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570325b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Up
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Up (const MethodInfo* method);
// 0x3e6c6a0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Up(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570325c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570325c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Down
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Down (const MethodInfo* method);
// 0x3e6c710

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Down(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570325d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570325d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Modifier
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Modifier (const MethodInfo* method);
// 0x3e6c780

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Modifier(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570325e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570325e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Autorun
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Autorun (const MethodInfo* method);
// 0x3e6c7f0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Autorun(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570325f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570325f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x38);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Pause
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Pause (const MethodInfo* method);
// 0x3e6c860

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Pause(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703260 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703260 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ChangeCharacter
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ChangeCharacter (const MethodInfo* method);
// 0x3e6c8d0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_ChangeCharacter(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703261 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703261 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x48);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_RestartGame
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_RestartGame (const MethodInfo* method);
// 0x3e6c940

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_RestartGame(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703262 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703262 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x50);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ToggleScoreboard
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ToggleScoreboard (const MethodInfo* method);
// 0x3e6c9b0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_ToggleScoreboard(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703263 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703263 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x58);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ToggleMap
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ToggleMap (const MethodInfo* method);
// 0x3e6ca20

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_ToggleMap(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703264 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703264 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x60);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Chat
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Chat (const MethodInfo* method);
// 0x3e6ca90

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Chat(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703265 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703265 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x68);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_PushToTalk
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_PushToTalk (const MethodInfo* method);
// 0x3e6cb00

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_PushToTalk(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703266 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703266 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x70);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ChangeCamera
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ChangeCamera (const MethodInfo* method);
// 0x3e6cb70

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_ChangeCamera(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703267 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703267 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x78);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_HideCursor
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_HideCursor (const MethodInfo* method);
// 0x3e6cbe0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_HideCursor(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703268 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703268 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x80);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_SpectatePreviousPlayer
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_SpectatePreviousPlayer (const MethodInfo* method);
// 0x3e6cc50

System_String_o *
CustomLogic_CustomLogicInputGeneralEnum__get_SpectatePreviousPlayer(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703269 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_05703269 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x88);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_SpectateNextPlayer
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_SpectateNextPlayer (const MethodInfo* method);
// 0x3e6ccc0

System_String_o *
CustomLogic_CustomLogicInputGeneralEnum__get_SpectateNextPlayer(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570326a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570326a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x90);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_SkipCutscene
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_SkipCutscene (const MethodInfo* method);
// 0x3e6cd30

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_SkipCutscene(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570326b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570326b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x98);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_HideUI
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_HideUI (const MethodInfo* method);
// 0x3e6cda0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_HideUI(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570326c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570326c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0xa0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_DebugWindow
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_DebugWindow (const MethodInfo* method);
// 0x3e6ce10

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_DebugWindow(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570326d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    DAT_0570326d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0xa8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ClassName (CustomLogic_CustomLogicInputGeneralEnum_o* __this, const MethodInfo* method);
// 0x3e6ce80

System_String_o *
CustomLogic_CustomLogicInputGeneralEnum__get_ClassName
          (CustomLogic_CustomLogicInputGeneralEnum_o *__this,MethodInfo *method)

{
  if (DAT_0570326e == '\0') {
    il2cpp_init_method_metadata(&"InputGeneralEnum");
    DAT_0570326e = '\x01';
  }
  return "InputGeneralEnum";
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputGeneralEnum__get_IsAbstract (CustomLogic_CustomLogicInputGeneralEnum_o* __this, const MethodInfo* method);
// 0x3e6ceb0

bool_conflict
CustomLogic_CustomLogicInputGeneralEnum__get_IsAbstract
          (CustomLogic_CustomLogicInputGeneralEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputGeneralEnum__get_IsStatic (CustomLogic_CustomLogicInputGeneralEnum_o* __this, const MethodInfo* method);
// 0x3e6cec0

bool_conflict
CustomLogic_CustomLogicInputGeneralEnum__get_IsStatic
          (CustomLogic_CustomLogicInputGeneralEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputGeneralEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputGeneralEnum_o* __this, const MethodInfo* method);
// 0x3e6ced0

bool_conflict
CustomLogic_CustomLogicInputGeneralEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicInputGeneralEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputGeneralEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputGeneralEnum___cctor (const MethodInfo* method);
// 0x3e6cee0

void CustomLogic_CustomLogicInputGeneralEnum___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_0570326f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputGeneralEnum);
    il2cpp_init_method_metadata(&"General/Modifier");
    il2cpp_init_method_metadata(&"General/HideCursor");
    il2cpp_init_method_metadata(&"General/ChangeCamera");
    il2cpp_init_method_metadata(&"General/ToggleScoreboard");
    il2cpp_init_method_metadata(&"General/Pause");
    il2cpp_init_method_metadata(&"General/Left");
    il2cpp_init_method_metadata(&"General/Autorun");
    il2cpp_init_method_metadata(&"General/Up");
    il2cpp_init_method_metadata(&"General/SpectateNextPlayer");
    il2cpp_init_method_metadata(&"General/Right");
    il2cpp_init_method_metadata(&"General/ChangeCharacter");
    il2cpp_init_method_metadata(&"General/RestartGame");
    il2cpp_init_method_metadata(&"General/DebugWindow");
    il2cpp_init_method_metadata(&"General/Forward");
    il2cpp_init_method_metadata(&"General/Back");
    il2cpp_init_method_metadata(&"General/PushToTalk");
    il2cpp_init_method_metadata(&"General/SpectatePreviousPlayer");
    il2cpp_init_method_metadata(&"General/ToggleMap");
    il2cpp_init_method_metadata(&"General/Down");
    il2cpp_init_method_metadata(&"General/Chat");
    il2cpp_init_method_metadata(&"General/SkipCutscene");
    il2cpp_init_method_metadata(&"General/HideUI");
    DAT_0570326f = '\x01';
  }
  **(undefined8 **)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) = "General/Forward";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8),"General/Forward");
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "General/Back";
  il2cpp_runtime_glue(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "General/Left";
  il2cpp_runtime_glue(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "General/Right";
  il2cpp_runtime_glue(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "General/Up";
  il2cpp_runtime_glue(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "General/Down";
  il2cpp_runtime_glue(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "General/Modifier";
  il2cpp_runtime_glue(lVar1 + 0x30);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x38) = "General/Autorun";
  il2cpp_runtime_glue(lVar1 + 0x38);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x40) = "General/Pause";
  il2cpp_runtime_glue(lVar1 + 0x40);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x48) = "General/ChangeCharacter";
  il2cpp_runtime_glue(lVar1 + 0x48);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x50) = "General/RestartGame";
  il2cpp_runtime_glue(lVar1 + 0x50);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x58) = "General/ToggleScoreboard";
  il2cpp_runtime_glue(lVar1 + 0x58);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x60) = "General/ToggleMap";
  il2cpp_runtime_glue(lVar1 + 0x60);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x68) = "General/Chat";
  il2cpp_runtime_glue(lVar1 + 0x68);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x70) = "General/PushToTalk";
  il2cpp_runtime_glue(lVar1 + 0x70);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x78) = "General/ChangeCamera";
  il2cpp_runtime_glue(lVar1 + 0x78);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x80) = "General/HideCursor";
  il2cpp_runtime_glue(lVar1 + 0x80);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x88) = "General/SpectatePreviousPlayer";
  il2cpp_runtime_glue(lVar1 + 0x88);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x90) = "General/SpectateNextPlayer";
  il2cpp_runtime_glue(lVar1 + 0x90);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x98) = "General/SkipCutscene";
  il2cpp_runtime_glue(lVar1 + 0x98);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xa0) = "General/HideUI";
  il2cpp_runtime_glue(lVar1 + 0xa0);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xa8) = "General/DebugWindow";
  il2cpp_runtime_glue(lVar1 + 0xa8);
  return;
}


