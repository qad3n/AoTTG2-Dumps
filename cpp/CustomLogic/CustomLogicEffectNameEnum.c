// Type: CustomLogic.CustomLogicEffectNameEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicEffectNameEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicEffectNameEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicEffectNameEnum_o* CustomLogic_CustomLogicEffectNameEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e492c0

CustomLogic_CustomLogicEffectNameEnum_o *
CustomLogic_CustomLogicEffectNameEnum_Factory__CreateInstance
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
  if (DAT_05702f2e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEffectNameEnum);
    DAT_05702f2e = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicEffectNameEnum);
      if (DAT_05702f0c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702f0c = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicEffectNameEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicEffectNameEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicEffectNameEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicEffectNameEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e493e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicEffectNameEnum_Bindings__CreateMemberBinding
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
  
  if (DAT_05702f2f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Boom4");
    il2cpp_init_method_metadata(&"ColossalKick");
    il2cpp_init_method_metadata(&"GroundShatter");
    il2cpp_init_method_metadata(&"APGTrail");
    il2cpp_init_method_metadata(&"Splash3");
    il2cpp_init_method_metadata(&"BladeThrowHit");
    il2cpp_init_method_metadata(&"GunExplode");
    il2cpp_init_method_metadata(&"TitanDie1");
    il2cpp_init_method_metadata(&"Boom5");
    il2cpp_init_method_metadata(&"Blood1");
    il2cpp_init_method_metadata(&"TitanDie2");
    il2cpp_init_method_metadata(&"Boom2");
    il2cpp_init_method_metadata(&"Splash1");
    il2cpp_init_method_metadata(&"ColossalSpawn");
    il2cpp_init_method_metadata(&"PunchHit");
    il2cpp_init_method_metadata(&"CriticalHit");
    il2cpp_init_method_metadata(&"Boom3");
    il2cpp_init_method_metadata(&"ColossalRockSpawn");
    il2cpp_init_method_metadata(&"Boom8");
    il2cpp_init_method_metadata(&"Boom7");
    il2cpp_init_method_metadata(&"TitanBite");
    il2cpp_init_method_metadata(&"WaterWake");
    il2cpp_init_method_metadata(&"Splash");
    il2cpp_init_method_metadata(&"ThunderspearExplode");
    il2cpp_init_method_metadata(&"SingleSplash");
    il2cpp_init_method_metadata(&"Boom6");
    il2cpp_init_method_metadata(&"Splash2");
    il2cpp_init_method_metadata(&"Blood2");
    il2cpp_init_method_metadata(&"Boom1");
    il2cpp_init_method_metadata(&"TitanSpawn");
    il2cpp_init_method_metadata(&"GasBurst");
    il2cpp_init_method_metadata(&"ShifterThunder");
    DAT_05702f2f = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x60a7e7f0) {
    if (uVar1 < 0x1ddfac48) {
      if (uVar1 < 0x18dfa469) {
        if (uVar1 < 0x9b9ed3e) {
          if (uVar1 == 0x6b9e884) {
            bVar2 = System_String__op_Equality(name,"TitanDie1",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05702f39 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TitanDie1_g);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
                DAT_05702f39 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0x9b9ed3d) {
            bVar2 = System_String__op_Equality(name,"TitanDie2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05702f3a == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TitanDie2_g);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
                DAT_05702f3a = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
        }
        else if (uVar1 == 0x12df9af6) {
          bVar2 = System_String__op_Equality(name,"Boom8",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702f42 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Boom8_g____gett);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
              DAT_05702f42 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x18dfa468) {
          bVar2 = System_String__op_Equality(name,"Boom2",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702f3c == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Boom2_g____gett);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
              DAT_05702f3c = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 < 0x1bdfa922) {
        if (uVar1 == 0x19dfa5fb) {
          bVar2 = System_String__op_Equality(name,"Boom3",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702f3d == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Boom3_g____gett);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
              DAT_05702f3d = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x1bdfa921) {
          bVar2 = System_String__op_Equality(name,"Boom1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702f3b == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Boom1_g____gett);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
              DAT_05702f3b = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x1cdfaab4) {
        bVar2 = System_String__op_Equality(name,"Boom6",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702f40 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Boom6_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
            DAT_05702f40 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x1ddfac47) {
        bVar2 = System_String__op_Equality(name,"Boom7",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702f41 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Boom7_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
            DAT_05702f41 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x397d6640) {
      if (uVar1 < 0x1fdfaf6e) {
        if (uVar1 == 0x1edfadda) {
          bVar2 = System_String__op_Equality(name,"Boom4",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702f3e == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Boom4_g____gett);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
              DAT_05702f3e = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x1fdfaf6d) {
          bVar2 = System_String__op_Equality(name,"Boom5",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702f3f == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Boom5_g____gett);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
              DAT_05702f3f = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x2679fe4b) {
        bVar2 = System_String__op_Equality(name,"ColossalRockSpawn",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702f4e == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ColossalRockSpa);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
            DAT_05702f4e = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x397d663f) {
        bVar2 = System_String__op_Equality(name,"ColossalKick",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702f4f == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ColossalKick_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
            DAT_05702f4f = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x5fa7e65d) {
      if (uVar1 == 0x578d99cd) {
        bVar2 = System_String__op_Equality(name,"CriticalHit",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702f37 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CriticalHit_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
            DAT_05702f37 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x5fa7e65c) {
        bVar2 = System_String__op_Equality(name,"Splash2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702f4a == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Splash2_g____ge);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
            DAT_05702f4a = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0x6083d558) {
      bVar2 = System_String__op_Equality(name,"GasBurst",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702f31 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GasBurst_g____g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
          DAT_05702f31 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x60a7e7ef) {
      bVar2 = System_String__op_Equality(name,"Splash3",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702f4b == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Splash3_g____ge);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
          DAT_05702f4b = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0x9f073bd5) {
    if (uVar1 < 0x7b585c35) {
      if (uVar1 < 0x62cdd0d7) {
        if (uVar1 == 0x62a7eb15) {
          bVar2 = System_String__op_Equality(name,"Splash1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702f49 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Splash1_g____ge);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
              DAT_05702f49 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x62cdd0d6) {
          bVar2 = System_String__op_Equality(name,"ShifterThunder",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702f45 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShifterThunder);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
              DAT_05702f45 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x76cd9138) {
        bVar2 = System_String__op_Equality(name,"ColossalSpawn",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702f4d == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ColossalSpawn_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
            DAT_05702f4d = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x7b585c34) {
        bVar2 = System_String__op_Equality(name,"TitanSpawn",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702f38 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TitanSpawn_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
            DAT_05702f38 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x8d3bb75c) {
      if (uVar1 == 0x81cfe633) {
        bVar2 = System_String__op_Equality(name,"TitanBite",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702f44 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TitanBite_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
            DAT_05702f44 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x8d3bb75b) {
        bVar2 = System_String__op_Equality(name,"GroundShatter",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702f32 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GroundShatter_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
            DAT_05702f32 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0x99c5e30c) {
      bVar2 = System_String__op_Equality(name,"BladeThrowHit",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702f46 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeThrowHit_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
          DAT_05702f46 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x9f073bd4) {
      bVar2 = System_String__op_Equality(name,"PunchHit",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702f35 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PunchHit_g____g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
          DAT_05702f35 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xcb990167) {
    if (uVar1 < 0xb215e923) {
      if (uVar1 == 0xb115e78f) {
        bVar2 = System_String__op_Equality(name,"Blood2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702f34 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Blood2_g____get);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
            DAT_05702f34 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xb215e922) {
        bVar2 = System_String__op_Equality(name,"Blood1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702f33 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Blood1_g____get);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
            DAT_05702f33 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0xb5730240) {
      bVar2 = System_String__op_Equality(name,"WaterWake",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702f4c == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WaterWake_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
          DAT_05702f4c = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xcb990166) {
      bVar2 = System_String__op_Equality(name,"GunExplode",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702f36 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GunExplode_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
          DAT_05702f36 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xefe8e987) {
    if (uVar1 == 0xdd85abcf) {
      bVar2 = System_String__op_Equality(name,"ThunderspearExplode",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702f30 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ThunderspearExp);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
          DAT_05702f30 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xefe8e986) {
      bVar2 = System_String__op_Equality(name,"Splash",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702f43 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Splash_g____get);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
          DAT_05702f43 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 == 0xf58c6b62) {
    bVar2 = System_String__op_Equality(name,"SingleSplash",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702f48 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SingleSplash_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
        DAT_05702f48 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xf888646f) {
    bVar2 = System_String__op_Equality(name,"APGTrail",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702f47 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__APGTrail_g____g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
        DAT_05702f47 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicEffectNameEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ThunderspearExplode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ThunderspearExplode (const MethodInfo* method);
// 0x3e4a000

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ThunderspearExplode
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f30 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ThunderspearExp);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f30 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__GasBurst
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GasBurst (const MethodInfo* method);
// 0x3e4a0a0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GasBurst
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f31 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GasBurst_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f31 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__GroundShatter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GroundShatter (const MethodInfo* method);
// 0x3e4a140

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GroundShatter
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f32 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GroundShatter_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f32 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Blood1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Blood1 (const MethodInfo* method);
// 0x3e4a1e0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Blood1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f33 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Blood1_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f33 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Blood2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Blood2 (const MethodInfo* method);
// 0x3e4a280

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Blood2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f34 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Blood2_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f34 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__PunchHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__PunchHit (const MethodInfo* method);
// 0x3e4a320

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__PunchHit
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f35 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PunchHit_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f35 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__GunExplode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GunExplode (const MethodInfo* method);
// 0x3e4a3c0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GunExplode
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f36 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GunExplode_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f36 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__CriticalHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__CriticalHit (const MethodInfo* method);
// 0x3e4a460

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__CriticalHit
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f37 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CriticalHit_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f37 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__TitanSpawn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanSpawn (const MethodInfo* method);
// 0x3e4a500

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanSpawn
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f38 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TitanSpawn_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f38 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__TitanDie1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanDie1 (const MethodInfo* method);
// 0x3e4a5a0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanDie1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f39 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TitanDie1_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f39 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__TitanDie2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanDie2 (const MethodInfo* method);
// 0x3e4a640

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanDie2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f3a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TitanDie2_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f3a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom1 (const MethodInfo* method);
// 0x3e4a6e0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f3b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Boom1_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f3b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom2 (const MethodInfo* method);
// 0x3e4a780

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f3c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Boom2_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f3c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom3 (const MethodInfo* method);
// 0x3e4a820

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f3d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Boom3_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f3d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom4 (const MethodInfo* method);
// 0x3e4a8c0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom4(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f3e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Boom4_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f3e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom5 (const MethodInfo* method);
// 0x3e4a960

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom5(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f3f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Boom5_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f3f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom6 (const MethodInfo* method);
// 0x3e4aa00

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom6(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f40 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Boom6_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f40 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom7 (const MethodInfo* method);
// 0x3e4aaa0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom7(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f41 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Boom7_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f41 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom8 (const MethodInfo* method);
// 0x3e4ab40

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom8(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f42 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Boom8_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f42 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Splash
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash (const MethodInfo* method);
// 0x3e4abe0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f43 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Splash_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f43 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__TitanBite
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanBite (const MethodInfo* method);
// 0x3e4ac80

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanBite
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f44 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TitanBite_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f44 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ShifterThunder
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ShifterThunder (const MethodInfo* method);
// 0x3e4ad20

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ShifterThunder
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f45 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShifterThunder);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f45 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__BladeThrowHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__BladeThrowHit (const MethodInfo* method);
// 0x3e4adc0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__BladeThrowHit
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f46 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeThrowHit_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f46 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__APGTrail
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__APGTrail (const MethodInfo* method);
// 0x3e4ae60

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__APGTrail
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f47 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__APGTrail_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f47 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__SingleSplash
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__SingleSplash (const MethodInfo* method);
// 0x3e4af00

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__SingleSplash
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f48 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SingleSplash_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f48 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Splash1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash1 (const MethodInfo* method);
// 0x3e4afa0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f49 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Splash1_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f49 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Splash2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash2 (const MethodInfo* method);
// 0x3e4b040

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f4a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Splash2_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f4a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Splash3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash3 (const MethodInfo* method);
// 0x3e4b0e0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f4b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Splash3_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f4b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__WaterWake
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__WaterWake (const MethodInfo* method);
// 0x3e4b180

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__WaterWake
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f4c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WaterWake_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f4c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ColossalSpawn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalSpawn (const MethodInfo* method);
// 0x3e4b220

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalSpawn
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f4d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ColossalSpawn_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f4d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ColossalRockSpawn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalRockSpawn (const MethodInfo* method);
// 0x3e4b2c0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalRockSpawn
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f4e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ColossalRockSpa);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f4e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ColossalKick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalKick (const MethodInfo* method);
// 0x3e4b360

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalKick
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (DAT_05702f4f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ColossalKick_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicEffectNameEnum__object);
    DAT_05702f4f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicEffectNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicEffectNameEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e4b400

void CustomLogic_CustomLogicEffectNameEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702f50 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Boom4");
    il2cpp_init_method_metadata(&"ColossalKick");
    il2cpp_init_method_metadata(&"GroundShatter");
    il2cpp_init_method_metadata(&"APGTrail");
    il2cpp_init_method_metadata(&"Splash3");
    il2cpp_init_method_metadata(&"BladeThrowHit");
    il2cpp_init_method_metadata(&"GunExplode");
    il2cpp_init_method_metadata(&"TitanDie1");
    il2cpp_init_method_metadata(&"Boom5");
    il2cpp_init_method_metadata(&"Blood1");
    il2cpp_init_method_metadata(&"TitanDie2");
    il2cpp_init_method_metadata(&"Boom2");
    il2cpp_init_method_metadata(&"Splash1");
    il2cpp_init_method_metadata(&"ColossalSpawn");
    il2cpp_init_method_metadata(&"PunchHit");
    il2cpp_init_method_metadata(&"CriticalHit");
    il2cpp_init_method_metadata(&"Boom3");
    il2cpp_init_method_metadata(&"ColossalRockSpawn");
    il2cpp_init_method_metadata(&"Boom8");
    il2cpp_init_method_metadata(&"Boom7");
    il2cpp_init_method_metadata(&"TitanBite");
    il2cpp_init_method_metadata(&"WaterWake");
    il2cpp_init_method_metadata(&"Splash");
    il2cpp_init_method_metadata(&"ThunderspearExplode");
    il2cpp_init_method_metadata(&"SingleSplash");
    il2cpp_init_method_metadata(&"Boom6");
    il2cpp_init_method_metadata(&"Splash2");
    il2cpp_init_method_metadata(&"Blood2");
    il2cpp_init_method_metadata(&"Boom1");
    il2cpp_init_method_metadata(&"TitanSpawn");
    il2cpp_init_method_metadata(&"GasBurst");
    il2cpp_init_method_metadata(&"ShifterThunder");
    DAT_05702f50 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"ThunderspearExplode",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GasBurst",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GroundShatter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Blood1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Blood2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PunchHit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GunExplode",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CriticalHit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TitanSpawn",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TitanDie1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TitanDie2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Boom1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Boom2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Boom3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Boom4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Boom5",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Boom6",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Boom7",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Boom8",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Splash",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TitanBite",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ShifterThunder",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeThrowHit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"APGTrail",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SingleSplash",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Splash1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Splash2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Splash3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"WaterWake",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ColossalSpawn",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ColossalRockSpawn",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ColossalKick",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ThunderspearExplode>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ThunderspearExplode_g____getter_2_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4b8d0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__ThunderspearExplode>g____getter_2_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570310e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_0570310e = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_EffectPrefabs + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_EffectPrefabs + 0xb8);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__GasBurst>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__GasBurst_g____getter_3_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4b940

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__GasBurst>g____getter_3_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570310f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_0570310f = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 8);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__GroundShatter>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__GroundShatter_g____getter_4_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4b9b0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__GroundShatter>g____getter_4_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703110 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05703110 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Blood1>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Blood1_g____getter_5_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4ba20

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__Blood1>g____getter_5_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703111 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05703111 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Blood2>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Blood2_g____getter_6_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4ba90

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__Blood2>g____getter_6_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703112 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05703112 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__PunchHit>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__PunchHit_g____getter_7_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4bb00

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__PunchHit>g____getter_7_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703113 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05703113 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__GunExplode>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__GunExplode_g____getter_8_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4bb70

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__GunExplode>g____getter_8_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703114 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05703114 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__CriticalHit>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__CriticalHit_g____getter_9_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4bbe0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__CriticalHit>g____getter_9_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703115 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05703115 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x38);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__TitanSpawn>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanSpawn_g____getter_10_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4bc50

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__TitanSpawn>g____getter_10_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703116 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05703116 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__TitanDie1>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanDie1_g____getter_11_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4bcc0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__TitanDie1>g____getter_11_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703117 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05703117 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x48);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__TitanDie2>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanDie2_g____getter_12_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4bd30

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__TitanDie2>g____getter_12_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703118 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05703118 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x50);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom1>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom1_g____getter_13_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4bda0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__Boom1>g____getter_13_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703119 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05703119 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x58);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom2>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom2_g____getter_14_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4be10

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__Boom2>g____getter_14_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570311a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_0570311a = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x60);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom3>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom3_g____getter_15_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4be80

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__Boom3>g____getter_15_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570311b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_0570311b = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x68);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom4>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom4_g____getter_16_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4bef0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__Boom4>g____getter_16_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570311c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_0570311c = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x70);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom5>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom5_g____getter_17_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4bf60

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__Boom5>g____getter_17_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570311d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_0570311d = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x78);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom6>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom6_g____getter_18_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4bfd0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__Boom6>g____getter_18_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570311e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_0570311e = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x80);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom7>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom7_g____getter_19_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4c040

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__Boom7>g____getter_19_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570311f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_0570311f = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x88);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom8>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom8_g____getter_20_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4c0b0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__Boom8>g____getter_20_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703120 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05703120 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x90);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Splash>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash_g____getter_21_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4c120

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__Splash>g____getter_21_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703121 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05703121 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x98);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__TitanBite>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanBite_g____getter_22_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4c190

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__TitanBite>g____getter_22_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703122 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05703122 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xa0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ShifterThunder>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ShifterThunder_g____getter_23_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4c200

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__ShifterThunder>g____getter_23_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703123 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05703123 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xa8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__BladeThrowHit>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__BladeThrowHit_g____getter_24_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4c270

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__BladeThrowHit>g____getter_24_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703124 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05703124 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb0);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__APGTrail>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__APGTrail_g____getter_25_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4c2e0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__APGTrail>g____getter_25_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703125 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05703125 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb8);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__SingleSplash>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__SingleSplash_g____getter_26_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4c350

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__SingleSplash>g____getter_26_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703126 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05703126 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xc0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xc0);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Splash1>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash1_g____getter_27_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4c3c0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__Splash1>g____getter_27_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703127 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05703127 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 200);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 200);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Splash2>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash2_g____getter_28_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4c430

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__Splash2>g____getter_28_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703128 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05703128 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xd0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xd0);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Splash3>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash3_g____getter_29_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4c4a0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__Splash3>g____getter_29_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703129 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05703129 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xd8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xd8);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__WaterWake>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__WaterWake_g____getter_30_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4c510

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__WaterWake>g____getter_30_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570312a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_0570312a = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xe0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xe0);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ColossalSpawn>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ColossalSpawn_g____getter_31_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4c580

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__ColossalSpawn>g____getter_31_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570312b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_0570312b = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xe8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xe8);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ColossalRockSpawn>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ColossalRockSpawn_g____getter_32_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4c5f0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__ColossalRockSpawn>g____getter_32_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570312c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_0570312c = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xf0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xf0);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ColossalKick>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ColossalKick_g____getter_33_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x3e4c660

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings__<__CreatePropertyBinding__ColossalKick>g____getter_33_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570312d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_0570312d = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xf8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xf8);
}


// CustomLogic.CustomLogicEffectNameEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicEffectNameEnum___ctor (CustomLogic_CustomLogicEffectNameEnum_o* __this, const MethodInfo* method);
// 0x3e483f0

void CustomLogic_CustomLogicEffectNameEnum___ctor
               (CustomLogic_CustomLogicEffectNameEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f0c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702f0c = '\x01';
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


// CustomLogic.CustomLogicEffectNameEnum$$get_ThunderspearExplode
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ThunderspearExplode (const MethodInfo* method);
// 0x3e48460

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_ThunderspearExplode(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f0d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f0d = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_EffectPrefabs + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_EffectPrefabs + 0xb8);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_GasBurst
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_GasBurst (const MethodInfo* method);
// 0x3e484d0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_GasBurst(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f0e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f0e = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 8);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_GroundShatter
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_GroundShatter (const MethodInfo* method);
// 0x3e48540

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_GroundShatter(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f0f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f0f = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Blood1
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Blood1 (const MethodInfo* method);
// 0x3e485b0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Blood1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f10 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f10 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Blood2
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Blood2 (const MethodInfo* method);
// 0x3e48620

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Blood2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f11 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f11 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_PunchHit
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_PunchHit (const MethodInfo* method);
// 0x3e48690

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_PunchHit(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f12 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f12 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_GunExplode
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_GunExplode (const MethodInfo* method);
// 0x3e48700

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_GunExplode(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f13 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f13 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_CriticalHit
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_CriticalHit (const MethodInfo* method);
// 0x3e48770

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_CriticalHit(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f14 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f14 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x38);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_TitanSpawn
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_TitanSpawn (const MethodInfo* method);
// 0x3e487e0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_TitanSpawn(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f15 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_TitanDie1
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_TitanDie1 (const MethodInfo* method);
// 0x3e48850

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_TitanDie1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f16 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f16 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x48);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_TitanDie2
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_TitanDie2 (const MethodInfo* method);
// 0x3e488c0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_TitanDie2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f17 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f17 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x50);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom1
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom1 (const MethodInfo* method);
// 0x3e48930

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f18 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f18 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x58);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom2
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom2 (const MethodInfo* method);
// 0x3e489a0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f19 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f19 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x60);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom3
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom3 (const MethodInfo* method);
// 0x3e48a10

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom3(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f1a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f1a = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x68);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom4
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom4 (const MethodInfo* method);
// 0x3e48a80

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom4(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f1b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f1b = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x70);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom5
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom5 (const MethodInfo* method);
// 0x3e48af0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom5(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f1c = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x78);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom6
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom6 (const MethodInfo* method);
// 0x3e48b60

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom6(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f1d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f1d = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x80);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom7
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom7 (const MethodInfo* method);
// 0x3e48bd0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom7(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f1e = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x88);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom8
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom8 (const MethodInfo* method);
// 0x3e48c40

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom8(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f1f = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x90);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Splash
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Splash (const MethodInfo* method);
// 0x3e48cb0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Splash(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f20 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x98);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_TitanBite
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_TitanBite (const MethodInfo* method);
// 0x3e48d20

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_TitanBite(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f21 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xa0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_ShifterThunder
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ShifterThunder (const MethodInfo* method);
// 0x3e48d90

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_ShifterThunder(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f22 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f22 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xa8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_BladeThrowHit
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_BladeThrowHit (const MethodInfo* method);
// 0x3e48e00

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_BladeThrowHit(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f23 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f23 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb0);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_APGTrail
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_APGTrail (const MethodInfo* method);
// 0x3e48e70

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_APGTrail(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f24 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f24 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb8);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_SingleSplash
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_SingleSplash (const MethodInfo* method);
// 0x3e48ee0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_SingleSplash(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f25 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f25 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xc0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xc0);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Splash1
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Splash1 (const MethodInfo* method);
// 0x3e48f50

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Splash1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f26 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f26 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 200);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 200);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Splash2
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Splash2 (const MethodInfo* method);
// 0x3e48fc0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Splash2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f27 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f27 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xd0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xd0);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Splash3
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Splash3 (const MethodInfo* method);
// 0x3e49030

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Splash3(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f28 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f28 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xd8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xd8);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_WaterWake
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_WaterWake (const MethodInfo* method);
// 0x3e490a0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_WaterWake(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f29 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f29 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xe0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xe0);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_ColossalSpawn
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ColossalSpawn (const MethodInfo* method);
// 0x3e49110

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_ColossalSpawn(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f2a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f2a = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xe8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xe8);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_ColossalRockSpawn
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ColossalRockSpawn (const MethodInfo* method);
// 0x3e49180

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_ColossalRockSpawn(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f2b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f2b = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xf0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xf0);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_ColossalKick
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ColossalKick (const MethodInfo* method);
// 0x3e491f0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_ColossalKick(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f2c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05702f2c = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xf8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xf8);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ClassName (CustomLogic_CustomLogicEffectNameEnum_o* __this, const MethodInfo* method);
// 0x3e49260

System_String_o *
CustomLogic_CustomLogicEffectNameEnum__get_ClassName
          (CustomLogic_CustomLogicEffectNameEnum_o *__this,MethodInfo *method)

{
  if (DAT_05702f2d == '\0') {
    il2cpp_init_method_metadata(&"EffectNameEnum");
    DAT_05702f2d = '\x01';
  }
  return "EffectNameEnum";
}


// CustomLogic.CustomLogicEffectNameEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicEffectNameEnum__get_IsAbstract (CustomLogic_CustomLogicEffectNameEnum_o* __this, const MethodInfo* method);
// 0x3e49290

bool_conflict
CustomLogic_CustomLogicEffectNameEnum__get_IsAbstract
          (CustomLogic_CustomLogicEffectNameEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicEffectNameEnum__get_IsStatic (CustomLogic_CustomLogicEffectNameEnum_o* __this, const MethodInfo* method);
// 0x3e492a0

bool_conflict
CustomLogic_CustomLogicEffectNameEnum__get_IsStatic
          (CustomLogic_CustomLogicEffectNameEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicEffectNameEnum__get_InheritBaseMembers (CustomLogic_CustomLogicEffectNameEnum_o* __this, const MethodInfo* method);
// 0x3e492b0

bool_conflict
CustomLogic_CustomLogicEffectNameEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicEffectNameEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


