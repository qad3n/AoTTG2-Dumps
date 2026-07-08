// Type: CustomLogic.CustomLogicTitanSoundEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTitanSoundEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicTitanSoundEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTitanSoundEnum_o* CustomLogic_CustomLogicTitanSoundEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3ea2b90

CustomLogic_CustomLogicTitanSoundEnum_o *
CustomLogic_CustomLogicTitanSoundEnum_Factory__CreateInstance
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
  if (DAT_05703751 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTitanSoundEnum);
    DAT_05703751 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTitanSoundEnum);
      if (DAT_05703724 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05703724 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicTitanSoundEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicTitanSoundEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicTitanSoundEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTitanSoundEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ea2cb0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__CreateMemberBinding
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
  
  if (DAT_05703752 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Hurt2");
    il2cpp_init_method_metadata(&"Huff2");
    il2cpp_init_method_metadata(&"Swing3");
    il2cpp_init_method_metadata(&"Huff4");
    il2cpp_init_method_metadata(&"DeathNoFall");
    il2cpp_init_method_metadata(&"Footstep1");
    il2cpp_init_method_metadata(&"RockThrow2");
    il2cpp_init_method_metadata(&"Huff1");
    il2cpp_init_method_metadata(&"Grunt1");
    il2cpp_init_method_metadata(&"TitanJump");
    il2cpp_init_method_metadata(&"Laugh2");
    il2cpp_init_method_metadata(&"Hurt3");
    il2cpp_init_method_metadata(&"Bite1");
    il2cpp_init_method_metadata(&"Huff6");
    il2cpp_init_method_metadata(&"Grunt4");
    il2cpp_init_method_metadata(&"Hurt5");
    il2cpp_init_method_metadata(&"Footstep3");
    il2cpp_init_method_metadata(&"Grunt2");
    il2cpp_init_method_metadata(&"Grunt6");
    il2cpp_init_method_metadata(&"Grunt10");
    il2cpp_init_method_metadata(&"Swing1");
    il2cpp_init_method_metadata(&"Hurt4");
    il2cpp_init_method_metadata(&"Hurt8");
    il2cpp_init_method_metadata(&"Huff5");
    il2cpp_init_method_metadata(&"Hit");
    il2cpp_init_method_metadata(&"Hurt1");
    il2cpp_init_method_metadata(&"Hurt6");
    il2cpp_init_method_metadata(&"Bite2");
    il2cpp_init_method_metadata(&"Swing2");
    il2cpp_init_method_metadata(&"DeathFall");
    il2cpp_init_method_metadata(&"Footstep2");
    il2cpp_init_method_metadata(&"RockPickup");
    il2cpp_init_method_metadata(&"Grunt5");
    il2cpp_init_method_metadata(&"Grunt7");
    il2cpp_init_method_metadata(&"Grunt9");
    il2cpp_init_method_metadata(&"Roar2");
    il2cpp_init_method_metadata(&"Grunt8");
    il2cpp_init_method_metadata(&"Laugh1");
    il2cpp_init_method_metadata(&"Grunt3");
    il2cpp_init_method_metadata(&"Hurt7");
    il2cpp_init_method_metadata(&"Roar1");
    il2cpp_init_method_metadata(&"Huff3");
    il2cpp_init_method_metadata(&"RockThrow1");
    DAT_05703752 = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x44d927e0) {
    if (uVar1 < 0x21d25cf2) {
      if (uVar1 < 0x1ae90931) {
        if (uVar1 < 0xfb1ddde) {
          if (uVar1 == 0xcb1d924) {
            bVar2 = System_String__op_Equality(name,"Roar1",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_0570376c == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Roar1_g____gett);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
                DAT_0570376c = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0xfb1dddd) {
            bVar2 = System_String__op_Equality(name,"Roar2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_0570376d == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Roar2_g____gett);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
                DAT_0570376d = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
        }
        else if (uVar1 == 0x15c63468) {
          bVar2 = System_String__op_Equality(name,"DeathFall",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570376e == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DeathFall_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
              DAT_0570376e = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x16d24ba0) {
          bVar2 = System_String__op_Equality(name,"Hurt8",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703760 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hurt8_g____gett);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
              DAT_05703760 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x1ae90930) {
          bVar2 = System_String__op_Equality(name,"Footstep3",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703755 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Footstep3_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
              DAT_05703755 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 < 0x1ce90c57) {
        if (uVar1 == 0x1be90ac3) {
          bVar2 = System_String__op_Equality(name,"Footstep2",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703754 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Footstep2_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
              DAT_05703754 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x1ce90c56) {
          bVar2 = System_String__op_Equality(name,"Footstep1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703753 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Footstep1_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
              DAT_05703753 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x1fd259cb) {
        bVar2 = System_String__op_Equality(name,"Hurt1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703759 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hurt1_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            DAT_05703759 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x20d25b5e) {
        bVar2 = System_String__op_Equality(name,"Hurt2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570375a == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hurt2_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            DAT_0570375a = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x21d25cf1) {
        bVar2 = System_String__op_Equality(name,"Hurt3",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570375b == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hurt3_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            DAT_0570375b = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x25d2633e) {
      if (uVar1 < 0x23d26018) {
        if (uVar1 == 0x22d25e84) {
          bVar2 = System_String__op_Equality(name,"Hurt4",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570375c == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hurt4_g____gett);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
              DAT_0570375c = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x23d26017) {
          bVar2 = System_String__op_Equality(name,"Hurt5",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570375d == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hurt5_g____gett);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
              DAT_0570375d = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x24389c31) {
        bVar2 = System_String__op_Equality(name,"TitanJump",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570377a == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TitanJump_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            DAT_0570377a = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x24d261aa) {
        bVar2 = System_String__op_Equality(name,"Hurt6",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570375e == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hurt6_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            DAT_0570375e = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x25d2633d) {
        bVar2 = System_String__op_Equality(name,"Hurt7",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570375f == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hurt7_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            DAT_0570375f = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x41d92327) {
      if (uVar1 == 0x26b48368) {
        bVar2 = System_String__op_Equality(name,"RockPickup",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570377b == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RockPickup_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            DAT_0570377b = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x3fd92000) {
        bVar2 = System_String__op_Equality(name,"Grunt1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703761 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grunt1_g____get);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            DAT_05703761 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x41d92326) {
        bVar2 = System_String__op_Equality(name,"Grunt3",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703763 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grunt3_g____get);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            DAT_05703763 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0x42d924b9) {
      bVar2 = System_String__op_Equality(name,"Grunt2",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703762 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grunt2_g____get);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          DAT_05703762 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x43d9264c) {
      bVar2 = System_String__op_Equality(name,"Grunt5",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703765 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grunt5_g____get);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          DAT_05703765 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x44d927df) {
      bVar2 = System_String__op_Equality(name,"Grunt4",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703764 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grunt4_g____get);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          DAT_05703764 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0x916e2c5a) {
    if (uVar1 < 0x655d504b) {
      if (uVar1 < 0x46d92b06) {
        if (uVar1 == 0x45d92972) {
          bVar2 = System_String__op_Equality(name,"Grunt7",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703767 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grunt7_g____get);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
              DAT_05703767 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x46d92b05) {
          bVar2 = System_String__op_Equality(name,"Grunt6",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703766 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grunt6_g____get);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
              DAT_05703766 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x47d92c98) {
        bVar2 = System_String__op_Equality(name,"Grunt9",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703769 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grunt9_g____get);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            DAT_05703769 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x48d92e2b) {
        bVar2 = System_String__op_Equality(name,"Grunt8",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703768 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grunt8_g____get);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            DAT_05703768 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x655d504a) {
        bVar2 = System_String__op_Equality(name,"Hit",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570376b == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hit_g____getter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            DAT_0570376b = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x8b2852c2) {
      if (uVar1 == 0x88284e08) {
        bVar2 = System_String__op_Equality(name,"Swing1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703756 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Swing1_g____get);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            DAT_05703756 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x8a28512e) {
        bVar2 = System_String__op_Equality(name,"Swing3",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703758 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Swing3_g____get);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            DAT_05703758 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x8b2852c1) {
        bVar2 = System_String__op_Equality(name,"Swing2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703757 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Swing2_g____get);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            DAT_05703757 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0x8e6e27a0) {
      bVar2 = System_String__op_Equality(name,"Huff2",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703775 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Huff2_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          DAT_05703775 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x8f6e2933) {
      bVar2 = System_String__op_Equality(name,"Huff3",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703776 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Huff3_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          DAT_05703776 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x916e2c59) {
      bVar2 = System_String__op_Equality(name,"Huff1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703774 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Huff1_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          DAT_05703774 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xa109122b) {
    if (uVar1 < 0x946e3113) {
      if (uVar1 == 0x926e2dec) {
        bVar2 = System_String__op_Equality(name,"Huff6",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703779 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Huff6_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            DAT_05703779 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x946e3112) {
        bVar2 = System_String__op_Equality(name,"Huff4",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703777 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Huff4_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
            DAT_05703777 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0x956e32a5) {
      bVar2 = System_String__op_Equality(name,"Huff5",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703778 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Huff5_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          DAT_05703778 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xa0091097) {
      bVar2 = System_String__op_Equality(name,"RockThrow1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570377c == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RockThrow1_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          DAT_0570377c = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xa109122a) {
      bVar2 = System_String__op_Equality(name,"RockThrow2",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570377d == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RockThrow2_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          DAT_0570377d = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xad6b6e7b) {
    if (uVar1 == 0xac6b6ce7) {
      bVar2 = System_String__op_Equality(name,"Bite2",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703771 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Bite2_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          DAT_05703771 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xad627477) {
      bVar2 = System_String__op_Equality(name,"DeathNoFall",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570376f == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DeathNoFall_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          DAT_0570376f = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xad6b6e7a) {
      bVar2 = System_String__op_Equality(name,"Bite1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703770 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Bite1_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
          DAT_05703770 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 == 0xb2cdab90) {
    bVar2 = System_String__op_Equality(name,"Grunt10",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570376a == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grunt10_g____ge);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
        DAT_0570376a = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xc25fad04) {
    bVar2 = System_String__op_Equality(name,"Laugh2",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703773 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Laugh2_g____get);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
        DAT_05703773 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xc55fb1bd) {
    bVar2 = System_String__op_Equality(name,"Laugh1",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703772 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Laugh1_g____get);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
        DAT_05703772 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicTitanSoundEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep1 (const MethodInfo* method);
// 0x3ea3c80

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703753 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Footstep1_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703753 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep2 (const MethodInfo* method);
// 0x3ea3d20

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703754 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Footstep2_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703754 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep3 (const MethodInfo* method);
// 0x3ea3dc0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Footstep3
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703755 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Footstep3_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703755 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Swing1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing1 (const MethodInfo* method);
// 0x3ea3e60

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703756 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Swing1_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703756 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Swing2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing2 (const MethodInfo* method);
// 0x3ea3f00

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703757 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Swing2_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703757 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Swing3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing3 (const MethodInfo* method);
// 0x3ea3fa0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Swing3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703758 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Swing3_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703758 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt1 (const MethodInfo* method);
// 0x3ea4040

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703759 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hurt1_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703759 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt2 (const MethodInfo* method);
// 0x3ea40e0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_0570375a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hurt2_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_0570375a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt3 (const MethodInfo* method);
// 0x3ea4180

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_0570375b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hurt3_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_0570375b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt4 (const MethodInfo* method);
// 0x3ea4220

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt4(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_0570375c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hurt4_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_0570375c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt5 (const MethodInfo* method);
// 0x3ea42c0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt5(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_0570375d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hurt5_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_0570375d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt6 (const MethodInfo* method);
// 0x3ea4360

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt6(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_0570375e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hurt6_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_0570375e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt7 (const MethodInfo* method);
// 0x3ea4400

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt7(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_0570375f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hurt7_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_0570375f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt8 (const MethodInfo* method);
// 0x3ea44a0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hurt8(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703760 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hurt8_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703760 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt1 (const MethodInfo* method);
// 0x3ea4540

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703761 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grunt1_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703761 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt2 (const MethodInfo* method);
// 0x3ea45e0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703762 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grunt2_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703762 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt3 (const MethodInfo* method);
// 0x3ea4680

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703763 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grunt3_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703763 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt4 (const MethodInfo* method);
// 0x3ea4720

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt4(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703764 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grunt4_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703764 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt5 (const MethodInfo* method);
// 0x3ea47c0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt5(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703765 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grunt5_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703765 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt6 (const MethodInfo* method);
// 0x3ea4860

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt6(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703766 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grunt6_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703766 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt7 (const MethodInfo* method);
// 0x3ea4900

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt7(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703767 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grunt7_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703767 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt8 (const MethodInfo* method);
// 0x3ea49a0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt8(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703768 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grunt8_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703768 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt9
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt9 (const MethodInfo* method);
// 0x3ea4a40

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt9(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703769 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grunt9_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703769 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt10
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt10 (const MethodInfo* method);
// 0x3ea4ae0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Grunt10(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_0570376a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grunt10_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_0570376a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hit (const MethodInfo* method);
// 0x3ea4b80

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Hit(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_0570376b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hit_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_0570376b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Roar1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Roar1 (const MethodInfo* method);
// 0x3ea4c20

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Roar1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_0570376c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Roar1_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_0570376c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Roar2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Roar2 (const MethodInfo* method);
// 0x3ea4cc0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Roar2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_0570376d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Roar2_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_0570376d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__DeathFall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__DeathFall (const MethodInfo* method);
// 0x3ea4d60

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__DeathFall
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_0570376e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DeathFall_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_0570376e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__DeathNoFall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__DeathNoFall (const MethodInfo* method);
// 0x3ea4e00

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__DeathNoFall
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_0570376f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DeathNoFall_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_0570376f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Bite1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Bite1 (const MethodInfo* method);
// 0x3ea4ea0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Bite1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703770 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Bite1_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703770 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Bite2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Bite2 (const MethodInfo* method);
// 0x3ea4f40

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Bite2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703771 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Bite2_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703771 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Laugh1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Laugh1 (const MethodInfo* method);
// 0x3ea4fe0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Laugh1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703772 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Laugh1_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703772 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Laugh2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Laugh2 (const MethodInfo* method);
// 0x3ea5080

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Laugh2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703773 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Laugh2_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703773 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff1 (const MethodInfo* method);
// 0x3ea5120

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703774 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Huff1_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703774 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff2 (const MethodInfo* method);
// 0x3ea51c0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703775 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Huff2_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703775 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff3 (const MethodInfo* method);
// 0x3ea5260

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703776 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Huff3_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703776 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff4 (const MethodInfo* method);
// 0x3ea5300

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff4(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703777 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Huff4_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703777 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff5 (const MethodInfo* method);
// 0x3ea53a0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff5(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703778 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Huff5_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703778 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff6 (const MethodInfo* method);
// 0x3ea5440

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__Huff6(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_05703779 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Huff6_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_05703779 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__TitanJump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__TitanJump (const MethodInfo* method);
// 0x3ea54e0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__TitanJump
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_0570377a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TitanJump_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_0570377a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__RockPickup
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockPickup (const MethodInfo* method);
// 0x3ea5580

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockPickup
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_0570377b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RockPickup_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_0570377b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__RockThrow1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockThrow1 (const MethodInfo* method);
// 0x3ea5620

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockThrow1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_0570377c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RockThrow1_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_0570377c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__RockThrow2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o* CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockThrow2 (const MethodInfo* method);
// 0x3ea56c0

CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *
CustomLogic_CustomLogicTitanSoundEnum_Bindings____CreatePropertyBinding__RockThrow2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *__this;
  
  if (DAT_0570377d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RockThrow2_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanSoundEnum__object);
    DAT_0570377d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTitanSoundEnum_Bindings___cctor (const MethodInfo* method);
// 0x3ea5760

void CustomLogic_CustomLogicTitanSoundEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_0570377e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Hurt2");
    il2cpp_init_method_metadata(&"Huff2");
    il2cpp_init_method_metadata(&"Swing3");
    il2cpp_init_method_metadata(&"Huff4");
    il2cpp_init_method_metadata(&"DeathNoFall");
    il2cpp_init_method_metadata(&"Footstep1");
    il2cpp_init_method_metadata(&"RockThrow2");
    il2cpp_init_method_metadata(&"Huff1");
    il2cpp_init_method_metadata(&"Grunt1");
    il2cpp_init_method_metadata(&"TitanJump");
    il2cpp_init_method_metadata(&"Laugh2");
    il2cpp_init_method_metadata(&"Hurt3");
    il2cpp_init_method_metadata(&"Bite1");
    il2cpp_init_method_metadata(&"Huff6");
    il2cpp_init_method_metadata(&"Grunt4");
    il2cpp_init_method_metadata(&"Hurt5");
    il2cpp_init_method_metadata(&"Footstep3");
    il2cpp_init_method_metadata(&"Grunt2");
    il2cpp_init_method_metadata(&"Grunt6");
    il2cpp_init_method_metadata(&"Grunt10");
    il2cpp_init_method_metadata(&"Swing1");
    il2cpp_init_method_metadata(&"Hurt4");
    il2cpp_init_method_metadata(&"Hurt8");
    il2cpp_init_method_metadata(&"Huff5");
    il2cpp_init_method_metadata(&"Hit");
    il2cpp_init_method_metadata(&"Hurt1");
    il2cpp_init_method_metadata(&"Hurt6");
    il2cpp_init_method_metadata(&"Bite2");
    il2cpp_init_method_metadata(&"Swing2");
    il2cpp_init_method_metadata(&"DeathFall");
    il2cpp_init_method_metadata(&"Footstep2");
    il2cpp_init_method_metadata(&"RockPickup");
    il2cpp_init_method_metadata(&"Grunt5");
    il2cpp_init_method_metadata(&"Grunt7");
    il2cpp_init_method_metadata(&"Grunt9");
    il2cpp_init_method_metadata(&"Roar2");
    il2cpp_init_method_metadata(&"Grunt8");
    il2cpp_init_method_metadata(&"Laugh1");
    il2cpp_init_method_metadata(&"Grunt3");
    il2cpp_init_method_metadata(&"Hurt7");
    il2cpp_init_method_metadata(&"Roar1");
    il2cpp_init_method_metadata(&"Huff3");
    il2cpp_init_method_metadata(&"RockThrow1");
    DAT_0570377e = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Footstep1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Footstep2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Footstep3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Swing1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Swing2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Swing3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Hurt1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Hurt2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Hurt3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Hurt4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Hurt5",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Hurt6",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Hurt7",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Hurt8",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Grunt1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Grunt2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Grunt3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Grunt4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Grunt5",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Grunt6",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Grunt7",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Grunt8",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Grunt9",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Grunt10",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Hit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Roar1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Roar2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DeathFall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DeathNoFall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Bite1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Bite2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Laugh1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Laugh2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Huff1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Huff2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Huff3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Huff4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Huff5",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Huff6",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TitanJump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RockPickup",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RockThrow1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RockThrow2",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep1>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Footstep1_g____getter_2_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea5da0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Footstep1>g____getter_2_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703846 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703846 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_TitanSounds + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_TitanSounds + 0xb8);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep2>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Footstep2_g____getter_3_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea5e10

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Footstep2>g____getter_3_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703847 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703847 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 8);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep3>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Footstep3_g____getter_4_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea5e80

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Footstep3>g____getter_4_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703848 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703848 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Swing1>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Swing1_g____getter_5_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea5ef0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Swing1>g____getter_5_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703849 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703849 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Swing2>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Swing2_g____getter_6_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea5f60

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Swing2>g____getter_6_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570384a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570384a = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Swing3>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Swing3_g____getter_7_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea5fd0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Swing3>g____getter_7_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570384b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570384b = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt1>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt1_g____getter_8_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6040

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Hurt1>g____getter_8_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570384c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570384c = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt2>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt2_g____getter_9_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea60b0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Hurt2>g____getter_9_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570384d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570384d = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x38);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt3>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt3_g____getter_10_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6120

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Hurt3>g____getter_10_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570384e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570384e = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt4>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt4_g____getter_11_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6190

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Hurt4>g____getter_11_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570384f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570384f = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x48);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt5>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt5_g____getter_12_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6200

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Hurt5>g____getter_12_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703850 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703850 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x50);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt6>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt6_g____getter_13_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6270

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Hurt6>g____getter_13_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703851 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703851 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x58);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt7>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt7_g____getter_14_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea62e0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Hurt7>g____getter_14_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703852 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703852 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x60);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt8>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hurt8_g____getter_15_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6350

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Hurt8>g____getter_15_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703853 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703853 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x68);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt1>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt1_g____getter_16_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea63c0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Grunt1>g____getter_16_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703854 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703854 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x70);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt2>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt2_g____getter_17_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6430

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Grunt2>g____getter_17_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703855 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703855 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x78);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt3>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt3_g____getter_18_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea64a0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Grunt3>g____getter_18_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703856 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703856 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x80);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt4>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt4_g____getter_19_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6510

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Grunt4>g____getter_19_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703857 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703857 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x88);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt5>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt5_g____getter_20_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6580

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Grunt5>g____getter_20_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703858 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703858 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x90);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt6>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt6_g____getter_21_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea65f0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Grunt6>g____getter_21_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703859 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703859 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x98);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt7>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt7_g____getter_22_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6660

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Grunt7>g____getter_22_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570385a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570385a = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xa0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt8>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt8_g____getter_23_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea66d0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Grunt8>g____getter_23_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570385b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570385b = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xa8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt9>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt9_g____getter_24_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6740

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Grunt9>g____getter_24_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570385c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570385c = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xb0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xb0);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt10>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Grunt10_g____getter_25_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea67b0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Grunt10>g____getter_25_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570385d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570385d = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xb8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xb8);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hit>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Hit_g____getter_26_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6820

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Hit>g____getter_26_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570385e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570385e = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xc0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xc0);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Roar1>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Roar1_g____getter_27_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6890

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Roar1>g____getter_27_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570385f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570385f = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 200);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 200);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Roar2>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Roar2_g____getter_28_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6900

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Roar2>g____getter_28_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703860 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703860 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xd0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xd0);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__DeathFall>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__DeathFall_g____getter_29_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6970

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__DeathFall>g____getter_29_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703861 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703861 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xd8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xd8);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__DeathNoFall>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__DeathNoFall_g____getter_30_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea69e0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__DeathNoFall>g____getter_30_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703862 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703862 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xe0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xe0);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Bite1>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Bite1_g____getter_31_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6a50

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Bite1>g____getter_31_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703863 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703863 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xe8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xe8);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Bite2>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Bite2_g____getter_32_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6ac0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Bite2>g____getter_32_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703864 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703864 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xf0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xf0);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Laugh1>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Laugh1_g____getter_33_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6b30

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Laugh1>g____getter_33_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703865 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703865 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xf8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xf8);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Laugh2>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Laugh2_g____getter_34_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6ba0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Laugh2>g____getter_34_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703866 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703866 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x100);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x100);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff1>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff1_g____getter_35_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6c10

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Huff1>g____getter_35_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703867 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703867 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x108);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x108);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff2>g____getter|36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff2_g____getter_36_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6c80

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Huff2>g____getter_36_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703868 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703868 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x110);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x110);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff3>g____getter|37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff3_g____getter_37_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6cf0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Huff3>g____getter_37_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703869 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703869 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x118);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x118);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff4>g____getter|38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff4_g____getter_38_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6d60

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Huff4>g____getter_38_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570386a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570386a = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x120);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x120);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff5>g____getter|39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff5_g____getter_39_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6dd0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Huff5>g____getter_39_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570386b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570386b = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x128);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x128);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff6>g____getter|40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__Huff6_g____getter_40_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6e40

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__Huff6>g____getter_40_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570386c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570386c = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x130);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x130);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__TitanJump>g____getter|41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__TitanJump_g____getter_41_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6eb0

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__TitanJump>g____getter_41_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570386d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570386d = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x138);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x138);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__RockPickup>g____getter|42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__RockPickup_g____getter_42_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6f20

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__RockPickup>g____getter_42_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570386e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570386e = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x140);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x140);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__RockThrow1>g____getter|43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__RockThrow1_g____getter_43_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea6f90

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__RockThrow1>g____getter_43_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570386f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570386f = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x148);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x148);
}


// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__RockThrow2>g____getter|44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanSoundEnum_Bindings_____CreatePropertyBinding__RockThrow2_g____getter_44_0 (CustomLogic_CustomLogicTitanSoundEnum_o* __i, const MethodInfo* method);
// 0x3ea7000

Il2CppObject *
CustomLogic_CustomLogicTitanSoundEnum_Bindings__<__CreatePropertyBinding__RockThrow2>g____getter_44_0
          (CustomLogic_CustomLogicTitanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703870 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703870 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x150);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x150);
}


// CustomLogic.CustomLogicTitanSoundEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTitanSoundEnum___ctor (CustomLogic_CustomLogicTitanSoundEnum_o* __this, const MethodInfo* method);
// 0x3ea17f0

void CustomLogic_CustomLogicTitanSoundEnum___ctor
               (CustomLogic_CustomLogicTitanSoundEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703724 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703724 = '\x01';
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


// CustomLogic.CustomLogicTitanSoundEnum$$get_Footstep1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Footstep1 (const MethodInfo* method);
// 0x3ea1860

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Footstep1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703725 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703725 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_TitanSounds + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_TitanSounds + 0xb8);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Footstep2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Footstep2 (const MethodInfo* method);
// 0x3ea18d0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Footstep2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703726 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703726 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 8);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Footstep3
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Footstep3 (const MethodInfo* method);
// 0x3ea1940

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Footstep3(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703727 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703727 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Swing1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Swing1 (const MethodInfo* method);
// 0x3ea19b0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Swing1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703728 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703728 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Swing2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Swing2 (const MethodInfo* method);
// 0x3ea1a20

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Swing2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703729 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703729 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Swing3
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Swing3 (const MethodInfo* method);
// 0x3ea1a90

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Swing3(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570372a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570372a = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt1 (const MethodInfo* method);
// 0x3ea1b00

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570372b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570372b = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt2 (const MethodInfo* method);
// 0x3ea1b70

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570372c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570372c = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x38);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt3
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt3 (const MethodInfo* method);
// 0x3ea1be0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt3(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570372d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570372d = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt4
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt4 (const MethodInfo* method);
// 0x3ea1c50

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt4(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570372e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570372e = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x48);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt5
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt5 (const MethodInfo* method);
// 0x3ea1cc0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt5(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570372f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570372f = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x50);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt6
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt6 (const MethodInfo* method);
// 0x3ea1d30

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt6(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703730 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703730 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x58);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt7
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt7 (const MethodInfo* method);
// 0x3ea1da0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt7(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703731 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703731 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x60);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt8
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hurt8 (const MethodInfo* method);
// 0x3ea1e10

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hurt8(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703732 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703732 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x68);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt1 (const MethodInfo* method);
// 0x3ea1e80

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703733 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703733 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x70);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt2 (const MethodInfo* method);
// 0x3ea1ef0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703734 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703734 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x78);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt3
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt3 (const MethodInfo* method);
// 0x3ea1f60

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt3(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703735 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703735 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x80);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt4
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt4 (const MethodInfo* method);
// 0x3ea1fd0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt4(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703736 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703736 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x88);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt5
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt5 (const MethodInfo* method);
// 0x3ea2040

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt5(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703737 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703737 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x90);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt6
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt6 (const MethodInfo* method);
// 0x3ea20b0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt6(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703738 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703738 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x98);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt7
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt7 (const MethodInfo* method);
// 0x3ea2120

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt7(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703739 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703739 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xa0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt8
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt8 (const MethodInfo* method);
// 0x3ea2190

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt8(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570373a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570373a = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xa8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt9
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt9 (const MethodInfo* method);
// 0x3ea2200

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt9(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570373b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570373b = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xb0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xb0);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt10
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Grunt10 (const MethodInfo* method);
// 0x3ea2270

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Grunt10(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570373c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570373c = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xb8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xb8);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Hit
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Hit (const MethodInfo* method);
// 0x3ea22e0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Hit(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570373d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570373d = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xc0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xc0);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Roar1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Roar1 (const MethodInfo* method);
// 0x3ea2350

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Roar1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570373e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570373e = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 200);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 200);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Roar2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Roar2 (const MethodInfo* method);
// 0x3ea23c0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Roar2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570373f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570373f = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xd0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xd0);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_DeathFall
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_DeathFall (const MethodInfo* method);
// 0x3ea2430

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_DeathFall(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703740 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703740 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xd8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xd8);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_DeathNoFall
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_DeathNoFall (const MethodInfo* method);
// 0x3ea24a0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_DeathNoFall(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703741 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703741 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xe0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xe0);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Bite1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Bite1 (const MethodInfo* method);
// 0x3ea2510

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Bite1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703742 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703742 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xe8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xe8);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Bite2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Bite2 (const MethodInfo* method);
// 0x3ea2580

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Bite2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703743 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703743 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xf0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xf0);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Laugh1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Laugh1 (const MethodInfo* method);
// 0x3ea25f0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Laugh1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703744 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703744 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xf8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xf8);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Laugh2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Laugh2 (const MethodInfo* method);
// 0x3ea2660

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Laugh2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703745 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703745 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x100);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x100);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff1 (const MethodInfo* method);
// 0x3ea26d0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703746 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703746 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x108);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x108);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff2 (const MethodInfo* method);
// 0x3ea2740

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703747 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703747 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x110);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x110);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff3
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff3 (const MethodInfo* method);
// 0x3ea27b0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff3(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703748 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703748 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x118);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x118);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff4
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff4 (const MethodInfo* method);
// 0x3ea2820

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff4(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703749 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05703749 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x120);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x120);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff5
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff5 (const MethodInfo* method);
// 0x3ea2890

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff5(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570374a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570374a = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x128);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x128);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_Huff6
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_Huff6 (const MethodInfo* method);
// 0x3ea2900

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_Huff6(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570374b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570374b = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x130);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x130);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_TitanJump
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_TitanJump (const MethodInfo* method);
// 0x3ea2970

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_TitanJump(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570374c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570374c = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x138);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x138);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_RockPickup
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_RockPickup (const MethodInfo* method);
// 0x3ea29e0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_RockPickup(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570374d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570374d = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x140);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x140);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_RockThrow1
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_RockThrow1 (const MethodInfo* method);
// 0x3ea2a50

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_RockThrow1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570374e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570374e = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x148);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x148);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_RockThrow2
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_RockThrow2 (const MethodInfo* method);
// 0x3ea2ac0

System_String_o * CustomLogic_CustomLogicTitanSoundEnum__get_RockThrow2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570374f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570374f = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x150);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x150);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanSoundEnum__get_ClassName (CustomLogic_CustomLogicTitanSoundEnum_o* __this, const MethodInfo* method);
// 0x3ea2b30

System_String_o *
CustomLogic_CustomLogicTitanSoundEnum__get_ClassName
          (CustomLogic_CustomLogicTitanSoundEnum_o *__this,MethodInfo *method)

{
  if (DAT_05703750 == '\0') {
    il2cpp_init_method_metadata(&"TitanSoundEnum");
    DAT_05703750 = '\x01';
  }
  return "TitanSoundEnum";
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTitanSoundEnum__get_IsAbstract (CustomLogic_CustomLogicTitanSoundEnum_o* __this, const MethodInfo* method);
// 0x3ea2b60

bool_conflict
CustomLogic_CustomLogicTitanSoundEnum__get_IsAbstract
          (CustomLogic_CustomLogicTitanSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTitanSoundEnum__get_IsStatic (CustomLogic_CustomLogicTitanSoundEnum_o* __this, const MethodInfo* method);
// 0x3ea2b70

bool_conflict
CustomLogic_CustomLogicTitanSoundEnum__get_IsStatic
          (CustomLogic_CustomLogicTitanSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTitanSoundEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTitanSoundEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTitanSoundEnum_o* __this, const MethodInfo* method);
// 0x3ea2b80

bool_conflict
CustomLogic_CustomLogicTitanSoundEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicTitanSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


