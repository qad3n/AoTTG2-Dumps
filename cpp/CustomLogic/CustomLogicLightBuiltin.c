// Type: CustomLogic.CustomLogicLightBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLightBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicLightBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLightBuiltin_o* CustomLogic_CustomLogicLightBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3de58e0

CustomLogic_CustomLogicLightBuiltin_o *
CustomLogic_CustomLogicLightBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicLightBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05702a1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLightBuiltin);
    DAT_05702a1e = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicLightBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLightBuiltin);
      CustomLogic_BuiltinComponentInstance___ctor
                ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
                 (MethodInfo *)0x0);
      return __this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicLightBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicLightBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLightBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3de59d0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLightBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  uint32_t uVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  undefined8 uVar4;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar5;
  System_Action_T__object__o *pSVar6;
  CustomLogic_CLPropertyBinding_T__o *pCVar7;
  
  if (DAT_05702a1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Color");
    il2cpp_init_method_metadata(&"BounceIntensity");
    il2cpp_init_method_metadata(&"ShadowTypeSoft");
    il2cpp_init_method_metadata(&"TypeOfLight");
    il2cpp_init_method_metadata(&"ShadowStrength");
    il2cpp_init_method_metadata(&"Intensity");
    il2cpp_init_method_metadata(&"LightTypeSpot");
    il2cpp_init_method_metadata(&"ShadowTypeHard");
    il2cpp_init_method_metadata(&"WeatherControlled");
    il2cpp_init_method_metadata(&"LightTypePoint");
    il2cpp_init_method_metadata(&"ShadowTypeNone");
    il2cpp_init_method_metadata(&"SpotAngle");
    il2cpp_init_method_metadata(&"ShadowType");
    il2cpp_init_method_metadata(&"Range");
    il2cpp_init_method_metadata(&"LightTypeDirectional");
    DAT_05702a1f = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x67b0f90a) {
    if (uVar1 < 0x3cf8f4e5) {
      if (uVar1 == 0x6bb3b2f) {
        bVar2 = System_String__op_Equality(name,"LightTypeSpot",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702a22 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LightTypeSpot_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
            DAT_05702a22 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar7,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar7;
        }
      }
      else if (uVar1 == 0x2d3acfd4) {
        bVar2 = System_String__op_Equality(name,"TypeOfLight",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702a26 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLightBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TypeOfLight_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TypeOfLight_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
            DAT_05702a26 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLightBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar7;
        }
      }
      else if ((uVar1 == 0x3cf8f4e4) &&
              (bVar2 = System_String__op_Equality(name,"ShadowStrength",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702a2d == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLightBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShadowStrength);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ShadowStrength_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
          DAT_05702a2d = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLightBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if (uVar1 < 0x48a10dd9) {
      if (uVar1 == 0x44ba848f) {
        bVar2 = System_String__op_Equality(name,"ShadowTypeNone",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702a23 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShadowTypeNone);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
            DAT_05702a23 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar7,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar7;
        }
      }
      else if ((uVar1 == 0x48a10dd8) &&
              (bVar2 = System_String__op_Equality(name,"ShadowTypeHard",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702a24 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShadowTypeHard);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
          DAT_05702a24 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar7,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if (uVar1 == 0x53b4f9aa) {
      bVar2 = System_String__op_Equality(name,"Intensity",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702a2a == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLightBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Intensity_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Intensity_g____se);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
          DAT_05702a2a = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLightBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if ((uVar1 == 0x67b0f909) &&
            (bVar2 = System_String__op_Equality(name,"WeatherControlled",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702a2e == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLightBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WeatherControll);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__WeatherControlled);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
        DAT_05702a2e = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLightBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if (uVar1 < 0xd9e6934e) {
    if (uVar1 < 0xa8d979d0) {
      if (uVar1 == 0xa311e772) {
        bVar2 = System_String__op_Equality(name,"Range",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702a27 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLightBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Range_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Range_g____setter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
            DAT_05702a27 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLightBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar7;
        }
      }
      else if ((uVar1 == 0xa8d979cf) &&
              (bVar2 = System_String__op_Equality(name,"LightTypePoint",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702a21 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LightTypePoint);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
          DAT_05702a21 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar7,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if (uVar1 == 0xab6315a1) {
      bVar2 = System_String__op_Equality(name,"ShadowTypeSoft",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702a25 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShadowTypeSoft);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
          DAT_05702a25 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar7,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if ((uVar1 == 0xd9e6934d) &&
            (bVar2 = System_String__op_Equality(name,"LightTypeDirectional",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702a20 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LightTypeDirect);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
        DAT_05702a20 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar7,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if (uVar1 < 0xe5b43cf9) {
    if (uVar1 == 0xe2c2c340) {
      bVar2 = System_String__op_Equality(name,"SpotAngle",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702a28 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLightBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpotAngle_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__SpotAngle_g____se);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
          DAT_05702a28 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLightBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if ((uVar1 == 0xe5b43cf8) &&
            (bVar2 = System_String__op_Equality(name,"Color",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702a29 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLightBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Color_g____gett);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Color_g____setter);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
        DAT_05702a29 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLightBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if (uVar1 == 0xf6a210e9) {
    bVar2 = System_String__op_Equality(name,"ShadowType",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702a2c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLightBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShadowType_g);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ShadowType_g____s);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
        DAT_05702a2c = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLightBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if ((uVar1 == 0xf950f202) &&
          (bVar2 = System_String__op_Equality(name,"BounceIntensity",(MethodInfo *)0x0),
          (char)bVar2 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702a2b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLightBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BounceIntensity);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__BounceIntensity_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
      DAT_05702a2b = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLightBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar7;
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicLightBuiltin not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__LightTypeDirectional
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeDirectional (const MethodInfo* method);
// 0x3de5ff0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeDirectional
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (DAT_05702a20 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LightTypeDirect);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
    DAT_05702a20 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__LightTypePoint
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypePoint (const MethodInfo* method);
// 0x3de6090

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypePoint
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (DAT_05702a21 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LightTypePoint);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
    DAT_05702a21 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__LightTypeSpot
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeSpot (const MethodInfo* method);
// 0x3de6130

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeSpot
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (DAT_05702a22 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LightTypeSpot_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
    DAT_05702a22 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowTypeNone
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeNone (const MethodInfo* method);
// 0x3de61d0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeNone
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (DAT_05702a23 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShadowTypeNone);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
    DAT_05702a23 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowTypeHard
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeHard (const MethodInfo* method);
// 0x3de6270

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeHard
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (DAT_05702a24 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShadowTypeHard);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
    DAT_05702a24 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowTypeSoft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeSoft (const MethodInfo* method);
// 0x3de6310

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeSoft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (DAT_05702a25 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShadowTypeSoft);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
    DAT_05702a25 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__TypeOfLight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__TypeOfLight (const MethodInfo* method);
// 0x3de63b0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__TypeOfLight
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (DAT_05702a26 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLightBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TypeOfLight_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TypeOfLight_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
    DAT_05702a26 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLightBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__Range
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Range (const MethodInfo* method);
// 0x3de6490

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Range(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (DAT_05702a27 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLightBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Range_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Range_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
    DAT_05702a27 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLightBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__SpotAngle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__SpotAngle (const MethodInfo* method);
// 0x3de6570

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__SpotAngle(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (DAT_05702a28 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLightBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpotAngle_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__SpotAngle_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
    DAT_05702a28 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLightBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__Color
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Color (const MethodInfo* method);
// 0x3de6650

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Color(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (DAT_05702a29 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLightBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Color_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Color_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
    DAT_05702a29 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLightBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__Intensity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Intensity (const MethodInfo* method);
// 0x3de6730

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Intensity(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (DAT_05702a2a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLightBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Intensity_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Intensity_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
    DAT_05702a2a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLightBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__BounceIntensity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__BounceIntensity (const MethodInfo* method);
// 0x3de6810

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__BounceIntensity
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (DAT_05702a2b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLightBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BounceIntensity);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__BounceIntensity_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
    DAT_05702a2b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLightBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowType
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowType (const MethodInfo* method);
// 0x3de68f0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowType
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (DAT_05702a2c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLightBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShadowType_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ShadowType_g____s);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
    DAT_05702a2c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLightBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowStrength
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowStrength (const MethodInfo* method);
// 0x3de69d0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowStrength
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (DAT_05702a2d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLightBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShadowStrength);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ShadowStrength_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
    DAT_05702a2d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLightBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__WeatherControlled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__WeatherControlled (const MethodInfo* method);
// 0x3de6ab0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__WeatherControlled
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (DAT_05702a2e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLightBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WeatherControll);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__WeatherControlled);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLightBuiltin__object);
    DAT_05702a2e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLightBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLightBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3de6b90

void CustomLogic_CustomLogicLightBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702a2f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Color");
    il2cpp_init_method_metadata(&"BounceIntensity");
    il2cpp_init_method_metadata(&"ShadowTypeSoft");
    il2cpp_init_method_metadata(&"TypeOfLight");
    il2cpp_init_method_metadata(&"ShadowStrength");
    il2cpp_init_method_metadata(&"Intensity");
    il2cpp_init_method_metadata(&"LightTypeSpot");
    il2cpp_init_method_metadata(&"ShadowTypeHard");
    il2cpp_init_method_metadata(&"WeatherControlled");
    il2cpp_init_method_metadata(&"LightTypePoint");
    il2cpp_init_method_metadata(&"ShadowTypeNone");
    il2cpp_init_method_metadata(&"SpotAngle");
    il2cpp_init_method_metadata(&"ShadowType");
    il2cpp_init_method_metadata(&"Range");
    il2cpp_init_method_metadata(&"LightTypeDirectional");
    DAT_05702a2f = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"LightTypeDirectional",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LightTypePoint",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LightTypeSpot",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ShadowTypeNone",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ShadowTypeHard",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ShadowTypeSoft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TypeOfLight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Range",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpotAngle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Color",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Intensity",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BounceIntensity",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ShadowType",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ShadowStrength",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"WeatherControlled",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__LightTypeDirectional>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__LightTypeDirectional_g____getter_2_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x3de6e30

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__LightTypeDirectional>g____getter_2_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__LightTypePoint>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__LightTypePoint_g____getter_3_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x3de6e50

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__LightTypePoint>g____getter_3_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__LightTypeSpot>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__LightTypeSpot_g____getter_4_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x3de6e70

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__LightTypeSpot>g____getter_4_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowTypeNone>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowTypeNone_g____getter_5_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x3de6e90

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__ShadowTypeNone>g____getter_5_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowTypeHard>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowTypeHard_g____getter_6_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x3de6eb0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__ShadowTypeHard>g____getter_6_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowTypeSoft>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowTypeSoft_g____getter_7_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x3de6ed0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__ShadowTypeSoft>g____getter_7_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__TypeOfLight>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__TypeOfLight_g____getter_8_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x3de6ef0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__TypeOfLight>g____getter_8_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_type(__this,(MethodInfo *)0x0);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__TypeOfLight>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__TypeOfLight_g____setter_8_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3de6f30

void CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__TypeOfLight>g____setter_8_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  int32_t value;
  
  if (DAT_05702a30 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a30 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_type(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Range>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Range_g____getter_9_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x3de6fc0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__Range>g____getter_9_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_range(__this,(MethodInfo *)0x0);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Range>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Range_g____setter_9_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3de7010

void CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__Range>g____setter_9_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  float value;
  
  if (DAT_05702a31 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a31 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_range(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__SpotAngle>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__SpotAngle_g____getter_10_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x3de70a0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__SpotAngle>g____getter_10_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_spotAngle(__this,(MethodInfo *)0x0);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__SpotAngle>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__SpotAngle_g____setter_10_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3de70f0

void CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__SpotAngle>g____setter_10_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  float value;
  
  if (DAT_05702a32 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a32 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_spotAngle(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Color>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Color_g____getter_11_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x3de7180

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__Color>g____getter_11_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  UnityEngine_Color_o color;
  
  if (__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) {
    if (DAT_05702a1b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
      DAT_05702a1b = '\x01';
    }
    pMVar1 = (__i->fields).Value;
    if ((pMVar1 != (Map_MapLight_o *)0x0) &&
       (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
      color = UnityEngine_Light__get_color(__this,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor(__this_00,color,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Color>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Color_g____setter_11_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3de7200

void CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__Color>g____setter_11_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  Il2CppObject *pIVar2;
  UnityEngine_Color_o value;
  
  if (DAT_05702a33 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a33 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
  if ((((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
       (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
      (pIVar2 != (Il2CppObject *)0x0)) && (pIVar2[3].klass != (Il2CppClass *)0x0)) {
    __this = (pMVar1->fields).Light;
    value = Utility_Color255__ToColor((Utility_Color255_o *)pIVar2[3].klass,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_color(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Intensity>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Intensity_g____getter_12_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x3de72a0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__Intensity>g____getter_12_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
     ((__i->fields).Value != (Map_MapLight_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Intensity>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Intensity_g____setter_12_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3de72e0

void CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__Intensity>g____setter_12_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  float fVar2;
  
  if (DAT_05702a34 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a34 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) {
    (pMVar1->fields).MaxIntensity = fVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__BounceIntensity>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__BounceIntensity_g____getter_13_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x3de7360

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__BounceIntensity>g____getter_13_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_bounceIntensity(__this,(MethodInfo *)0x0);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__BounceIntensity>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__BounceIntensity_g____setter_13_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3de73b0

void CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__BounceIntensity>g____setter_13_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  float value;
  
  if (DAT_05702a35 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a35 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowType>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowType_g____getter_14_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x3de7440

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__ShadowType>g____getter_14_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadows(__this,(MethodInfo *)0x0);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowType>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowType_g____setter_14_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3de7480

void CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__ShadowType>g____setter_14_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  int32_t value;
  
  if (DAT_05702a36 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a36 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowStrength>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowStrength_g____getter_15_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x3de7510

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__ShadowStrength>g____getter_15_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadowStrength(__this,(MethodInfo *)0x0);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowStrength>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowStrength_g____setter_15_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3de7560

void CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__ShadowStrength>g____setter_15_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  float value;
  
  if (DAT_05702a37 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a37 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__WeatherControlled>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__WeatherControlled_g____getter_16_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x3de75f0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__WeatherControlled>g____getter_16_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if (__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__WeatherControlled>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__WeatherControlled_g____setter_16_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3de7620

void CustomLogic_CustomLogicLightBuiltin_Bindings__<__CreatePropertyBinding__WeatherControlled>g____setter_16_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Map_MapLight_o *pMVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  UnityEngine_Light_o *item;
  System_Object_array *pSVar5;
  long lVar6;
  bool_conflict bVar7;
  
  if (DAT_05702a38 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a38 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i == (CustomLogic_CustomLogicLightBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702a1c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05702a1c = '\x01';
  }
  *(char *)&(__i->fields)._weatherControlled = (char)bVar7;
  if ((char)bVar7 == '\0') {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar3 = (__i->fields).Value;
    if ((pMVar3 != (Map_MapLight_o *)0x0) &&
       (pSVar4 = *(System_Collections_Generic_List_object__o **)
                  (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x28),
       pSVar4 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List<object>__Remove
                (pSVar4,(Il2CppObject *)(pMVar3->fields).Light,MethodInfo_Boolean_Remove);
      return;
    }
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar3 = (__i->fields).Value;
    if ((pMVar3 != (Map_MapLight_o *)0x0) &&
       (pSVar4 = *(System_Collections_Generic_List_object__o **)
                  (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x28),
       pSVar4 != (System_Collections_Generic_List_object__o *)0x0)) {
      bVar7 = System_Collections_Generic_List<object>__Contains
                        (pSVar4,(Il2CppObject *)(pMVar3->fields).Light,MethodInfo_Boolean_Contains);
      if ((char)bVar7 != '\0') {
        return;
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar6 = MethodInfo_Void_Add;
      pMVar3 = (__i->fields).Value;
      if ((pMVar3 != (Map_MapLight_o *)0x0) &&
         (pSVar4 = *(System_Collections_Generic_List_object__o **)
                    (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x28),
         pSVar4 != (System_Collections_Generic_List_object__o *)0x0)) {
        item = (pMVar3->fields).Light;
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (pSVar4->fields)._items;
        if (pSVar5 != (System_Object_array *)0x0) {
          uVar2 = (pSVar4->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (pSVar4->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)item;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    (pSVar4,(Il2CppObject *)item,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLightBuiltin___ctor (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x3de51f0

void CustomLogic_CustomLogicLightBuiltin___ctor
               (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLightBuiltin___ctor (CustomLogic_CustomLogicLightBuiltin_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* owner, int32_t type, const MethodInfo* method);
// 0x3de5200

void CustomLogic_CustomLogicLightBuiltin___ctor
               (CustomLogic_CustomLogicLightBuiltin_o *__this,
               CustomLogic_CustomLogicMapObjectBuiltin_o *owner,int32_t type,MethodInfo *method)

{
  Map_MapLight_o **ppMVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_Light_o *pUVar3;
  UnityEngine_Component_o *component;
  Map_MapLight_o *pMVar4;
  
  if (DAT_05702a1a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Light_GetOrAddComponent_Light);
    il2cpp_init_method_metadata(&TypeInfo_Light);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05702a1a = '\x01';
  }
  if ((owner != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pMVar2 = (owner->fields).Value, pMVar2 != (Map_MapObject_o *)0x0)) {
    component = (UnityEngine_Component_o *)
                CustomLogic_BuiltinComponentInstance__GetOrAddComponent<object>
                          ((pMVar2->fields).GameObject,MethodInfo_Light_GetOrAddComponent_Light);
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)__this,component,(MethodInfo *)0x0);
    (__this->fields).OwnerMapObject = owner;
    il2cpp_runtime_glue(&(__this->fields).OwnerMapObject,owner);
    pMVar2 = (owner->fields).Value;
    if (pMVar2 != (Map_MapObject_o *)0x0) {
      (__this->fields).Owner = (pMVar2->fields).GameObject;
      il2cpp_runtime_glue(&(__this->fields).Owner);
      pUVar3 = (UnityEngine_Light_o *)(__this->fields).Component;
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((pUVar3 != (UnityEngine_Light_o *)0x0) && (pUVar3->klass != TypeInfo_Light)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pUVar3);
      }
      pMVar4 = Map_MapLoader__RegisterMapLight(pUVar3,(uint)(type == 1),(MethodInfo *)0x0);
      ppMVar1 = &(__this->fields).Value;
      (__this->fields).Value = pMVar4;
      il2cpp_runtime_glue(ppMVar1,pMVar4);
      pMVar4 = (__this->fields).Value;
      if (pMVar4 != (Map_MapLight_o *)0x0) {
        (pMVar4->fields).MaxIntensity = 1.0;
        pUVar3 = (pMVar4->fields).Light;
        if (pUVar3 != (UnityEngine_Light_o *)0x0) {
          UnityEngine_Light__set_type(pUVar3,type,(MethodInfo *)0x0);
          if ((*ppMVar1 != (Map_MapLight_o *)0x0) &&
             (pUVar3 = ((*ppMVar1)->fields).Light, pUVar3 != (UnityEngine_Light_o *)0x0)) {
            if (type == 1) {
              UnityEngine_Light__set_shadows(pUVar3,2,(MethodInfo *)0x0);
              if ((*ppMVar1 != (Map_MapLight_o *)0x0) &&
                 (pUVar3 = ((*ppMVar1)->fields).Light, pUVar3 != (UnityEngine_Light_o *)0x0)) {
                UnityEngine_Light__set_shadowStrength(pUVar3,0.8,(MethodInfo *)0x0);
                if ((*ppMVar1 != (Map_MapLight_o *)0x0) &&
                   (pUVar3 = ((*ppMVar1)->fields).Light, pUVar3 != (UnityEngine_Light_o *)0x0)) {
                  UnityEngine_Light__set_shadowBias(pUVar3,0.2,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            else {
              UnityEngine_Light__set_shadows(pUVar3,0,(MethodInfo *)0x0);
              if ((*ppMVar1 != (Map_MapLight_o *)0x0) &&
                 (pUVar3 = ((*ppMVar1)->fields).Light, pUVar3 != (UnityEngine_Light_o *)0x0)) {
                UnityEngine_Light__set_renderMode(pUVar3,1,(MethodInfo *)0x0);
                if ((*ppMVar1 != (Map_MapLight_o *)0x0) &&
                   (pUVar3 = ((*ppMVar1)->fields).Light, pUVar3 != (UnityEngine_Light_o *)0x0)) {
                  UnityEngine_Light__set_bounceIntensity(pUVar3,0.0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin$$get_LightTypeDirectional
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_LightTypeDirectional (const MethodInfo* method);
// 0x3de5410

int32_t CustomLogic_CustomLogicLightBuiltin__get_LightTypeDirectional(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicLightBuiltin$$get_LightTypePoint
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_LightTypePoint (const MethodInfo* method);
// 0x3de5420

int32_t CustomLogic_CustomLogicLightBuiltin__get_LightTypePoint(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicLightBuiltin$$get_LightTypeSpot
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_LightTypeSpot (const MethodInfo* method);
// 0x3de5430

int32_t CustomLogic_CustomLogicLightBuiltin__get_LightTypeSpot(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicLightBuiltin$$get_ShadowTypeNone
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeNone (const MethodInfo* method);
// 0x3de5440

int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeNone(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicLightBuiltin$$get_ShadowTypeHard
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeHard (const MethodInfo* method);
// 0x3de5450

int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeHard(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicLightBuiltin$$get_ShadowTypeSoft
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeSoft (const MethodInfo* method);
// 0x3de5460

int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeSoft(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicLightBuiltin$$get_TypeOfLight
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_TypeOfLight (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x3de5470

int32_t CustomLogic_CustomLogicLightBuiltin__get_TypeOfLight
                  (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  int32_t iVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    iVar2 = UnityEngine_Light__get_type(__this_00,(MethodInfo *)0x0);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin$$set_TypeOfLight
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_TypeOfLight (CustomLogic_CustomLogicLightBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3de5490

void CustomLogic_CustomLogicLightBuiltin__set_TypeOfLight
               (CustomLogic_CustomLogicLightBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_type(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin$$get_Range
// il2cpp: float CustomLogic_CustomLogicLightBuiltin__get_Range (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x3de54b0

float CustomLogic_CustomLogicLightBuiltin__get_Range
                (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  float fVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    fVar2 = UnityEngine_Light__get_range(__this_00,(MethodInfo *)0x0);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin$$set_Range
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_Range (CustomLogic_CustomLogicLightBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3de54d0

void CustomLogic_CustomLogicLightBuiltin__set_Range
               (CustomLogic_CustomLogicLightBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_range(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin$$get_SpotAngle
// il2cpp: float CustomLogic_CustomLogicLightBuiltin__get_SpotAngle (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x3de54f0

float CustomLogic_CustomLogicLightBuiltin__get_SpotAngle
                (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  float fVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    fVar2 = UnityEngine_Light__get_spotAngle(__this_00,(MethodInfo *)0x0);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin$$set_SpotAngle
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_SpotAngle (CustomLogic_CustomLogicLightBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3de5510

void CustomLogic_CustomLogicLightBuiltin__set_SpotAngle
               (CustomLogic_CustomLogicLightBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_spotAngle(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin$$get_Color
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicLightBuiltin__get_Color (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x3de5530

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicLightBuiltin__get_Color
          (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  CustomLogic_CustomLogicColorBuiltin_o *__this_01;
  UnityEngine_Color_o color;
  
  if (DAT_05702a1b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    DAT_05702a1b = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    color = UnityEngine_Light__get_color(__this_00,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor(__this_01,color,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin$$set_Color
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_Color (CustomLogic_CustomLogicLightBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* value, const MethodInfo* method);
// 0x3de55b0

void CustomLogic_CustomLogicLightBuiltin__set_Color
               (CustomLogic_CustomLogicLightBuiltin_o *__this,
               CustomLogic_CustomLogicColorBuiltin_o *value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  Utility_Color255_o *__this_00;
  UnityEngine_Light_o *__this_01;
  UnityEngine_Color_o value_00;
  
  pMVar1 = (__this->fields).Value;
  if (((pMVar1 != (Map_MapLight_o *)0x0) && (value != (CustomLogic_CustomLogicColorBuiltin_o *)0x0))
     && (__this_00 = (value->fields).Value, __this_00 != (Utility_Color255_o *)0x0)) {
    __this_01 = (pMVar1->fields).Light;
    value_00 = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_color(__this_01,value_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin$$get_Intensity
// il2cpp: float CustomLogic_CustomLogicLightBuiltin__get_Intensity (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x3de55f0

float CustomLogic_CustomLogicLightBuiltin__get_Intensity
                (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapLight_o *)0x0) {
    return (pMVar1->fields).MaxIntensity;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin$$set_Intensity
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_Intensity (CustomLogic_CustomLogicLightBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3de5610

void CustomLogic_CustomLogicLightBuiltin__set_Intensity
               (CustomLogic_CustomLogicLightBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapLight_o *)0x0) {
    (pMVar1->fields).MaxIntensity = value;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin$$get_BounceIntensity
// il2cpp: float CustomLogic_CustomLogicLightBuiltin__get_BounceIntensity (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x3de5630

float CustomLogic_CustomLogicLightBuiltin__get_BounceIntensity
                (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  float fVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    fVar2 = UnityEngine_Light__get_bounceIntensity(__this_00,(MethodInfo *)0x0);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin$$set_BounceIntensity
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_BounceIntensity (CustomLogic_CustomLogicLightBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3de5650

void CustomLogic_CustomLogicLightBuiltin__set_BounceIntensity
               (CustomLogic_CustomLogicLightBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin$$get_ShadowType
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowType (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x3de5670

int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowType
                  (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  int32_t iVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    iVar2 = UnityEngine_Light__get_shadows(__this_00,(MethodInfo *)0x0);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin$$set_ShadowType
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_ShadowType (CustomLogic_CustomLogicLightBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3de5690

void CustomLogic_CustomLogicLightBuiltin__set_ShadowType
               (CustomLogic_CustomLogicLightBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin$$get_ShadowStrength
// il2cpp: float CustomLogic_CustomLogicLightBuiltin__get_ShadowStrength (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x3de56b0

float CustomLogic_CustomLogicLightBuiltin__get_ShadowStrength
                (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  float fVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    fVar2 = UnityEngine_Light__get_shadowStrength(__this_00,(MethodInfo *)0x0);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin$$set_ShadowStrength
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_ShadowStrength (CustomLogic_CustomLogicLightBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3de56d0

void CustomLogic_CustomLogicLightBuiltin__set_ShadowStrength
               (CustomLogic_CustomLogicLightBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin$$get_WeatherControlled
// il2cpp: bool CustomLogic_CustomLogicLightBuiltin__get_WeatherControlled (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x3de56f0

bool_conflict
CustomLogic_CustomLogicLightBuiltin__get_WeatherControlled
          (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._weatherControlled);
}


// CustomLogic.CustomLogicLightBuiltin$$set_WeatherControlled
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled (CustomLogic_CustomLogicLightBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3de5700

void CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled
               (CustomLogic_CustomLogicLightBuiltin_o *__this,bool_conflict value,MethodInfo *method
               )

{
  int32_t *piVar1;
  uint uVar2;
  Map_MapLight_o *pMVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  UnityEngine_Light_o *item;
  System_Object_array *pSVar5;
  long lVar6;
  bool_conflict bVar7;
  
  if (DAT_05702a1c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05702a1c = '\x01';
  }
  *(char *)&(__this->fields)._weatherControlled = (char)value;
  if ((char)value == '\0') {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar3 = (__this->fields).Value;
    if ((pMVar3 != (Map_MapLight_o *)0x0) &&
       (pSVar4 = *(System_Collections_Generic_List_object__o **)
                  (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x28),
       pSVar4 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List<object>__Remove
                (pSVar4,(Il2CppObject *)(pMVar3->fields).Light,MethodInfo_Boolean_Remove);
      return;
    }
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar3 = (__this->fields).Value;
    if ((pMVar3 != (Map_MapLight_o *)0x0) &&
       (pSVar4 = *(System_Collections_Generic_List_object__o **)
                  (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x28),
       pSVar4 != (System_Collections_Generic_List_object__o *)0x0)) {
      bVar7 = System_Collections_Generic_List<object>__Contains
                        (pSVar4,(Il2CppObject *)(pMVar3->fields).Light,MethodInfo_Boolean_Contains);
      if ((char)bVar7 != '\0') {
        return;
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar6 = MethodInfo_Void_Add;
      pMVar3 = (__this->fields).Value;
      if ((pMVar3 != (Map_MapLight_o *)0x0) &&
         (pSVar4 = *(System_Collections_Generic_List_object__o **)
                    (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x28),
         pSVar4 != (System_Collections_Generic_List_object__o *)0x0)) {
        item = (pMVar3->fields).Light;
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (pSVar4->fields)._items;
        if (pSVar5 != (System_Object_array *)0x0) {
          uVar2 = (pSVar4->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (pSVar4->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)item;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    (pSVar4,(Il2CppObject *)item,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLightBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLightBuiltin__get_ClassName (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x3de5880

System_String_o *
CustomLogic_CustomLogicLightBuiltin__get_ClassName
          (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05702a1d == '\0') {
    il2cpp_init_method_metadata(&"LightBuiltin");
    DAT_05702a1d = '\x01';
  }
  return "LightBuiltin";
}


// CustomLogic.CustomLogicLightBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLightBuiltin__get_IsAbstract (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x3de58b0

bool_conflict
CustomLogic_CustomLogicLightBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLightBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLightBuiltin__get_IsStatic (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x3de58c0

bool_conflict
CustomLogic_CustomLogicLightBuiltin__get_IsStatic
          (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLightBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLightBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x3de58d0

bool_conflict
CustomLogic_CustomLogicLightBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


