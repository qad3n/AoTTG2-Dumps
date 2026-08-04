// Type: CustomLogic.CustomLogicSpecialEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicSpecialEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicSpecialEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicSpecialEnum_o* CustomLogic_CustomLogicSpecialEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41994f0

CustomLogic_CustomLogicSpecialEnum_o *
CustomLogic_CustomLogicSpecialEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  uint32_t uVar1;
  bool_conflict bVar2;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  undefined8 uVar5;
  System_ArgumentException_o *__this_00;
  undefined8 *puVar6;
  System_ArgumentException_o *pSVar7;
  System_Func_T__object__o *pSVar8;
  CustomLogic_CustomLogicSpecialEnum_o *pCVar9;
  undefined8 **ppuVar10;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad336 == '\0') {
    pSStack_20 = (System_String_o *)0x419950c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSpecialEnum);
    g_data_057ad336 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4199587;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4199536;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSpecialEnum);
    if (g_data_057ad31f == '\0') {
      pSStack_20 = (System_String_o *)0x419954e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad31f = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x419956d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4199577;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicSpecialEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x419958f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x41995a2;
  pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41995b1;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicSpecialEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x41995c0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x41995d0;
  pSVar3 = System_String__Concat_3af7150(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41995df;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x41995e7;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSStack_20 = (System_String_o *)0x41995f7;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar3,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4199603;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSpecialEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x419960e;
  pSVar7 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar3;
  if (g_data_057ad337 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Eren");
    il2cpp_runtime_helper_023445d0(&"BladeThrow");
    il2cpp_runtime_helper_023445d0(&"Smell");
    il2cpp_runtime_helper_023445d0(&"Spin3");
    il2cpp_runtime_helper_023445d0(&"Escape");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Spin2");
    il2cpp_runtime_helper_023445d0(&"Annie");
    il2cpp_runtime_helper_023445d0(&"Dance");
    il2cpp_runtime_helper_023445d0(&"Distract");
    il2cpp_runtime_helper_023445d0(&"Confuse");
    il2cpp_runtime_helper_023445d0(&"Switchback");
    il2cpp_runtime_helper_023445d0(&"SmokeBomb");
    il2cpp_runtime_helper_023445d0(&"Armored");
    il2cpp_runtime_helper_023445d0(&"Spin1");
    il2cpp_runtime_helper_023445d0(&"Potato");
    il2cpp_runtime_helper_023445d0(&"Carry");
    il2cpp_runtime_helper_023445d0(&"DownStrike");
    il2cpp_runtime_helper_023445d0(&"Stock");
    il2cpp_runtime_helper_023445d0(&"Supply");
    il2cpp_runtime_helper_023445d0(&"AHSSTwinShot");
    g_data_057ad337 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar7,(MethodInfo *)0x0);
  if (uVar1 < 0x50d88c80) {
    if (uVar1 < 0x132fe373) {
      if (uVar1 < 0x23f06bf) {
        if (uVar1 == 0x3f0398) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Spin1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad343 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Spin1_g____getter_13_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
              g_data_057ad343 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicSpecialEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x23f06be) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Spin3",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad345 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Spin3_g____getter_15_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
              g_data_057ad345 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicSpecialEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x33f0851) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Spin2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad344 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Spin2_g____getter_14_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
            g_data_057ad344 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicSpecialEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0xfb12e57) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Distract",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad33b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Distract_g____getter_5_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
            g_data_057ad33b = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicSpecialEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x132fe372) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Potato",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          ppuVar10 = (undefined8 **)&uStack_18;
          pSVar7 = pSStack_28;
          pSVar3 = pSStack_20;
          goto CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Potato;
        }
      }
    }
    else if (uVar1 < 0x27e47193) {
      if (uVar1 == 0x184b43d0) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Carry",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad33f == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Carry_g____getter_9_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
            g_data_057ad33f = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicSpecialEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x27e47192) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Annie",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad34b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Annie_g____getter_21_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
            g_data_057ad34b = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicSpecialEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 == 0x2ab69de5) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Armored",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad34c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Armored_g____getter_22_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
          g_data_057ad34c = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicSpecialEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x304ff7fb) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"None",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad349 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__None_g____getter_19_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
          g_data_057ad349 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicSpecialEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x50d88c7f) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"DownStrike",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad342 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DownStrike_g____getter_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
          g_data_057ad342 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicSpecialEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0x9d6edc06) {
    if (uVar1 < 0x67c7f536) {
      if (uVar1 == 0x548b671e) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Switchback",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad340 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Switchback_g____getter_1);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
            g_data_057ad340 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicSpecialEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x67c7f535) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Stock",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad348 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stock_g____getter_18_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
            g_data_057ad348 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicSpecialEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 == 0x8d87a40b) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeThrow",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad346 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeThrow_g____getter_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
          g_data_057ad346 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicSpecialEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x960fb720) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Smell",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad33c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Smell_g____getter_6_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
          g_data_057ad33c = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicSpecialEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x9d6edc05) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Eren",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad34a == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Eren_g____getter_20_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
          g_data_057ad34a = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicSpecialEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xb7bb7227) {
    if (uVar1 == 0x9fc581fa) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SmokeBomb",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad33e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SmokeBomb_g____getter_8);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
          g_data_057ad33e = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicSpecialEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xa499f21e) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Confuse",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad341 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Confuse_g____getter_11_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
          g_data_057ad341 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicSpecialEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xb7bb7226) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Escape",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad339 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Escape_g____getter_3_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
          g_data_057ad339 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicSpecialEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 == 0xc7ef102c) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSTwinShot",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad347 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSTwinShot_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
        g_data_057ad347 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicSpecialEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
      return pCVar9;
    }
  }
  else if (uVar1 == 0xca0fab3c) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Dance",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad33a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dance_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
        g_data_057ad33a = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicSpecialEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
      return pCVar9;
    }
  }
  else if (uVar1 == 0xdba7f44e) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Supply",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad33d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Supply_g____getter_7_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
        g_data_057ad33d = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicSpecialEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
      return pCVar9;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicSpecialEnum not found");
  pSVar3 = System_String__Concat_3af7150(pSVar3,(System_String_o *)pSVar7,pSVar4,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,pSVar3,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar7,uVar5);
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Potato:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar3;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar7;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar6;
  if (g_data_057ad338 == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4199e29;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Potato_g____getter_2_0);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4199e35;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4199e41;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4199e4d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad338 = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4199e63;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4199e7c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4199e8b;
  pCVar9 = (CustomLogic_CustomLogicSpecialEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4199ea5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return pCVar9;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicSpecialEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4199610

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicSpecialEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  uint32_t uVar1;
  bool_conflict bVar2;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar3;
  undefined8 *puVar4;
  System_Func_T__object__o *pSVar5;
  CustomLogic_CLPropertyBinding_T__o *pCVar6;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 *puStack_18;
  
  if (g_data_057ad337 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Eren");
    il2cpp_runtime_helper_023445d0(&"BladeThrow");
    il2cpp_runtime_helper_023445d0(&"Smell");
    il2cpp_runtime_helper_023445d0(&"Spin3");
    il2cpp_runtime_helper_023445d0(&"Escape");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Spin2");
    il2cpp_runtime_helper_023445d0(&"Annie");
    il2cpp_runtime_helper_023445d0(&"Dance");
    il2cpp_runtime_helper_023445d0(&"Distract");
    il2cpp_runtime_helper_023445d0(&"Confuse");
    il2cpp_runtime_helper_023445d0(&"Switchback");
    il2cpp_runtime_helper_023445d0(&"SmokeBomb");
    il2cpp_runtime_helper_023445d0(&"Armored");
    il2cpp_runtime_helper_023445d0(&"Spin1");
    il2cpp_runtime_helper_023445d0(&"Potato");
    il2cpp_runtime_helper_023445d0(&"Carry");
    il2cpp_runtime_helper_023445d0(&"DownStrike");
    il2cpp_runtime_helper_023445d0(&"Stock");
    il2cpp_runtime_helper_023445d0(&"Supply");
    il2cpp_runtime_helper_023445d0(&"AHSSTwinShot");
    g_data_057ad337 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x50d88c80) {
    if (uVar1 < 0x132fe373) {
      if (uVar1 < 0x23f06bf) {
        if (uVar1 == 0x3f0398) {
          bVar2 = System_String__op_Equality(name,"Spin1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad343 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Spin1_g____getter_13_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
              g_data_057ad343 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x23f06be) &&
                (bVar2 = System_String__op_Equality(name,"Spin3",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad345 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Spin3_g____getter_15_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
            g_data_057ad345 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x33f0851) {
        bVar2 = System_String__op_Equality(name,"Spin2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad344 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Spin2_g____getter_14_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
            g_data_057ad344 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xfb12e57) {
        bVar2 = System_String__op_Equality(name,"Distract",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad33b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Distract_g____getter_5_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
            g_data_057ad33b = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x132fe372) &&
              (bVar2 = System_String__op_Equality(name,"Potato",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puVar4 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar4 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        goto CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Potato;
      }
    }
    else if (uVar1 < 0x27e47193) {
      if (uVar1 == 0x184b43d0) {
        bVar2 = System_String__op_Equality(name,"Carry",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad33f == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Carry_g____getter_9_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
            g_data_057ad33f = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x27e47192) &&
              (bVar2 = System_String__op_Equality(name,"Annie",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad34b == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Annie_g____getter_21_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
          g_data_057ad34b = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x2ab69de5) {
      bVar2 = System_String__op_Equality(name,"Armored",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad34c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Armored_g____getter_22_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
          g_data_057ad34c = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x304ff7fb) {
      bVar2 = System_String__op_Equality(name,"None",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad349 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__None_g____getter_19_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
          g_data_057ad349 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x50d88c7f) &&
            (bVar2 = System_String__op_Equality(name,"DownStrike",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad342 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DownStrike_g____getter_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
        g_data_057ad342 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x9d6edc06) {
    if (uVar1 < 0x67c7f536) {
      if (uVar1 == 0x548b671e) {
        bVar2 = System_String__op_Equality(name,"Switchback",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad340 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Switchback_g____getter_1);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
            g_data_057ad340 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x67c7f535) &&
              (bVar2 = System_String__op_Equality(name,"Stock",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad348 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stock_g____getter_18_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
          g_data_057ad348 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x8d87a40b) {
      bVar2 = System_String__op_Equality(name,"BladeThrow",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad346 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeThrow_g____getter_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
          g_data_057ad346 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x960fb720) {
      bVar2 = System_String__op_Equality(name,"Smell",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad33c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Smell_g____getter_6_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
          g_data_057ad33c = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x9d6edc05) &&
            (bVar2 = System_String__op_Equality(name,"Eren",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad34a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Eren_g____getter_20_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
        g_data_057ad34a = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xb7bb7227) {
    if (uVar1 == 0x9fc581fa) {
      bVar2 = System_String__op_Equality(name,"SmokeBomb",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad33e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SmokeBomb_g____getter_8);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
          g_data_057ad33e = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xa499f21e) {
      bVar2 = System_String__op_Equality(name,"Confuse",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad341 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Confuse_g____getter_11_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
          g_data_057ad341 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xb7bb7226) &&
            (bVar2 = System_String__op_Equality(name,"Escape",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad339 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Escape_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
        g_data_057ad339 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xc7ef102c) {
    bVar2 = System_String__op_Equality(name,"AHSSTwinShot",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad347 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSTwinShot_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
        g_data_057ad347 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xca0fab3c) {
    bVar2 = System_String__op_Equality(name,"Dance",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad33a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dance_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
        g_data_057ad33a = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xdba7f44e) &&
          (bVar2 = System_String__op_Equality(name,"Supply",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ad33d == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Supply_g____getter_7_0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
      g_data_057ad33d = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
    System_Func_object__object____ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicSpecialEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Potato:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar4;
  if (g_data_057ad338 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4199e29;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Potato_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4199e35;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4199e41;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4199e4d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad338 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4199e63;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4199e7c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4199e8b;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4199ea5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Potato
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Potato (const MethodInfo* method);
// 0x4199e10

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Potato(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (g_data_057ad338 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Potato_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad338 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Escape
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Escape (const MethodInfo* method);
// 0x4199eb0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Escape(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (g_data_057ad339 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Escape_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad339 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Dance
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Dance (const MethodInfo* method);
// 0x4199f50

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Dance(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (g_data_057ad33a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dance_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad33a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Distract
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Distract (const MethodInfo* method);
// 0x4199ff0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Distract(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (g_data_057ad33b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Distract_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad33b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Smell
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Smell (const MethodInfo* method);
// 0x419a090

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Smell(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (g_data_057ad33c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Smell_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad33c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Supply
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Supply (const MethodInfo* method);
// 0x419a130

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Supply(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (g_data_057ad33d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Supply_g____getter_7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad33d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__SmokeBomb
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__SmokeBomb (const MethodInfo* method);
// 0x419a1d0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__SmokeBomb(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (g_data_057ad33e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SmokeBomb_g____getter_8);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad33e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Carry
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Carry (const MethodInfo* method);
// 0x419a270

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Carry(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (g_data_057ad33f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Carry_g____getter_9_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad33f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Switchback
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Switchback (const MethodInfo* method);
// 0x419a310

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Switchback(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (g_data_057ad340 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Switchback_g____getter_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad340 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Confuse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Confuse (const MethodInfo* method);
// 0x419a3b0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Confuse(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (g_data_057ad341 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Confuse_g____getter_11_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad341 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__DownStrike
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__DownStrike (const MethodInfo* method);
// 0x419a450

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__DownStrike(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (g_data_057ad342 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DownStrike_g____getter_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad342 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Spin1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Spin1 (const MethodInfo* method);
// 0x419a4f0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Spin1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (g_data_057ad343 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Spin1_g____getter_13_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad343 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Spin2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Spin2 (const MethodInfo* method);
// 0x419a590

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Spin2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (g_data_057ad344 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Spin2_g____getter_14_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad344 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Spin3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Spin3 (const MethodInfo* method);
// 0x419a630

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Spin3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (g_data_057ad345 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Spin3_g____getter_15_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad345 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__BladeThrow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__BladeThrow (const MethodInfo* method);
// 0x419a6d0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__BladeThrow(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (g_data_057ad346 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeThrow_g____getter_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad346 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__AHSSTwinShot
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__AHSSTwinShot (const MethodInfo* method);
// 0x419a770

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__AHSSTwinShot(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (g_data_057ad347 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSTwinShot_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad347 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Stock
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Stock (const MethodInfo* method);
// 0x419a810

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Stock(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (g_data_057ad348 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stock_g____getter_18_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad348 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__None
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__None (const MethodInfo* method);
// 0x419a8b0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__None(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (g_data_057ad349 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__None_g____getter_19_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad349 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Eren
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Eren (const MethodInfo* method);
// 0x419a950

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Eren(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (g_data_057ad34a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Eren_g____getter_20_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad34a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Annie
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Annie (const MethodInfo* method);
// 0x419a9f0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Annie(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (g_data_057ad34b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Annie_g____getter_21_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad34b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Armored
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Armored (const MethodInfo* method);
// 0x419aa90

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Armored(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this;
  
  if (g_data_057ad34c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Armored_g____getter_22_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSpecialEnum_object);
    g_data_057ad34c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSpecialEnum);
  return __this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicSpecialEnum_Bindings___cctor (const MethodInfo* method);
// 0x419ab30

void CustomLogic_CustomLogicSpecialEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ad34d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Eren");
    il2cpp_runtime_helper_023445d0(&"BladeThrow");
    il2cpp_runtime_helper_023445d0(&"Smell");
    il2cpp_runtime_helper_023445d0(&"Spin3");
    il2cpp_runtime_helper_023445d0(&"Escape");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Spin2");
    il2cpp_runtime_helper_023445d0(&"Annie");
    il2cpp_runtime_helper_023445d0(&"Dance");
    il2cpp_runtime_helper_023445d0(&"Distract");
    il2cpp_runtime_helper_023445d0(&"Confuse");
    il2cpp_runtime_helper_023445d0(&"Switchback");
    il2cpp_runtime_helper_023445d0(&"SmokeBomb");
    il2cpp_runtime_helper_023445d0(&"Armored");
    il2cpp_runtime_helper_023445d0(&"Spin1");
    il2cpp_runtime_helper_023445d0(&"Potato");
    il2cpp_runtime_helper_023445d0(&"Carry");
    il2cpp_runtime_helper_023445d0(&"DownStrike");
    il2cpp_runtime_helper_023445d0(&"Stock");
    il2cpp_runtime_helper_023445d0(&"Supply");
    il2cpp_runtime_helper_023445d0(&"AHSSTwinShot");
    g_data_057ad34d = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Potato",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Escape",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Dance",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Distract",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Smell",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Supply",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SmokeBomb",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Carry",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Switchback",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Confuse",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"DownStrike",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Spin1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Spin2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Spin3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BladeThrow",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSTwinShot",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Stock",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"None",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Eren",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Annie",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Armored",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad320 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Potato");
    g_data_057ad320 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Potato>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Potato_g____getter_2_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x419aea0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Potato_g____getter_2_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad320 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Potato");
    g_data_057ad320 = '\x01';
  }
  return "Potato";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Escape>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Escape_g____getter_3_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x419aed0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Escape_g____getter_3_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad321 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Escape");
    g_data_057ad321 = '\x01';
  }
  return "Escape";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Dance>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Dance_g____getter_4_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x419af00

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Dance_g____getter_4_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad322 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Dance");
    g_data_057ad322 = '\x01';
  }
  return "Dance";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Distract>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Distract_g____getter_5_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x419af30

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Distract_g____getter_5_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad323 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Distract");
    g_data_057ad323 = '\x01';
  }
  return "Distract";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Smell>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Smell_g____getter_6_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x419af60

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Smell_g____getter_6_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad324 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Smell");
    g_data_057ad324 = '\x01';
  }
  return "Smell";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Supply>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Supply_g____getter_7_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x419af90

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Supply_g____getter_7_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad325 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Supply");
    g_data_057ad325 = '\x01';
  }
  return "Supply";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__SmokeBomb>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__SmokeBomb_g____getter_8_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x419afc0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__SmokeBomb_g____getter_8_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad326 == '\0') {
    il2cpp_runtime_helper_023445d0(&"SmokeBomb");
    g_data_057ad326 = '\x01';
  }
  return "SmokeBomb";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Carry>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Carry_g____getter_9_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x419aff0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Carry_g____getter_9_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad327 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Carry");
    g_data_057ad327 = '\x01';
  }
  return "Carry";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Switchback>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Switchback_g____getter_10_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x419b020

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Switchback_g____getter_10_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad328 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Switchback");
    g_data_057ad328 = '\x01';
  }
  return "Switchback";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Confuse>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Confuse_g____getter_11_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x419b050

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Confuse_g____getter_11_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad329 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Confuse");
    g_data_057ad329 = '\x01';
  }
  return "Confuse";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__DownStrike>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__DownStrike_g____getter_12_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x419b080

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__DownStrike_g____getter_12_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad32a == '\0') {
    il2cpp_runtime_helper_023445d0(&"DownStrike");
    g_data_057ad32a = '\x01';
  }
  return "DownStrike";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Spin1>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Spin1_g____getter_13_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x419b0b0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Spin1_g____getter_13_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad32b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Spin1");
    g_data_057ad32b = '\x01';
  }
  return "Spin1";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Spin2>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Spin2_g____getter_14_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x419b0e0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Spin2_g____getter_14_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad32c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Spin2");
    g_data_057ad32c = '\x01';
  }
  return "Spin2";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Spin3>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Spin3_g____getter_15_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x419b110

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Spin3_g____getter_15_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad32d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Spin3");
    g_data_057ad32d = '\x01';
  }
  return "Spin3";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__BladeThrow>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__BladeThrow_g____getter_16_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x419b140

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__BladeThrow_g____getter_16_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad32e == '\0') {
    il2cpp_runtime_helper_023445d0(&"BladeThrow");
    g_data_057ad32e = '\x01';
  }
  return "BladeThrow";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__AHSSTwinShot>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__AHSSTwinShot_g____getter_17_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x419b170

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__AHSSTwinShot_g____getter_17_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad32f == '\0') {
    il2cpp_runtime_helper_023445d0(&"AHSSTwinShot");
    g_data_057ad32f = '\x01';
  }
  return "AHSSTwinShot";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Stock>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Stock_g____getter_18_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x419b1a0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Stock_g____getter_18_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad330 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Stock");
    g_data_057ad330 = '\x01';
  }
  return "Stock";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__None>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__None_g____getter_19_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x419b1d0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__None_g____getter_19_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad331 == '\0') {
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ad331 = '\x01';
  }
  return "None";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Eren>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Eren_g____getter_20_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x419b200

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Eren_g____getter_20_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad332 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Eren");
    g_data_057ad332 = '\x01';
  }
  return "Eren";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Annie>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Annie_g____getter_21_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x419b230

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Annie_g____getter_21_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad333 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Annie");
    g_data_057ad333 = '\x01';
  }
  return "Annie";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Armored>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Armored_g____getter_22_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x419b260

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Armored_g____getter_22_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad334 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armored");
    g_data_057ad334 = '\x01';
  }
  return "Armored";
}


// CustomLogic.CustomLogicSpecialEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicSpecialEnum___ctor (CustomLogic_CustomLogicSpecialEnum_o* __this, const MethodInfo* method);
// 0x4199030

void CustomLogic_CustomLogicSpecialEnum___ctor
               (CustomLogic_CustomLogicSpecialEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad31f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad31f = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicSpecialEnum$$get_Potato
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Potato (const MethodInfo* method);
// 0x41990a0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Potato(MethodInfo *method)

{
  if (g_data_057ad320 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Potato");
    g_data_057ad320 = '\x01';
  }
  return "Potato";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Escape
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Escape (const MethodInfo* method);
// 0x41990d0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Escape(MethodInfo *method)

{
  if (g_data_057ad321 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Escape");
    g_data_057ad321 = '\x01';
  }
  return "Escape";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Dance
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Dance (const MethodInfo* method);
// 0x4199100

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Dance(MethodInfo *method)

{
  if (g_data_057ad322 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Dance");
    g_data_057ad322 = '\x01';
  }
  return "Dance";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Distract
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Distract (const MethodInfo* method);
// 0x4199130

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Distract(MethodInfo *method)

{
  if (g_data_057ad323 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Distract");
    g_data_057ad323 = '\x01';
  }
  return "Distract";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Smell
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Smell (const MethodInfo* method);
// 0x4199160

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Smell(MethodInfo *method)

{
  if (g_data_057ad324 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Smell");
    g_data_057ad324 = '\x01';
  }
  return "Smell";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Supply
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Supply (const MethodInfo* method);
// 0x4199190

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Supply(MethodInfo *method)

{
  if (g_data_057ad325 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Supply");
    g_data_057ad325 = '\x01';
  }
  return "Supply";
}


// CustomLogic.CustomLogicSpecialEnum$$get_SmokeBomb
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_SmokeBomb (const MethodInfo* method);
// 0x41991c0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_SmokeBomb(MethodInfo *method)

{
  if (g_data_057ad326 == '\0') {
    il2cpp_runtime_helper_023445d0(&"SmokeBomb");
    g_data_057ad326 = '\x01';
  }
  return "SmokeBomb";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Carry
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Carry (const MethodInfo* method);
// 0x41991f0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Carry(MethodInfo *method)

{
  if (g_data_057ad327 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Carry");
    g_data_057ad327 = '\x01';
  }
  return "Carry";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Switchback
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Switchback (const MethodInfo* method);
// 0x4199220

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Switchback(MethodInfo *method)

{
  if (g_data_057ad328 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Switchback");
    g_data_057ad328 = '\x01';
  }
  return "Switchback";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Confuse
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Confuse (const MethodInfo* method);
// 0x4199250

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Confuse(MethodInfo *method)

{
  if (g_data_057ad329 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Confuse");
    g_data_057ad329 = '\x01';
  }
  return "Confuse";
}


// CustomLogic.CustomLogicSpecialEnum$$get_DownStrike
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_DownStrike (const MethodInfo* method);
// 0x4199280

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_DownStrike(MethodInfo *method)

{
  if (g_data_057ad32a == '\0') {
    il2cpp_runtime_helper_023445d0(&"DownStrike");
    g_data_057ad32a = '\x01';
  }
  return "DownStrike";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Spin1
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Spin1 (const MethodInfo* method);
// 0x41992b0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Spin1(MethodInfo *method)

{
  if (g_data_057ad32b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Spin1");
    g_data_057ad32b = '\x01';
  }
  return "Spin1";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Spin2
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Spin2 (const MethodInfo* method);
// 0x41992e0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Spin2(MethodInfo *method)

{
  if (g_data_057ad32c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Spin2");
    g_data_057ad32c = '\x01';
  }
  return "Spin2";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Spin3
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Spin3 (const MethodInfo* method);
// 0x4199310

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Spin3(MethodInfo *method)

{
  if (g_data_057ad32d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Spin3");
    g_data_057ad32d = '\x01';
  }
  return "Spin3";
}


// CustomLogic.CustomLogicSpecialEnum$$get_BladeThrow
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_BladeThrow (const MethodInfo* method);
// 0x4199340

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_BladeThrow(MethodInfo *method)

{
  if (g_data_057ad32e == '\0') {
    il2cpp_runtime_helper_023445d0(&"BladeThrow");
    g_data_057ad32e = '\x01';
  }
  return "BladeThrow";
}


// CustomLogic.CustomLogicSpecialEnum$$get_AHSSTwinShot
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_AHSSTwinShot (const MethodInfo* method);
// 0x4199370

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_AHSSTwinShot(MethodInfo *method)

{
  if (g_data_057ad32f == '\0') {
    il2cpp_runtime_helper_023445d0(&"AHSSTwinShot");
    g_data_057ad32f = '\x01';
  }
  return "AHSSTwinShot";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Stock
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Stock (const MethodInfo* method);
// 0x41993a0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Stock(MethodInfo *method)

{
  if (g_data_057ad330 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Stock");
    g_data_057ad330 = '\x01';
  }
  return "Stock";
}


// CustomLogic.CustomLogicSpecialEnum$$get_None
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_None (const MethodInfo* method);
// 0x41993d0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_None(MethodInfo *method)

{
  if (g_data_057ad331 == '\0') {
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ad331 = '\x01';
  }
  return "None";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Eren
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Eren (const MethodInfo* method);
// 0x4199400

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Eren(MethodInfo *method)

{
  if (g_data_057ad332 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Eren");
    g_data_057ad332 = '\x01';
  }
  return "Eren";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Annie
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Annie (const MethodInfo* method);
// 0x4199430

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Annie(MethodInfo *method)

{
  if (g_data_057ad333 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Annie");
    g_data_057ad333 = '\x01';
  }
  return "Annie";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Armored
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Armored (const MethodInfo* method);
// 0x4199460

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Armored(MethodInfo *method)

{
  if (g_data_057ad334 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armored");
    g_data_057ad334 = '\x01';
  }
  return "Armored";
}


// CustomLogic.CustomLogicSpecialEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_ClassName (CustomLogic_CustomLogicSpecialEnum_o* __this, const MethodInfo* method);
// 0x4199490

System_String_o *
CustomLogic_CustomLogicSpecialEnum__get_ClassName
          (CustomLogic_CustomLogicSpecialEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad335 == '\0') {
    il2cpp_runtime_helper_023445d0(&"SpecialEnum");
    g_data_057ad335 = '\x01';
  }
  return "SpecialEnum";
}


// CustomLogic.CustomLogicSpecialEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicSpecialEnum__get_IsAbstract (CustomLogic_CustomLogicSpecialEnum_o* __this, const MethodInfo* method);
// 0x41994c0

bool_conflict
CustomLogic_CustomLogicSpecialEnum__get_IsAbstract
          (CustomLogic_CustomLogicSpecialEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicSpecialEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicSpecialEnum__get_IsStatic (CustomLogic_CustomLogicSpecialEnum_o* __this, const MethodInfo* method);
// 0x41994d0

bool_conflict
CustomLogic_CustomLogicSpecialEnum__get_IsStatic
          (CustomLogic_CustomLogicSpecialEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicSpecialEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicSpecialEnum__get_InheritBaseMembers (CustomLogic_CustomLogicSpecialEnum_o* __this, const MethodInfo* method);
// 0x41994e0

bool_conflict
CustomLogic_CustomLogicSpecialEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicSpecialEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


