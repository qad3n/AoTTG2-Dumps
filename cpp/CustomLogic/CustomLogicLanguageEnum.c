// Type: CustomLogic.CustomLogicLanguageEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLanguageEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLanguageEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLanguageEnum_o* CustomLogic_CustomLogicLanguageEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4181430

CustomLogic_CustomLogicLanguageEnum_o *
CustomLogic_CustomLogicLanguageEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicLanguageEnum_o *pCVar9;
  undefined8 **ppuVar10;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad142 == '\0') {
    pSStack_20 = (System_String_o *)0x418144c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLanguageEnum);
    g_data_057ad142 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x41814c7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4181476;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLanguageEnum);
    if (g_data_057ad12d == '\0') {
      pSStack_20 = (System_String_o *)0x418148e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad12d = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x41814ad;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x41814b7;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicLanguageEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x41814cf;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x41814e2;
  pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41814f1;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicLanguageEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4181500;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4181510;
  pSVar3 = System_String__Concat_3af7150(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x418151f;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4181527;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSStack_20 = (System_String_o *)0x4181537;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar3,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4181543;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicLanguageEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x418154e;
  pSVar7 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar3;
  if (g_data_057ad143 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Czech");
    il2cpp_runtime_helper_023445d0(&"Turkish");
    il2cpp_runtime_helper_023445d0(&"Russian");
    il2cpp_runtime_helper_023445d0(&"Spanish");
    il2cpp_runtime_helper_023445d0(&"TraditionalChinese");
    il2cpp_runtime_helper_023445d0(&"Italian");
    il2cpp_runtime_helper_023445d0(&"Japanese");
    il2cpp_runtime_helper_023445d0(&"German");
    il2cpp_runtime_helper_023445d0(&"BrazilianPortuguese");
    il2cpp_runtime_helper_023445d0(&"Indonesian");
    il2cpp_runtime_helper_023445d0(&"Dutch");
    il2cpp_runtime_helper_023445d0(&"Chinese");
    il2cpp_runtime_helper_023445d0(&"Polish");
    il2cpp_runtime_helper_023445d0(&"Arabic");
    il2cpp_runtime_helper_023445d0(&"Ukrainian");
    il2cpp_runtime_helper_023445d0(&"English");
    il2cpp_runtime_helper_023445d0(&"Korean");
    il2cpp_runtime_helper_023445d0(&"Greek");
    il2cpp_runtime_helper_023445d0(&"French");
    g_data_057ad143 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar7,(MethodInfo *)0x0);
  if (uVar1 < 0xa4f06666) {
    if (uVar1 < 0x47592387) {
      if (uVar1 < 0x1b9ae0bc) {
        if (uVar1 == 0x11100833) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"German",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad14b == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__German_g____getter_9_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
              g_data_057ad14b = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicLanguageEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x1b9ae0bb) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"English",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ad149 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__English_g____getter_7_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
              g_data_057ad149 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicLanguageEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x3342300c) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Czech",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad147 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Czech_g____getter_5_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
            g_data_057ad147 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicLanguageEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x47592386) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Russian",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad152 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Russian_g____getter_16_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
            g_data_057ad152 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicLanguageEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x7cbd6ca6) {
      if (uVar1 == 0x4fbe5a5d) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Ukrainian",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad156 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Ukrainian_g____getter_20);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
            g_data_057ad156 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicLanguageEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x7cbd6ca5) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"French",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad14a == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__French_g____getter_8_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
            g_data_057ad14a = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicLanguageEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 == 0x940c2e0a) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Japanese",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad14f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Japanese_g____getter_13);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
          g_data_057ad14f = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicLanguageEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xa4f06665) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"TraditionalChinese",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad154 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TraditionalChinese_g);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
          g_data_057ad154 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicLanguageEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x7e11ec68) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Chinese",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad146 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Chinese_g____getter_4_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
          g_data_057ad146 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicLanguageEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xb819825c) {
    if (uVar1 < 0xaaf50d6d) {
      if (uVar1 == 0xa653c2a3) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Greek",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad14c == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Greek_g____getter_10_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
            g_data_057ad14c = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicLanguageEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0xaaf50d6c) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Polish",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad151 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Polish_g____getter_15_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
            g_data_057ad151 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicLanguageEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 == 0xad70bf21) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Korean",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad150 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Korean_g____getter_14_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
          g_data_057ad150 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicLanguageEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xb297e9d1) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Dutch",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad148 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dutch_g____getter_6_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
          g_data_057ad148 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicLanguageEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xb819825b) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Spanish",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad153 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Spanish_g____getter_17_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
          g_data_057ad153 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicLanguageEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xc1122286) {
    if (uVar1 == 0xb94e7b5b) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Turkish",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad155 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Turkish_g____getter_19_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
          g_data_057ad155 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicLanguageEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xc1122285) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Indonesian",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad14d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Indonesian_g____getter_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
          g_data_057ad14d = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicLanguageEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 == 0xd5499884) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BrazilianPortuguese",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad145 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BrazilianPortuguese_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
        g_data_057ad145 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicLanguageEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
      return pCVar9;
    }
  }
  else if (uVar1 == 0xf039952b) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Italian",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad14e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Italian_g____getter_12_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
        g_data_057ad14e = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicLanguageEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
      return pCVar9;
    }
  }
  else if (uVar1 == 0xd7e15c29) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Arabic",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      ppuVar10 = (undefined8 **)&uStack_18;
      pSVar7 = pSStack_28;
      pSVar3 = pSStack_20;
      goto CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Arabic;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicLanguageEnum not found");
  pSVar3 = System_String__Concat_3af7150(pSVar3,(System_String_o *)pSVar7,pSVar4,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,pSVar3,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar7,uVar5);
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Arabic:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar3;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar7;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar6;
  if (g_data_057ad144 == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4181cb9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Arabic_g____getter_2_0);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4181cc5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4181cd1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4181cdd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
    g_data_057ad144 = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4181cf3;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4181d0c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4181d1b;
  pCVar9 = (CustomLogic_CustomLogicLanguageEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4181d35;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return pCVar9;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLanguageEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4181550

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLanguageEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ad143 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Czech");
    il2cpp_runtime_helper_023445d0(&"Turkish");
    il2cpp_runtime_helper_023445d0(&"Russian");
    il2cpp_runtime_helper_023445d0(&"Spanish");
    il2cpp_runtime_helper_023445d0(&"TraditionalChinese");
    il2cpp_runtime_helper_023445d0(&"Italian");
    il2cpp_runtime_helper_023445d0(&"Japanese");
    il2cpp_runtime_helper_023445d0(&"German");
    il2cpp_runtime_helper_023445d0(&"BrazilianPortuguese");
    il2cpp_runtime_helper_023445d0(&"Indonesian");
    il2cpp_runtime_helper_023445d0(&"Dutch");
    il2cpp_runtime_helper_023445d0(&"Chinese");
    il2cpp_runtime_helper_023445d0(&"Polish");
    il2cpp_runtime_helper_023445d0(&"Arabic");
    il2cpp_runtime_helper_023445d0(&"Ukrainian");
    il2cpp_runtime_helper_023445d0(&"English");
    il2cpp_runtime_helper_023445d0(&"Korean");
    il2cpp_runtime_helper_023445d0(&"Greek");
    il2cpp_runtime_helper_023445d0(&"French");
    g_data_057ad143 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0xa4f06666) {
    if (uVar1 < 0x47592387) {
      if (uVar1 < 0x1b9ae0bc) {
        if (uVar1 == 0x11100833) {
          bVar2 = System_String__op_Equality(name,"German",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ad14b == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__German_g____getter_9_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
              g_data_057ad14b = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x1b9ae0bb) &&
                (bVar2 = System_String__op_Equality(name,"English",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad149 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__English_g____getter_7_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
            g_data_057ad149 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x3342300c) {
        bVar2 = System_String__op_Equality(name,"Czech",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad147 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Czech_g____getter_5_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
            g_data_057ad147 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x47592386) &&
              (bVar2 = System_String__op_Equality(name,"Russian",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad152 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Russian_g____getter_16_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
          g_data_057ad152 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x7cbd6ca6) {
      if (uVar1 == 0x4fbe5a5d) {
        bVar2 = System_String__op_Equality(name,"Ukrainian",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad156 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Ukrainian_g____getter_20);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
            g_data_057ad156 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x7cbd6ca5) &&
              (bVar2 = System_String__op_Equality(name,"French",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad14a == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__French_g____getter_8_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
          g_data_057ad14a = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x940c2e0a) {
      bVar2 = System_String__op_Equality(name,"Japanese",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad14f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Japanese_g____getter_13);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
          g_data_057ad14f = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xa4f06665) {
      bVar2 = System_String__op_Equality(name,"TraditionalChinese",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad154 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TraditionalChinese_g);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
          g_data_057ad154 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x7e11ec68) &&
            (bVar2 = System_String__op_Equality(name,"Chinese",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad146 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Chinese_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
        g_data_057ad146 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xb819825c) {
    if (uVar1 < 0xaaf50d6d) {
      if (uVar1 == 0xa653c2a3) {
        bVar2 = System_String__op_Equality(name,"Greek",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad14c == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Greek_g____getter_10_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
            g_data_057ad14c = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0xaaf50d6c) &&
              (bVar2 = System_String__op_Equality(name,"Polish",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad151 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Polish_g____getter_15_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
          g_data_057ad151 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xad70bf21) {
      bVar2 = System_String__op_Equality(name,"Korean",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad150 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Korean_g____getter_14_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
          g_data_057ad150 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xb297e9d1) {
      bVar2 = System_String__op_Equality(name,"Dutch",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad148 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dutch_g____getter_6_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
          g_data_057ad148 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xb819825b) &&
            (bVar2 = System_String__op_Equality(name,"Spanish",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad153 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Spanish_g____getter_17_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
        g_data_057ad153 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xc1122286) {
    if (uVar1 == 0xb94e7b5b) {
      bVar2 = System_String__op_Equality(name,"Turkish",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad155 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Turkish_g____getter_19_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
          g_data_057ad155 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xc1122285) &&
            (bVar2 = System_String__op_Equality(name,"Indonesian",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad14d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Indonesian_g____getter_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
        g_data_057ad14d = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xd5499884) {
    bVar2 = System_String__op_Equality(name,"BrazilianPortuguese",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad145 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BrazilianPortuguese_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
        g_data_057ad145 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xf039952b) {
    bVar2 = System_String__op_Equality(name,"Italian",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad14e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Italian_g____getter_12_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
        g_data_057ad14e = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xd7e15c29) &&
          (bVar2 = System_String__op_Equality(name,"Arabic",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puVar4 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar4 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    goto CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Arabic;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicLanguageEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Arabic:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar4;
  if (g_data_057ad144 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4181cb9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Arabic_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4181cc5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4181cd1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4181cdd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
    g_data_057ad144 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4181cf3;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4181d0c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4181d1b;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4181d35;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Arabic
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Arabic (const MethodInfo* method);
// 0x4181ca0

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Arabic(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (g_data_057ad144 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Arabic_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
    g_data_057ad144 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__BrazilianPortuguese
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__BrazilianPortuguese (const MethodInfo* method);
// 0x4181d40

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__BrazilianPortuguese(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (g_data_057ad145 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BrazilianPortuguese_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
    g_data_057ad145 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Chinese
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Chinese (const MethodInfo* method);
// 0x4181de0

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Chinese(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (g_data_057ad146 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Chinese_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
    g_data_057ad146 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Czech
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Czech (const MethodInfo* method);
// 0x4181e80

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Czech(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (g_data_057ad147 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Czech_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
    g_data_057ad147 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Dutch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Dutch (const MethodInfo* method);
// 0x4181f20

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Dutch(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (g_data_057ad148 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dutch_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
    g_data_057ad148 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__English
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__English (const MethodInfo* method);
// 0x4181fc0

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__English(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (g_data_057ad149 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__English_g____getter_7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
    g_data_057ad149 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__French
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__French (const MethodInfo* method);
// 0x4182060

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__French(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (g_data_057ad14a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__French_g____getter_8_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
    g_data_057ad14a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__German
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__German (const MethodInfo* method);
// 0x4182100

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__German(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (g_data_057ad14b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__German_g____getter_9_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
    g_data_057ad14b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Greek
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Greek (const MethodInfo* method);
// 0x41821a0

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Greek(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (g_data_057ad14c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Greek_g____getter_10_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
    g_data_057ad14c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Indonesian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Indonesian (const MethodInfo* method);
// 0x4182240

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Indonesian(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (g_data_057ad14d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Indonesian_g____getter_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
    g_data_057ad14d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Italian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Italian (const MethodInfo* method);
// 0x41822e0

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Italian(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (g_data_057ad14e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Italian_g____getter_12_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
    g_data_057ad14e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Japanese
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Japanese (const MethodInfo* method);
// 0x4182380

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Japanese(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (g_data_057ad14f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Japanese_g____getter_13);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
    g_data_057ad14f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Korean
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Korean (const MethodInfo* method);
// 0x4182420

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Korean(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (g_data_057ad150 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Korean_g____getter_14_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
    g_data_057ad150 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Polish
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Polish (const MethodInfo* method);
// 0x41824c0

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Polish(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (g_data_057ad151 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Polish_g____getter_15_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
    g_data_057ad151 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Russian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Russian (const MethodInfo* method);
// 0x4182560

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Russian(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (g_data_057ad152 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Russian_g____getter_16_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
    g_data_057ad152 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Spanish
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Spanish (const MethodInfo* method);
// 0x4182600

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Spanish(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (g_data_057ad153 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Spanish_g____getter_17_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
    g_data_057ad153 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__TraditionalChinese
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__TraditionalChinese (const MethodInfo* method);
// 0x41826a0

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__TraditionalChinese(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (g_data_057ad154 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TraditionalChinese_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
    g_data_057ad154 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Turkish
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Turkish (const MethodInfo* method);
// 0x4182740

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Turkish(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (g_data_057ad155 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Turkish_g____getter_19_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
    g_data_057ad155 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Ukrainian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o* CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Ukrainian (const MethodInfo* method);
// 0x41827e0

CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *
CustomLogic_CustomLogicLanguageEnum_Bindings____CreatePropertyBinding__Ukrainian(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *__this;
  
  if (g_data_057ad156 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Ukrainian_g____getter_20);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLanguageEnum_object);
    g_data_057ad156 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLanguageEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLanguageEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLanguageEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLanguageEnum);
  return __this;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLanguageEnum_Bindings___cctor (const MethodInfo* method);
// 0x4182880

void CustomLogic_CustomLogicLanguageEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ad157 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Czech");
    il2cpp_runtime_helper_023445d0(&"Turkish");
    il2cpp_runtime_helper_023445d0(&"Russian");
    il2cpp_runtime_helper_023445d0(&"Spanish");
    il2cpp_runtime_helper_023445d0(&"TraditionalChinese");
    il2cpp_runtime_helper_023445d0(&"Italian");
    il2cpp_runtime_helper_023445d0(&"Japanese");
    il2cpp_runtime_helper_023445d0(&"German");
    il2cpp_runtime_helper_023445d0(&"BrazilianPortuguese");
    il2cpp_runtime_helper_023445d0(&"Indonesian");
    il2cpp_runtime_helper_023445d0(&"Dutch");
    il2cpp_runtime_helper_023445d0(&"Chinese");
    il2cpp_runtime_helper_023445d0(&"Polish");
    il2cpp_runtime_helper_023445d0(&"Arabic");
    il2cpp_runtime_helper_023445d0(&"Ukrainian");
    il2cpp_runtime_helper_023445d0(&"English");
    il2cpp_runtime_helper_023445d0(&"Korean");
    il2cpp_runtime_helper_023445d0(&"Greek");
    il2cpp_runtime_helper_023445d0(&"French");
    g_data_057ad157 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Arabic",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BrazilianPortuguese",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Chinese",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Czech",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Dutch",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"English",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"French",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"German",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Greek",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Indonesian",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Italian",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Japanese",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Korean",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Polish",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Russian",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Spanish",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"TraditionalChinese",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Turkish",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Ukrainian",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad12e == '\0') {
    il2cpp_runtime_helper_023445d0(&"\xd8\xa7\xd9\x84\xd8\xb9\xd8\xb1\xd8\xa8\xd9\x8a\xd8\xa9");
    g_data_057ad12e = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Arabic>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Arabic_g____getter_2_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x4182bb0

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Arabic_g____getter_2_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad12e == '\0') {
    il2cpp_runtime_helper_023445d0(&"\xd8\xa7\xd9\x84\xd8\xb9\xd8\xb1\xd8\xa8\xd9\x8a\xd8\xa9");
    g_data_057ad12e = '\x01';
  }
  return "\xd8\xa7\xd9\x84\xd8\xb9\xd8\xb1\xd8\xa8\xd9\x8a\xd8\xa9";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__BrazilianPortuguese>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__BrazilianPortuguese_g____getter_3_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x4182be0

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__BrazilianPortuguese_g____getter_3_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad12f == '\0') {
    il2cpp_runtime_helper_023445d0(&"PT-BR");
    g_data_057ad12f = '\x01';
  }
  return "PT-BR";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Chinese>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Chinese_g____getter_4_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x4182c10

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Chinese_g____getter_4_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad130 == '\0') {
    il2cpp_runtime_helper_023445d0(&"\xe7\xae\x80\xe4\xbd\x93\xe4\xb8\xad\xe6\x96\x87");
    g_data_057ad130 = '\x01';
  }
  return "\xe7\xae\x80\xe4\xbd\x93\xe4\xb8\xad\xe6\x96\x87";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Czech>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Czech_g____getter_5_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x4182c40

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Czech_g____getter_5_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad131 == '\0') {
    il2cpp_runtime_helper_023445d0(&"\xc4\x8ce\xc5\xa1tina");
    g_data_057ad131 = '\x01';
  }
  return "\xc4\x8ce\xc5\xa1tina";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Dutch>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Dutch_g____getter_6_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x4182c70

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Dutch_g____getter_6_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad132 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Dutch");
    g_data_057ad132 = '\x01';
  }
  return "Dutch";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__English>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__English_g____getter_7_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x4182ca0

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__English_g____getter_7_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad133 == '\0') {
    il2cpp_runtime_helper_023445d0(&"English");
    g_data_057ad133 = '\x01';
  }
  return "English";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__French>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__French_g____getter_8_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x4182cd0

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__French_g____getter_8_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad134 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Fran\xc3\xa7ais");
    g_data_057ad134 = '\x01';
  }
  return "Fran\xc3\xa7ais";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__German>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__German_g____getter_9_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x4182d00

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__German_g____getter_9_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad135 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Deutsch");
    g_data_057ad135 = '\x01';
  }
  return "Deutsch";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Greek>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Greek_g____getter_10_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x4182d30

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Greek_g____getter_10_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad136 == '\0') {
    il2cpp_runtime_helper_023445d0(&"\xce\x95\xce\xbb\xce\xbb\xce\xb7\xce\xbd\xce\xb9\xce\xba\xce\xac");
    g_data_057ad136 = '\x01';
  }
  return "\xce\x95\xce\xbb\xce\xbb\xce\xb7\xce\xbd\xce\xb9\xce\xba\xce\xac";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Indonesian>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Indonesian_g____getter_11_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x4182d60

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Indonesian_g____getter_11_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad137 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Indonesian");
    g_data_057ad137 = '\x01';
  }
  return "Indonesian";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Italian>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Italian_g____getter_12_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x4182d90

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Italian_g____getter_12_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad138 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Italiano");
    g_data_057ad138 = '\x01';
  }
  return "Italiano";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Japanese>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Japanese_g____getter_13_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x4182dc0

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Japanese_g____getter_13_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad139 == '\0') {
    il2cpp_runtime_helper_023445d0(&"\xe6\x97\xa5\xe6\x9c\xac\xe8\xaa\x9e");
    g_data_057ad139 = '\x01';
  }
  return "\xe6\x97\xa5\xe6\x9c\xac\xe8\xaa\x9e";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Korean>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Korean_g____getter_14_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x4182df0

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Korean_g____getter_14_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad13a == '\0') {
    il2cpp_runtime_helper_023445d0(&"\xed\x95\x9c\xea\xb5\xad\xec\x96\xb4");
    g_data_057ad13a = '\x01';
  }
  return "\xed\x95\x9c\xea\xb5\xad\xec\x96\xb4";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Polish>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Polish_g____getter_15_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x4182e20

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Polish_g____getter_15_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad13b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Polski");
    g_data_057ad13b = '\x01';
  }
  return "Polski";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Russian>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Russian_g____getter_16_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x4182e50

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Russian_g____getter_16_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad13c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Russian");
    g_data_057ad13c = '\x01';
  }
  return "Russian";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Spanish>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Spanish_g____getter_17_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x4182e80

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Spanish_g____getter_17_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad13d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Espa\xc3\xb1ol");
    g_data_057ad13d = '\x01';
  }
  return "Espa\xc3\xb1ol";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__TraditionalChinese>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__TraditionalChinese_g____getter_18_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x4182eb0

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__TraditionalChinese_g____getter_18_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad13e == '\0') {
    il2cpp_runtime_helper_023445d0(&"\xe7\xb9\x81\xe9\xab\x94\xe4\xb8\xad\xe6\x96\x87");
    g_data_057ad13e = '\x01';
  }
  return "\xe7\xb9\x81\xe9\xab\x94\xe4\xb8\xad\xe6\x96\x87";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Turkish>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Turkish_g____getter_19_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x4182ee0

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Turkish_g____getter_19_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad13f == '\0') {
    il2cpp_runtime_helper_023445d0(&"T\xc3\xbcrk\xc3\xa7e");
    g_data_057ad13f = '\x01';
  }
  return "T\xc3\xbcrk\xc3\xa7e";
}


// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Ukrainian>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Ukrainian_g____getter_20_0 (CustomLogic_CustomLogicLanguageEnum_o* __i, const MethodInfo* method);
// 0x4182f10

Il2CppObject *
CustomLogic_CustomLogicLanguageEnum_Bindings_____CreatePropertyBinding__Ukrainian_g____getter_20_0
          (CustomLogic_CustomLogicLanguageEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad140 == '\0') {
    il2cpp_runtime_helper_023445d0(&"\xd0\xa3\xd0\xba\xd1\x80\xd0\xb0\xd1\x97\xd0\xbd\xd1\x81\xd1\x8c\xd0\xba\xd0\xb0");
    g_data_057ad140 = '\x01';
  }
  return "\xd0\xa3\xd0\xba\xd1\x80\xd0\xb0\xd1\x97\xd0\xbd\xd1\x81\xd1\x8c\xd0\xba\xd0\xb0";
}


// CustomLogic.CustomLogicLanguageEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicLanguageEnum___ctor (CustomLogic_CustomLogicLanguageEnum_o* __this, const MethodInfo* method);
// 0x4180fd0

void CustomLogic_CustomLogicLanguageEnum___ctor
               (CustomLogic_CustomLogicLanguageEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad12d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad12d = '\x01';
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


// CustomLogic.CustomLogicLanguageEnum$$get_Arabic
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Arabic (const MethodInfo* method);
// 0x4181040

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Arabic(MethodInfo *method)

{
  if (g_data_057ad12e == '\0') {
    il2cpp_runtime_helper_023445d0(&"\xd8\xa7\xd9\x84\xd8\xb9\xd8\xb1\xd8\xa8\xd9\x8a\xd8\xa9");
    g_data_057ad12e = '\x01';
  }
  return "\xd8\xa7\xd9\x84\xd8\xb9\xd8\xb1\xd8\xa8\xd9\x8a\xd8\xa9";
}


// CustomLogic.CustomLogicLanguageEnum$$get_BrazilianPortuguese
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_BrazilianPortuguese (const MethodInfo* method);
// 0x4181070

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_BrazilianPortuguese(MethodInfo *method)

{
  if (g_data_057ad12f == '\0') {
    il2cpp_runtime_helper_023445d0(&"PT-BR");
    g_data_057ad12f = '\x01';
  }
  return "PT-BR";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Chinese
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Chinese (const MethodInfo* method);
// 0x41810a0

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Chinese(MethodInfo *method)

{
  if (g_data_057ad130 == '\0') {
    il2cpp_runtime_helper_023445d0(&"\xe7\xae\x80\xe4\xbd\x93\xe4\xb8\xad\xe6\x96\x87");
    g_data_057ad130 = '\x01';
  }
  return "\xe7\xae\x80\xe4\xbd\x93\xe4\xb8\xad\xe6\x96\x87";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Czech
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Czech (const MethodInfo* method);
// 0x41810d0

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Czech(MethodInfo *method)

{
  if (g_data_057ad131 == '\0') {
    il2cpp_runtime_helper_023445d0(&"\xc4\x8ce\xc5\xa1tina");
    g_data_057ad131 = '\x01';
  }
  return "\xc4\x8ce\xc5\xa1tina";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Dutch
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Dutch (const MethodInfo* method);
// 0x4181100

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Dutch(MethodInfo *method)

{
  if (g_data_057ad132 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Dutch");
    g_data_057ad132 = '\x01';
  }
  return "Dutch";
}


// CustomLogic.CustomLogicLanguageEnum$$get_English
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_English (const MethodInfo* method);
// 0x4181130

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_English(MethodInfo *method)

{
  if (g_data_057ad133 == '\0') {
    il2cpp_runtime_helper_023445d0(&"English");
    g_data_057ad133 = '\x01';
  }
  return "English";
}


// CustomLogic.CustomLogicLanguageEnum$$get_French
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_French (const MethodInfo* method);
// 0x4181160

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_French(MethodInfo *method)

{
  if (g_data_057ad134 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Fran\xc3\xa7ais");
    g_data_057ad134 = '\x01';
  }
  return "Fran\xc3\xa7ais";
}


// CustomLogic.CustomLogicLanguageEnum$$get_German
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_German (const MethodInfo* method);
// 0x4181190

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_German(MethodInfo *method)

{
  if (g_data_057ad135 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Deutsch");
    g_data_057ad135 = '\x01';
  }
  return "Deutsch";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Greek
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Greek (const MethodInfo* method);
// 0x41811c0

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Greek(MethodInfo *method)

{
  if (g_data_057ad136 == '\0') {
    il2cpp_runtime_helper_023445d0(&"\xce\x95\xce\xbb\xce\xbb\xce\xb7\xce\xbd\xce\xb9\xce\xba\xce\xac");
    g_data_057ad136 = '\x01';
  }
  return "\xce\x95\xce\xbb\xce\xbb\xce\xb7\xce\xbd\xce\xb9\xce\xba\xce\xac";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Indonesian
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Indonesian (const MethodInfo* method);
// 0x41811f0

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Indonesian(MethodInfo *method)

{
  if (g_data_057ad137 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Indonesian");
    g_data_057ad137 = '\x01';
  }
  return "Indonesian";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Italian
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Italian (const MethodInfo* method);
// 0x4181220

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Italian(MethodInfo *method)

{
  if (g_data_057ad138 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Italiano");
    g_data_057ad138 = '\x01';
  }
  return "Italiano";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Japanese
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Japanese (const MethodInfo* method);
// 0x4181250

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Japanese(MethodInfo *method)

{
  if (g_data_057ad139 == '\0') {
    il2cpp_runtime_helper_023445d0(&"\xe6\x97\xa5\xe6\x9c\xac\xe8\xaa\x9e");
    g_data_057ad139 = '\x01';
  }
  return "\xe6\x97\xa5\xe6\x9c\xac\xe8\xaa\x9e";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Korean
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Korean (const MethodInfo* method);
// 0x4181280

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Korean(MethodInfo *method)

{
  if (g_data_057ad13a == '\0') {
    il2cpp_runtime_helper_023445d0(&"\xed\x95\x9c\xea\xb5\xad\xec\x96\xb4");
    g_data_057ad13a = '\x01';
  }
  return "\xed\x95\x9c\xea\xb5\xad\xec\x96\xb4";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Polish
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Polish (const MethodInfo* method);
// 0x41812b0

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Polish(MethodInfo *method)

{
  if (g_data_057ad13b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Polski");
    g_data_057ad13b = '\x01';
  }
  return "Polski";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Russian
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Russian (const MethodInfo* method);
// 0x41812e0

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Russian(MethodInfo *method)

{
  if (g_data_057ad13c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Russian");
    g_data_057ad13c = '\x01';
  }
  return "Russian";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Spanish
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Spanish (const MethodInfo* method);
// 0x4181310

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Spanish(MethodInfo *method)

{
  if (g_data_057ad13d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Espa\xc3\xb1ol");
    g_data_057ad13d = '\x01';
  }
  return "Espa\xc3\xb1ol";
}


// CustomLogic.CustomLogicLanguageEnum$$get_TraditionalChinese
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese (const MethodInfo* method);
// 0x4181340

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese(MethodInfo *method)

{
  if (g_data_057ad13e == '\0') {
    il2cpp_runtime_helper_023445d0(&"\xe7\xb9\x81\xe9\xab\x94\xe4\xb8\xad\xe6\x96\x87");
    g_data_057ad13e = '\x01';
  }
  return "\xe7\xb9\x81\xe9\xab\x94\xe4\xb8\xad\xe6\x96\x87";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Turkish
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Turkish (const MethodInfo* method);
// 0x4181370

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Turkish(MethodInfo *method)

{
  if (g_data_057ad13f == '\0') {
    il2cpp_runtime_helper_023445d0(&"T\xc3\xbcrk\xc3\xa7e");
    g_data_057ad13f = '\x01';
  }
  return "T\xc3\xbcrk\xc3\xa7e";
}


// CustomLogic.CustomLogicLanguageEnum$$get_Ukrainian
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_Ukrainian (const MethodInfo* method);
// 0x41813a0

System_String_o * CustomLogic_CustomLogicLanguageEnum__get_Ukrainian(MethodInfo *method)

{
  if (g_data_057ad140 == '\0') {
    il2cpp_runtime_helper_023445d0(&"\xd0\xa3\xd0\xba\xd1\x80\xd0\xb0\xd1\x97\xd0\xbd\xd1\x81\xd1\x8c\xd0\xba\xd0\xb0");
    g_data_057ad140 = '\x01';
  }
  return "\xd0\xa3\xd0\xba\xd1\x80\xd0\xb0\xd1\x97\xd0\xbd\xd1\x81\xd1\x8c\xd0\xba\xd0\xb0";
}


// CustomLogic.CustomLogicLanguageEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLanguageEnum__get_ClassName (CustomLogic_CustomLogicLanguageEnum_o* __this, const MethodInfo* method);
// 0x41813d0

System_String_o *
CustomLogic_CustomLogicLanguageEnum__get_ClassName
          (CustomLogic_CustomLogicLanguageEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad141 == '\0') {
    il2cpp_runtime_helper_023445d0(&"LanguageEnum");
    g_data_057ad141 = '\x01';
  }
  return "LanguageEnum";
}


// CustomLogic.CustomLogicLanguageEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLanguageEnum__get_IsAbstract (CustomLogic_CustomLogicLanguageEnum_o* __this, const MethodInfo* method);
// 0x4181400

bool_conflict
CustomLogic_CustomLogicLanguageEnum__get_IsAbstract
          (CustomLogic_CustomLogicLanguageEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLanguageEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLanguageEnum__get_IsStatic (CustomLogic_CustomLogicLanguageEnum_o* __this, const MethodInfo* method);
// 0x4181410

bool_conflict
CustomLogic_CustomLogicLanguageEnum__get_IsStatic
          (CustomLogic_CustomLogicLanguageEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLanguageEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLanguageEnum__get_InheritBaseMembers (CustomLogic_CustomLogicLanguageEnum_o* __this, const MethodInfo* method);
// 0x4181420

bool_conflict
CustomLogic_CustomLogicLanguageEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicLanguageEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


