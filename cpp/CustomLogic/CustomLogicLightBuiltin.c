// Type: CustomLogic.CustomLogicLightBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLightBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLightBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLightBuiltin_o* CustomLogic_CustomLogicLightBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x40eb500

CustomLogic_CustomLogicLightBuiltin_o *
CustomLogic_CustomLogicLightBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  uint32_t uVar1;
  bool_conflict bVar2;
  CustomLogic_CustomLogicLightBuiltin_o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  System_ArgumentException_o *message;
  undefined8 uVar6;
  System_ArgumentException_o *__this;
  System_ArgumentException_o *pSVar7;
  undefined8 *puVar8;
  System_Func_T__object__o *pSVar9;
  System_Action_T__object__o *pSVar10;
  System_ArgumentException_o **ppSVar11;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ac74e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLightBuiltin);
    g_data_057ac74e = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pCVar3 = (CustomLogic_CustomLogicLightBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLightBuiltin);
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)pCVar3,(UnityEngine_Component_o *)0x0,
               (MethodInfo *)0x0);
    return pCVar3;
  }
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSVar4 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicLightBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  message = (System_ArgumentException_o *)System_String__Concat_3af7150(pSVar5,pSVar4,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  System_ArgumentException___ctor_3c12490(__this,(System_String_o *)message,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicLightBuiltin_CreateInstance);
  pSVar7 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar11 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057ac74f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"BounceIntensity");
    il2cpp_runtime_helper_023445d0(&"ShadowTypeSoft");
    il2cpp_runtime_helper_023445d0(&"TypeOfLight");
    il2cpp_runtime_helper_023445d0(&"ShadowStrength");
    il2cpp_runtime_helper_023445d0(&"Intensity");
    il2cpp_runtime_helper_023445d0(&"LightTypeSpot");
    il2cpp_runtime_helper_023445d0(&"ShadowTypeHard");
    il2cpp_runtime_helper_023445d0(&"WeatherControlled");
    il2cpp_runtime_helper_023445d0(&"LightTypePoint");
    il2cpp_runtime_helper_023445d0(&"ShadowTypeNone");
    il2cpp_runtime_helper_023445d0(&"SpotAngle");
    il2cpp_runtime_helper_023445d0(&"ShadowType");
    il2cpp_runtime_helper_023445d0(&"Range");
    il2cpp_runtime_helper_023445d0(&"LightTypeDirectional");
    g_data_057ac74f = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar7,(MethodInfo *)0x0);
  if (uVar1 < 0x67b0f90a) {
    if (uVar1 < 0x3cf8f4e5) {
      if (uVar1 == 0x6bb3b2f) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"LightTypeSpot",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          pSVar7 = (System_ArgumentException_o *)&TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSVar7;
          if (g_data_057ac752 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LightTypeSpot_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
            g_data_057ac752 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicLightBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          return pCVar3;
        }
      }
      else if (uVar1 == 0x2d3acfd4) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"TypeOfLight",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057ac756 == '\0') {
            pSStack_28 = message;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TypeOfLight_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__TypeOfLight_g____setter_8);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
            g_data_057ac756 = '\x01';
            message = pSStack_28;
          }
          pSStack_28 = message;
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
          System_Func_object__object____ctor();
          pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
          System_Action_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicLightBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          return pCVar3;
        }
      }
      else if ((uVar1 == 0x3cf8f4e4) &&
              (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"ShadowStrength",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ac75d == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShadowStrength_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ShadowStrength_g____setter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
          g_data_057ac75d = '\x01';
          message = pSStack_28;
        }
        pSStack_28 = message;
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
        System_Func_object__object____ctor();
        pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
        System_Action_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicLightBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        return pCVar3;
      }
    }
    else if (uVar1 < 0x48a10dd9) {
      if (uVar1 == 0x44ba848f) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"ShadowTypeNone",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          pSVar7 = (System_ArgumentException_o *)&TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSVar7;
          if (g_data_057ac753 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShadowTypeNone_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
            g_data_057ac753 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicLightBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          return pCVar3;
        }
      }
      else if ((uVar1 == 0x48a10dd8) &&
              (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"ShadowTypeHard",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        pSVar7 = (System_ArgumentException_o *)&TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSVar7;
        if (g_data_057ac754 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShadowTypeHard_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
          g_data_057ac754 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicLightBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        return pCVar3;
      }
    }
    else if (uVar1 == 0x53b4f9aa) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Intensity",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        pSStack_28 = message;
        if (g_data_057ac75a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Intensity_g____getter_12);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Intensity_g____setter_12_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
          g_data_057ac75a = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
        System_Func_object__object____ctor();
        pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
        System_Action_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicLightBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        return pCVar3;
      }
    }
    else if ((uVar1 == 0x67b0f909) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"WeatherControlled",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      pSStack_28 = message;
      if (g_data_057ac75e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__WeatherControlled_g____g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__WeatherControlled_g____set);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
        g_data_057ac75e = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
      System_Action_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicLightBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
      return pCVar3;
    }
  }
  else if (uVar1 < 0xd9e6934e) {
    if (uVar1 < 0xa8d979d0) {
      if (uVar1 == 0xa311e772) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Range",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          pSStack_28 = message;
          if (g_data_057ac757 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Range_g____getter_9_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Range_g____setter_9_1);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
            g_data_057ac757 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
          System_Func_object__object____ctor();
          pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
          System_Action_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicLightBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          return pCVar3;
        }
      }
      else if ((uVar1 == 0xa8d979cf) &&
              (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"LightTypePoint",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        pSVar7 = (System_ArgumentException_o *)&TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSVar7;
        if (g_data_057ac751 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LightTypePoint_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
          g_data_057ac751 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicLightBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        return pCVar3;
      }
    }
    else if (uVar1 == 0xab6315a1) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"ShadowTypeSoft",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pSVar7 = (System_ArgumentException_o *)&TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSVar7;
        if (g_data_057ac755 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShadowTypeSoft_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
          g_data_057ac755 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicLightBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        return pCVar3;
      }
    }
    else if ((uVar1 == 0xd9e6934d) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"LightTypeDirectional",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      puVar8 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar8 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      ppSVar11 = (System_ArgumentException_o **)&uStack_18;
      pSVar7 = pSStack_28;
      goto CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeDirectional;
    }
  }
  else if (uVar1 < 0xe5b43cf9) {
    if (uVar1 == 0xe2c2c340) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SpotAngle",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        pSStack_28 = message;
        if (g_data_057ac758 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpotAngle_g____getter_10);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__SpotAngle_g____setter_10_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
          g_data_057ac758 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
        System_Func_object__object____ctor();
        pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
        System_Action_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicLightBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        return pCVar3;
      }
    }
    else if ((uVar1 == 0xe5b43cf8) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Color",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      pSStack_28 = message;
      if (g_data_057ac759 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Color_g____getter_11_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Color_g____setter_11_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
        g_data_057ac759 = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
      System_Action_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicLightBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
      return pCVar3;
    }
  }
  else if (uVar1 == 0xf6a210e9) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"ShadowType",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      pSStack_28 = message;
      if (g_data_057ac75c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShadowType_g____getter_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ShadowType_g____setter_14);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
        g_data_057ac75c = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
      System_Action_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicLightBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
      return pCVar3;
    }
  }
  else if ((uVar1 == 0xf950f202) &&
          (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BounceIntensity",(MethodInfo *)0x0),
          (char)bVar2 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_30 = pSStack_28;
    pSStack_28 = message;
    if (g_data_057ac75b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BounceIntensity_g____get);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__BounceIntensity_g____sette);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
      g_data_057ac75b = '\x01';
    }
    pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
    System_Func_object__object____ctor();
    pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
    System_Action_object__object____ctor();
    pCVar3 = (CustomLogic_CustomLogicLightBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    CustomLogic_CLPropertyBinding_object____ctor
              ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    return pCVar3;
  }
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicLightBuiltin not found");
  message = (System_ArgumentException_o *)
            System_String__Concat_3af7150(pSVar4,(System_String_o *)pSVar7,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,(System_String_o *)message,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar8 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar7,uVar6);
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeDirectional:
  *(System_ArgumentException_o **)((long)ppSVar11 + -8) = message;
  *(System_ArgumentException_o **)((long)ppSVar11 + -0x10) = pSVar7;
  *(undefined8 **)((long)ppSVar11 + -0x18) = puVar8;
  if (g_data_057ac750 == '\0') {
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40ebc29;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LightTypeDirectional_g);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40ebc35;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40ebc41;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40ebc4d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
    g_data_057ac750 = '\x01';
  }
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40ebc63;
  pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40ebc7c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40ebc8b;
  pCVar3 = (CustomLogic_CustomLogicLightBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40ebca5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return pCVar3;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLightBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x40eb5f0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLightBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  uint32_t uVar1;
  bool_conflict bVar2;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar3;
  undefined8 *puVar4;
  System_Func_T__object__o *pSVar5;
  System_Action_T__object__o *pSVar6;
  CustomLogic_CLPropertyBinding_T__o *pCVar7;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 *puStack_18;
  
  if (g_data_057ac74f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"BounceIntensity");
    il2cpp_runtime_helper_023445d0(&"ShadowTypeSoft");
    il2cpp_runtime_helper_023445d0(&"TypeOfLight");
    il2cpp_runtime_helper_023445d0(&"ShadowStrength");
    il2cpp_runtime_helper_023445d0(&"Intensity");
    il2cpp_runtime_helper_023445d0(&"LightTypeSpot");
    il2cpp_runtime_helper_023445d0(&"ShadowTypeHard");
    il2cpp_runtime_helper_023445d0(&"WeatherControlled");
    il2cpp_runtime_helper_023445d0(&"LightTypePoint");
    il2cpp_runtime_helper_023445d0(&"ShadowTypeNone");
    il2cpp_runtime_helper_023445d0(&"SpotAngle");
    il2cpp_runtime_helper_023445d0(&"ShadowType");
    il2cpp_runtime_helper_023445d0(&"Range");
    il2cpp_runtime_helper_023445d0(&"LightTypeDirectional");
    g_data_057ac74f = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x67b0f90a) {
    if (uVar1 < 0x3cf8f4e5) {
      if (uVar1 == 0x6bb3b2f) {
        bVar2 = System_String__op_Equality(name,"LightTypeSpot",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac752 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LightTypeSpot_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
            g_data_057ac752 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
          System_Func_object__object____ctor();
          pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar7,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar7;
        }
      }
      else if (uVar1 == 0x2d3acfd4) {
        bVar2 = System_String__op_Equality(name,"TypeOfLight",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac756 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TypeOfLight_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__TypeOfLight_g____setter_8);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
            g_data_057ac756 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
          System_Func_object__object____ctor();
          pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
          System_Action_object__object____ctor();
          pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar7;
        }
      }
      else if ((uVar1 == 0x3cf8f4e4) &&
              (bVar2 = System_String__op_Equality(name,"ShadowStrength",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac75d == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShadowStrength_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ShadowStrength_g____setter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
          g_data_057ac75d = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
        System_Func_object__object____ctor();
        pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
        System_Action_object__object____ctor();
        pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if (uVar1 < 0x48a10dd9) {
      if (uVar1 == 0x44ba848f) {
        bVar2 = System_String__op_Equality(name,"ShadowTypeNone",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac753 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShadowTypeNone_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
            g_data_057ac753 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
          System_Func_object__object____ctor();
          pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar7,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar7;
        }
      }
      else if ((uVar1 == 0x48a10dd8) &&
              (bVar2 = System_String__op_Equality(name,"ShadowTypeHard",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac754 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShadowTypeHard_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
          g_data_057ac754 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
        System_Func_object__object____ctor();
        pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar7,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if (uVar1 == 0x53b4f9aa) {
      bVar2 = System_String__op_Equality(name,"Intensity",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac75a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Intensity_g____getter_12);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Intensity_g____setter_12_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
          g_data_057ac75a = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
        System_Func_object__object____ctor();
        pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
        System_Action_object__object____ctor();
        pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if ((uVar1 == 0x67b0f909) &&
            (bVar2 = System_String__op_Equality(name,"WeatherControlled",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac75e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__WeatherControlled_g____g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__WeatherControlled_g____set);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
        g_data_057ac75e = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
      System_Func_object__object____ctor();
      pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
      System_Action_object__object____ctor();
      pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if (uVar1 < 0xd9e6934e) {
    if (uVar1 < 0xa8d979d0) {
      if (uVar1 == 0xa311e772) {
        bVar2 = System_String__op_Equality(name,"Range",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac757 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Range_g____getter_9_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Range_g____setter_9_1);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
            g_data_057ac757 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
          System_Func_object__object____ctor();
          pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
          System_Action_object__object____ctor();
          pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar7;
        }
      }
      else if ((uVar1 == 0xa8d979cf) &&
              (bVar2 = System_String__op_Equality(name,"LightTypePoint",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac751 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LightTypePoint_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
          g_data_057ac751 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
        System_Func_object__object____ctor();
        pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar7,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if (uVar1 == 0xab6315a1) {
      bVar2 = System_String__op_Equality(name,"ShadowTypeSoft",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac755 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShadowTypeSoft_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
          g_data_057ac755 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
        System_Func_object__object____ctor();
        pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar7,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if ((uVar1 == 0xd9e6934d) &&
            (bVar2 = System_String__op_Equality(name,"LightTypeDirectional",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puVar4 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar4 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      goto CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeDirectional;
    }
  }
  else if (uVar1 < 0xe5b43cf9) {
    if (uVar1 == 0xe2c2c340) {
      bVar2 = System_String__op_Equality(name,"SpotAngle",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac758 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpotAngle_g____getter_10);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__SpotAngle_g____setter_10_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
          g_data_057ac758 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
        System_Func_object__object____ctor();
        pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
        System_Action_object__object____ctor();
        pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if ((uVar1 == 0xe5b43cf8) &&
            (bVar2 = System_String__op_Equality(name,"Color",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac759 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Color_g____getter_11_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Color_g____setter_11_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
        g_data_057ac759 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
      System_Func_object__object____ctor();
      pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
      System_Action_object__object____ctor();
      pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if (uVar1 == 0xf6a210e9) {
    bVar2 = System_String__op_Equality(name,"ShadowType",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac75c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShadowType_g____getter_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ShadowType_g____setter_14);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
        g_data_057ac75c = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
      System_Func_object__object____ctor();
      pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
      System_Action_object__object____ctor();
      pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if ((uVar1 == 0xf950f202) &&
          (bVar2 = System_String__op_Equality(name,"BounceIntensity",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ac75b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BounceIntensity_g____get);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__BounceIntensity_g____sette);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
      g_data_057ac75b = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
    System_Func_object__object____ctor();
    pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
    System_Action_object__object____ctor();
    pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar7;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicLightBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeDirectional:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar4;
  if (g_data_057ac750 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ebc29;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LightTypeDirectional_g);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ebc35;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ebc41;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ebc4d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
    g_data_057ac750 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ebc63;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ebc7c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ebc8b;
  pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40ebca5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar7;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__LightTypeDirectional
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeDirectional (const MethodInfo* method);
// 0x40ebc10

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeDirectional
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (g_data_057ac750 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LightTypeDirectional_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
    g_data_057ac750 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__LightTypePoint
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypePoint (const MethodInfo* method);
// 0x40ebcb0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypePoint(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (g_data_057ac751 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LightTypePoint_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
    g_data_057ac751 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__LightTypeSpot
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeSpot (const MethodInfo* method);
// 0x40ebd50

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeSpot(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (g_data_057ac752 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LightTypeSpot_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
    g_data_057ac752 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowTypeNone
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeNone (const MethodInfo* method);
// 0x40ebdf0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeNone(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (g_data_057ac753 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShadowTypeNone_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
    g_data_057ac753 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowTypeHard
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeHard (const MethodInfo* method);
// 0x40ebe90

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeHard(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (g_data_057ac754 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShadowTypeHard_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
    g_data_057ac754 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowTypeSoft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeSoft (const MethodInfo* method);
// 0x40ebf30

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeSoft(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (g_data_057ac755 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShadowTypeSoft_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
    g_data_057ac755 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__TypeOfLight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__TypeOfLight (const MethodInfo* method);
// 0x40ebfd0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__TypeOfLight(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (g_data_057ac756 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TypeOfLight_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__TypeOfLight_g____setter_8);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
    g_data_057ac756 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__Range
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Range (const MethodInfo* method);
// 0x40ec0b0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Range(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (g_data_057ac757 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Range_g____getter_9_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Range_g____setter_9_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
    g_data_057ac757 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__SpotAngle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__SpotAngle (const MethodInfo* method);
// 0x40ec190

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__SpotAngle(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (g_data_057ac758 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpotAngle_g____getter_10);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__SpotAngle_g____setter_10_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
    g_data_057ac758 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__Color
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Color (const MethodInfo* method);
// 0x40ec270

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Color(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (g_data_057ac759 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Color_g____getter_11_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Color_g____setter_11_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
    g_data_057ac759 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__Intensity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Intensity (const MethodInfo* method);
// 0x40ec350

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Intensity(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (g_data_057ac75a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Intensity_g____getter_12);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Intensity_g____setter_12_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
    g_data_057ac75a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__BounceIntensity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__BounceIntensity (const MethodInfo* method);
// 0x40ec430

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__BounceIntensity(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (g_data_057ac75b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BounceIntensity_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__BounceIntensity_g____sette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
    g_data_057ac75b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowType
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowType (const MethodInfo* method);
// 0x40ec510

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowType(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (g_data_057ac75c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShadowType_g____getter_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ShadowType_g____setter_14);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
    g_data_057ac75c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowStrength
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowStrength (const MethodInfo* method);
// 0x40ec5f0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowStrength(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (g_data_057ac75d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShadowStrength_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ShadowStrength_g____setter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
    g_data_057ac75d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__WeatherControlled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__WeatherControlled (const MethodInfo* method);
// 0x40ec6d0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__WeatherControlled(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this;
  
  if (g_data_057ac75e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLightBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__WeatherControlled_g____g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__WeatherControlled_g____set);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLightBuiltin_object);
    g_data_057ac75e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLightBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x40ec7b0

void CustomLogic_CustomLogicLightBuiltin_Bindings___cctor(MethodInfo *method)

{
  undefined4 uVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057ac75f == '\0') {
    uStack_20 = 0x40ec7cd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x40ec7d9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x40ec7e5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x40ec7f1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x40ec7fd;
    il2cpp_runtime_helper_023445d0(&"Color");
    uStack_20 = 0x40ec809;
    il2cpp_runtime_helper_023445d0(&"BounceIntensity");
    uStack_20 = 0x40ec815;
    il2cpp_runtime_helper_023445d0(&"ShadowTypeSoft");
    uStack_20 = 0x40ec821;
    il2cpp_runtime_helper_023445d0(&"TypeOfLight");
    uStack_20 = 0x40ec82d;
    il2cpp_runtime_helper_023445d0(&"ShadowStrength");
    uStack_20 = 0x40ec839;
    il2cpp_runtime_helper_023445d0(&"Intensity");
    uStack_20 = 0x40ec845;
    il2cpp_runtime_helper_023445d0(&"LightTypeSpot");
    uStack_20 = 0x40ec851;
    il2cpp_runtime_helper_023445d0(&"ShadowTypeHard");
    uStack_20 = 0x40ec85d;
    il2cpp_runtime_helper_023445d0(&"WeatherControlled");
    uStack_20 = 0x40ec869;
    il2cpp_runtime_helper_023445d0(&"LightTypePoint");
    uStack_20 = 0x40ec875;
    il2cpp_runtime_helper_023445d0(&"ShadowTypeNone");
    uStack_20 = 0x40ec881;
    il2cpp_runtime_helper_023445d0(&"SpotAngle");
    uStack_20 = 0x40ec88d;
    il2cpp_runtime_helper_023445d0(&"ShadowType");
    uStack_20 = 0x40ec899;
    il2cpp_runtime_helper_023445d0(&"Range");
    uStack_20 = 0x40ec8a5;
    il2cpp_runtime_helper_023445d0(&"LightTypeDirectional");
    g_data_057ac75f = '\x01';
  }
  uStack_20 = 0x40ec8bb;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x40ec8d0;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x40ec8f5;
    System_Collections_Generic_HashSet_object___Add(__this,"LightTypeDirectional",MethodInfo_Boolean_Add);
    uStack_20 = 0x40ec90a;
    System_Collections_Generic_HashSet_object___Add(__this,"LightTypePoint",MethodInfo_Boolean_Add);
    uStack_20 = 0x40ec91f;
    System_Collections_Generic_HashSet_object___Add(__this,"LightTypeSpot",MethodInfo_Boolean_Add);
    uStack_20 = 0x40ec934;
    System_Collections_Generic_HashSet_object___Add(__this,"ShadowTypeNone",MethodInfo_Boolean_Add);
    uStack_20 = 0x40ec949;
    System_Collections_Generic_HashSet_object___Add(__this,"ShadowTypeHard",MethodInfo_Boolean_Add);
    uStack_20 = 0x40ec95e;
    System_Collections_Generic_HashSet_object___Add(__this,"ShadowTypeSoft",MethodInfo_Boolean_Add);
    uStack_20 = 0x40ec973;
    System_Collections_Generic_HashSet_object___Add(__this,"TypeOfLight",MethodInfo_Boolean_Add);
    uStack_20 = 0x40ec988;
    System_Collections_Generic_HashSet_object___Add(__this,"Range",MethodInfo_Boolean_Add);
    uStack_20 = 0x40ec99d;
    System_Collections_Generic_HashSet_object___Add(__this,"SpotAngle",MethodInfo_Boolean_Add);
    uStack_20 = 0x40ec9b2;
    System_Collections_Generic_HashSet_object___Add(__this,"Color",MethodInfo_Boolean_Add);
    uStack_20 = 0x40ec9c7;
    System_Collections_Generic_HashSet_object___Add(__this,"Intensity",MethodInfo_Boolean_Add);
    uStack_20 = 0x40ec9dc;
    System_Collections_Generic_HashSet_object___Add(__this,"BounceIntensity",MethodInfo_Boolean_Add);
    uStack_20 = 0x40ec9f1;
    System_Collections_Generic_HashSet_object___Add(__this,"ShadowType",MethodInfo_Boolean_Add);
    uStack_20 = 0x40eca06;
    System_Collections_Generic_HashSet_object___Add(__this,"ShadowStrength",MethodInfo_Boolean_Add);
    uStack_20 = 0x40eca1b;
    System_Collections_Generic_HashSet_object___Add(__this,"WeatherControlled",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x40eca4d;
  uVar1 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = CONCAT44(1,uVar1);
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__LightTypeDirectional>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__LightTypeDirectional_g____getter_2_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x40eca50

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__LightTypeDirectional_g____getter_2_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__LightTypePoint>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__LightTypePoint_g____getter_3_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x40eca70

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__LightTypePoint_g____getter_3_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__LightTypeSpot>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__LightTypeSpot_g____getter_4_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x40eca90

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__LightTypeSpot_g____getter_4_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowTypeNone>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowTypeNone_g____getter_5_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x40ecab0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowTypeNone_g____getter_5_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowTypeHard>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowTypeHard_g____getter_6_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x40ecad0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowTypeHard_g____getter_6_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowTypeSoft>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowTypeSoft_g____getter_7_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x40ecaf0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowTypeSoft_g____getter_7_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__TypeOfLight>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__TypeOfLight_g____getter_8_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x40ecb10

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__TypeOfLight_g____getter_8_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  MethodInfo *pMVar3;
  MethodInfo_24EE950_RGCTXs *pMVar4;
  long lVar5;
  MethodInfo_24EED20_RGCTXs *pMVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int32_t iVar9;
  uint uVar10;
  Il2CppObject *pIVar11;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  CustomLogic_CustomLogicColorBuiltin_o *__this;
  Il2CppObject *extraout_RAX_02;
  Il2CppObject *extraout_RAX_03;
  Il2CppObject *extraout_RAX_04;
  Il2CppObject *extraout_RAX_05;
  Il2CppObject *extraout_RAX_06;
  Il2CppObject *extraout_RAX_07;
  MethodInfo *method_00;
  Il2CppClass *pIVar12;
  Il2CppClass *pIVar13;
  Il2CppClass *pIVar14;
  Il2CppClass *pIVar15;
  MethodInfo_24EEB40 *obj;
  MethodInfo *pMVar16;
  Il2CppClass *pIVar17;
  MethodInfo_24EEB40 *pMVar18;
  float fVar19;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar20;
  undefined8 uStack_128;
  undefined8 uStack_120;
  Il2CppClass *pIStack_118;
  Il2CppClass *pIStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  MethodInfo_24EEB40 *pMStack_f8;
  Il2CppClass *pIStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  Il2CppClass *pIStack_d8;
  MethodInfo_24EEB40 *pMStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  Il2CppClass *pIStack_b8;
  Il2CppClass *pIStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  Il2CppClass *pIStack_98;
  Il2CppClass *pIStack_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  Il2CppClass *pIStack_68;
  undefined8 uStack_60;
  MethodInfo *pMStack_58;
  Il2CppClass *pIStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  CustomLogic_CustomLogicLightBuiltin_o *pCStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (pUVar2 = (pMVar1->fields).Light, __i = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_type(pUVar2,(MethodInfo *)0x0);
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
    return pIVar11;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac760 == '\0') {
    uStack_28 = 0x40ecb6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_28 = 0x40ecb7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac760 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40ecb9a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40ecbac;
  pIVar13 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar16 = method;
  iVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    ((Il2CppObject *)method,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (pUVar2 = (pMVar1->fields).Light, pMVar16 = (MethodInfo *)0x0, pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_type(pUVar2,iVar9,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_28 = 0x40ecbd8;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if (((pMVar16 != (MethodInfo *)0x0) && ((pMVar16->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) &&
     (pMVar3 = (pMVar16->field7_0x38).rgctx_data[2].method, pMVar16 = (MethodInfo *)0x0,
     pMVar3 != (MethodInfo *)0x0)) {
    pMStack_30 = (MethodInfo *)0x40ecbff;
    fVar19 = UnityEngine_Light__get_range((UnityEngine_Light_o *)pMVar3,(MethodInfo *)0x0);
    uStack_28 = CONCAT44(fVar19,(undefined4)uStack_28);
    pMStack_30 = (MethodInfo *)0x40ecc1a;
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
    return pIVar11;
  }
  pMStack_30 = (MethodInfo *)0x40ecc21;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  pCStack_38 = __i;
  pMStack_30 = method;
  if (g_data_057ac761 == '\0') {
    uStack_48 = 0x40ecc4f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_48 = 0x40ecc5b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac761 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = 0x40ecc7a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = 0x40ecc8c;
  pIVar14 = MethodInfo_Single_ConvertTo_Single;
  pIVar12 = pIVar13;
  fVar19 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)pIVar13,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (((pMVar16 != (MethodInfo *)0x0) && ((pMVar16->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) &&
     (pMVar3 = (pMVar16->field7_0x38).rgctx_data[2].method, pIVar12 = (Il2CppClass *)0x0,
     pMVar3 != (MethodInfo *)0x0)) {
    UnityEngine_Light__set_range((UnityEngine_Light_o *)pMVar3,fVar19,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  uStack_48 = 0x40eccb6;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if (((pIVar12 != (Il2CppClass *)0x0) &&
      (pMVar4 = *(MethodInfo_24EE950_RGCTXs **)&(pIVar12->_1).this_arg.bits,
      pMVar4 != (MethodInfo_24EE950_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar4[1]._0_T, pIVar12 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pIStack_50 = (Il2CppClass *)0x40eccdf;
    fVar19 = UnityEngine_Light__get_spotAngle(pUVar2,(MethodInfo *)0x0);
    uStack_48 = CONCAT44(fVar19,(undefined4)uStack_48);
    pIStack_50 = (Il2CppClass *)0x40eccfa;
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_48 + 4);
    return pIVar11;
  }
  pIStack_50 = (Il2CppClass *)0x40ecd01;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pMStack_58 = pMVar16;
  pIStack_50 = pIVar13;
  if (g_data_057ac762 == '\0') {
    pIStack_68 = (Il2CppClass *)0x40ecd2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pIStack_68 = (Il2CppClass *)0x40ecd3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac762 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pIStack_68 = (Il2CppClass *)0x40ecd5a;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_68 = (Il2CppClass *)0x40ecd6c;
  pIVar15 = MethodInfo_Single_ConvertTo_Single;
  pIVar13 = pIVar14;
  fVar19 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)pIVar14,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (((pIVar12 != (Il2CppClass *)0x0) &&
      (pMVar4 = *(MethodInfo_24EE950_RGCTXs **)&(pIVar12->_1).this_arg.bits,
      pMVar4 != (MethodInfo_24EE950_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar4[1]._0_T, pIVar13 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_spotAngle(pUVar2,fVar19,(MethodInfo *)0x0);
    return extraout_RAX_01;
  }
  pIStack_68 = (Il2CppClass *)0x40ecd96;
  il2cpp_runtime_helper_022b2c90();
  pIVar17 = pIVar13;
  pIStack_68 = pIVar12;
  if (pIVar13 != (Il2CppClass *)0x0) {
    if (g_data_057ac74b == '\0') {
      pIVar17 = (Il2CppClass *)&TypeInfo_CustomLogicColorBuiltin;
      pIStack_90 = (Il2CppClass *)0x40ecdc2;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac74b = '\x01';
    }
    pMVar4 = *(MethodInfo_24EE950_RGCTXs **)&(pIVar13->_1).this_arg.bits;
    pIVar12 = pIVar13;
    if ((pMVar4 != (MethodInfo_24EE950_RGCTXs *)0x0) &&
       (pUVar2 = (UnityEngine_Light_o *)pMVar4[1]._0_T, pIVar17 = (Il2CppClass *)0x0,
       pUVar2 != (UnityEngine_Light_o *)0x0)) {
      pIStack_90 = (Il2CppClass *)0x40ecde2;
      UVar20 = UnityEngine_Light__get_color(pUVar2,(MethodInfo *)0x0);
      auStack_78._8_4_ = extraout_XMM0_Dc;
      auStack_78._0_8_ = UVar20.fields._0_8_;
      auStack_78._12_4_ = extraout_XMM0_Dd;
      auStack_88._8_4_ = in_XMM1_Dc;
      auStack_88._0_8_ = UVar20.fields._8_8_;
      auStack_88._12_4_ = in_XMM1_Dd;
      pIStack_90 = (Il2CppClass *)0x40ecdfa;
      __this = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      auVar8 = auStack_78;
      auVar7 = auStack_88;
      pIStack_90 = (Il2CppClass *)0x40ece10;
      UVar20.fields.b = (float)auStack_88._0_4_;
      UVar20.fields.a = (float)auStack_88._4_4_;
      UVar20.fields.r = (float)auStack_78._0_4_;
      UVar20.fields.g = (float)auStack_78._4_4_;
      auStack_88 = auVar7;
      auStack_78 = auVar8;
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(__this,UVar20,(MethodInfo *)0x0);
      return (Il2CppObject *)__this;
    }
  }
  pIStack_90 = (Il2CppClass *)0x40ece1e;
  uStack_a0 = il2cpp_runtime_helper_022b2c90();
  pIStack_98 = pIVar12;
  pIStack_90 = pIVar14;
  if (g_data_057ac763 == '\0') {
    uStack_a8 = 0x40ece3f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    uStack_a8 = 0x40ece4b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac763 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_a8 = 0x40ece6a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_a8 = 0x40ece7c;
  obj = MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
  pIVar13 = pIVar15;
  pIVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pIVar15,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
  if ((((pIVar17 != (Il2CppClass *)0x0) &&
       (pMVar4 = *(MethodInfo_24EE950_RGCTXs **)&(pIVar17->_1).this_arg.bits,
       pMVar4 != (MethodInfo_24EE950_RGCTXs *)0x0)) && (pIVar11 != (Il2CppObject *)0x0)) &&
     (pIVar13 = pIVar11[3].klass, pIVar13 != (Il2CppClass *)0x0)) {
    pUVar2 = (UnityEngine_Light_o *)pMVar4[1]._0_T;
    obj = (MethodInfo_24EEB40 *)0x0;
    uStack_a8 = 0x40ecea3;
    UVar20 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar13,(MethodInfo *)0x0);
    pIVar17 = (Il2CppClass *)0x0;
    if (pUVar2 != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_color(pUVar2,UVar20,(MethodInfo *)0x0);
      return extraout_RAX_02;
    }
  }
  uStack_a8 = 0x40ecebe;
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  if ((pIVar13 != (Il2CppClass *)0x0) && (lVar5 = *(long *)&(pIVar13->_1).this_arg.bits, lVar5 != 0)) {
    uStack_a8 = CONCAT44(*(undefined4 *)(lVar5 + 0x18),(undefined4)uStack_a8);
    pIStack_b0 = (Il2CppClass *)0x40eceeb;
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_a8 + 4);
    return pIVar11;
  }
  pIStack_b0 = (Il2CppClass *)0x40ecef2;
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  pIStack_b8 = pIVar17;
  pIStack_b0 = pIVar15;
  if (g_data_057ac764 == '\0') {
    uStack_c8 = 0x40ecf1f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_c8 = 0x40ecf2b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac764 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_c8 = 0x40ecf4a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_c8 = 0x40ecf5c;
  pIVar12 = MethodInfo_Single_ConvertTo_Single;
  pMVar18 = obj;
  fVar19 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)obj,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (pIVar13 != (Il2CppClass *)0x0) {
    pIVar11 = *(Il2CppObject **)&(pIVar13->_1).this_arg.bits;
    if (pIVar11 != (Il2CppObject *)0x0) {
      *(float *)&pIVar11[1].monitor = fVar19;
      return pIVar11;
    }
  }
  uStack_c8 = 0x40ecf7c;
  uStack_c8 = il2cpp_runtime_helper_022b2c90();
  if (((pMVar18 != (MethodInfo_24EEB40 *)0x0) && (pMVar18->rgctx_data != (MethodInfo_24EEB40_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar18->rgctx_data[1]._0_T, pMVar18 = (MethodInfo_24EEB40 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pMStack_d0 = (MethodInfo_24EEB40 *)0x40ecf9f;
    fVar19 = UnityEngine_Light__get_bounceIntensity(pUVar2,(MethodInfo *)0x0);
    uStack_c8 = CONCAT44(fVar19,(undefined4)uStack_c8);
    pMStack_d0 = (MethodInfo_24EEB40 *)0x40ecfba;
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_c8 + 4);
    return pIVar11;
  }
  pMStack_d0 = (MethodInfo_24EEB40 *)0x40ecfc1;
  uStack_e0 = il2cpp_runtime_helper_022b2c90();
  pIStack_d8 = pIVar13;
  pMStack_d0 = obj;
  if (g_data_057ac765 == '\0') {
    uStack_e8 = 0x40ecfef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_e8 = 0x40ecffb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac765 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_e8 = 0x40ed01a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_e8 = 0x40ed02c;
  pIVar14 = MethodInfo_Single_ConvertTo_Single;
  pIVar13 = pIVar12;
  fVar19 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)pIVar12,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (((pMVar18 != (MethodInfo_24EEB40 *)0x0) && (pMVar18->rgctx_data != (MethodInfo_24EEB40_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar18->rgctx_data[1]._0_T, pIVar13 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,fVar19,(MethodInfo *)0x0);
    return extraout_RAX_03;
  }
  uStack_e8 = 0x40ed056;
  uStack_e8 = il2cpp_runtime_helper_022b2c90();
  if (((pIVar13 != (Il2CppClass *)0x0) &&
      (pMVar6 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar13->_1).this_arg.bits,
      pMVar6 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar6[1]._0_T, pIVar13 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pIStack_f0 = (Il2CppClass *)0x40ed07f;
    iVar9 = UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    uStack_e8 = CONCAT44(iVar9,(undefined4)uStack_e8);
    pIStack_f0 = (Il2CppClass *)0x40ed098;
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_e8 + 4);
    return pIVar11;
  }
  pIStack_f0 = (Il2CppClass *)0x40ed09f;
  uStack_100 = il2cpp_runtime_helper_022b2c90();
  pMStack_f8 = pMVar18;
  pIStack_f0 = pIVar12;
  if (g_data_057ac766 == '\0') {
    uStack_108 = 0x40ed0bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_108 = 0x40ed0cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac766 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_108 = 0x40ed0ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_108 = 0x40ed0fc;
  pIVar15 = MethodInfo_Int32_ConvertTo_Int32;
  pIVar12 = pIVar14;
  iVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    ((Il2CppObject *)pIVar14,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
  if (((pIVar13 != (Il2CppClass *)0x0) &&
      (pMVar6 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar13->_1).this_arg.bits,
      pMVar6 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar6[1]._0_T, pIVar12 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,iVar9,(MethodInfo *)0x0);
    return extraout_RAX_04;
  }
  uStack_108 = 0x40ed128;
  uStack_108 = il2cpp_runtime_helper_022b2c90();
  if (((pIVar12 != (Il2CppClass *)0x0) &&
      (pMVar6 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar12->_1).this_arg.bits,
      pMVar6 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar6[1]._0_T, pIVar12 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pIStack_110 = (Il2CppClass *)0x40ed14f;
    fVar19 = UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    uStack_108 = CONCAT44(fVar19,(undefined4)uStack_108);
    pIStack_110 = (Il2CppClass *)0x40ed16a;
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_108 + 4);
    return pIVar11;
  }
  pIStack_110 = (Il2CppClass *)0x40ed171;
  uStack_120 = il2cpp_runtime_helper_022b2c90();
  pIStack_118 = pIVar13;
  pIStack_110 = pIVar14;
  if (g_data_057ac767 == '\0') {
    uStack_128 = 0x40ed19f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_128 = 0x40ed1ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac767 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_128 = 0x40ed1ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_128 = 0x40ed1dc;
  pIVar13 = MethodInfo_Single_ConvertTo_Single;
  fVar19 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)pIVar15,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (((pIVar12 != (Il2CppClass *)0x0) &&
      (pMVar6 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar12->_1).this_arg.bits,
      pMVar6 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar6[1]._0_T, pIVar15 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar19,(MethodInfo *)0x0);
    return extraout_RAX_05;
  }
  uStack_128 = 0x40ed206;
  uStack_128 = il2cpp_runtime_helper_022b2c90();
  if (pIVar15 != (Il2CppClass *)0x0) {
    uStack_128 = CONCAT17(*(undefined1 *)&(pIVar15->_1).declaringType,(undefined7)uStack_128);
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_128 + 7);
    return pIVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac768 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac768 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar16 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     ((Il2CppObject *)pIVar13,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (pIVar15 != (Il2CppClass *)0x0) {
    CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled
              ((CustomLogic_CustomLogicLightBuiltin_o *)pIVar15,uVar10 & 0xff,method_00);
    return extraout_RAX_06;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_3fed2e0
            ((CustomLogic_CustomLogicLineRendererBuiltin_o *)pIVar13,
             (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,pMVar16);
  return extraout_RAX_07;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__TypeOfLight>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__TypeOfLight_g____setter_8_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40ecb50

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__TypeOfLight_g____setter_8_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  MethodInfo_24EE950_RGCTXs *pMVar3;
  long lVar4;
  MethodInfo_24EED20_RGCTXs *pMVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int32_t iVar8;
  uint uVar9;
  CustomLogic_CustomLogicColorBuiltin_o *__this;
  Il2CppObject *pIVar10;
  MethodInfo *method_00;
  Il2CppClass *pIVar11;
  Il2CppClass *pIVar12;
  Il2CppClass *pIVar13;
  Il2CppClass *pIVar14;
  MethodInfo_24EEB40 *obj;
  MethodInfo *method_01;
  Il2CppClass *pIVar15;
  MethodInfo_24EEB40 *pMVar16;
  float fVar17;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar18;
  undefined8 uStack_120;
  undefined8 uStack_118;
  Il2CppClass *pIStack_110;
  Il2CppClass *pIStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  MethodInfo_24EEB40 *pMStack_f0;
  Il2CppClass *pIStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  Il2CppClass *pIStack_d0;
  MethodInfo_24EEB40 *pMStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  Il2CppClass *pIStack_b0;
  Il2CppClass *pIStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  Il2CppClass *pIStack_90;
  Il2CppClass *pIStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  Il2CppClass *pIStack_60;
  undefined8 uStack_58;
  Il2CppObject *pIStack_50;
  Il2CppClass *pIStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicLightBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ac760 == '\0') {
    uStack_20 = 0x40ecb6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_20 = 0x40ecb7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac760 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40ecb9a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40ecbac;
  pIVar12 = MethodInfo_Int32_ConvertTo_Int32;
  pIVar10 = __v;
  iVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(__v,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (pUVar2 = (pMVar1->fields).Light, pIVar10 = (Il2CppObject *)0x0, pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_type(pUVar2,iVar8,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = 0x40ecbd8;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (((pIVar10 != (Il2CppObject *)0x0) && (pIVar10[3].monitor != (void *)0x0)) &&
     (pUVar2 = *(UnityEngine_Light_o **)((long)pIVar10[3].monitor + 0x10), pIVar10 = (Il2CppObject *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pIStack_28 = (Il2CppObject *)0x40ecbff;
    fVar17 = UnityEngine_Light__get_range(pUVar2,(MethodInfo *)0x0);
    uStack_20 = CONCAT44(fVar17,(undefined4)uStack_20);
    pIStack_28 = (Il2CppObject *)0x40ecc1a;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
    return;
  }
  pIStack_28 = (Il2CppObject *)0x40ecc21;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057ac761 == '\0') {
    uStack_40 = 0x40ecc4f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_40 = 0x40ecc5b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac761 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x40ecc7a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x40ecc8c;
  pIVar13 = MethodInfo_Single_ConvertTo_Single;
  pIVar11 = pIVar12;
  fVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)pIVar12,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (((pIVar10 != (Il2CppObject *)0x0) && (pIVar10[3].monitor != (void *)0x0)) &&
     (pUVar2 = *(UnityEngine_Light_o **)((long)pIVar10[3].monitor + 0x10), pIVar11 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_range(pUVar2,fVar17,(MethodInfo *)0x0);
    return;
  }
  uStack_40 = 0x40eccb6;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if (((pIVar11 != (Il2CppClass *)0x0) &&
      (pMVar3 = *(MethodInfo_24EE950_RGCTXs **)&(pIVar11->_1).this_arg.bits,
      pMVar3 != (MethodInfo_24EE950_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar3[1]._0_T, pIVar11 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pIStack_48 = (Il2CppClass *)0x40eccdf;
    fVar17 = UnityEngine_Light__get_spotAngle(pUVar2,(MethodInfo *)0x0);
    uStack_40 = CONCAT44(fVar17,(undefined4)uStack_40);
    pIStack_48 = (Il2CppClass *)0x40eccfa;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_40 + 4);
    return;
  }
  pIStack_48 = (Il2CppClass *)0x40ecd01;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  pIStack_50 = pIVar10;
  pIStack_48 = pIVar12;
  if (g_data_057ac762 == '\0') {
    pIStack_60 = (Il2CppClass *)0x40ecd2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pIStack_60 = (Il2CppClass *)0x40ecd3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac762 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pIStack_60 = (Il2CppClass *)0x40ecd5a;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_60 = (Il2CppClass *)0x40ecd6c;
  pIVar14 = MethodInfo_Single_ConvertTo_Single;
  pIVar12 = pIVar13;
  fVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)pIVar13,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (((pIVar11 != (Il2CppClass *)0x0) &&
      (pMVar3 = *(MethodInfo_24EE950_RGCTXs **)&(pIVar11->_1).this_arg.bits,
      pMVar3 != (MethodInfo_24EE950_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar3[1]._0_T, pIVar12 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_spotAngle(pUVar2,fVar17,(MethodInfo *)0x0);
    return;
  }
  pIStack_60 = (Il2CppClass *)0x40ecd96;
  il2cpp_runtime_helper_022b2c90();
  pIVar15 = pIVar12;
  pIStack_60 = pIVar11;
  if (pIVar12 != (Il2CppClass *)0x0) {
    if (g_data_057ac74b == '\0') {
      pIVar15 = (Il2CppClass *)&TypeInfo_CustomLogicColorBuiltin;
      pIStack_88 = (Il2CppClass *)0x40ecdc2;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac74b = '\x01';
    }
    pMVar3 = *(MethodInfo_24EE950_RGCTXs **)&(pIVar12->_1).this_arg.bits;
    pIVar11 = pIVar12;
    if ((pMVar3 != (MethodInfo_24EE950_RGCTXs *)0x0) &&
       (pUVar2 = (UnityEngine_Light_o *)pMVar3[1]._0_T, pIVar15 = (Il2CppClass *)0x0,
       pUVar2 != (UnityEngine_Light_o *)0x0)) {
      pIStack_88 = (Il2CppClass *)0x40ecde2;
      UVar18 = UnityEngine_Light__get_color(pUVar2,(MethodInfo *)0x0);
      auStack_70._8_4_ = extraout_XMM0_Dc;
      auStack_70._0_8_ = UVar18.fields._0_8_;
      auStack_70._12_4_ = extraout_XMM0_Dd;
      auStack_80._8_4_ = in_XMM1_Dc;
      auStack_80._0_8_ = UVar18.fields._8_8_;
      auStack_80._12_4_ = in_XMM1_Dd;
      pIStack_88 = (Il2CppClass *)0x40ecdfa;
      __this = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      auVar7 = auStack_70;
      auVar6 = auStack_80;
      pIStack_88 = (Il2CppClass *)0x40ece10;
      UVar18.fields.b = (float)auStack_80._0_4_;
      UVar18.fields.a = (float)auStack_80._4_4_;
      UVar18.fields.r = (float)auStack_70._0_4_;
      UVar18.fields.g = (float)auStack_70._4_4_;
      auStack_80 = auVar6;
      auStack_70 = auVar7;
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(__this,UVar18,(MethodInfo *)0x0);
      return;
    }
  }
  pIStack_88 = (Il2CppClass *)0x40ece1e;
  uStack_98 = il2cpp_runtime_helper_022b2c90();
  pIStack_90 = pIVar11;
  pIStack_88 = pIVar13;
  if (g_data_057ac763 == '\0') {
    uStack_a0 = 0x40ece3f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    uStack_a0 = 0x40ece4b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac763 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_a0 = 0x40ece6a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_a0 = 0x40ece7c;
  obj = MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
  pIVar12 = pIVar14;
  pIVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pIVar14,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
  if ((((pIVar15 != (Il2CppClass *)0x0) &&
       (pMVar3 = *(MethodInfo_24EE950_RGCTXs **)&(pIVar15->_1).this_arg.bits,
       pMVar3 != (MethodInfo_24EE950_RGCTXs *)0x0)) && (pIVar10 != (Il2CppObject *)0x0)) &&
     (pIVar12 = pIVar10[3].klass, pIVar12 != (Il2CppClass *)0x0)) {
    pUVar2 = (UnityEngine_Light_o *)pMVar3[1]._0_T;
    obj = (MethodInfo_24EEB40 *)0x0;
    uStack_a0 = 0x40ecea3;
    UVar18 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar12,(MethodInfo *)0x0);
    pIVar15 = (Il2CppClass *)0x0;
    if (pUVar2 != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_color(pUVar2,UVar18,(MethodInfo *)0x0);
      return;
    }
  }
  uStack_a0 = 0x40ecebe;
  uStack_a0 = il2cpp_runtime_helper_022b2c90();
  if ((pIVar12 != (Il2CppClass *)0x0) && (lVar4 = *(long *)&(pIVar12->_1).this_arg.bits, lVar4 != 0)) {
    uStack_a0 = CONCAT44(*(undefined4 *)(lVar4 + 0x18),(undefined4)uStack_a0);
    pIStack_a8 = (Il2CppClass *)0x40eceeb;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_a0 + 4);
    return;
  }
  pIStack_a8 = (Il2CppClass *)0x40ecef2;
  uStack_b8 = il2cpp_runtime_helper_022b2c90();
  pIStack_b0 = pIVar15;
  pIStack_a8 = pIVar14;
  if (g_data_057ac764 == '\0') {
    uStack_c0 = 0x40ecf1f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_c0 = 0x40ecf2b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac764 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_c0 = 0x40ecf4a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_c0 = 0x40ecf5c;
  pIVar11 = MethodInfo_Single_ConvertTo_Single;
  pMVar16 = obj;
  fVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)obj,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((pIVar12 != (Il2CppClass *)0x0) && (lVar4 = *(long *)&(pIVar12->_1).this_arg.bits, lVar4 != 0)) {
    *(float *)(lVar4 + 0x18) = fVar17;
    return;
  }
  uStack_c0 = 0x40ecf7c;
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar16 != (MethodInfo_24EEB40 *)0x0) &&
     ((pMVar16->rgctx_data != (MethodInfo_24EEB40_RGCTXs *)0x0 &&
      (pUVar2 = (UnityEngine_Light_o *)pMVar16->rgctx_data[1]._0_T, pMVar16 = (MethodInfo_24EEB40 *)0x0,
      pUVar2 != (UnityEngine_Light_o *)0x0)))) {
    pMStack_c8 = (MethodInfo_24EEB40 *)0x40ecf9f;
    fVar17 = UnityEngine_Light__get_bounceIntensity(pUVar2,(MethodInfo *)0x0);
    uStack_c0 = CONCAT44(fVar17,(undefined4)uStack_c0);
    pMStack_c8 = (MethodInfo_24EEB40 *)0x40ecfba;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_c0 + 4);
    return;
  }
  pMStack_c8 = (MethodInfo_24EEB40 *)0x40ecfc1;
  uStack_d8 = il2cpp_runtime_helper_022b2c90();
  pIStack_d0 = pIVar12;
  pMStack_c8 = obj;
  if (g_data_057ac765 == '\0') {
    uStack_e0 = 0x40ecfef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_e0 = 0x40ecffb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac765 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_e0 = 0x40ed01a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_e0 = 0x40ed02c;
  pIVar13 = MethodInfo_Single_ConvertTo_Single;
  pIVar12 = pIVar11;
  fVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)pIVar11,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (((pMVar16 != (MethodInfo_24EEB40 *)0x0) && (pMVar16->rgctx_data != (MethodInfo_24EEB40_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar16->rgctx_data[1]._0_T, pIVar12 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,fVar17,(MethodInfo *)0x0);
    return;
  }
  uStack_e0 = 0x40ed056;
  uStack_e0 = il2cpp_runtime_helper_022b2c90();
  if (((pIVar12 != (Il2CppClass *)0x0) &&
      (pMVar5 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar12->_1).this_arg.bits,
      pMVar5 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar5[1]._0_T, pIVar12 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pIStack_e8 = (Il2CppClass *)0x40ed07f;
    iVar8 = UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    uStack_e0 = CONCAT44(iVar8,(undefined4)uStack_e0);
    pIStack_e8 = (Il2CppClass *)0x40ed098;
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_e0 + 4);
    return;
  }
  pIStack_e8 = (Il2CppClass *)0x40ed09f;
  uStack_f8 = il2cpp_runtime_helper_022b2c90();
  pMStack_f0 = pMVar16;
  pIStack_e8 = pIVar11;
  if (g_data_057ac766 == '\0') {
    uStack_100 = 0x40ed0bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_100 = 0x40ed0cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac766 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_100 = 0x40ed0ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_100 = 0x40ed0fc;
  pIVar14 = MethodInfo_Int32_ConvertTo_Int32;
  pIVar11 = pIVar13;
  iVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    ((Il2CppObject *)pIVar13,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
  if (((pIVar12 != (Il2CppClass *)0x0) &&
      (pMVar5 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar12->_1).this_arg.bits,
      pMVar5 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar5[1]._0_T, pIVar11 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,iVar8,(MethodInfo *)0x0);
    return;
  }
  uStack_100 = 0x40ed128;
  uStack_100 = il2cpp_runtime_helper_022b2c90();
  if (((pIVar11 != (Il2CppClass *)0x0) &&
      (pMVar5 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar11->_1).this_arg.bits,
      pMVar5 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar5[1]._0_T, pIVar11 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pIStack_108 = (Il2CppClass *)0x40ed14f;
    fVar17 = UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    uStack_100 = CONCAT44(fVar17,(undefined4)uStack_100);
    pIStack_108 = (Il2CppClass *)0x40ed16a;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_100 + 4);
    return;
  }
  pIStack_108 = (Il2CppClass *)0x40ed171;
  uStack_118 = il2cpp_runtime_helper_022b2c90();
  pIStack_110 = pIVar12;
  pIStack_108 = pIVar13;
  if (g_data_057ac767 == '\0') {
    uStack_120 = 0x40ed19f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_120 = 0x40ed1ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac767 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_120 = 0x40ed1ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_120 = 0x40ed1dc;
  pIVar12 = MethodInfo_Single_ConvertTo_Single;
  fVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)pIVar14,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (((pIVar11 != (Il2CppClass *)0x0) &&
      (pMVar5 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar11->_1).this_arg.bits,
      pMVar5 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar5[1]._0_T, pIVar14 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar17,(MethodInfo *)0x0);
    return;
  }
  uStack_120 = 0x40ed206;
  uStack_120 = il2cpp_runtime_helper_022b2c90();
  if (pIVar14 != (Il2CppClass *)0x0) {
    uStack_120 = CONCAT17(*(undefined1 *)&(pIVar14->_1).declaringType,(undefined7)uStack_120);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_120 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac768 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac768 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pIVar12,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (pIVar14 != (Il2CppClass *)0x0) {
    CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled
              ((CustomLogic_CustomLogicLightBuiltin_o *)pIVar14,uVar9 & 0xff,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_3fed2e0
            ((CustomLogic_CustomLogicLineRendererBuiltin_o *)pIVar12,
             (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,method_01);
  return;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Range>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Range_g____getter_9_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x40ecbe0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Range_g____getter_9_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  MethodInfo_24EED20_RGCTXs *pMVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int32_t iVar7;
  uint uVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  CustomLogic_CustomLogicColorBuiltin_o *__this;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  Il2CppObject *extraout_RAX_03;
  Il2CppObject *extraout_RAX_04;
  Il2CppObject *extraout_RAX_05;
  Il2CppObject *extraout_RAX_06;
  MethodInfo *method_00;
  Il2CppClass *pIVar10;
  Il2CppClass *pIVar11;
  Il2CppClass *obj;
  MethodInfo_24EEB40 *obj_00;
  Il2CppClass *pIVar12;
  MethodInfo_24EE950 *__this_00;
  MethodInfo *method_01;
  Il2CppClass *pIVar13;
  MethodInfo_24EEB40 *pMVar14;
  float fVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar16;
  undefined8 uStack_108;
  undefined8 uStack_100;
  Il2CppClass *pIStack_f8;
  Il2CppClass *pIStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  MethodInfo_24EEB40 *pMStack_d8;
  Il2CppClass *pIStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  Il2CppClass *pIStack_b8;
  MethodInfo_24EEB40 *pMStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  Il2CppClass *pIStack_98;
  Il2CppClass *pIStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  Il2CppClass *pIStack_78;
  Il2CppClass *pIStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  Il2CppClass *pIStack_48;
  undefined8 uStack_40;
  CustomLogic_CustomLogicLightBuiltin_o *pCStack_38;
  Il2CppClass *pIStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (pUVar2 = (pMVar1->fields).Light, __i = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_range(pUVar2,(MethodInfo *)0x0);
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar9;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac761 == '\0') {
    uStack_28 = 0x40ecc4f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_28 = 0x40ecc5b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac761 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40ecc7a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40ecc8c;
  pIVar11 = MethodInfo_Single_ConvertTo_Single;
  pIVar10 = (Il2CppClass *)method;
  fVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)method,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (pUVar2 = (pMVar1->fields).Light, pIVar10 = (Il2CppClass *)0x0, pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_range(pUVar2,fVar15,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_28 = 0x40eccb6;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if (((pIVar10 != (Il2CppClass *)0x0) &&
      (pMVar3 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar10->_1).this_arg.bits,
      pMVar3 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar3[1]._0_T, pIVar10 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pIStack_30 = (Il2CppClass *)0x40eccdf;
    fVar15 = UnityEngine_Light__get_spotAngle(pUVar2,(MethodInfo *)0x0);
    uStack_28 = CONCAT44(fVar15,(undefined4)uStack_28);
    pIStack_30 = (Il2CppClass *)0x40eccfa;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
    return pIVar9;
  }
  pIStack_30 = (Il2CppClass *)0x40ecd01;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  pCStack_38 = __i;
  pIStack_30 = (Il2CppClass *)method;
  if (g_data_057ac762 == '\0') {
    pIStack_48 = (Il2CppClass *)0x40ecd2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pIStack_48 = (Il2CppClass *)0x40ecd3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac762 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pIStack_48 = (Il2CppClass *)0x40ecd5a;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_48 = (Il2CppClass *)0x40ecd6c;
  obj = MethodInfo_Single_ConvertTo_Single;
  pIVar12 = pIVar11;
  fVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)pIVar11,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (((pIVar10 != (Il2CppClass *)0x0) &&
      (pMVar3 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar10->_1).this_arg.bits,
      pMVar3 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar3[1]._0_T, pIVar12 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_spotAngle(pUVar2,fVar15,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  pIStack_48 = (Il2CppClass *)0x40ecd96;
  il2cpp_runtime_helper_022b2c90();
  pIVar13 = pIVar12;
  pIStack_48 = pIVar10;
  if (pIVar12 != (Il2CppClass *)0x0) {
    if (g_data_057ac74b == '\0') {
      pIVar13 = (Il2CppClass *)&TypeInfo_CustomLogicColorBuiltin;
      pIStack_70 = (Il2CppClass *)0x40ecdc2;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac74b = '\x01';
    }
    pMVar3 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar12->_1).this_arg.bits;
    pIVar10 = pIVar12;
    if ((pMVar3 != (MethodInfo_24EED20_RGCTXs *)0x0) &&
       (pUVar2 = (UnityEngine_Light_o *)pMVar3[1]._0_T, pIVar13 = (Il2CppClass *)0x0,
       pUVar2 != (UnityEngine_Light_o *)0x0)) {
      pIStack_70 = (Il2CppClass *)0x40ecde2;
      UVar16 = UnityEngine_Light__get_color(pUVar2,(MethodInfo *)0x0);
      auStack_58._8_4_ = extraout_XMM0_Dc;
      auStack_58._0_8_ = UVar16.fields._0_8_;
      auStack_58._12_4_ = extraout_XMM0_Dd;
      auStack_68._8_4_ = in_XMM1_Dc;
      auStack_68._0_8_ = UVar16.fields._8_8_;
      auStack_68._12_4_ = in_XMM1_Dd;
      pIStack_70 = (Il2CppClass *)0x40ecdfa;
      __this = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      auVar6 = auStack_58;
      auVar5 = auStack_68;
      pIStack_70 = (Il2CppClass *)0x40ece10;
      UVar16.fields.b = (float)auStack_68._0_4_;
      UVar16.fields.a = (float)auStack_68._4_4_;
      UVar16.fields.r = (float)auStack_58._0_4_;
      UVar16.fields.g = (float)auStack_58._4_4_;
      auStack_68 = auVar5;
      auStack_58 = auVar6;
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(__this,UVar16,(MethodInfo *)0x0);
      return (Il2CppObject *)__this;
    }
  }
  pIStack_70 = (Il2CppClass *)0x40ece1e;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  pIStack_78 = pIVar10;
  pIStack_70 = pIVar11;
  if (g_data_057ac763 == '\0') {
    uStack_88 = 0x40ece3f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    uStack_88 = 0x40ece4b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac763 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_88 = 0x40ece6a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_88 = 0x40ece7c;
  obj_00 = MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
  pIVar10 = obj;
  pIVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
  if (((pIVar13 != (Il2CppClass *)0x0) &&
      (pMVar3 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar13->_1).this_arg.bits,
      pMVar3 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     ((pIVar9 != (Il2CppObject *)0x0 && (pIVar10 = pIVar9[3].klass, pIVar10 != (Il2CppClass *)0x0)))) {
    pUVar2 = (UnityEngine_Light_o *)pMVar3[1]._0_T;
    obj_00 = (MethodInfo_24EEB40 *)0x0;
    uStack_88 = 0x40ecea3;
    UVar16 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar10,(MethodInfo *)0x0);
    pIVar13 = (Il2CppClass *)0x0;
    if (pUVar2 != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_color(pUVar2,UVar16,(MethodInfo *)0x0);
      return extraout_RAX_01;
    }
  }
  uStack_88 = 0x40ecebe;
  uStack_88 = il2cpp_runtime_helper_022b2c90();
  if ((pIVar10 != (Il2CppClass *)0x0) && (lVar4 = *(long *)&(pIVar10->_1).this_arg.bits, lVar4 != 0)) {
    uStack_88 = CONCAT44(*(undefined4 *)(lVar4 + 0x18),(undefined4)uStack_88);
    pIStack_90 = (Il2CppClass *)0x40eceeb;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_88 + 4);
    return pIVar9;
  }
  pIStack_90 = (Il2CppClass *)0x40ecef2;
  uStack_a0 = il2cpp_runtime_helper_022b2c90();
  pIStack_98 = pIVar13;
  pIStack_90 = obj;
  if (g_data_057ac764 == '\0') {
    uStack_a8 = 0x40ecf1f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_a8 = 0x40ecf2b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac764 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_a8 = 0x40ecf4a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_a8 = 0x40ecf5c;
  pIVar11 = MethodInfo_Single_ConvertTo_Single;
  pMVar14 = obj_00;
  fVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)obj_00,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (pIVar10 != (Il2CppClass *)0x0) {
    pIVar9 = *(Il2CppObject **)&(pIVar10->_1).this_arg.bits;
    if (pIVar9 != (Il2CppObject *)0x0) {
      *(float *)&pIVar9[1].monitor = fVar15;
      return pIVar9;
    }
  }
  uStack_a8 = 0x40ecf7c;
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  if (((pMVar14 != (MethodInfo_24EEB40 *)0x0) && (pMVar14->rgctx_data != (MethodInfo_24EEB40_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar14->rgctx_data[1]._0_T, pMVar14 = (MethodInfo_24EEB40 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pMStack_b0 = (MethodInfo_24EEB40 *)0x40ecf9f;
    fVar15 = UnityEngine_Light__get_bounceIntensity(pUVar2,(MethodInfo *)0x0);
    uStack_a8 = CONCAT44(fVar15,(undefined4)uStack_a8);
    pMStack_b0 = (MethodInfo_24EEB40 *)0x40ecfba;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_a8 + 4);
    return pIVar9;
  }
  pMStack_b0 = (MethodInfo_24EEB40 *)0x40ecfc1;
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  pIStack_b8 = pIVar10;
  pMStack_b0 = obj_00;
  if (g_data_057ac765 == '\0') {
    uStack_c8 = 0x40ecfef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_c8 = 0x40ecffb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac765 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_c8 = 0x40ed01a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_c8 = 0x40ed02c;
  pIVar12 = MethodInfo_Single_ConvertTo_Single;
  pIVar10 = pIVar11;
  fVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)pIVar11,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (((pMVar14 != (MethodInfo_24EEB40 *)0x0) && (pMVar14->rgctx_data != (MethodInfo_24EEB40_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar14->rgctx_data[1]._0_T, pIVar10 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,fVar15,(MethodInfo *)0x0);
    return extraout_RAX_02;
  }
  uStack_c8 = 0x40ed056;
  uStack_c8 = il2cpp_runtime_helper_022b2c90();
  if (((pIVar10 != (Il2CppClass *)0x0) &&
      (pMVar3 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar10->_1).this_arg.bits,
      pMVar3 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar3[1]._0_T, pIVar10 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pIStack_d0 = (Il2CppClass *)0x40ed07f;
    iVar7 = UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    uStack_c8 = CONCAT44(iVar7,(undefined4)uStack_c8);
    pIStack_d0 = (Il2CppClass *)0x40ed098;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_c8 + 4);
    return pIVar9;
  }
  pIStack_d0 = (Il2CppClass *)0x40ed09f;
  uStack_e0 = il2cpp_runtime_helper_022b2c90();
  pMStack_d8 = pMVar14;
  pIStack_d0 = pIVar11;
  if (g_data_057ac766 == '\0') {
    uStack_e8 = 0x40ed0bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_e8 = 0x40ed0cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac766 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_e8 = 0x40ed0ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_e8 = 0x40ed0fc;
  __this_00 = MethodInfo_Int32_ConvertTo_Int32;
  pIVar11 = pIVar12;
  iVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pIVar12,MethodInfo_Int32_ConvertTo_Int32);
  if (((pIVar10 != (Il2CppClass *)0x0) &&
      (pMVar3 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar10->_1).this_arg.bits,
      pMVar3 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar3[1]._0_T, pIVar11 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,iVar7,(MethodInfo *)0x0);
    return extraout_RAX_03;
  }
  uStack_e8 = 0x40ed128;
  uStack_e8 = il2cpp_runtime_helper_022b2c90();
  if (((pIVar11 != (Il2CppClass *)0x0) &&
      (pMVar3 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar11->_1).this_arg.bits,
      pMVar3 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar3[1]._0_T, pIVar11 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pIStack_f0 = (Il2CppClass *)0x40ed14f;
    fVar15 = UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    uStack_e8 = CONCAT44(fVar15,(undefined4)uStack_e8);
    pIStack_f0 = (Il2CppClass *)0x40ed16a;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_e8 + 4);
    return pIVar9;
  }
  pIStack_f0 = (Il2CppClass *)0x40ed171;
  uStack_100 = il2cpp_runtime_helper_022b2c90();
  pIStack_f8 = pIVar10;
  pIStack_f0 = pIVar12;
  if (g_data_057ac767 == '\0') {
    uStack_108 = 0x40ed19f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_108 = 0x40ed1ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac767 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_108 = 0x40ed1ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_108 = 0x40ed1dc;
  pIVar10 = MethodInfo_Single_ConvertTo_Single;
  fVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)__this_00,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (((pIVar11 != (Il2CppClass *)0x0) &&
      (pMVar3 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar11->_1).this_arg.bits,
      pMVar3 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar3[1]._0_T, __this_00 = (MethodInfo_24EE950 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar15,(MethodInfo *)0x0);
    return extraout_RAX_04;
  }
  uStack_108 = 0x40ed206;
  uStack_108 = il2cpp_runtime_helper_022b2c90();
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    uStack_108 = CONCAT17((char)__this_00->slot,(undefined7)uStack_108);
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_108 + 7);
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac768 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac768 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pIVar10,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled
              ((CustomLogic_CustomLogicLightBuiltin_o *)__this_00,uVar8 & 0xff,method_00);
    return extraout_RAX_05;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_3fed2e0
            ((CustomLogic_CustomLogicLineRendererBuiltin_o *)pIVar10,
             (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,method_01);
  return extraout_RAX_06;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Range>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Range_g____setter_9_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40ecc30

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Range_g____setter_9_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  MethodInfo_24EED20_RGCTXs *pMVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int32_t iVar7;
  uint uVar8;
  CustomLogic_CustomLogicColorBuiltin_o *__this;
  Il2CppObject *pIVar9;
  MethodInfo *method_00;
  Il2CppClass *pIVar10;
  Il2CppClass *pIVar11;
  Il2CppClass *obj;
  MethodInfo_24EEB40 *obj_00;
  Il2CppClass *pIVar12;
  MethodInfo_24EE950 *__this_00;
  MethodInfo *method_01;
  Il2CppClass *pIVar13;
  MethodInfo_24EEB40 *pMVar14;
  float fVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar16;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  Il2CppClass *pIStack_f0;
  Il2CppClass *pIStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  MethodInfo_24EEB40 *pMStack_d0;
  Il2CppClass *pIStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  Il2CppClass *pIStack_b0;
  MethodInfo_24EEB40 *pMStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  Il2CppClass *pIStack_90;
  Il2CppClass *pIStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  Il2CppClass *pIStack_70;
  Il2CppClass *pIStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  Il2CppClass *pIStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicLightBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ac761 == '\0') {
    uStack_20 = 0x40ecc4f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_20 = 0x40ecc5b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac761 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40ecc7a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40ecc8c;
  pIVar11 = MethodInfo_Single_ConvertTo_Single;
  pIVar10 = (Il2CppClass *)__v;
  fVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (pUVar2 = (pMVar1->fields).Light, pIVar10 = (Il2CppClass *)0x0, pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_range(pUVar2,fVar15,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = 0x40eccb6;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (((pIVar10 != (Il2CppClass *)0x0) &&
      (pMVar3 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar10->_1).this_arg.bits,
      pMVar3 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar3[1]._0_T, pIVar10 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pIStack_28 = (Il2CppObject *)0x40eccdf;
    fVar15 = UnityEngine_Light__get_spotAngle(pUVar2,(MethodInfo *)0x0);
    uStack_20 = CONCAT44(fVar15,(undefined4)uStack_20);
    pIStack_28 = (Il2CppObject *)0x40eccfa;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
    return;
  }
  pIStack_28 = (Il2CppObject *)0x40ecd01;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057ac762 == '\0') {
    pIStack_40 = (Il2CppClass *)0x40ecd2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pIStack_40 = (Il2CppClass *)0x40ecd3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac762 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pIStack_40 = (Il2CppClass *)0x40ecd5a;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_40 = (Il2CppClass *)0x40ecd6c;
  obj = MethodInfo_Single_ConvertTo_Single;
  pIVar12 = pIVar11;
  fVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)pIVar11,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (((pIVar10 != (Il2CppClass *)0x0) &&
      (pMVar3 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar10->_1).this_arg.bits,
      pMVar3 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar3[1]._0_T, pIVar12 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_spotAngle(pUVar2,fVar15,(MethodInfo *)0x0);
    return;
  }
  pIStack_40 = (Il2CppClass *)0x40ecd96;
  il2cpp_runtime_helper_022b2c90();
  pIVar13 = pIVar12;
  pIStack_40 = pIVar10;
  if (pIVar12 != (Il2CppClass *)0x0) {
    if (g_data_057ac74b == '\0') {
      pIVar13 = (Il2CppClass *)&TypeInfo_CustomLogicColorBuiltin;
      pIStack_68 = (Il2CppClass *)0x40ecdc2;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac74b = '\x01';
    }
    pMVar3 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar12->_1).this_arg.bits;
    pIVar10 = pIVar12;
    if ((pMVar3 != (MethodInfo_24EED20_RGCTXs *)0x0) &&
       (pUVar2 = (UnityEngine_Light_o *)pMVar3[1]._0_T, pIVar13 = (Il2CppClass *)0x0,
       pUVar2 != (UnityEngine_Light_o *)0x0)) {
      pIStack_68 = (Il2CppClass *)0x40ecde2;
      UVar16 = UnityEngine_Light__get_color(pUVar2,(MethodInfo *)0x0);
      auStack_50._8_4_ = extraout_XMM0_Dc;
      auStack_50._0_8_ = UVar16.fields._0_8_;
      auStack_50._12_4_ = extraout_XMM0_Dd;
      auStack_60._8_4_ = in_XMM1_Dc;
      auStack_60._0_8_ = UVar16.fields._8_8_;
      auStack_60._12_4_ = in_XMM1_Dd;
      pIStack_68 = (Il2CppClass *)0x40ecdfa;
      __this = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      auVar6 = auStack_50;
      auVar5 = auStack_60;
      pIStack_68 = (Il2CppClass *)0x40ece10;
      UVar16.fields.b = (float)auStack_60._0_4_;
      UVar16.fields.a = (float)auStack_60._4_4_;
      UVar16.fields.r = (float)auStack_50._0_4_;
      UVar16.fields.g = (float)auStack_50._4_4_;
      auStack_60 = auVar5;
      auStack_50 = auVar6;
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(__this,UVar16,(MethodInfo *)0x0);
      return;
    }
  }
  pIStack_68 = (Il2CppClass *)0x40ece1e;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  pIStack_70 = pIVar10;
  pIStack_68 = pIVar11;
  if (g_data_057ac763 == '\0') {
    uStack_80 = 0x40ece3f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    uStack_80 = 0x40ece4b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac763 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_80 = 0x40ece6a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_80 = 0x40ece7c;
  obj_00 = MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
  pIVar10 = obj;
  pIVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
  if ((((pIVar13 != (Il2CppClass *)0x0) &&
       (pMVar3 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar13->_1).this_arg.bits,
       pMVar3 != (MethodInfo_24EED20_RGCTXs *)0x0)) && (pIVar9 != (Il2CppObject *)0x0)) &&
     (pIVar10 = pIVar9[3].klass, pIVar10 != (Il2CppClass *)0x0)) {
    pUVar2 = (UnityEngine_Light_o *)pMVar3[1]._0_T;
    obj_00 = (MethodInfo_24EEB40 *)0x0;
    uStack_80 = 0x40ecea3;
    UVar16 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar10,(MethodInfo *)0x0);
    pIVar13 = (Il2CppClass *)0x0;
    if (pUVar2 != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_color(pUVar2,UVar16,(MethodInfo *)0x0);
      return;
    }
  }
  uStack_80 = 0x40ecebe;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  if ((pIVar10 != (Il2CppClass *)0x0) && (lVar4 = *(long *)&(pIVar10->_1).this_arg.bits, lVar4 != 0)) {
    uStack_80 = CONCAT44(*(undefined4 *)(lVar4 + 0x18),(undefined4)uStack_80);
    pIStack_88 = (Il2CppClass *)0x40eceeb;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_80 + 4);
    return;
  }
  pIStack_88 = (Il2CppClass *)0x40ecef2;
  uStack_98 = il2cpp_runtime_helper_022b2c90();
  pIStack_90 = pIVar13;
  pIStack_88 = obj;
  if (g_data_057ac764 == '\0') {
    uStack_a0 = 0x40ecf1f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_a0 = 0x40ecf2b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac764 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_a0 = 0x40ecf4a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_a0 = 0x40ecf5c;
  pIVar11 = MethodInfo_Single_ConvertTo_Single;
  pMVar14 = obj_00;
  fVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)obj_00,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((pIVar10 != (Il2CppClass *)0x0) && (lVar4 = *(long *)&(pIVar10->_1).this_arg.bits, lVar4 != 0)) {
    *(float *)(lVar4 + 0x18) = fVar15;
    return;
  }
  uStack_a0 = 0x40ecf7c;
  uStack_a0 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar14 != (MethodInfo_24EEB40 *)0x0) &&
     ((pMVar14->rgctx_data != (MethodInfo_24EEB40_RGCTXs *)0x0 &&
      (pUVar2 = (UnityEngine_Light_o *)pMVar14->rgctx_data[1]._0_T, pMVar14 = (MethodInfo_24EEB40 *)0x0,
      pUVar2 != (UnityEngine_Light_o *)0x0)))) {
    pMStack_a8 = (MethodInfo_24EEB40 *)0x40ecf9f;
    fVar15 = UnityEngine_Light__get_bounceIntensity(pUVar2,(MethodInfo *)0x0);
    uStack_a0 = CONCAT44(fVar15,(undefined4)uStack_a0);
    pMStack_a8 = (MethodInfo_24EEB40 *)0x40ecfba;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_a0 + 4);
    return;
  }
  pMStack_a8 = (MethodInfo_24EEB40 *)0x40ecfc1;
  uStack_b8 = il2cpp_runtime_helper_022b2c90();
  pIStack_b0 = pIVar10;
  pMStack_a8 = obj_00;
  if (g_data_057ac765 == '\0') {
    uStack_c0 = 0x40ecfef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_c0 = 0x40ecffb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac765 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_c0 = 0x40ed01a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_c0 = 0x40ed02c;
  pIVar12 = MethodInfo_Single_ConvertTo_Single;
  pIVar10 = pIVar11;
  fVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)pIVar11,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (((pMVar14 != (MethodInfo_24EEB40 *)0x0) && (pMVar14->rgctx_data != (MethodInfo_24EEB40_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar14->rgctx_data[1]._0_T, pIVar10 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,fVar15,(MethodInfo *)0x0);
    return;
  }
  uStack_c0 = 0x40ed056;
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  if (((pIVar10 != (Il2CppClass *)0x0) &&
      (pMVar3 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar10->_1).this_arg.bits,
      pMVar3 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar3[1]._0_T, pIVar10 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pIStack_c8 = (Il2CppClass *)0x40ed07f;
    iVar7 = UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    uStack_c0 = CONCAT44(iVar7,(undefined4)uStack_c0);
    pIStack_c8 = (Il2CppClass *)0x40ed098;
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_c0 + 4);
    return;
  }
  pIStack_c8 = (Il2CppClass *)0x40ed09f;
  uStack_d8 = il2cpp_runtime_helper_022b2c90();
  pMStack_d0 = pMVar14;
  pIStack_c8 = pIVar11;
  if (g_data_057ac766 == '\0') {
    uStack_e0 = 0x40ed0bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_e0 = 0x40ed0cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac766 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_e0 = 0x40ed0ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_e0 = 0x40ed0fc;
  __this_00 = MethodInfo_Int32_ConvertTo_Int32;
  pIVar11 = pIVar12;
  iVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pIVar12,MethodInfo_Int32_ConvertTo_Int32);
  if (((pIVar10 != (Il2CppClass *)0x0) &&
      (pMVar3 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar10->_1).this_arg.bits,
      pMVar3 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar3[1]._0_T, pIVar11 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,iVar7,(MethodInfo *)0x0);
    return;
  }
  uStack_e0 = 0x40ed128;
  uStack_e0 = il2cpp_runtime_helper_022b2c90();
  if (((pIVar11 != (Il2CppClass *)0x0) &&
      (pMVar3 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar11->_1).this_arg.bits,
      pMVar3 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar3[1]._0_T, pIVar11 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pIStack_e8 = (Il2CppClass *)0x40ed14f;
    fVar15 = UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    uStack_e0 = CONCAT44(fVar15,(undefined4)uStack_e0);
    pIStack_e8 = (Il2CppClass *)0x40ed16a;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_e0 + 4);
    return;
  }
  pIStack_e8 = (Il2CppClass *)0x40ed171;
  uStack_f8 = il2cpp_runtime_helper_022b2c90();
  pIStack_f0 = pIVar10;
  pIStack_e8 = pIVar12;
  if (g_data_057ac767 == '\0') {
    uStack_100 = 0x40ed19f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_100 = 0x40ed1ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac767 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_100 = 0x40ed1ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_100 = 0x40ed1dc;
  pIVar10 = MethodInfo_Single_ConvertTo_Single;
  fVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)__this_00,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (((pIVar11 != (Il2CppClass *)0x0) &&
      (pMVar3 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar11->_1).this_arg.bits,
      pMVar3 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar3[1]._0_T, __this_00 = (MethodInfo_24EE950 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar15,(MethodInfo *)0x0);
    return;
  }
  uStack_100 = 0x40ed206;
  uStack_100 = il2cpp_runtime_helper_022b2c90();
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    uStack_100 = CONCAT17((char)__this_00->slot,(undefined7)uStack_100);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_100 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac768 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac768 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pIVar10,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled
              ((CustomLogic_CustomLogicLightBuiltin_o *)__this_00,uVar8 & 0xff,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_3fed2e0
            ((CustomLogic_CustomLogicLineRendererBuiltin_o *)pIVar10,
             (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,method_01);
  return;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__SpotAngle>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__SpotAngle_g____getter_10_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x40eccc0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__SpotAngle_g____getter_10_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  long lVar3;
  MethodInfo_24EED20_RGCTXs *pMVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int32_t iVar7;
  uint uVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *extraout_RAX;
  CustomLogic_CustomLogicColorBuiltin_o *__this;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  Il2CppObject *extraout_RAX_03;
  Il2CppObject *extraout_RAX_04;
  Il2CppObject *extraout_RAX_05;
  MethodInfo *method_00;
  Il2CppClass *pIVar10;
  MethodInfo_24EEB40 *obj;
  Il2CppClass *obj_00;
  MethodInfo_24EE950 *__this_00;
  Il2CppClass *pIVar11;
  MethodInfo *pMVar12;
  MethodInfo *pMVar13;
  MethodInfo_24EEB40 *pMVar14;
  float fVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar16;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  Il2CppClass *pIStack_d8;
  Il2CppClass *pIStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  MethodInfo_24EEB40 *pMStack_b8;
  Il2CppClass *pIStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  Il2CppClass *pIStack_98;
  MethodInfo_24EEB40 *pMStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  MethodInfo *pMStack_78;
  Il2CppClass *pIStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  MethodInfo *pMStack_58;
  MethodInfo *pMStack_50;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  MethodInfo *pMStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (pUVar2 = (pMVar1->fields).Light, __i = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_spotAngle(pUVar2,(MethodInfo *)0x0);
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar9;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac762 == '\0') {
    pMStack_28 = (MethodInfo *)0x40ecd2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pMStack_28 = (MethodInfo *)0x40ecd3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac762 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_28 = (MethodInfo *)0x40ecd5a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_28 = (MethodInfo *)0x40ecd6c;
  pIVar10 = MethodInfo_Single_ConvertTo_Single;
  pMVar12 = method;
  fVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)method,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((((MethodInfo *)__i != (MethodInfo *)0x0) &&
      ((((MethodInfo *)__i)->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) &&
     (pMVar13 = (((MethodInfo *)__i)->field7_0x38).rgctx_data[2].method, pMVar12 = (MethodInfo *)0x0,
     pMVar13 != (MethodInfo *)0x0)) {
    UnityEngine_Light__set_spotAngle((UnityEngine_Light_o *)pMVar13,fVar15,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  pMStack_28 = (MethodInfo *)0x40ecd96;
  il2cpp_runtime_helper_022b2c90();
  pMVar13 = pMVar12;
  pMStack_28 = (MethodInfo *)__i;
  if (pMVar12 != (MethodInfo *)0x0) {
    if (g_data_057ac74b == '\0') {
      pMVar13 = (MethodInfo *)&TypeInfo_CustomLogicColorBuiltin;
      pMStack_50 = (MethodInfo *)0x40ecdc2;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac74b = '\x01';
    }
    __i = (CustomLogic_CustomLogicLightBuiltin_o *)pMVar12;
    if (((pMVar12->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0) &&
       (pMVar12 = (pMVar12->field7_0x38).rgctx_data[2].method, pMVar13 = (MethodInfo *)0x0,
       pMVar12 != (MethodInfo *)0x0)) {
      pMStack_50 = (MethodInfo *)0x40ecde2;
      UVar16 = UnityEngine_Light__get_color((UnityEngine_Light_o *)pMVar12,(MethodInfo *)0x0);
      auStack_38._8_4_ = extraout_XMM0_Dc;
      auStack_38._0_8_ = UVar16.fields._0_8_;
      auStack_38._12_4_ = extraout_XMM0_Dd;
      auStack_48._8_4_ = in_XMM1_Dc;
      auStack_48._0_8_ = UVar16.fields._8_8_;
      auStack_48._12_4_ = in_XMM1_Dd;
      pMStack_50 = (MethodInfo *)0x40ecdfa;
      __this = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      auVar6 = auStack_38;
      auVar5 = auStack_48;
      pMStack_50 = (MethodInfo *)0x40ece10;
      UVar16.fields.b = (float)auStack_48._0_4_;
      UVar16.fields.a = (float)auStack_48._4_4_;
      UVar16.fields.r = (float)auStack_38._0_4_;
      UVar16.fields.g = (float)auStack_38._4_4_;
      auStack_48 = auVar5;
      auStack_38 = auVar6;
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(__this,UVar16,(MethodInfo *)0x0);
      return (Il2CppObject *)__this;
    }
  }
  pMStack_50 = (MethodInfo *)0x40ece1e;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pMStack_58 = (MethodInfo *)__i;
  pMStack_50 = method;
  if (g_data_057ac763 == '\0') {
    uStack_68 = 0x40ece3f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    uStack_68 = 0x40ece4b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac763 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_68 = 0x40ece6a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_68 = 0x40ece7c;
  obj = MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
  pIVar11 = pIVar10;
  pIVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pIVar10,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
  if ((((pMVar13 != (MethodInfo *)0x0) && ((pMVar13->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) &&
      (pIVar9 != (Il2CppObject *)0x0)) && (pIVar11 = pIVar9[3].klass, pIVar11 != (Il2CppClass *)0x0)) {
    pMVar12 = (pMVar13->field7_0x38).rgctx_data[2].method;
    obj = (MethodInfo_24EEB40 *)0x0;
    uStack_68 = 0x40ecea3;
    UVar16 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar11,(MethodInfo *)0x0);
    pMVar13 = (MethodInfo *)0x0;
    if (pMVar12 != (MethodInfo *)0x0) {
      UnityEngine_Light__set_color((UnityEngine_Light_o *)pMVar12,UVar16,(MethodInfo *)0x0);
      return extraout_RAX_00;
    }
  }
  uStack_68 = 0x40ecebe;
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  if ((pIVar11 != (Il2CppClass *)0x0) && (lVar3 = *(long *)&(pIVar11->_1).this_arg.bits, lVar3 != 0)) {
    uStack_68 = CONCAT44(*(undefined4 *)(lVar3 + 0x18),(undefined4)uStack_68);
    pIStack_70 = (Il2CppClass *)0x40eceeb;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_68 + 4);
    return pIVar9;
  }
  pIStack_70 = (Il2CppClass *)0x40ecef2;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  pMStack_78 = pMVar13;
  pIStack_70 = pIVar10;
  if (g_data_057ac764 == '\0') {
    uStack_88 = 0x40ecf1f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_88 = 0x40ecf2b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac764 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_88 = 0x40ecf4a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_88 = 0x40ecf5c;
  pIVar10 = MethodInfo_Single_ConvertTo_Single;
  pMVar14 = obj;
  fVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)obj,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (pIVar11 != (Il2CppClass *)0x0) {
    pIVar9 = *(Il2CppObject **)&(pIVar11->_1).this_arg.bits;
    if (pIVar9 != (Il2CppObject *)0x0) {
      *(float *)&pIVar9[1].monitor = fVar15;
      return pIVar9;
    }
  }
  uStack_88 = 0x40ecf7c;
  uStack_88 = il2cpp_runtime_helper_022b2c90();
  if (((pMVar14 != (MethodInfo_24EEB40 *)0x0) && (pMVar14->rgctx_data != (MethodInfo_24EEB40_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar14->rgctx_data[1]._0_T, pMVar14 = (MethodInfo_24EEB40 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pMStack_90 = (MethodInfo_24EEB40 *)0x40ecf9f;
    fVar15 = UnityEngine_Light__get_bounceIntensity(pUVar2,(MethodInfo *)0x0);
    uStack_88 = CONCAT44(fVar15,(undefined4)uStack_88);
    pMStack_90 = (MethodInfo_24EEB40 *)0x40ecfba;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_88 + 4);
    return pIVar9;
  }
  pMStack_90 = (MethodInfo_24EEB40 *)0x40ecfc1;
  uStack_a0 = il2cpp_runtime_helper_022b2c90();
  pIStack_98 = pIVar11;
  pMStack_90 = obj;
  if (g_data_057ac765 == '\0') {
    uStack_a8 = 0x40ecfef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_a8 = 0x40ecffb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac765 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_a8 = 0x40ed01a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_a8 = 0x40ed02c;
  obj_00 = MethodInfo_Single_ConvertTo_Single;
  pIVar11 = pIVar10;
  fVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)pIVar10,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (((pMVar14 != (MethodInfo_24EEB40 *)0x0) && (pMVar14->rgctx_data != (MethodInfo_24EEB40_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar14->rgctx_data[1]._0_T, pIVar11 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,fVar15,(MethodInfo *)0x0);
    return extraout_RAX_01;
  }
  uStack_a8 = 0x40ed056;
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  if (((pIVar11 != (Il2CppClass *)0x0) &&
      (pMVar4 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar11->_1).this_arg.bits,
      pMVar4 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar4[1]._0_T, pIVar11 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pIStack_b0 = (Il2CppClass *)0x40ed07f;
    iVar7 = UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    uStack_a8 = CONCAT44(iVar7,(undefined4)uStack_a8);
    pIStack_b0 = (Il2CppClass *)0x40ed098;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_a8 + 4);
    return pIVar9;
  }
  pIStack_b0 = (Il2CppClass *)0x40ed09f;
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  pMStack_b8 = pMVar14;
  pIStack_b0 = pIVar10;
  if (g_data_057ac766 == '\0') {
    uStack_c8 = 0x40ed0bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_c8 = 0x40ed0cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac766 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_c8 = 0x40ed0ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_c8 = 0x40ed0fc;
  __this_00 = MethodInfo_Int32_ConvertTo_Int32;
  pIVar10 = obj_00;
  iVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
  if (((pIVar11 != (Il2CppClass *)0x0) &&
      (pMVar4 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar11->_1).this_arg.bits,
      pMVar4 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar4[1]._0_T, pIVar10 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,iVar7,(MethodInfo *)0x0);
    return extraout_RAX_02;
  }
  uStack_c8 = 0x40ed128;
  uStack_c8 = il2cpp_runtime_helper_022b2c90();
  if (((pIVar10 != (Il2CppClass *)0x0) &&
      (pMVar4 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar10->_1).this_arg.bits,
      pMVar4 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar4[1]._0_T, pIVar10 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pIStack_d0 = (Il2CppClass *)0x40ed14f;
    fVar15 = UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    uStack_c8 = CONCAT44(fVar15,(undefined4)uStack_c8);
    pIStack_d0 = (Il2CppClass *)0x40ed16a;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_c8 + 4);
    return pIVar9;
  }
  pIStack_d0 = (Il2CppClass *)0x40ed171;
  uStack_e0 = il2cpp_runtime_helper_022b2c90();
  pIStack_d8 = pIVar11;
  pIStack_d0 = obj_00;
  if (g_data_057ac767 == '\0') {
    uStack_e8 = 0x40ed19f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_e8 = 0x40ed1ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac767 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_e8 = 0x40ed1ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_e8 = 0x40ed1dc;
  pIVar11 = MethodInfo_Single_ConvertTo_Single;
  fVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)__this_00,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (((pIVar10 != (Il2CppClass *)0x0) &&
      (pMVar4 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar10->_1).this_arg.bits,
      pMVar4 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar4[1]._0_T, __this_00 = (MethodInfo_24EE950 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar15,(MethodInfo *)0x0);
    return extraout_RAX_03;
  }
  uStack_e8 = 0x40ed206;
  uStack_e8 = il2cpp_runtime_helper_022b2c90();
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    uStack_e8 = CONCAT17((char)__this_00->slot,(undefined7)uStack_e8);
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_e8 + 7);
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac768 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac768 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar12 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pIVar11,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled
              ((CustomLogic_CustomLogicLightBuiltin_o *)__this_00,uVar8 & 0xff,method_00);
    return extraout_RAX_04;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_3fed2e0
            ((CustomLogic_CustomLogicLineRendererBuiltin_o *)pIVar11,
             (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,pMVar12);
  return extraout_RAX_05;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__SpotAngle>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__SpotAngle_g____setter_10_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40ecd10

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__SpotAngle_g____setter_10_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  long lVar3;
  MethodInfo_24EED20_RGCTXs *pMVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int32_t iVar7;
  uint uVar8;
  CustomLogic_CustomLogicColorBuiltin_o *__this;
  Il2CppObject *pIVar9;
  MethodInfo *method_00;
  Il2CppClass *pIVar10;
  MethodInfo_24EEB40 *obj;
  Il2CppClass *obj_00;
  MethodInfo_24EE950 *__this_00;
  Il2CppClass *pIVar11;
  MethodInfo *method_01;
  CustomLogic_CustomLogicLightBuiltin_o *pCVar12;
  CustomLogic_CustomLogicLightBuiltin_o *pCVar13;
  MethodInfo_24EEB40 *pMVar14;
  float fVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar16;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  Il2CppClass *pIStack_d0;
  Il2CppClass *pIStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  MethodInfo_24EEB40 *pMStack_b0;
  Il2CppClass *pIStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  Il2CppClass *pIStack_90;
  MethodInfo_24EEB40 *pMStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  CustomLogic_CustomLogicLightBuiltin_o *pCStack_70;
  Il2CppClass *pIStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  CustomLogic_CustomLogicLightBuiltin_o *pCStack_50;
  Il2CppObject *pIStack_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  CustomLogic_CustomLogicLightBuiltin_o *pCStack_20;
  
  if (g_data_057ac762 == '\0') {
    pCStack_20 = (CustomLogic_CustomLogicLightBuiltin_o *)0x40ecd2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pCStack_20 = (CustomLogic_CustomLogicLightBuiltin_o *)0x40ecd3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac762 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pCStack_20 = (CustomLogic_CustomLogicLightBuiltin_o *)0x40ecd5a;
    il2cpp_runtime_helper_02337ed0();
  }
  pCStack_20 = (CustomLogic_CustomLogicLightBuiltin_o *)0x40ecd6c;
  pIVar10 = MethodInfo_Single_ConvertTo_Single;
  pCVar12 = (CustomLogic_CustomLogicLightBuiltin_o *)__v;
  fVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (pUVar2 = (pMVar1->fields).Light, pCVar12 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_spotAngle(pUVar2,fVar15,(MethodInfo *)0x0);
    return;
  }
  pCStack_20 = (CustomLogic_CustomLogicLightBuiltin_o *)0x40ecd96;
  il2cpp_runtime_helper_022b2c90();
  pCVar13 = pCVar12;
  pCStack_20 = __i;
  if (pCVar12 != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) {
    if (g_data_057ac74b == '\0') {
      pCVar13 = (CustomLogic_CustomLogicLightBuiltin_o *)&TypeInfo_CustomLogicColorBuiltin;
      pIStack_48 = (Il2CppObject *)0x40ecdc2;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac74b = '\x01';
    }
    pMVar1 = (pCVar12->fields).Value;
    __i = pCVar12;
    if ((pMVar1 != (Map_MapLight_o *)0x0) &&
       (pUVar2 = (pMVar1->fields).Light, pCVar13 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
       pUVar2 != (UnityEngine_Light_o *)0x0)) {
      pIStack_48 = (Il2CppObject *)0x40ecde2;
      UVar16 = UnityEngine_Light__get_color(pUVar2,(MethodInfo *)0x0);
      auStack_30._8_4_ = extraout_XMM0_Dc;
      auStack_30._0_8_ = UVar16.fields._0_8_;
      auStack_30._12_4_ = extraout_XMM0_Dd;
      auStack_40._8_4_ = in_XMM1_Dc;
      auStack_40._0_8_ = UVar16.fields._8_8_;
      auStack_40._12_4_ = in_XMM1_Dd;
      pIStack_48 = (Il2CppObject *)0x40ecdfa;
      __this = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      auVar6 = auStack_30;
      auVar5 = auStack_40;
      pIStack_48 = (Il2CppObject *)0x40ece10;
      UVar16.fields.b = (float)auStack_40._0_4_;
      UVar16.fields.a = (float)auStack_40._4_4_;
      UVar16.fields.r = (float)auStack_30._0_4_;
      UVar16.fields.g = (float)auStack_30._4_4_;
      auStack_40 = auVar5;
      auStack_30 = auVar6;
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(__this,UVar16,(MethodInfo *)0x0);
      return;
    }
  }
  pIStack_48 = (Il2CppObject *)0x40ece1e;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  pCStack_50 = __i;
  pIStack_48 = __v;
  if (g_data_057ac763 == '\0') {
    uStack_60 = 0x40ece3f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    uStack_60 = 0x40ece4b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac763 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_60 = 0x40ece6a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_60 = 0x40ece7c;
  obj = MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
  pIVar11 = pIVar10;
  pIVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pIVar10,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
  if (((pCVar13 != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (pCVar13->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     ((pIVar9 != (Il2CppObject *)0x0 && (pIVar11 = pIVar9[3].klass, pIVar11 != (Il2CppClass *)0x0)))) {
    pUVar2 = (pMVar1->fields).Light;
    obj = (MethodInfo_24EEB40 *)0x0;
    uStack_60 = 0x40ecea3;
    UVar16 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar11,(MethodInfo *)0x0);
    pCVar13 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0;
    if (pUVar2 != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_color(pUVar2,UVar16,(MethodInfo *)0x0);
      return;
    }
  }
  uStack_60 = 0x40ecebe;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if ((pIVar11 != (Il2CppClass *)0x0) && (lVar3 = *(long *)&(pIVar11->_1).this_arg.bits, lVar3 != 0)) {
    uStack_60 = CONCAT44(*(undefined4 *)(lVar3 + 0x18),(undefined4)uStack_60);
    pIStack_68 = (Il2CppClass *)0x40eceeb;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_60 + 4);
    return;
  }
  pIStack_68 = (Il2CppClass *)0x40ecef2;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  pCStack_70 = pCVar13;
  pIStack_68 = pIVar10;
  if (g_data_057ac764 == '\0') {
    uStack_80 = 0x40ecf1f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_80 = 0x40ecf2b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac764 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_80 = 0x40ecf4a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_80 = 0x40ecf5c;
  pIVar10 = MethodInfo_Single_ConvertTo_Single;
  pMVar14 = obj;
  fVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)obj,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((pIVar11 != (Il2CppClass *)0x0) && (lVar3 = *(long *)&(pIVar11->_1).this_arg.bits, lVar3 != 0)) {
    *(float *)(lVar3 + 0x18) = fVar15;
    return;
  }
  uStack_80 = 0x40ecf7c;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar14 != (MethodInfo_24EEB40 *)0x0) &&
     ((pMVar14->rgctx_data != (MethodInfo_24EEB40_RGCTXs *)0x0 &&
      (pUVar2 = (UnityEngine_Light_o *)pMVar14->rgctx_data[1]._0_T, pMVar14 = (MethodInfo_24EEB40 *)0x0,
      pUVar2 != (UnityEngine_Light_o *)0x0)))) {
    pMStack_88 = (MethodInfo_24EEB40 *)0x40ecf9f;
    fVar15 = UnityEngine_Light__get_bounceIntensity(pUVar2,(MethodInfo *)0x0);
    uStack_80 = CONCAT44(fVar15,(undefined4)uStack_80);
    pMStack_88 = (MethodInfo_24EEB40 *)0x40ecfba;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_80 + 4);
    return;
  }
  pMStack_88 = (MethodInfo_24EEB40 *)0x40ecfc1;
  uStack_98 = il2cpp_runtime_helper_022b2c90();
  pIStack_90 = pIVar11;
  pMStack_88 = obj;
  if (g_data_057ac765 == '\0') {
    uStack_a0 = 0x40ecfef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_a0 = 0x40ecffb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac765 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_a0 = 0x40ed01a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_a0 = 0x40ed02c;
  obj_00 = MethodInfo_Single_ConvertTo_Single;
  pIVar11 = pIVar10;
  fVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)pIVar10,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (((pMVar14 != (MethodInfo_24EEB40 *)0x0) && (pMVar14->rgctx_data != (MethodInfo_24EEB40_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar14->rgctx_data[1]._0_T, pIVar11 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,fVar15,(MethodInfo *)0x0);
    return;
  }
  uStack_a0 = 0x40ed056;
  uStack_a0 = il2cpp_runtime_helper_022b2c90();
  if (((pIVar11 != (Il2CppClass *)0x0) &&
      (pMVar4 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar11->_1).this_arg.bits,
      pMVar4 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar4[1]._0_T, pIVar11 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pIStack_a8 = (Il2CppClass *)0x40ed07f;
    iVar7 = UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    uStack_a0 = CONCAT44(iVar7,(undefined4)uStack_a0);
    pIStack_a8 = (Il2CppClass *)0x40ed098;
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_a0 + 4);
    return;
  }
  pIStack_a8 = (Il2CppClass *)0x40ed09f;
  uStack_b8 = il2cpp_runtime_helper_022b2c90();
  pMStack_b0 = pMVar14;
  pIStack_a8 = pIVar10;
  if (g_data_057ac766 == '\0') {
    uStack_c0 = 0x40ed0bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_c0 = 0x40ed0cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac766 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_c0 = 0x40ed0ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_c0 = 0x40ed0fc;
  __this_00 = MethodInfo_Int32_ConvertTo_Int32;
  pIVar10 = obj_00;
  iVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
  if (((pIVar11 != (Il2CppClass *)0x0) &&
      (pMVar4 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar11->_1).this_arg.bits,
      pMVar4 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar4[1]._0_T, pIVar10 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,iVar7,(MethodInfo *)0x0);
    return;
  }
  uStack_c0 = 0x40ed128;
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  if (((pIVar10 != (Il2CppClass *)0x0) &&
      (pMVar4 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar10->_1).this_arg.bits,
      pMVar4 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar4[1]._0_T, pIVar10 = (Il2CppClass *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pIStack_c8 = (Il2CppClass *)0x40ed14f;
    fVar15 = UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    uStack_c0 = CONCAT44(fVar15,(undefined4)uStack_c0);
    pIStack_c8 = (Il2CppClass *)0x40ed16a;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_c0 + 4);
    return;
  }
  pIStack_c8 = (Il2CppClass *)0x40ed171;
  uStack_d8 = il2cpp_runtime_helper_022b2c90();
  pIStack_d0 = pIVar11;
  pIStack_c8 = obj_00;
  if (g_data_057ac767 == '\0') {
    uStack_e0 = 0x40ed19f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_e0 = 0x40ed1ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac767 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_e0 = 0x40ed1ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_e0 = 0x40ed1dc;
  pIVar11 = MethodInfo_Single_ConvertTo_Single;
  fVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)__this_00,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (((pIVar10 != (Il2CppClass *)0x0) &&
      (pMVar4 = *(MethodInfo_24EED20_RGCTXs **)&(pIVar10->_1).this_arg.bits,
      pMVar4 != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar4[1]._0_T, __this_00 = (MethodInfo_24EE950 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar15,(MethodInfo *)0x0);
    return;
  }
  uStack_e0 = 0x40ed206;
  uStack_e0 = il2cpp_runtime_helper_022b2c90();
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    uStack_e0 = CONCAT17((char)__this_00->slot,(undefined7)uStack_e0);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_e0 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac768 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac768 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pIVar11,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled
              ((CustomLogic_CustomLogicLightBuiltin_o *)__this_00,uVar8 & 0xff,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_3fed2e0
            ((CustomLogic_CustomLogicLineRendererBuiltin_o *)pIVar11,
             (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,method_01);
  return;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Color>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Color_g____getter_11_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x40ecda0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Color_g____getter_11_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  long lVar3;
  int32_t iVar4;
  uint uVar5;
  CustomLogic_CustomLogicColorBuiltin_o *__this;
  Il2CppObject *pIVar6;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  Il2CppObject *extraout_RAX_03;
  Il2CppObject *extraout_RAX_04;
  MethodInfo *method_00;
  CustomLogic_CustomLogicLightBuiltin_o *unaff_RBX;
  MethodInfo_24EEB40 *obj;
  MethodInfo_24EED20 *pMVar7;
  MethodInfo_24EED20 *obj_00;
  MethodInfo_24EE950 *__this_00;
  MethodInfo_24EED20 *pMVar8;
  MethodInfo *method_01;
  CustomLogic_CustomLogicLightBuiltin_o *pCVar9;
  Il2CppClass *__this_01;
  MethodInfo_24EEB40 *pMVar10;
  float fVar11;
  UnityEngine_Color_o UVar12;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  MethodInfo_24EED20 *pMStack_b8;
  MethodInfo_24EED20 *pMStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  MethodInfo_24EEB40 *pMStack_98;
  MethodInfo_24EED20 *pMStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  Il2CppClass *pIStack_78;
  MethodInfo_24EEB40 *pMStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  CustomLogic_CustomLogicLightBuiltin_o *pCStack_58;
  Il2CppClass *pIStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  CustomLogic_CustomLogicLightBuiltin_o *pCStack_38;
  
  pCVar9 = __i;
  if (__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) {
    if (g_data_057ac74b == '\0') {
      pCVar9 = (CustomLogic_CustomLogicLightBuiltin_o *)&TypeInfo_CustomLogicColorBuiltin;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac74b = '\x01';
    }
    pMVar1 = (__i->fields).Value;
    unaff_RBX = __i;
    if ((pMVar1 != (Map_MapLight_o *)0x0) &&
       (pUVar2 = (pMVar1->fields).Light, pCVar9 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
       pUVar2 != (UnityEngine_Light_o *)0x0)) {
      UVar12 = UnityEngine_Light__get_color(pUVar2,(MethodInfo *)0x0);
      __this = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(__this,UVar12,(MethodInfo *)0x0);
      return (Il2CppObject *)__this;
    }
  }
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  pCStack_38 = unaff_RBX;
  if (g_data_057ac763 == '\0') {
    uStack_48 = 0x40ece3f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    uStack_48 = 0x40ece4b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac763 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = 0x40ece6a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = 0x40ece7c;
  obj = MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
  __this_01 = (Il2CppClass *)method;
  pIVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
  if ((((pCVar9 != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
       (pMVar1 = (pCVar9->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) && (pIVar6 != (Il2CppObject *)0x0))
     && (__this_01 = pIVar6[3].klass, __this_01 != (Il2CppClass *)0x0)) {
    pUVar2 = (pMVar1->fields).Light;
    obj = (MethodInfo_24EEB40 *)0x0;
    uStack_48 = 0x40ecea3;
    UVar12 = Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0);
    pCVar9 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0;
    if (pUVar2 != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_color(pUVar2,UVar12,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  uStack_48 = 0x40ecebe;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if ((__this_01 != (Il2CppClass *)0x0) && (lVar3 = *(long *)&(__this_01->_1).this_arg.bits, lVar3 != 0)) {
    uStack_48 = CONCAT44(*(undefined4 *)(lVar3 + 0x18),(undefined4)uStack_48);
    pIStack_50 = (Il2CppClass *)0x40eceeb;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_48 + 4);
    return pIVar6;
  }
  pIStack_50 = (Il2CppClass *)0x40ecef2;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pCStack_58 = pCVar9;
  pIStack_50 = (Il2CppClass *)method;
  if (g_data_057ac764 == '\0') {
    uStack_68 = 0x40ecf1f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_68 = 0x40ecf2b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac764 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_68 = 0x40ecf4a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_68 = 0x40ecf5c;
  pMVar7 = MethodInfo_Single_ConvertTo_Single;
  pMVar10 = obj;
  fVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if (__this_01 != (Il2CppClass *)0x0) {
    pIVar6 = *(Il2CppObject **)&(__this_01->_1).this_arg.bits;
    if (pIVar6 != (Il2CppObject *)0x0) {
      *(float *)&pIVar6[1].monitor = fVar11;
      return pIVar6;
    }
  }
  uStack_68 = 0x40ecf7c;
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  if (((pMVar10 != (MethodInfo_24EEB40 *)0x0) && (pMVar10->rgctx_data != (MethodInfo_24EEB40_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar10->rgctx_data[1]._0_T, pMVar10 = (MethodInfo_24EEB40 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pMStack_70 = (MethodInfo_24EEB40 *)0x40ecf9f;
    fVar11 = UnityEngine_Light__get_bounceIntensity(pUVar2,(MethodInfo *)0x0);
    uStack_68 = CONCAT44(fVar11,(undefined4)uStack_68);
    pMStack_70 = (MethodInfo_24EEB40 *)0x40ecfba;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_68 + 4);
    return pIVar6;
  }
  pMStack_70 = (MethodInfo_24EEB40 *)0x40ecfc1;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  pIStack_78 = __this_01;
  pMStack_70 = obj;
  if (g_data_057ac765 == '\0') {
    uStack_88 = 0x40ecfef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_88 = 0x40ecffb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac765 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_88 = 0x40ed01a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_88 = 0x40ed02c;
  obj_00 = MethodInfo_Single_ConvertTo_Single;
  pMVar8 = pMVar7;
  fVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)pMVar7,MethodInfo_Single_ConvertTo_Single);
  if (((pMVar10 != (MethodInfo_24EEB40 *)0x0) && (pMVar10->rgctx_data != (MethodInfo_24EEB40_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar10->rgctx_data[1]._0_T, pMVar8 = (MethodInfo_24EED20 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,fVar11,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  uStack_88 = 0x40ed056;
  uStack_88 = il2cpp_runtime_helper_022b2c90();
  if (((pMVar8 != (MethodInfo_24EED20 *)0x0) && (pMVar8->rgctx_data != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar8->rgctx_data[1]._0_T, pMVar8 = (MethodInfo_24EED20 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pMStack_90 = (MethodInfo_24EED20 *)0x40ed07f;
    iVar4 = UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    uStack_88 = CONCAT44(iVar4,(undefined4)uStack_88);
    pMStack_90 = (MethodInfo_24EED20 *)0x40ed098;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_88 + 4);
    return pIVar6;
  }
  pMStack_90 = (MethodInfo_24EED20 *)0x40ed09f;
  uStack_a0 = il2cpp_runtime_helper_022b2c90();
  pMStack_98 = pMVar10;
  pMStack_90 = pMVar7;
  if (g_data_057ac766 == '\0') {
    uStack_a8 = 0x40ed0bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_a8 = 0x40ed0cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac766 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_a8 = 0x40ed0ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_a8 = 0x40ed0fc;
  __this_00 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar7 = obj_00;
  iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
  if (((pMVar8 != (MethodInfo_24EED20 *)0x0) && (pMVar8->rgctx_data != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar8->rgctx_data[1]._0_T, pMVar7 = (MethodInfo_24EED20 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,iVar4,(MethodInfo *)0x0);
    return extraout_RAX_01;
  }
  uStack_a8 = 0x40ed128;
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  if (((pMVar7 != (MethodInfo_24EED20 *)0x0) && (pMVar7->rgctx_data != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar7->rgctx_data[1]._0_T, pMVar7 = (MethodInfo_24EED20 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pMStack_b0 = (MethodInfo_24EED20 *)0x40ed14f;
    fVar11 = UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    uStack_a8 = CONCAT44(fVar11,(undefined4)uStack_a8);
    pMStack_b0 = (MethodInfo_24EED20 *)0x40ed16a;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_a8 + 4);
    return pIVar6;
  }
  pMStack_b0 = (MethodInfo_24EED20 *)0x40ed171;
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  pMStack_b8 = pMVar8;
  pMStack_b0 = obj_00;
  if (g_data_057ac767 == '\0') {
    uStack_c8 = 0x40ed19f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_c8 = 0x40ed1ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac767 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_c8 = 0x40ed1ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_c8 = 0x40ed1dc;
  pMVar8 = MethodInfo_Single_ConvertTo_Single;
  fVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this_00,MethodInfo_Single_ConvertTo_Single);
  if (((pMVar7 != (MethodInfo_24EED20 *)0x0) && (pMVar7->rgctx_data != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar7->rgctx_data[1]._0_T, __this_00 = (MethodInfo_24EE950 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar11,(MethodInfo *)0x0);
    return extraout_RAX_02;
  }
  uStack_c8 = 0x40ed206;
  uStack_c8 = il2cpp_runtime_helper_022b2c90();
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    uStack_c8 = CONCAT17((char)__this_00->slot,(undefined7)uStack_c8);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_c8 + 7);
    return pIVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac768 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac768 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pMVar8,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled
              ((CustomLogic_CustomLogicLightBuiltin_o *)__this_00,uVar5 & 0xff,method_00);
    return extraout_RAX_03;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_3fed2e0
            ((CustomLogic_CustomLogicLineRendererBuiltin_o *)pMVar8,
             (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,method_01);
  return extraout_RAX_04;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Color>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Color_g____setter_11_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40ece20

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Color_g____setter_11_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  long lVar3;
  int32_t iVar4;
  uint uVar5;
  Il2CppObject *pIVar6;
  MethodInfo *method_00;
  MethodInfo_24EEB40 *obj;
  MethodInfo_24EED20 *pMVar7;
  MethodInfo_24EED20 *obj_00;
  MethodInfo_24EE950 *__this;
  MethodInfo_24EED20 *pMVar8;
  MethodInfo *method_01;
  Il2CppClass *__this_00;
  MethodInfo_24EEB40 *pMVar9;
  float fVar10;
  UnityEngine_Color_o value;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  MethodInfo_24EED20 *pMStack_90;
  MethodInfo_24EED20 *pMStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  MethodInfo_24EEB40 *pMStack_70;
  MethodInfo_24EED20 *pMStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  Il2CppClass *pIStack_50;
  MethodInfo_24EEB40 *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicLightBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ac763 == '\0') {
    uStack_20 = 0x40ece3f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    uStack_20 = 0x40ece4b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac763 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40ece6a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40ece7c;
  obj = MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
  __this_00 = (Il2CppClass *)__v;
  pIVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
  if ((((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
       (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) && (pIVar6 != (Il2CppObject *)0x0)) &&
     (__this_00 = pIVar6[3].klass, __this_00 != (Il2CppClass *)0x0)) {
    pUVar2 = (pMVar1->fields).Light;
    obj = (MethodInfo_24EEB40 *)0x0;
    uStack_20 = 0x40ecea3;
    value = Utility_Color255__ToColor((Utility_Color255_o *)__this_00,(MethodInfo *)0x0);
    __i = (CustomLogic_CustomLogicLightBuiltin_o *)0x0;
    if (pUVar2 != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_color(pUVar2,value,(MethodInfo *)0x0);
      return;
    }
  }
  uStack_20 = 0x40ecebe;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((__this_00 != (Il2CppClass *)0x0) && (lVar3 = *(long *)&(__this_00->_1).this_arg.bits, lVar3 != 0)) {
    uStack_20 = CONCAT44(*(undefined4 *)(lVar3 + 0x18),(undefined4)uStack_20);
    pIStack_28 = (Il2CppObject *)0x40eceeb;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
    return;
  }
  pIStack_28 = (Il2CppObject *)0x40ecef2;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057ac764 == '\0') {
    uStack_40 = 0x40ecf1f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_40 = 0x40ecf2b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac764 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x40ecf4a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x40ecf5c;
  pMVar7 = MethodInfo_Single_ConvertTo_Single;
  pMVar9 = obj;
  fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if ((__this_00 != (Il2CppClass *)0x0) && (lVar3 = *(long *)&(__this_00->_1).this_arg.bits, lVar3 != 0)) {
    *(float *)(lVar3 + 0x18) = fVar10;
    return;
  }
  uStack_40 = 0x40ecf7c;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar9 != (MethodInfo_24EEB40 *)0x0) &&
     ((pMVar9->rgctx_data != (MethodInfo_24EEB40_RGCTXs *)0x0 &&
      (pUVar2 = (UnityEngine_Light_o *)pMVar9->rgctx_data[1]._0_T, pMVar9 = (MethodInfo_24EEB40 *)0x0,
      pUVar2 != (UnityEngine_Light_o *)0x0)))) {
    pMStack_48 = (MethodInfo_24EEB40 *)0x40ecf9f;
    fVar10 = UnityEngine_Light__get_bounceIntensity(pUVar2,(MethodInfo *)0x0);
    uStack_40 = CONCAT44(fVar10,(undefined4)uStack_40);
    pMStack_48 = (MethodInfo_24EEB40 *)0x40ecfba;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_40 + 4);
    return;
  }
  pMStack_48 = (MethodInfo_24EEB40 *)0x40ecfc1;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  pIStack_50 = __this_00;
  pMStack_48 = obj;
  if (g_data_057ac765 == '\0') {
    uStack_60 = 0x40ecfef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_60 = 0x40ecffb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac765 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_60 = 0x40ed01a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_60 = 0x40ed02c;
  obj_00 = MethodInfo_Single_ConvertTo_Single;
  pMVar8 = pMVar7;
  fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)pMVar7,MethodInfo_Single_ConvertTo_Single);
  if (((pMVar9 != (MethodInfo_24EEB40 *)0x0) && (pMVar9->rgctx_data != (MethodInfo_24EEB40_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar9->rgctx_data[1]._0_T, pMVar8 = (MethodInfo_24EED20 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,fVar10,(MethodInfo *)0x0);
    return;
  }
  uStack_60 = 0x40ed056;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if (((pMVar8 != (MethodInfo_24EED20 *)0x0) && (pMVar8->rgctx_data != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar8->rgctx_data[1]._0_T, pMVar8 = (MethodInfo_24EED20 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pMStack_68 = (MethodInfo_24EED20 *)0x40ed07f;
    iVar4 = UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    uStack_60 = CONCAT44(iVar4,(undefined4)uStack_60);
    pMStack_68 = (MethodInfo_24EED20 *)0x40ed098;
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_60 + 4);
    return;
  }
  pMStack_68 = (MethodInfo_24EED20 *)0x40ed09f;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  pMStack_70 = pMVar9;
  pMStack_68 = pMVar7;
  if (g_data_057ac766 == '\0') {
    uStack_80 = 0x40ed0bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_80 = 0x40ed0cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac766 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_80 = 0x40ed0ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_80 = 0x40ed0fc;
  __this = MethodInfo_Int32_ConvertTo_Int32;
  pMVar7 = obj_00;
  iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
  if (((pMVar8 != (MethodInfo_24EED20 *)0x0) && (pMVar8->rgctx_data != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar8->rgctx_data[1]._0_T, pMVar7 = (MethodInfo_24EED20 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,iVar4,(MethodInfo *)0x0);
    return;
  }
  uStack_80 = 0x40ed128;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  if (((pMVar7 != (MethodInfo_24EED20 *)0x0) && (pMVar7->rgctx_data != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar7->rgctx_data[1]._0_T, pMVar7 = (MethodInfo_24EED20 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pMStack_88 = (MethodInfo_24EED20 *)0x40ed14f;
    fVar10 = UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    uStack_80 = CONCAT44(fVar10,(undefined4)uStack_80);
    pMStack_88 = (MethodInfo_24EED20 *)0x40ed16a;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_80 + 4);
    return;
  }
  pMStack_88 = (MethodInfo_24EED20 *)0x40ed171;
  uStack_98 = il2cpp_runtime_helper_022b2c90();
  pMStack_90 = pMVar8;
  pMStack_88 = obj_00;
  if (g_data_057ac767 == '\0') {
    uStack_a0 = 0x40ed19f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_a0 = 0x40ed1ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac767 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_a0 = 0x40ed1ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_a0 = 0x40ed1dc;
  pMVar8 = MethodInfo_Single_ConvertTo_Single;
  fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
  if (((pMVar7 != (MethodInfo_24EED20 *)0x0) && (pMVar7->rgctx_data != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar7->rgctx_data[1]._0_T, __this = (MethodInfo_24EE950 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar10,(MethodInfo *)0x0);
    return;
  }
  uStack_a0 = 0x40ed206;
  uStack_a0 = il2cpp_runtime_helper_022b2c90();
  if (__this != (MethodInfo_24EE950 *)0x0) {
    uStack_a0 = CONCAT17((char)__this->slot,(undefined7)uStack_a0);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_a0 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac768 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac768 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pMVar8,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (__this != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled
              ((CustomLogic_CustomLogicLightBuiltin_o *)__this,uVar5 & 0xff,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_3fed2e0
            ((CustomLogic_CustomLogicLineRendererBuiltin_o *)pMVar8,
             (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,method_01);
  return;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Intensity>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Intensity_g____getter_12_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x40ecec0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Intensity_g____getter_12_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  MethodInfo *pMVar2;
  UnityEngine_Light_o *pUVar3;
  int32_t iVar4;
  uint uVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  Il2CppObject *extraout_RAX_03;
  MethodInfo *method_00;
  MethodInfo_24EED20 *pMVar7;
  MethodInfo_24EED20 *obj;
  MethodInfo_24EE950 *__this;
  MethodInfo_24EED20 *pMVar8;
  MethodInfo *pMVar9;
  float fVar10;
  undefined8 uStack_88;
  undefined8 uStack_80;
  MethodInfo_24EED20 *pMStack_78;
  MethodInfo_24EED20 *pMStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  MethodInfo *pMStack_58;
  MethodInfo_24EED20 *pMStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  CustomLogic_CustomLogicLightBuiltin_o *pCStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) && ((__i->fields).Value != (Map_MapLight_o *)0x0))
  {
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar6;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac764 == '\0') {
    uStack_28 = 0x40ecf1f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_28 = 0x40ecf2b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac764 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40ecf4a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40ecf5c;
  pMVar7 = MethodInfo_Single_ConvertTo_Single;
  pMVar9 = method;
  fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)method,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) {
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapLight_o *)0x0) {
      (pMVar1->fields).MaxIntensity = fVar10;
      return (Il2CppObject *)pMVar1;
    }
  }
  uStack_28 = 0x40ecf7c;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if (((pMVar9 != (MethodInfo *)0x0) && ((pMVar9->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) &&
     (pMVar2 = (pMVar9->field7_0x38).rgctx_data[2].method, pMVar9 = (MethodInfo *)0x0,
     pMVar2 != (MethodInfo *)0x0)) {
    pMStack_30 = (MethodInfo *)0x40ecf9f;
    fVar10 = UnityEngine_Light__get_bounceIntensity((UnityEngine_Light_o *)pMVar2,(MethodInfo *)0x0);
    uStack_28 = CONCAT44(fVar10,(undefined4)uStack_28);
    pMStack_30 = (MethodInfo *)0x40ecfba;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
    return pIVar6;
  }
  pMStack_30 = (MethodInfo *)0x40ecfc1;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  pCStack_38 = __i;
  pMStack_30 = method;
  if (g_data_057ac765 == '\0') {
    uStack_48 = 0x40ecfef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_48 = 0x40ecffb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac765 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = 0x40ed01a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = 0x40ed02c;
  obj = MethodInfo_Single_ConvertTo_Single;
  pMVar8 = pMVar7;
  fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)pMVar7,MethodInfo_Single_ConvertTo_Single);
  if (((pMVar9 != (MethodInfo *)0x0) && ((pMVar9->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) &&
     (pMVar2 = (pMVar9->field7_0x38).rgctx_data[2].method, pMVar8 = (MethodInfo_24EED20 *)0x0,
     pMVar2 != (MethodInfo *)0x0)) {
    UnityEngine_Light__set_bounceIntensity((UnityEngine_Light_o *)pMVar2,fVar10,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_48 = 0x40ed056;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if (((pMVar8 != (MethodInfo_24EED20 *)0x0) && (pMVar8->rgctx_data != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar3 = (UnityEngine_Light_o *)pMVar8->rgctx_data[1]._0_T, pMVar8 = (MethodInfo_24EED20 *)0x0,
     pUVar3 != (UnityEngine_Light_o *)0x0)) {
    pMStack_50 = (MethodInfo_24EED20 *)0x40ed07f;
    iVar4 = UnityEngine_Light__get_shadows(pUVar3,(MethodInfo *)0x0);
    uStack_48 = CONCAT44(iVar4,(undefined4)uStack_48);
    pMStack_50 = (MethodInfo_24EED20 *)0x40ed098;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_48 + 4);
    return pIVar6;
  }
  pMStack_50 = (MethodInfo_24EED20 *)0x40ed09f;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pMStack_58 = pMVar9;
  pMStack_50 = pMVar7;
  if (g_data_057ac766 == '\0') {
    uStack_68 = 0x40ed0bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_68 = 0x40ed0cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac766 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_68 = 0x40ed0ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_68 = 0x40ed0fc;
  __this = MethodInfo_Int32_ConvertTo_Int32;
  pMVar7 = obj;
  iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  if (((pMVar8 != (MethodInfo_24EED20 *)0x0) && (pMVar8->rgctx_data != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar3 = (UnityEngine_Light_o *)pMVar8->rgctx_data[1]._0_T, pMVar7 = (MethodInfo_24EED20 *)0x0,
     pUVar3 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar3,iVar4,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  uStack_68 = 0x40ed128;
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  if (((pMVar7 != (MethodInfo_24EED20 *)0x0) && (pMVar7->rgctx_data != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar3 = (UnityEngine_Light_o *)pMVar7->rgctx_data[1]._0_T, pMVar7 = (MethodInfo_24EED20 *)0x0,
     pUVar3 != (UnityEngine_Light_o *)0x0)) {
    pMStack_70 = (MethodInfo_24EED20 *)0x40ed14f;
    fVar10 = UnityEngine_Light__get_shadowStrength(pUVar3,(MethodInfo *)0x0);
    uStack_68 = CONCAT44(fVar10,(undefined4)uStack_68);
    pMStack_70 = (MethodInfo_24EED20 *)0x40ed16a;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_68 + 4);
    return pIVar6;
  }
  pMStack_70 = (MethodInfo_24EED20 *)0x40ed171;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  pMStack_78 = pMVar8;
  pMStack_70 = obj;
  if (g_data_057ac767 == '\0') {
    uStack_88 = 0x40ed19f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_88 = 0x40ed1ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac767 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_88 = 0x40ed1ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_88 = 0x40ed1dc;
  pMVar8 = MethodInfo_Single_ConvertTo_Single;
  fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
  if (((pMVar7 != (MethodInfo_24EED20 *)0x0) && (pMVar7->rgctx_data != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar3 = (UnityEngine_Light_o *)pMVar7->rgctx_data[1]._0_T, __this = (MethodInfo_24EE950 *)0x0,
     pUVar3 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar3,fVar10,(MethodInfo *)0x0);
    return extraout_RAX_01;
  }
  uStack_88 = 0x40ed206;
  uStack_88 = il2cpp_runtime_helper_022b2c90();
  if (__this != (MethodInfo_24EE950 *)0x0) {
    uStack_88 = CONCAT17((char)__this->slot,(undefined7)uStack_88);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_88 + 7);
    return pIVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac768 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac768 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar9 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pMVar8,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (__this != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled
              ((CustomLogic_CustomLogicLightBuiltin_o *)__this,uVar5 & 0xff,method_00);
    return extraout_RAX_02;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_3fed2e0
            ((CustomLogic_CustomLogicLineRendererBuiltin_o *)pMVar8,
             (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,pMVar9);
  return extraout_RAX_03;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Intensity>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Intensity_g____setter_12_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40ecf00

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Intensity_g____setter_12_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  int32_t iVar3;
  uint uVar4;
  MethodInfo *method_00;
  MethodInfo_24EED20 *pMVar5;
  MethodInfo_24EED20 *obj;
  MethodInfo_24EE950 *__this;
  MethodInfo_24EED20 *pMVar6;
  MethodInfo *method_01;
  Il2CppObject *pIVar7;
  float fVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  MethodInfo_24EED20 *pMStack_70;
  MethodInfo_24EED20 *pMStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  Il2CppObject *pIStack_50;
  MethodInfo_24EED20 *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicLightBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ac764 == '\0') {
    uStack_20 = 0x40ecf1f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_20 = 0x40ecf2b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac764 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40ecf4a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40ecf5c;
  pMVar5 = MethodInfo_Single_ConvertTo_Single;
  pIVar7 = __v;
  fVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) {
    (pMVar1->fields).MaxIntensity = fVar8;
    return;
  }
  uStack_20 = 0x40ecf7c;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((pIVar7 != (Il2CppObject *)0x0) &&
     ((pIVar7[3].monitor != (void *)0x0 &&
      (pUVar2 = *(UnityEngine_Light_o **)((long)pIVar7[3].monitor + 0x10), pIVar7 = (Il2CppObject *)0x0,
      pUVar2 != (UnityEngine_Light_o *)0x0)))) {
    pIStack_28 = (Il2CppObject *)0x40ecf9f;
    fVar8 = UnityEngine_Light__get_bounceIntensity(pUVar2,(MethodInfo *)0x0);
    uStack_20 = CONCAT44(fVar8,(undefined4)uStack_20);
    pIStack_28 = (Il2CppObject *)0x40ecfba;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
    return;
  }
  pIStack_28 = (Il2CppObject *)0x40ecfc1;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057ac765 == '\0') {
    uStack_40 = 0x40ecfef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_40 = 0x40ecffb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac765 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x40ed01a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x40ed02c;
  obj = MethodInfo_Single_ConvertTo_Single;
  pMVar6 = pMVar5;
  fVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)pMVar5,MethodInfo_Single_ConvertTo_Single);
  if (((pIVar7 != (Il2CppObject *)0x0) && (pIVar7[3].monitor != (void *)0x0)) &&
     (pUVar2 = *(UnityEngine_Light_o **)((long)pIVar7[3].monitor + 0x10), pMVar6 = (MethodInfo_24EED20 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,fVar8,(MethodInfo *)0x0);
    return;
  }
  uStack_40 = 0x40ed056;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if (((pMVar6 != (MethodInfo_24EED20 *)0x0) && (pMVar6->rgctx_data != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar6->rgctx_data[1]._0_T, pMVar6 = (MethodInfo_24EED20 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pMStack_48 = (MethodInfo_24EED20 *)0x40ed07f;
    iVar3 = UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    uStack_40 = CONCAT44(iVar3,(undefined4)uStack_40);
    pMStack_48 = (MethodInfo_24EED20 *)0x40ed098;
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_40 + 4);
    return;
  }
  pMStack_48 = (MethodInfo_24EED20 *)0x40ed09f;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  pIStack_50 = pIVar7;
  pMStack_48 = pMVar5;
  if (g_data_057ac766 == '\0') {
    uStack_60 = 0x40ed0bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_60 = 0x40ed0cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac766 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_60 = 0x40ed0ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_60 = 0x40ed0fc;
  __this = MethodInfo_Int32_ConvertTo_Int32;
  pMVar5 = obj;
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  if (((pMVar6 != (MethodInfo_24EED20 *)0x0) && (pMVar6->rgctx_data != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar6->rgctx_data[1]._0_T, pMVar5 = (MethodInfo_24EED20 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,iVar3,(MethodInfo *)0x0);
    return;
  }
  uStack_60 = 0x40ed128;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if (((pMVar5 != (MethodInfo_24EED20 *)0x0) && (pMVar5->rgctx_data != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar5->rgctx_data[1]._0_T, pMVar5 = (MethodInfo_24EED20 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pMStack_68 = (MethodInfo_24EED20 *)0x40ed14f;
    fVar8 = UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    uStack_60 = CONCAT44(fVar8,(undefined4)uStack_60);
    pMStack_68 = (MethodInfo_24EED20 *)0x40ed16a;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_60 + 4);
    return;
  }
  pMStack_68 = (MethodInfo_24EED20 *)0x40ed171;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  pMStack_70 = pMVar6;
  pMStack_68 = obj;
  if (g_data_057ac767 == '\0') {
    uStack_80 = 0x40ed19f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_80 = 0x40ed1ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac767 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_80 = 0x40ed1ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_80 = 0x40ed1dc;
  pMVar6 = MethodInfo_Single_ConvertTo_Single;
  fVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
  if (((pMVar5 != (MethodInfo_24EED20 *)0x0) && (pMVar5->rgctx_data != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar5->rgctx_data[1]._0_T, __this = (MethodInfo_24EE950 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar8,(MethodInfo *)0x0);
    return;
  }
  uStack_80 = 0x40ed206;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  if (__this != (MethodInfo_24EE950 *)0x0) {
    uStack_80 = CONCAT17((char)__this->slot,(undefined7)uStack_80);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_80 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac768 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac768 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pMVar6,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (__this != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled
              ((CustomLogic_CustomLogicLightBuiltin_o *)__this,uVar4 & 0xff,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_3fed2e0
            ((CustomLogic_CustomLogicLineRendererBuiltin_o *)pMVar6,
             (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,method_01);
  return;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__BounceIntensity>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__BounceIntensity_g____getter_13_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x40ecf80

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__BounceIntensity_g____getter_13_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  MethodInfo *pMVar3;
  int32_t iVar4;
  uint uVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  Il2CppObject *extraout_RAX_03;
  MethodInfo *method_00;
  MethodInfo_24EED20 *pMVar7;
  MethodInfo_24EE950 *__this;
  MethodInfo *pMVar8;
  MethodInfo_24EED20 *pMVar9;
  float fVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  MethodInfo *pMStack_58;
  MethodInfo_24EED20 *pMStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  CustomLogic_CustomLogicLightBuiltin_o *pCStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (pUVar2 = (pMVar1->fields).Light, __i = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_bounceIntensity(pUVar2,(MethodInfo *)0x0);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar6;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac765 == '\0') {
    uStack_28 = 0x40ecfef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_28 = 0x40ecffb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac765 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40ed01a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40ed02c;
  pMVar7 = MethodInfo_Single_ConvertTo_Single;
  pMVar8 = method;
  fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)method,MethodInfo_Single_ConvertTo_Single);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (pUVar2 = (pMVar1->fields).Light, pMVar8 = (MethodInfo *)0x0, pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,fVar10,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_28 = 0x40ed056;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if (((pMVar8 != (MethodInfo *)0x0) && ((pMVar8->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) &&
     (pMVar3 = (pMVar8->field7_0x38).rgctx_data[2].method, pMVar8 = (MethodInfo *)0x0,
     pMVar3 != (MethodInfo *)0x0)) {
    pMStack_30 = (MethodInfo *)0x40ed07f;
    iVar4 = UnityEngine_Light__get_shadows((UnityEngine_Light_o *)pMVar3,(MethodInfo *)0x0);
    uStack_28 = CONCAT44(iVar4,(undefined4)uStack_28);
    pMStack_30 = (MethodInfo *)0x40ed098;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_28 + 4);
    return pIVar6;
  }
  pMStack_30 = (MethodInfo *)0x40ed09f;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  pCStack_38 = __i;
  pMStack_30 = method;
  if (g_data_057ac766 == '\0') {
    uStack_48 = 0x40ed0bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_48 = 0x40ed0cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac766 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = 0x40ed0ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = 0x40ed0fc;
  __this = MethodInfo_Int32_ConvertTo_Int32;
  pMVar9 = pMVar7;
  iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar7,MethodInfo_Int32_ConvertTo_Int32);
  if (((pMVar8 != (MethodInfo *)0x0) && ((pMVar8->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) &&
     (pMVar3 = (pMVar8->field7_0x38).rgctx_data[2].method, pMVar9 = (MethodInfo_24EED20 *)0x0,
     pMVar3 != (MethodInfo *)0x0)) {
    UnityEngine_Light__set_shadows((UnityEngine_Light_o *)pMVar3,iVar4,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  uStack_48 = 0x40ed128;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if (((pMVar9 != (MethodInfo_24EED20 *)0x0) && (pMVar9->rgctx_data != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar9->rgctx_data[1]._0_T, pMVar9 = (MethodInfo_24EED20 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pMStack_50 = (MethodInfo_24EED20 *)0x40ed14f;
    fVar10 = UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    uStack_48 = CONCAT44(fVar10,(undefined4)uStack_48);
    pMStack_50 = (MethodInfo_24EED20 *)0x40ed16a;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_48 + 4);
    return pIVar6;
  }
  pMStack_50 = (MethodInfo_24EED20 *)0x40ed171;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pMStack_58 = pMVar8;
  pMStack_50 = pMVar7;
  if (g_data_057ac767 == '\0') {
    uStack_68 = 0x40ed19f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_68 = 0x40ed1ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac767 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_68 = 0x40ed1ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_68 = 0x40ed1dc;
  pMVar7 = MethodInfo_Single_ConvertTo_Single;
  fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
  if (((pMVar9 != (MethodInfo_24EED20 *)0x0) && (pMVar9->rgctx_data != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar9->rgctx_data[1]._0_T, __this = (MethodInfo_24EE950 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar10,(MethodInfo *)0x0);
    return extraout_RAX_01;
  }
  uStack_68 = 0x40ed206;
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  if (__this != (MethodInfo_24EE950 *)0x0) {
    uStack_68 = CONCAT17((char)__this->slot,(undefined7)uStack_68);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_68 + 7);
    return pIVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac768 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac768 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar8 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pMVar7,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (__this != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled
              ((CustomLogic_CustomLogicLightBuiltin_o *)__this,uVar5 & 0xff,method_00);
    return extraout_RAX_02;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_3fed2e0
            ((CustomLogic_CustomLogicLineRendererBuiltin_o *)pMVar7,
             (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,pMVar8);
  return extraout_RAX_03;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__BounceIntensity>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__BounceIntensity_g____setter_13_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40ecfd0

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__BounceIntensity_g____setter_13_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  int32_t iVar3;
  uint uVar4;
  MethodInfo *method_00;
  MethodInfo_24EED20 *pMVar5;
  MethodInfo_24EE950 *__this;
  MethodInfo *method_01;
  Il2CppObject *pIVar6;
  MethodInfo_24EED20 *pMVar7;
  float fVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  Il2CppObject *pIStack_50;
  MethodInfo_24EED20 *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicLightBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ac765 == '\0') {
    uStack_20 = 0x40ecfef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_20 = 0x40ecffb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac765 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40ed01a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40ed02c;
  pMVar5 = MethodInfo_Single_ConvertTo_Single;
  pIVar6 = __v;
  fVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,MethodInfo_Single_ConvertTo_Single);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (pUVar2 = (pMVar1->fields).Light, pIVar6 = (Il2CppObject *)0x0, pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,fVar8,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = 0x40ed056;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (((pIVar6 != (Il2CppObject *)0x0) && (pIVar6[3].monitor != (void *)0x0)) &&
     (pUVar2 = *(UnityEngine_Light_o **)((long)pIVar6[3].monitor + 0x10), pIVar6 = (Il2CppObject *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pIStack_28 = (Il2CppObject *)0x40ed07f;
    iVar3 = UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    uStack_20 = CONCAT44(iVar3,(undefined4)uStack_20);
    pIStack_28 = (Il2CppObject *)0x40ed098;
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
    return;
  }
  pIStack_28 = (Il2CppObject *)0x40ed09f;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057ac766 == '\0') {
    uStack_40 = 0x40ed0bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_40 = 0x40ed0cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac766 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x40ed0ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x40ed0fc;
  __this = MethodInfo_Int32_ConvertTo_Int32;
  pMVar7 = pMVar5;
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar5,MethodInfo_Int32_ConvertTo_Int32);
  if (((pIVar6 != (Il2CppObject *)0x0) && (pIVar6[3].monitor != (void *)0x0)) &&
     (pUVar2 = *(UnityEngine_Light_o **)((long)pIVar6[3].monitor + 0x10), pMVar7 = (MethodInfo_24EED20 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,iVar3,(MethodInfo *)0x0);
    return;
  }
  uStack_40 = 0x40ed128;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if (((pMVar7 != (MethodInfo_24EED20 *)0x0) && (pMVar7->rgctx_data != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar7->rgctx_data[1]._0_T, pMVar7 = (MethodInfo_24EED20 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pMStack_48 = (MethodInfo_24EED20 *)0x40ed14f;
    fVar8 = UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    uStack_40 = CONCAT44(fVar8,(undefined4)uStack_40);
    pMStack_48 = (MethodInfo_24EED20 *)0x40ed16a;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_40 + 4);
    return;
  }
  pMStack_48 = (MethodInfo_24EED20 *)0x40ed171;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  pIStack_50 = pIVar6;
  pMStack_48 = pMVar5;
  if (g_data_057ac767 == '\0') {
    uStack_60 = 0x40ed19f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_60 = 0x40ed1ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac767 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_60 = 0x40ed1ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_60 = 0x40ed1dc;
  pMVar5 = MethodInfo_Single_ConvertTo_Single;
  fVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
  if (((pMVar7 != (MethodInfo_24EED20 *)0x0) && (pMVar7->rgctx_data != (MethodInfo_24EED20_RGCTXs *)0x0)) &&
     (pUVar2 = (UnityEngine_Light_o *)pMVar7->rgctx_data[1]._0_T, __this = (MethodInfo_24EE950 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar8,(MethodInfo *)0x0);
    return;
  }
  uStack_60 = 0x40ed206;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if (__this != (MethodInfo_24EE950 *)0x0) {
    uStack_60 = CONCAT17((char)__this->slot,(undefined7)uStack_60);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_60 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac768 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac768 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)pMVar5,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (__this != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled
              ((CustomLogic_CustomLogicLightBuiltin_o *)__this,uVar4 & 0xff,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_3fed2e0
            ((CustomLogic_CustomLogicLineRendererBuiltin_o *)pMVar5,
             (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,method_01);
  return;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowType>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowType_g____getter_14_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x40ed060

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowType_g____getter_14_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  MethodInfo *__this;
  int32_t value;
  uint uVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  MethodInfo *method_00;
  MethodInfo_24EE950 *__this_00;
  MethodInfo_24EED20 *__this_01;
  MethodInfo *pMVar5;
  float fVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  CustomLogic_CustomLogicLightBuiltin_o *pCStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (pUVar2 = (pMVar1->fields).Light, __i = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
    return pIVar4;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac766 == '\0') {
    uStack_28 = 0x40ed0bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_28 = 0x40ed0cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac766 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40ed0ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40ed0fc;
  __this_00 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar5 = method;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (pUVar2 = (pMVar1->fields).Light, pMVar5 = (MethodInfo *)0x0, pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,value,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_28 = 0x40ed128;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if (((pMVar5 != (MethodInfo *)0x0) && ((pMVar5->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) &&
     (__this = (pMVar5->field7_0x38).rgctx_data[2].method, pMVar5 = (MethodInfo *)0x0,
     __this != (MethodInfo *)0x0)) {
    pMStack_30 = (MethodInfo *)0x40ed14f;
    fVar6 = UnityEngine_Light__get_shadowStrength((UnityEngine_Light_o *)__this,(MethodInfo *)0x0);
    uStack_28 = CONCAT44(fVar6,(undefined4)uStack_28);
    pMStack_30 = (MethodInfo *)0x40ed16a;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
    return pIVar4;
  }
  pMStack_30 = (MethodInfo *)0x40ed171;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  pCStack_38 = __i;
  pMStack_30 = method;
  if (g_data_057ac767 == '\0') {
    uStack_48 = 0x40ed19f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_48 = 0x40ed1ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac767 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = 0x40ed1ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = 0x40ed1dc;
  __this_01 = MethodInfo_Single_ConvertTo_Single;
  fVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this_00,MethodInfo_Single_ConvertTo_Single);
  if (((pMVar5 != (MethodInfo *)0x0) && ((pMVar5->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) &&
     (pMVar5 = (pMVar5->field7_0x38).rgctx_data[2].method, __this_00 = (MethodInfo_24EE950 *)0x0,
     pMVar5 != (MethodInfo *)0x0)) {
    UnityEngine_Light__set_shadowStrength((UnityEngine_Light_o *)pMVar5,fVar6,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  uStack_48 = 0x40ed206;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    uStack_48 = CONCAT17((char)__this_00->slot,(undefined7)uStack_48);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_48 + 7);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac768 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac768 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar5 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)__this_01,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (__this_00 != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled
              ((CustomLogic_CustomLogicLightBuiltin_o *)__this_00,uVar3 & 0xff,method_00);
    return extraout_RAX_01;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_3fed2e0
            ((CustomLogic_CustomLogicLineRendererBuiltin_o *)__this_01,
             (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,pMVar5);
  return extraout_RAX_02;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowType>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowType_g____setter_14_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40ed0a0

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowType_g____setter_14_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  int32_t value;
  uint uVar3;
  MethodInfo *method_00;
  MethodInfo_24EE950 *__this;
  MethodInfo_24EED20 *__this_00;
  MethodInfo *method_01;
  Il2CppObject *pIVar4;
  float fVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicLightBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ac766 == '\0') {
    uStack_20 = 0x40ed0bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_20 = 0x40ed0cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac766 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40ed0ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40ed0fc;
  __this = MethodInfo_Int32_ConvertTo_Int32;
  pIVar4 = __v;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (pUVar2 = (pMVar1->fields).Light, pIVar4 = (Il2CppObject *)0x0, pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,value,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = 0x40ed128;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (((pIVar4 != (Il2CppObject *)0x0) && (pIVar4[3].monitor != (void *)0x0)) &&
     (pUVar2 = *(UnityEngine_Light_o **)((long)pIVar4[3].monitor + 0x10), pIVar4 = (Il2CppObject *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    pIStack_28 = (Il2CppObject *)0x40ed14f;
    fVar5 = UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    uStack_20 = CONCAT44(fVar5,(undefined4)uStack_20);
    pIStack_28 = (Il2CppObject *)0x40ed16a;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
    return;
  }
  pIStack_28 = (Il2CppObject *)0x40ed171;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057ac767 == '\0') {
    uStack_40 = 0x40ed19f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_40 = 0x40ed1ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac767 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x40ed1ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x40ed1dc;
  __this_00 = MethodInfo_Single_ConvertTo_Single;
  fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
  if (((pIVar4 != (Il2CppObject *)0x0) && (pIVar4[3].monitor != (void *)0x0)) &&
     (pUVar2 = *(UnityEngine_Light_o **)((long)pIVar4[3].monitor + 0x10), __this = (MethodInfo_24EE950 *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar5,(MethodInfo *)0x0);
    return;
  }
  uStack_40 = 0x40ed206;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if (__this != (MethodInfo_24EE950 *)0x0) {
    uStack_40 = CONCAT17((char)__this->slot,(undefined7)uStack_40);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_40 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac768 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac768 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)__this_00,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (__this != (MethodInfo_24EE950 *)0x0) {
    CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled
              ((CustomLogic_CustomLogicLightBuiltin_o *)__this,uVar3 & 0xff,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_3fed2e0
            ((CustomLogic_CustomLogicLineRendererBuiltin_o *)__this_00,
             (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,method_01);
  return;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowStrength>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowStrength_g____getter_15_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x40ed130

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowStrength_g____getter_15_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  uint uVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  MethodInfo *method_00;
  MethodInfo_24EED20 *__this;
  MethodInfo *method_01;
  float value;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (pUVar2 = (pMVar1->fields).Light, __i = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar4;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac767 == '\0') {
    uStack_28 = 0x40ed19f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_28 = 0x40ed1ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac767 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40ed1ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40ed1dc;
  __this = MethodInfo_Single_ConvertTo_Single;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)method,MethodInfo_Single_ConvertTo_Single);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (pUVar2 = (pMVar1->fields).Light, method = (MethodInfo *)0x0, pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,value,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_28 = 0x40ed206;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if (method != (MethodInfo *)0x0) {
    uStack_28 = CONCAT17((char)method->slot,(undefined7)uStack_28);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_28 + 7);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac768 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac768 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)__this,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (method != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled
              ((CustomLogic_CustomLogicLightBuiltin_o *)method,uVar3 & 0xff,method_00);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_3fed2e0
            ((CustomLogic_CustomLogicLineRendererBuiltin_o *)__this,
             (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,method_01);
  return extraout_RAX_01;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowStrength>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowStrength_g____setter_15_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40ed180

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowStrength_g____setter_15_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  uint uVar2;
  MethodInfo *method_00;
  MethodInfo_24EED20 *__this_00;
  MethodInfo *method_01;
  float value;
  undefined8 uStack_20;
  
  if (g_data_057ac767 == '\0') {
    uStack_20 = 0x40ed19f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_20 = 0x40ed1ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac767 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40ed1ca;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40ed1dc;
  __this_00 = MethodInfo_Single_ConvertTo_Single;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,MethodInfo_Single_ConvertTo_Single);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __v = (Il2CppObject *)0x0, __this != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(__this,value,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = 0x40ed206;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((CustomLogic_CustomLogicLightBuiltin_o *)__v != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) {
    uStack_20 = CONCAT17((char)(((CustomLogic_CustomLogicLightBuiltin_o *)__v)->fields)._weatherControlled,
                         (undefined7)uStack_20);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac768 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac768 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)__this_00,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((CustomLogic_CustomLogicLightBuiltin_o *)__v != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) {
    CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled
              ((CustomLogic_CustomLogicLightBuiltin_o *)__v,uVar2 & 0xff,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_3fed2e0
            ((CustomLogic_CustomLogicLineRendererBuiltin_o *)__this_00,
             (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,method_01);
  return;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__WeatherControlled>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__WeatherControlled_g____getter_16_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x40ed210

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__WeatherControlled_g____getter_16_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined1 uStack_1;
  
  if (__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) {
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_1);
    return pIVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac768 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac768 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)method,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) {
    CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled(__i,uVar1 & 0xff,method_00);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_3fed2e0
            ((CustomLogic_CustomLogicLineRendererBuiltin_o *)method,
             (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,method_01);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__WeatherControlled>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__WeatherControlled_g____setter_16_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40ed240

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__WeatherControlled_g____setter_16_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  uint uVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (g_data_057ac768 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac768 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(__v,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) {
    CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled(__i,uVar1 & 0xff,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicLineRendererBuiltin___ctor_3fed2e0
            ((CustomLogic_CustomLogicLineRendererBuiltin_o *)__v,
             (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),1.0,method_01);
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLightBuiltin___ctor (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x40eae10

void CustomLogic_CustomLogicLightBuiltin___ctor
               (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLightBuiltin___ctor (CustomLogic_CustomLogicLightBuiltin_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* owner, int32_t type, const MethodInfo* method);
// 0x40eae20

void CustomLogic_CustomLogicLightBuiltin___ctor_3feae20
               (CustomLogic_CustomLogicLightBuiltin_o *__this,CustomLogic_CustomLogicMapObjectBuiltin_o *owner
               ,int32_t type,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  UnityEngine_Component_o *component;
  Map_MapLight_o *pMVar3;
  
  if (g_data_057ac74a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Light_GetOrAddComponent_Light);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Light);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac74a = '\x01';
  }
  if ((owner != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pMVar1 = (owner->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) {
    component = (UnityEngine_Component_o *)
                CustomLogic_BuiltinComponentInstance__GetOrAddComponent_object_
                          ((pMVar1->fields).GameObject,MethodInfo_Light_GetOrAddComponent_Light);
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)__this,component,(MethodInfo *)0x0);
    (__this->fields).OwnerMapObject = owner;
    il2cpp_runtime_helper_022b4080(&(__this->fields).OwnerMapObject,owner);
    pMVar1 = (owner->fields).Value;
    if (pMVar1 != (Map_MapObject_o *)0x0) {
      (__this->fields).Owner = (pMVar1->fields).GameObject;
      il2cpp_runtime_helper_022b4080(&(__this->fields).Owner);
      owner = (CustomLogic_CustomLogicMapObjectBuiltin_o *)(__this->fields).Component;
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((owner != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) && (owner->klass != TypeInfo_Light))
      goto label_040eb024;
      pMVar3 = Map_MapLoader__RegisterMapLight
                         ((UnityEngine_Light_o *)owner,(uint)(type == 1),(MethodInfo *)0x0);
      owner = (CustomLogic_CustomLogicMapObjectBuiltin_o *)&(__this->fields).Value;
      (__this->fields).Value = pMVar3;
      il2cpp_runtime_helper_022b4080(owner,pMVar3);
      pMVar3 = (__this->fields).Value;
      if (pMVar3 != (Map_MapLight_o *)0x0) {
        (pMVar3->fields).MaxIntensity = 1.0;
        pUVar2 = (pMVar3->fields).Light;
        if (pUVar2 != (UnityEngine_Light_o *)0x0) {
          UnityEngine_Light__set_type(pUVar2,type,(MethodInfo *)0x0);
          if ((*(Map_MapLight_o **)owner != (Map_MapLight_o *)0x0) &&
             (pUVar2 = ((*(Map_MapLight_o **)owner)->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
            if (type == 1) {
              UnityEngine_Light__set_shadows(pUVar2,2,(MethodInfo *)0x0);
              if ((*(Map_MapLight_o **)owner != (Map_MapLight_o *)0x0) &&
                 (pUVar2 = ((*(Map_MapLight_o **)owner)->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0))
              {
                UnityEngine_Light__set_shadowStrength(pUVar2,0.8,(MethodInfo *)0x0);
                if ((*(Map_MapLight_o **)owner != (Map_MapLight_o *)0x0) &&
                   (pUVar2 = ((*(Map_MapLight_o **)owner)->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0
                   )) {
                  UnityEngine_Light__set_shadowBias(pUVar2,0.2,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            else {
              UnityEngine_Light__set_shadows(pUVar2,0,(MethodInfo *)0x0);
              if ((*(Map_MapLight_o **)owner != (Map_MapLight_o *)0x0) &&
                 (pUVar2 = ((*(Map_MapLight_o **)owner)->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0))
              {
                UnityEngine_Light__set_renderMode(pUVar2,1,(MethodInfo *)0x0);
                if ((*(Map_MapLight_o **)owner != (Map_MapLight_o *)0x0) &&
                   (pUVar2 = ((*(Map_MapLight_o **)owner)->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0
                   )) {
                  UnityEngine_Light__set_bounceIntensity(pUVar2,0.0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040eb024:
  il2cpp_runtime_helper_022b2fd0(owner);
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$get_LightTypeDirectional
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_LightTypeDirectional (const MethodInfo* method);
// 0x40eb030

int32_t CustomLogic_CustomLogicLightBuiltin__get_LightTypeDirectional(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicLightBuiltin$$get_LightTypePoint
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_LightTypePoint (const MethodInfo* method);
// 0x40eb040

int32_t CustomLogic_CustomLogicLightBuiltin__get_LightTypePoint(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicLightBuiltin$$get_LightTypeSpot
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_LightTypeSpot (const MethodInfo* method);
// 0x40eb050

int32_t CustomLogic_CustomLogicLightBuiltin__get_LightTypeSpot(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicLightBuiltin$$get_ShadowTypeNone
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeNone (const MethodInfo* method);
// 0x40eb060

int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeNone(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicLightBuiltin$$get_ShadowTypeHard
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeHard (const MethodInfo* method);
// 0x40eb070

int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeHard(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicLightBuiltin$$get_ShadowTypeSoft
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeSoft (const MethodInfo* method);
// 0x40eb080

int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeSoft(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicLightBuiltin$$get_TypeOfLight
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_TypeOfLight (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x40eb090

int32_t CustomLogic_CustomLogicLightBuiltin__get_TypeOfLight
                  (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  int32_t iVar3;
  int32_t extraout_EAX;
  int32_t extraout_EAX_00;
  int32_t extraout_EAX_01;
  int32_t extraout_EAX_02;
  int32_t extraout_EAX_03;
  int32_t extraout_EAX_04;
  int32_t extraout_EAX_05;
  int32_t extraout_EAX_06;
  int32_t extraout_EAX_07;
  int32_t extraout_EAX_08;
  int32_t extraout_EAX_09;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  undefined8 uVar4;
  int32_t value;
  CustomLogic_CustomLogicLightBuiltin_o *__this_01;
  float fVar5;
  float extraout_XMM0_Da;
  UnityEngine_Color_o UVar6;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    iVar3 = UnityEngine_Light__get_type(pUVar2,(MethodInfo *)0x0);
    return iVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_type(pUVar2,(int32_t)method,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_range(pUVar2,(MethodInfo *)0x0);
    return extraout_EAX_00;
  }
  fVar5 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_range(pUVar2,fVar5,(MethodInfo *)0x0);
    return extraout_EAX_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_spotAngle(pUVar2,(MethodInfo *)0x0);
    return extraout_EAX_02;
  }
  fVar5 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_spotAngle(pUVar2,fVar5,(MethodInfo *)0x0);
    return extraout_EAX_03;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = __this;
  if (g_data_057ac74b == '\0') {
    __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac74b = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UVar6 = UnityEngine_Light__get_color(pUVar2,(MethodInfo *)0x0);
    __this_00 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(__this_00,UVar6,(MethodInfo *)0x0);
    return (int32_t)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     ((method != (MethodInfo *)0x0 &&
      (__this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)method->parameters,
      __this_01 != (CustomLogic_CustomLogicLightBuiltin_o *)0x0)))) {
    pUVar2 = (pMVar1->fields).Light;
    method = (MethodInfo *)0x0;
    UVar6 = Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_color(pUVar2,UVar6,(MethodInfo *)0x0);
      return extraout_EAX_04;
    }
  }
  value = (int32_t)method;
  iVar3 = il2cpp_runtime_helper_022b2c90();
  if ((__this_01->fields).Value != (Map_MapLight_o *)0x0) {
    return iVar3;
  }
  iVar3 = il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if (pMVar1 != (Map_MapLight_o *)0x0) {
    (pMVar1->fields).MaxIntensity = extraout_XMM0_Da;
    return iVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_bounceIntensity(pUVar2,(MethodInfo *)0x0);
    return extraout_EAX_05;
  }
  fVar5 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,fVar5,(MethodInfo *)0x0);
    return extraout_EAX_06;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    iVar3 = UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    return iVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,value,(MethodInfo *)0x0);
    return extraout_EAX_07;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    return extraout_EAX_08;
  }
  fVar5 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar5,(MethodInfo *)0x0);
    return extraout_EAX_09;
  }
  uVar4 = il2cpp_runtime_helper_022b2c90();
  return (int32_t)CONCAT71((int7)((ulong)uVar4 >> 8),(char)(__this_01->fields)._weatherControlled);
}


// CustomLogic.CustomLogicLightBuiltin$$set_TypeOfLight
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_TypeOfLight (CustomLogic_CustomLogicLightBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x40eb0b0

void CustomLogic_CustomLogicLightBuiltin__set_TypeOfLight
               (CustomLogic_CustomLogicLightBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  int32_t value_00;
  undefined4 in_register_00000034;
  long lVar3;
  CustomLogic_CustomLogicLightBuiltin_o *__this_01;
  float fVar4;
  UnityEngine_Color_o UVar5;
  
  lVar3 = CONCAT44(in_register_00000034,value);
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_type(pUVar2,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_range(pUVar2,(MethodInfo *)0x0);
    return;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_range(pUVar2,fVar4,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_spotAngle(pUVar2,(MethodInfo *)0x0);
    return;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_spotAngle(pUVar2,fVar4,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = __this;
  if (g_data_057ac74b == '\0') {
    __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac74b = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UVar5 = UnityEngine_Light__get_color(pUVar2,(MethodInfo *)0x0);
    __this_00 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(__this_00,UVar5,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     ((lVar3 != 0 &&
      (__this_01 = *(CustomLogic_CustomLogicLightBuiltin_o **)(lVar3 + 0x30),
      __this_01 != (CustomLogic_CustomLogicLightBuiltin_o *)0x0)))) {
    pUVar2 = (pMVar1->fields).Light;
    lVar3 = 0;
    UVar5 = Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_color(pUVar2,UVar5,(MethodInfo *)0x0);
      return;
    }
  }
  value_00 = (int32_t)lVar3;
  il2cpp_runtime_helper_022b2c90();
  if ((__this_01->fields).Value != (Map_MapLight_o *)0x0) {
    return;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if (pMVar1 != (Map_MapLight_o *)0x0) {
    (pMVar1->fields).MaxIntensity = fVar4;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_bounceIntensity(pUVar2,(MethodInfo *)0x0);
    return;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,fVar4,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,value_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    return;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar4,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$get_Range
// il2cpp: float CustomLogic_CustomLogicLightBuiltin__get_Range (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x40eb0d0

float CustomLogic_CustomLogicLightBuiltin__get_Range
                (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  int32_t value;
  CustomLogic_CustomLogicLightBuiltin_o *__this_01;
  float fVar3;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  UnityEngine_Color_o UVar4;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    fVar3 = UnityEngine_Light__get_range(pUVar2,(MethodInfo *)0x0);
    return fVar3;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_range(pUVar2,fVar3,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    fVar3 = UnityEngine_Light__get_spotAngle(pUVar2,(MethodInfo *)0x0);
    return fVar3;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_spotAngle(pUVar2,fVar3,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = __this;
  if (g_data_057ac74b == '\0') {
    __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac74b = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UVar4 = UnityEngine_Light__get_color(pUVar2,(MethodInfo *)0x0);
    __this_00 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(__this_00,UVar4,(MethodInfo *)0x0);
    return extraout_XMM0_Da_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     ((method != (MethodInfo *)0x0 &&
      (__this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)method->parameters,
      __this_01 != (CustomLogic_CustomLogicLightBuiltin_o *)0x0)))) {
    pUVar2 = (pMVar1->fields).Light;
    method = (MethodInfo *)0x0;
    UVar4 = Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_color(pUVar2,UVar4,(MethodInfo *)0x0);
      return extraout_XMM0_Da_02;
    }
  }
  value = (int32_t)method;
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if (pMVar1 != (Map_MapLight_o *)0x0) {
    return (pMVar1->fields).MaxIntensity;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if (pMVar1 != (Map_MapLight_o *)0x0) {
    (pMVar1->fields).MaxIntensity = fVar3;
    return fVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    fVar3 = UnityEngine_Light__get_bounceIntensity(pUVar2,(MethodInfo *)0x0);
    return fVar3;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,fVar3,(MethodInfo *)0x0);
    return extraout_XMM0_Da_03;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da_04;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,value,(MethodInfo *)0x0);
    return extraout_XMM0_Da_05;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    fVar3 = UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    return fVar3;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar3,(MethodInfo *)0x0);
    return extraout_XMM0_Da_06;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  return fVar3;
}


// CustomLogic.CustomLogicLightBuiltin$$set_Range
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_Range (CustomLogic_CustomLogicLightBuiltin_o* __this, float value, const MethodInfo* method);
// 0x40eb0f0

void CustomLogic_CustomLogicLightBuiltin__set_Range
               (CustomLogic_CustomLogicLightBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  int32_t value_00;
  CustomLogic_CustomLogicLightBuiltin_o *__this_01;
  float fVar3;
  UnityEngine_Color_o UVar4;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_range(pUVar2,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_spotAngle(pUVar2,(MethodInfo *)0x0);
    return;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_spotAngle(pUVar2,fVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = __this;
  if (g_data_057ac74b == '\0') {
    __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac74b = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UVar4 = UnityEngine_Light__get_color(pUVar2,(MethodInfo *)0x0);
    __this_00 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(__this_00,UVar4,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     ((method != (MethodInfo *)0x0 &&
      (__this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)method->parameters,
      __this_01 != (CustomLogic_CustomLogicLightBuiltin_o *)0x0)))) {
    pUVar2 = (pMVar1->fields).Light;
    method = (MethodInfo *)0x0;
    UVar4 = Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_color(pUVar2,UVar4,(MethodInfo *)0x0);
      return;
    }
  }
  value_00 = (int32_t)method;
  il2cpp_runtime_helper_022b2c90();
  if ((__this_01->fields).Value != (Map_MapLight_o *)0x0) {
    return;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if (pMVar1 != (Map_MapLight_o *)0x0) {
    (pMVar1->fields).MaxIntensity = fVar3;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_bounceIntensity(pUVar2,(MethodInfo *)0x0);
    return;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,fVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,value_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    return;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$get_SpotAngle
// il2cpp: float CustomLogic_CustomLogicLightBuiltin__get_SpotAngle (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x40eb110

float CustomLogic_CustomLogicLightBuiltin__get_SpotAngle
                (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  int32_t value;
  CustomLogic_CustomLogicLightBuiltin_o *__this_01;
  float fVar3;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  UnityEngine_Color_o UVar4;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    fVar3 = UnityEngine_Light__get_spotAngle(pUVar2,(MethodInfo *)0x0);
    return fVar3;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_spotAngle(pUVar2,fVar3,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = __this;
  if (g_data_057ac74b == '\0') {
    __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac74b = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UVar4 = UnityEngine_Light__get_color(pUVar2,(MethodInfo *)0x0);
    __this_00 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(__this_00,UVar4,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     ((method != (MethodInfo *)0x0 &&
      (__this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)method->parameters,
      __this_01 != (CustomLogic_CustomLogicLightBuiltin_o *)0x0)))) {
    pUVar2 = (pMVar1->fields).Light;
    method = (MethodInfo *)0x0;
    UVar4 = Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_color(pUVar2,UVar4,(MethodInfo *)0x0);
      return extraout_XMM0_Da_01;
    }
  }
  value = (int32_t)method;
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if (pMVar1 != (Map_MapLight_o *)0x0) {
    return (pMVar1->fields).MaxIntensity;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if (pMVar1 != (Map_MapLight_o *)0x0) {
    (pMVar1->fields).MaxIntensity = fVar3;
    return fVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    fVar3 = UnityEngine_Light__get_bounceIntensity(pUVar2,(MethodInfo *)0x0);
    return fVar3;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,fVar3,(MethodInfo *)0x0);
    return extraout_XMM0_Da_02;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da_03;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,value,(MethodInfo *)0x0);
    return extraout_XMM0_Da_04;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    fVar3 = UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    return fVar3;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar3,(MethodInfo *)0x0);
    return extraout_XMM0_Da_05;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  return fVar3;
}


// CustomLogic.CustomLogicLightBuiltin$$set_SpotAngle
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_SpotAngle (CustomLogic_CustomLogicLightBuiltin_o* __this, float value, const MethodInfo* method);
// 0x40eb130

void CustomLogic_CustomLogicLightBuiltin__set_SpotAngle
               (CustomLogic_CustomLogicLightBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  int32_t value_00;
  CustomLogic_CustomLogicLightBuiltin_o *__this_01;
  float fVar3;
  UnityEngine_Color_o UVar4;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_spotAngle(pUVar2,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = __this;
  if (g_data_057ac74b == '\0') {
    __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac74b = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UVar4 = UnityEngine_Light__get_color(pUVar2,(MethodInfo *)0x0);
    __this_00 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(__this_00,UVar4,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     ((method != (MethodInfo *)0x0 &&
      (__this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)method->parameters,
      __this_01 != (CustomLogic_CustomLogicLightBuiltin_o *)0x0)))) {
    pUVar2 = (pMVar1->fields).Light;
    method = (MethodInfo *)0x0;
    UVar4 = Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_color(pUVar2,UVar4,(MethodInfo *)0x0);
      return;
    }
  }
  value_00 = (int32_t)method;
  il2cpp_runtime_helper_022b2c90();
  if ((__this_01->fields).Value != (Map_MapLight_o *)0x0) {
    return;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if (pMVar1 != (Map_MapLight_o *)0x0) {
    (pMVar1->fields).MaxIntensity = fVar3;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_bounceIntensity(pUVar2,(MethodInfo *)0x0);
    return;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,fVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,value_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_01 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    return;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_01->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$get_Color
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicLightBuiltin__get_Color (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x40eb150

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicLightBuiltin__get_Color
          (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  int32_t iVar3;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar4;
  CustomLogic_CustomLogicColorBuiltin_o *extraout_RAX;
  CustomLogic_CustomLogicColorBuiltin_o *extraout_RAX_00;
  CustomLogic_CustomLogicColorBuiltin_o *extraout_RAX_01;
  undefined4 extraout_var;
  CustomLogic_CustomLogicColorBuiltin_o *extraout_RAX_02;
  CustomLogic_CustomLogicColorBuiltin_o *extraout_RAX_03;
  CustomLogic_CustomLogicColorBuiltin_o *extraout_RAX_04;
  undefined8 uVar5;
  CustomLogic_CustomLogicLightBuiltin_o *__this_00;
  float extraout_XMM0_Da;
  float fVar6;
  UnityEngine_Color_o UVar7;
  
  __this_00 = __this;
  if (g_data_057ac74b == '\0') {
    __this_00 = (CustomLogic_CustomLogicLightBuiltin_o *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac74b = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_00 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UVar7 = UnityEngine_Light__get_color(pUVar2,(MethodInfo *)0x0);
    pCVar4 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar4,UVar7,(MethodInfo *)0x0);
    return pCVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_00->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     ((method != (MethodInfo *)0x0 &&
      (__this_00 = (CustomLogic_CustomLogicLightBuiltin_o *)method->parameters,
      __this_00 != (CustomLogic_CustomLogicLightBuiltin_o *)0x0)))) {
    pUVar2 = (pMVar1->fields).Light;
    method = (MethodInfo *)0x0;
    UVar7 = Utility_Color255__ToColor((Utility_Color255_o *)__this_00,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_color(pUVar2,UVar7,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  iVar3 = (int32_t)method;
  pCVar4 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_022b2c90();
  if ((__this_00->fields).Value != (Map_MapLight_o *)0x0) {
    return pCVar4;
  }
  pCVar4 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_00->fields).Value;
  if (pMVar1 != (Map_MapLight_o *)0x0) {
    (pMVar1->fields).MaxIntensity = extraout_XMM0_Da;
    return pCVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_00->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_00 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_bounceIntensity(pUVar2,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  fVar6 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_00->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_00 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,fVar6,(MethodInfo *)0x0);
    return extraout_RAX_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_00->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_00 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    iVar3 = UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicColorBuiltin_o *)CONCAT44(extraout_var,iVar3);
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_00->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_00 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,iVar3,(MethodInfo *)0x0);
    return extraout_RAX_02;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_00->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_00 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    return extraout_RAX_03;
  }
  fVar6 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this_00->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this_00 = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar6,(MethodInfo *)0x0);
    return extraout_RAX_04;
  }
  uVar5 = il2cpp_runtime_helper_022b2c90();
  return (CustomLogic_CustomLogicColorBuiltin_o *)
         CONCAT71((int7)((ulong)uVar5 >> 8),(char)(__this_00->fields)._weatherControlled);
}


// CustomLogic.CustomLogicLightBuiltin$$set_Color
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_Color (CustomLogic_CustomLogicLightBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* value, const MethodInfo* method);
// 0x40eb1d0

void CustomLogic_CustomLogicLightBuiltin__set_Color
               (CustomLogic_CustomLogicLightBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *value,
               MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  int32_t value_00;
  float fVar3;
  UnityEngine_Color_o value_01;
  
  pMVar1 = (__this->fields).Value;
  if (((pMVar1 != (Map_MapLight_o *)0x0) && (value != (CustomLogic_CustomLogicColorBuiltin_o *)0x0)) &&
     (__this = (CustomLogic_CustomLogicLightBuiltin_o *)(value->fields).Value,
     __this != (CustomLogic_CustomLogicLightBuiltin_o *)0x0)) {
    pUVar2 = (pMVar1->fields).Light;
    value = (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
    value_01 = Utility_Color255__ToColor((Utility_Color255_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_color(pUVar2,value_01,(MethodInfo *)0x0);
      return;
    }
  }
  value_00 = (int32_t)value;
  il2cpp_runtime_helper_022b2c90();
  if ((__this->fields).Value != (Map_MapLight_o *)0x0) {
    return;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapLight_o *)0x0) {
    (pMVar1->fields).MaxIntensity = fVar3;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_bounceIntensity(pUVar2,(MethodInfo *)0x0);
    return;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,fVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,value_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    return;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$get_Intensity
// il2cpp: float CustomLogic_CustomLogicLightBuiltin__get_Intensity (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x40eb210

float CustomLogic_CustomLogicLightBuiltin__get_Intensity
                (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  int32_t value;
  float fVar3;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  
  value = (int32_t)method;
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapLight_o *)0x0) {
    return (pMVar1->fields).MaxIntensity;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapLight_o *)0x0) {
    (pMVar1->fields).MaxIntensity = fVar3;
    return fVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    fVar3 = UnityEngine_Light__get_bounceIntensity(pUVar2,(MethodInfo *)0x0);
    return fVar3;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,fVar3,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,value,(MethodInfo *)0x0);
    return extraout_XMM0_Da_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    fVar3 = UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    return fVar3;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar3,(MethodInfo *)0x0);
    return extraout_XMM0_Da_02;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  return fVar3;
}


// CustomLogic.CustomLogicLightBuiltin$$set_Intensity
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_Intensity (CustomLogic_CustomLogicLightBuiltin_o* __this, float value, const MethodInfo* method);
// 0x40eb230

void CustomLogic_CustomLogicLightBuiltin__set_Intensity
               (CustomLogic_CustomLogicLightBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  int32_t value_00;
  float fVar3;
  
  value_00 = (int32_t)method;
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapLight_o *)0x0) {
    (pMVar1->fields).MaxIntensity = value;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_bounceIntensity(pUVar2,(MethodInfo *)0x0);
    return;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,fVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,value_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    return;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$get_BounceIntensity
// il2cpp: float CustomLogic_CustomLogicLightBuiltin__get_BounceIntensity (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x40eb250

float CustomLogic_CustomLogicLightBuiltin__get_BounceIntensity
                (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  int32_t value;
  float fVar3;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  
  value = (int32_t)method;
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    fVar3 = UnityEngine_Light__get_bounceIntensity(pUVar2,(MethodInfo *)0x0);
    return fVar3;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,fVar3,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,value,(MethodInfo *)0x0);
    return extraout_XMM0_Da_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    fVar3 = UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    return fVar3;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar3,(MethodInfo *)0x0);
    return extraout_XMM0_Da_02;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  return fVar3;
}


// CustomLogic.CustomLogicLightBuiltin$$set_BounceIntensity
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_BounceIntensity (CustomLogic_CustomLogicLightBuiltin_o* __this, float value, const MethodInfo* method);
// 0x40eb270

void CustomLogic_CustomLogicLightBuiltin__set_BounceIntensity
               (CustomLogic_CustomLogicLightBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  int32_t value_00;
  float value_01;
  
  value_00 = (int32_t)method;
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(pUVar2,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,value_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    return;
  }
  value_01 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,value_01,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$get_ShadowType
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowType (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x40eb290

int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowType
                  (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  int32_t iVar3;
  int32_t extraout_EAX;
  int32_t extraout_EAX_00;
  int32_t extraout_EAX_01;
  undefined8 uVar4;
  float value;
  
  iVar3 = (int32_t)method;
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    iVar3 = UnityEngine_Light__get_shadows(pUVar2,(MethodInfo *)0x0);
    return iVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,iVar3,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    return extraout_EAX_00;
  }
  value = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,value,(MethodInfo *)0x0);
    return extraout_EAX_01;
  }
  uVar4 = il2cpp_runtime_helper_022b2c90();
  return (int32_t)CONCAT71((int7)((ulong)uVar4 >> 8),(char)(__this->fields)._weatherControlled);
}


// CustomLogic.CustomLogicLightBuiltin$$set_ShadowType
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_ShadowType (CustomLogic_CustomLogicLightBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x40eb2b0

void CustomLogic_CustomLogicLightBuiltin__set_ShadowType
               (CustomLogic_CustomLogicLightBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  float value_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(pUVar2,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    return;
  }
  value_00 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,value_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$get_ShadowStrength
// il2cpp: float CustomLogic_CustomLogicLightBuiltin__get_ShadowStrength (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x40eb2d0

float CustomLogic_CustomLogicLightBuiltin__get_ShadowStrength
                (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  float fVar3;
  float extraout_XMM0_Da;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, __this = (CustomLogic_CustomLogicLightBuiltin_o *)0x0,
     pUVar2 != (UnityEngine_Light_o *)0x0)) {
    fVar3 = UnityEngine_Light__get_shadowStrength(pUVar2,(MethodInfo *)0x0);
    return fVar3;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(pUVar2,fVar3,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  return fVar3;
}


// CustomLogic.CustomLogicLightBuiltin$$set_ShadowStrength
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_ShadowStrength (CustomLogic_CustomLogicLightBuiltin_o* __this, float value, const MethodInfo* method);
// 0x40eb2f0

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
  il2cpp_runtime_helper_022b2c90();
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$get_WeatherControlled
// il2cpp: bool CustomLogic_CustomLogicLightBuiltin__get_WeatherControlled (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x40eb310

bool_conflict
CustomLogic_CustomLogicLightBuiltin__get_WeatherControlled
          (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._weatherControlled);
}


// CustomLogic.CustomLogicLightBuiltin$$set_WeatherControlled
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled (CustomLogic_CustomLogicLightBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x40eb320

void CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled
               (CustomLogic_CustomLogicLightBuiltin_o *__this,bool_conflict value,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Map_MapLight_o *pMVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  UnityEngine_Light_o *item;
  System_Object_array *pSVar5;
  long lVar6;
  bool_conflict bVar7;
  
  if (g_data_057ac74c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac74c = '\x01';
  }
  *(char *)&(__this->fields)._weatherControlled = (char)value;
  if ((char)value == '\0') {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar3 = (__this->fields).Value;
    if ((pMVar3 != (Map_MapLight_o *)0x0) &&
       (pSVar4 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x28),
       pSVar4 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___Remove
                (pSVar4,(Il2CppObject *)(pMVar3->fields).Light,MethodInfo_Boolean_Remove);
      return;
    }
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar3 = (__this->fields).Value;
    if ((pMVar3 != (Map_MapLight_o *)0x0) &&
       (pSVar4 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x28),
       pSVar4 != (System_Collections_Generic_List_object__o *)0x0)) {
      bVar7 = System_Collections_Generic_List_object___Contains
                        (pSVar4,(Il2CppObject *)(pMVar3->fields).Light,MethodInfo_Boolean_Contains);
      if ((char)bVar7 != '\0') {
        return;
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar6 = MethodInfo_Void_Add;
      pMVar3 = (__this->fields).Value;
      if ((pMVar3 != (Map_MapLight_o *)0x0) &&
         (pSVar4 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x28),
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
            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2);
            return;
          }
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar4,(Il2CppObject *)item,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac74d == '\0') {
    il2cpp_runtime_helper_023445d0(&"LightBuiltin");
    g_data_057ac74d = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLightBuiltin__get_ClassName (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x40eb4a0

System_String_o *
CustomLogic_CustomLogicLightBuiltin__get_ClassName
          (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ac74d == '\0') {
    il2cpp_runtime_helper_023445d0(&"LightBuiltin");
    g_data_057ac74d = '\x01';
  }
  return "LightBuiltin";
}


// CustomLogic.CustomLogicLightBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLightBuiltin__get_IsAbstract (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x40eb4d0

bool_conflict
CustomLogic_CustomLogicLightBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLightBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLightBuiltin__get_IsStatic (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x40eb4e0

bool_conflict
CustomLogic_CustomLogicLightBuiltin__get_IsStatic
          (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLightBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLightBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x40eb4f0

bool_conflict
CustomLogic_CustomLogicLightBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


